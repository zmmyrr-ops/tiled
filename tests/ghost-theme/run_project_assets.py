#!/usr/bin/env python3
"""Real Tiled regression for SVN's shared, pinyin-named theme images."""
import argparse
import json
import os
import shutil
import subprocess
import tempfile
from pathlib import Path
from xml.etree import ElementTree as ET

p = argparse.ArgumentParser()
p.add_argument('--tiled', required=True)
p.add_argument('--config-root', type=Path, required=True)
a = p.parse_args()
root = a.config_root.resolve()
plugin = Path(__file__).resolve().parents[2] / 'src/tiled/extensions/ghost-theme/ghost-theme.js'

with tempfile.TemporaryDirectory(prefix='拼音主题回归-') as tmp:
    tmp = Path(tmp).resolve()
    project = tmp / 'project'
    images = project / 'Map_img/themes/abandoned-formal'
    images.mkdir(parents=True)
    for image in (root / 'Map_img/themes/abandoned-formal').iterdir():
        if image.is_file() and image.name.isascii():
            shutil.copy2(image, images / image.name)
    shutil.copy2(root / 'Map_img/map01.png', project / 'Map_img/map01.png')
    maps = project / 'Map_model/nested'
    maps.mkdir(parents=True)
    doc = ET.parse(root / 'Map_model/Map_1.tmx')
    for image in doc.iter('image'):
        image.set('source', str((root / 'Map_model' / image.get('source')).resolve()))
    source = maps / 'new.tmx'
    doc.write(source, encoding='utf-8')
    # Build an actual legacy map with valid v5 embedded tilesets before migration.
    legacy = tmp / 'legacy'
    legacy.mkdir()
    shutil.copytree(plugin.parent / 'assets', legacy / 'ghost-theme-assets-v1')
    legacy_source = legacy / 'legacy.tmx'
    doc.write(legacy_source, encoding='utf-8')

    def run(body):
        script = tmp / 'test.js'
        script.write_text('var GhostThemeHeadless=true;\nvar __filename=' + json.dumps(str(plugin)) + ';\n'
                          + plugin.read_text() + '\n'
                          + 'function assert(ok,msg){if(!ok)throw new Error(msg);}\n' + body)
        result = subprocess.run([a.tiled, '--new-instance', '--evaluate', str(script)],
                                env=dict(os.environ, QT_QPA_PLATFORM='offscreen'),
                                capture_output=True, text=True, timeout=90)
        if result.returncode or 'PROJECT_ASSETS_OK' not in result.stdout:
            raise AssertionError(result.stdout + result.stderr)
        print(result.stdout.strip())

    run('GhostTheme.setResourceRoot(' + json.dumps(str(legacy / 'ghost-theme-assets-v1')) + ');\n'
        'var map=tiled.mapFormat("tmx").read(' + json.dumps(str(legacy_source)) + ');\n'
        'GhostTheme.applyTheme(map);GhostTheme.generateEnvironment(map,{seed:1,density:12});\n'
        'tiled.mapFormat("tmx").write(map,' + json.dumps(str(legacy / 'saved.tmx')) + ');\n'
        'tiled.log("PROJECT_ASSETS_OK legacy fixture");')
    doc = ET.parse(legacy / 'saved.tmx')
    for image in doc.iter('image'):
        image.set('source', str((legacy / image.get('source')).resolve()))
    doc.write(maps / 'legacy.tmx', encoding='utf-8')
    inputs = [source, maps / 'legacy.tmx']
    existing_missing_images = set()
    svn_legacy = root / 'Map_model/Map_69.tmx'
    if svn_legacy.exists():
        doc = ET.parse(svn_legacy)
        for image in doc.iter('image'):
            path = (svn_legacy.parent / image.get('source')).resolve()
            if not path.is_file():
                existing_missing_images.add(path)
            image.set('source', str(path))
        doc.write(maps / 'legacy-svn.tmx', encoding='utf-8')
        inputs.append(maps / 'legacy-svn.tmx')
    run('GhostTheme.setResourceRoot(' + json.dumps(str(project)) + ');\n'
        'var maps=' + json.dumps([str(path) for path in inputs]) + ';\n' + '''
maps.forEach(function(path){
 var map=tiled.mapFormat('tmx').read(path);
 GhostTheme.applyTheme(map);
 GhostTheme.generateEnvironment(map,{seed:2,density:12});
 assert(GhostTheme.propCatalog(map).length===7,'device catalog changed');
 var base=map.layers.filter(function(l){return l.name==='GhostTheme_Base';})[0];
 assert(base.objectCount===9,'background pieces missing');
 var grass=map.layers.filter(function(l){return l.name==='GhostTheme_Grass';})[0];
 assert(grass.objectCount>0,'grass not generated');
 GhostTheme.applyOriginalTheme(map);
 GhostTheme.applyTheme(map);
 GhostTheme.generateEnvironment(map,{seed:3,density:12});
 tiled.mapFormat('tmx').write(map,path+'.saved.tmx');
 var reloaded=tiled.mapFormat('tmx').read(path+'.saved.tmx');
 GhostTheme.applyTheme(reloaded);GhostTheme.generateEnvironment(reloaded,{seed:4,density:12});
 assert(!File.exists(FileInfo.joinPaths(FileInfo.path(path),'ghost-theme-assets-v1')),'legacy folder created');
});
tiled.log('PROJECT_ASSETS_OK new map, legacy migration, original theme, generation and reopen');
''')
    for saved in maps.glob('*.saved.tmx'):
        text = saved.read_text()
        assert 'ghost-theme-assets-v1' not in text, saved
        assert str(plugin.parent) not in text, 'Map depends on installed extension'
        for image in ET.parse(saved).iter('image'):
            reference = image.get('source')
            path = (saved.parent / reference).resolve()
            # User-authored tilesets may already contain unrelated broken links.
            assert path.is_file() or path in existing_missing_images, reference
            if 'abandoned-formal' in reference:
                assert reference.isascii() and not Path(reference).is_absolute(), reference
    # Incomplete project assets must fail without copying a legacy bundle.
    (images / 'zhongjianluoye.png').unlink()
    run('GhostTheme.setResourceRoot(' + json.dumps(str(project)) + ');\n'
        'var path=' + json.dumps(str(source)) + ';\n' + '''
var map=tiled.mapFormat('tmx').read(path),error='';
try{GhostTheme.applyTheme(map);}catch(e){error=e.message;}
assert(error.indexOf('zhongjianluoye.png')>=0,'missing project image not reported: '+error);
assert(!File.exists(FileInfo.joinPaths(FileInfo.path(path),'ghost-theme-assets-v1')),'missing image triggered copy');
tiled.log('PROJECT_ASSETS_OK missing image reported without legacy folder');
''')
    print('PASS: saved theme images use existing relative pinyin paths; no legacy directory created.')
