#!/usr/bin/env python3
"""Real Tiled regression: nested maps, absent/broken resources, portable saves."""
import argparse
import json
import os
import shutil
import subprocess
import tempfile
import time
from pathlib import Path
from xml.etree import ElementTree as ET

p=argparse.ArgumentParser()
p.add_argument('--tiled',required=True)
p.add_argument('--config-root',type=Path,required=True)
a=p.parse_args();root=a.config_root.resolve()
plugin=Path(__file__).resolve().parents[2]/'src/tiled/extensions/ghost-theme/ghost-theme.js'
bundle=plugin.parent/'assets'

def run(code,tmp,inputs):
    extensions=Path(a.tiled).resolve().parent.parent/'Resources/extensions'
    with tempfile.TemporaryDirectory(prefix='zzz-portable-test-',dir=extensions) as ext:
        marker=Path(ext)/'result.txt'
        script=Path(ext)/'test.js'
        prelude='var GhostThemeHeadless=true;\nvar __filename='+json.dumps(str(plugin))+';\n'+plugin.read_text()+'\n'
        prelude+='function result(message){var f=new TextFile('+json.dumps(str(marker))+',TextFile.WriteOnly);f.write(message);f.commit();}\n'
        script.write_text(prelude+code)
        with tempfile.TemporaryFile(mode='w+') as log:
            proc=subprocess.Popen([a.tiled,'--new-instance',*inputs],env=dict(os.environ,QT_QPA_PLATFORM='offscreen'),stdout=log,stderr=log)
            try:
                deadline=time.monotonic()+45
                while not marker.exists() and proc.poll() is None and time.monotonic()<deadline:time.sleep(.1)
                text=marker.read_text() if marker.exists() else 'FAIL no completion marker'
            finally:
                proc.terminate()
                try:proc.wait(timeout=5)
                except subprocess.TimeoutExpired:proc.kill();proc.wait()
            if not text.startswith('PORTABLE_TEST_OK'):
                log.seek(0);raise AssertionError(text+'\n'+log.read())
            print(text)

with tempfile.TemporaryDirectory(prefix='主题资源测试-') as tmp:
    tmp=Path(tmp);cases=[]
    for kind in ['nested','absent','malformed','missing-image','bad-rules']:
        project=tmp/kind;folder=project/'maps/nested';folder.mkdir(parents=True)
        source=folder/'测试地图.tmx';doc=ET.parse(root/'Map_model/Map_1.tmx')
        for image in doc.iter('image'):
            image.set('source',str((root/'Map_model'/image.get('source')).resolve()))
        doc.write(source,encoding='utf-8')
        if kind!='absent':shutil.copytree(bundle,project,dirs_exist_ok=True)
        if kind=='malformed':(project/'Map_tsx/abandoned-map03-formal.tsx').write_text('<broken')
        if kind=='missing-image':(project/'Map_img/themes/abandoned-formal/background-corners.jpg').unlink()
        if kind=='bad-rules':(project/'decoration-rules-formal.json').write_text('explanation, not JSON')
        cases.append({'kind':kind,'source':str(source),'saved':str(folder/'saved.tmx')})
    code='var cases='+json.dumps(cases)+';\n'+'''
function assert(ok,message){if(!ok)throw new Error(message);}
var done=0;
tiled.assetOpened.connect(function(map){
 var c=cases.filter(function(c){return c.source===map.fileName;})[0];if(!c)return;
 try{
 GhostTheme.applyTheme(map);GhostTheme.generateEnvironment(map,{seed:1,density:12});
 assert(GhostTheme.propCatalog(map).length===7,c.kind+': missing devices');
 GhostTheme.applyOriginalTheme(map);GhostTheme.applyTheme(map);
 tiled.mapFormat('tmx').write(map,c.saved);
 var installed=FileInfo.joinPaths(FileInfo.path(c.source),'ghost-theme-assets-v1','Map_tsx/abandoned-decorations-formal.tsx');
 assert(File.exists(installed)===(c.kind!=='nested'),c.kind+': wrong fallback behavior');
 if(++done===cases.length)result('PORTABLE_TEST_OK nested, absent, malformed TSX, missing image, malformed JSON');
 }catch(e){result('FAIL '+c.kind+': '+e.message+'\\n'+e.stack);}
});
'''
    run(code,tmp,[c['source'] for c in cases])
    # Copy everything referenced by the map to a new project, without the bundle.
    original=tmp/'absent/maps/nested';moved=tmp/'relocated/maps'
    shutil.copytree(original,moved)
    saved=(moved/'saved.tmx').read_text()
    assert str(plugin.parent) not in saved,'Saved map depends on editor installation'
    assert str(original) not in saved,'Saved map contains absolute fallback paths'
    shutil.rmtree(tmp/'absent')
    run('''tiled.assetOpened.connect(function(map){
try{
GhostTheme.applyTheme(map);GhostTheme.generateEnvironment(map,{seed:2,density:12});
if(GhostTheme.propCatalog(map).length!==7)throw new Error('Moved map lost images');
result('PORTABLE_TEST_OK save, move folder, reopen and generate');
}catch(e){result('FAIL '+e.message);}
});
''',tmp,[str(moved/'saved.tmx')])
