#!/usr/bin/env python3
"""Real Tiled regression: use themed Road artwork, falling back only when invisible."""
import argparse
import importlib.util
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import time
from xml.etree import ElementTree as ET

from PIL import Image

p = argparse.ArgumentParser()
p.add_argument('--tiled', type=Path, required=True)
p.add_argument('--config-root', type=Path, required=True)
a = p.parse_args()
root = a.config_root.resolve()
plugin = Path(__file__).resolve().parents[2] / 'src/tiled/extensions/ghost-theme/ghost-theme.js'
extensions = a.tiled.resolve().parent.parent / 'Resources/extensions'

with tempfile.TemporaryDirectory(prefix='road-test-') as tmp, tempfile.TemporaryDirectory(prefix='zzz-road-', dir=extensions) as ext:
    project = Path(tmp).resolve()
    images = project / 'Map_img/themes/abandoned-formal'
    images.mkdir(parents=True)
    for image in (root / 'Map_img/themes/abandoned-formal').iterdir():
        if image.is_file() and image.name.isascii():
            shutil.copy2(image, images / image.name)
    shutil.copy2(root / 'Map_img/map01.png', project / 'Map_img/map01.png')
    source = project / 'Map_model/Map_16.tmx'
    source.parent.mkdir()
    doc = ET.parse(root / 'Map_model/Map_16.tmx')
    for image in doc.iter('image'):
        image.set('source', str((root / 'Map_model' / image.get('source')).resolve()))
    doc.write(source, encoding='utf-8')
    custom = Image.new('RGBA', (200, 100))
    custom.putpixel((17, 29), (255, 0, 0, 255))
    custom.save(project / 'Map_img/custom.png')
    result_file = Path(ext) / 'result.txt'
    code = 'var GhostThemeHeadless=true;var __filename=' + json.dumps(str(plugin)) + ';\n'
    code += plugin.read_text() + '\nGhostTheme.setResourceRoot(' + json.dumps(str(project)) + ');\n'
    code += 'var input=' + json.dumps(str(source)) + ',resultFile=' + json.dumps(str(result_file)) + ';\n'
    code += '''
function assert(ok,message){if(!ok)throw new Error(message);}
function road(map){return map.layers.filter(function(l){return l.name==='Road';})[0];}
function cells(map){
 var r=road(map),result=[];
 for(var y=0;y<r.height;y++)for(var x=0;x<r.width;x++){
  var t=r.tileAt(x,y);if(t)result.push([x,y,t.tileset.name==='ghost-road-fallback'?t.property('ghost.roadSourceId'):t.id,r.flagsAt(x,y)]);
 }
 return JSON.stringify(result);
}
function countMarkers(map){var r=road(map),n=0;
 for(var y=0;y<r.height;y++)for(var x=0;x<r.width;x++){var t=r.tileAt(x,y);if(t&&t.tileset.name==='ghost-road-fallback')n++;}return n;
}
tiled.assetOpened.connect(function(map){
 if(!map.isTileMap||map.fileName!==input)return;
 var message='';
 try{
  tiled.activeAsset=map;
  var before=cells(map),visibility=road(map).visible,locked=road(map).locked;
  GhostTheme.applyOriginalTheme(map);
  assert(cells(map)===before,'original theme changed Road occupancy/IDs/flags');
  assert(countMarkers(map)===0,'visible original tiles replaced by markers');
  GhostTheme.applyTheme(map);
  assert(cells(map)===before,'autumn changed Road occupancy/IDs/flags');
  assert(countMarkers(map)===958,'Map 16 must only replace its 958 transparent corridor tiles, got '+countMarkers(map));
  assert(road(map).visible===visibility&&road(map).locked===locked,'Road layer settings changed');
  tiled.trigger('Undo');
  assert(countMarkers(map)===0&&cells(map)===before,'undo did not restore Road');
  tiled.trigger('Redo');
  assert(countMarkers(map)===958&&cells(map)===before,'redo did not restore markers');
  GhostTheme.applyTheme(map);
  var markers=map.tilesets.filter(function(t){return t.name==='ghost-road-fallback';});
  assert(markers.length===1&&markers[0].tileCount===1,'reapply duplicated marker tiles');
  tiled.mapFormat('tmx').write(map,input+'.saved.tmx');
  var reopened=tiled.mapFormat('tmx').read(input+'.saved.tmx');
  assert(cells(reopened)===before&&countMarkers(reopened)===958,'save/reopen lost Road');
  GhostTheme.applyOriginalTheme(reopened);
  assert(countMarkers(reopened)===0&&cells(reopened)===before,'switch back lost original art');
  GhostTheme.applyTheme(reopened);
  assert(countMarkers(reopened)===958&&cells(reopened)===before,'second cycle changed Road');
  // A single opaque pixel counts as real artwork; entirely transparent custom
  // tiles need the same fallback without filling empty Road cells.
  var r=road(reopened),coords=JSON.parse(before),ts=new Tileset('custom-road');
  ts.tileSize={width:100,height:100};ts.imageFileName=FileInfo.joinPaths(FileInfo.path(FileInfo.path(input)),'Map_img/custom.png');
  reopened.addTileset(ts);
  var edit=r.edit();edit.setTile(coords[0][0],coords[0][1],ts.tile(0),Tile.FlippedHorizontally);
  edit.setTile(coords[1][0],coords[1][1],ts.tile(1),Tile.FlippedVertically);edit.apply();
  var customBefore=cells(reopened);GhostTheme.applyTheme(reopened);
  assert(cells(reopened)===customBefore,'fallback lost custom tile IDs or flips');
  assert(r.tileAt(coords[0][0],coords[0][1])===ts.tile(0),'partially transparent artwork replaced');
  assert(r.tileAt(coords[1][0],coords[1][1]).tileset.name==='ghost-road-fallback','transparent custom tile not marked');
  GhostTheme.applyOriginalTheme(reopened);
  assert(cells(reopened)===customBefore,'original theme changed custom Road cells');
  message='ROAD_TEST_OK Map16: 1466 occupied, 958 fallbacks; undo/redo, save/reopen, theme restore, partial alpha and flips';
 }catch(e){message='FAIL '+e.message+'\\n'+e.stack;}
 var f=new TextFile(resultFile,TextFile.WriteOnly);f.write(message);f.commit();
});
'''
    (Path(ext) / 'test.js').write_text(code)
    with tempfile.TemporaryFile(mode='w+') as log:
        proc = subprocess.Popen([str(a.tiled.resolve()), '--new-instance', str(source)],
                                env=dict(os.environ, QT_QPA_PLATFORM='offscreen'), stdout=log, stderr=log)
        try:
            deadline = time.monotonic() + 55
            while not result_file.exists() and proc.poll() is None and time.monotonic() < deadline:
                time.sleep(.1)
            message = result_file.read_text() if result_file.exists() else 'FAIL no completion marker'
        finally:
            proc.terminate()
            try:
                proc.wait(timeout=5)
            except subprocess.TimeoutExpired:
                proc.kill()
                proc.wait()
        if not message.startswith('ROAD_TEST_OK'):
            log.seek(0)
            raise AssertionError(message + '\n' + log.read())
        print(message)
    saved = ET.parse(str(source) + '.saved.tmx')
    data = [int(value) for value in saved.find("layer[@name='Road']/data").text.strip().split(',')]
    assert sum(value != 0 for value in data) == 1466
    marker = saved.find("tileset[@name='ghost-road-fallback']/tile/image")
    assert marker is not None and not Path(marker.get('source')).is_absolute()
    with Image.open(source.parent / marker.get('source')) as image:
        assert image.convert('RGBA').getcolors() == [(10000, (40, 184, 213, 255))]
    spec = importlib.util.spec_from_file_location('export_display', root / 'export_display.py')
    exporter = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(exporter)
    layers = exporter.configured_display_layers(exporter.read_config(root))
    assert not exporter.layer_matches('Road', layers), 'Road must not be a visual export layer'
    print('ROAD_EXPORT_OK relative solid-color image, binary logic mask, Road excluded from configured display layers')
