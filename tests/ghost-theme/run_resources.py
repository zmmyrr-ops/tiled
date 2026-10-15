#!/usr/bin/env python3
"""Open a shipped map in the real GUI without overriding its resource directory.

Never saves the map. Use a disposable macOS test app.
"""
import argparse,json,os,subprocess,tempfile,time
from pathlib import Path
p=argparse.ArgumentParser()
p.add_argument('--tiled',type=Path,required=True)
p.add_argument('--map',type=Path,required=True)
p.add_argument('--platform',default='offscreen',choices=['offscreen','cocoa'])
a=p.parse_args();binary=a.tiled.resolve();source=a.map.resolve()
plugin=Path(__file__).resolve().parents[2]/'src/tiled/extensions/ghost-theme/ghost-theme.js'
extensions=binary.parent.parent/'Resources/extensions'
with tempfile.TemporaryDirectory(prefix='zzz-resource-test-',dir=extensions) as tmp:
 folder=Path(tmp);marker=folder/'result.txt'
 code='var GhostThemeHeadless=true;\n'+plugin.read_text()+'''\ntiled.assetOpened.connect(function(map){
 if(!map.isTileMap||map.fileName!==TEST_MAP)return;
 var results=[],ok=true;
 function check(name,fn){try{results.push(name+': '+fn());}catch(e){ok=false;results.push(name+': FAIL '+e.message);}}
 tiled.activeAsset=map;
 check('catalog',function(){var n=GhostTheme.propCatalog(map).length;if(n!==7)throw new Error('expected 7, got '+n);return n;});
 check('theme',function(){GhostTheme.applyTheme(map);return 'OK';});
 check('hay',function(){return GhostTheme.edges(map);});
 check('leaves',function(){return GhostTheme.roomLeaves(map,{mode:'both'});});
 check('grass',function(){return GhostTheme.grass(map,20261012);});
 check('scatter',function(){return GhostTheme.scatter(map,{seed:20261012,density:12,category:'mixed'});});
 check('panel',function(){var panel=GhostTheme.openPanel();panel.accept();return 'OK';});
 var f=new TextFile(MARKER,TextFile.WriteOnly);f.write((ok?'RESOURCE_TEST_OK':'FAIL')+'\\n'+results.join('\\n'));f.commit();
});
'''.replace('TEST_MAP',json.dumps(str(source))).replace('MARKER',json.dumps(str(marker)))
 (folder/'test.js').write_text(code)
 with tempfile.TemporaryFile(mode='w+') as log:
  proc=subprocess.Popen([str(binary),'--new-instance',str(source)],env=dict(os.environ,QT_QPA_PLATFORM=a.platform),stdout=log,stderr=log)
  try:
   deadline=time.monotonic()+20
   while not marker.exists() and proc.poll() is None and time.monotonic()<deadline:time.sleep(.1)
   result=marker.read_text() if marker.exists() else 'FAIL no completion marker'
  finally:
   proc.terminate()
   try:proc.wait(timeout=5)
   except subprocess.TimeoutExpired:proc.kill();proc.wait()
  print(result)
  if not result.startswith('RESOURCE_TEST_OK'):
   log.seek(0);print(log.read());raise SystemExit(1)
