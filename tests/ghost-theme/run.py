#!/usr/bin/env python3
"""Integration checks against Tiled's real JS API (no mocks)."""
import argparse,copy,json,os,subprocess,sys,tempfile
from pathlib import Path
p=argparse.ArgumentParser();p.add_argument('--tiled',required=True);p.add_argument('--config-root',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
root=a.config_root.resolve();output=a.output.resolve();plugin=Path(__file__).resolve().parents[2]/'src/tiled/extensions/ghost-theme/ghost-theme.js'
code='var GhostThemeHeadless=true;\n'+plugin.read_text()+'\nGhostTheme.setResourceRoot('+json.dumps(str(root))+');\nvar input='+json.dumps(str(root/'Map_model/Map_1.tmx'))+';\nvar output='+json.dumps(str(output))+';\n'
code+='''
function assert(ok,text){if(!ok)throw new Error('ASSERT: '+text);}
function find(map,name){return map.layers.filter(function(l){return l.name===name;})[0];}
function snap(g){return JSON.stringify(g.objects.map(function(o){return [o.name,o.x,o.y,o.width,o.height,o.rotation];}));}
var legacy=tiled.mapFormat('tmx').read(input.replace('Map_1.tmx','Map_1001.tmx'));
var oldDecor=legacy.tilesets.filter(function(t){return t.name==='abandoned-decorations-formal';})[0];oldDecor.setProperty('ghost.catalogVersion',1);
var legacyProp=find(legacy,'GhostTheme_Props').objectAt(0);legacyProp.x+=17;legacyProp.tileFlippedHorizontally=true;var oldX=legacyProp.x;
GhostTheme.grass(legacy,20261012);
assert(legacyProp.x===oldX&&legacyProp.tileFlippedHorizontally&&legacyProp.tile.tileset!==oldDecor,'catalog upgrade lost manual transforms or retained old tileset');
assert(legacy.tilesets.some(function(t){return t&&t.name==='abandoned-decorations-formal'&&t.tileCount===37&&t.property('ghost.catalogVersion')===4;}),'legacy embedded tileset not upgraded');
assert(find(legacy,'GhostTheme_Base').objectAt(0).tile.id===0,'upgrade changed background tile');
GhostTheme.applyTheme(legacy);
assert(legacy.tilesets.some(function(t){return t.name==='abandoned-map03-formal'&&t.property('ghost.backgroundMode')==='corners-v1';}),'legacy opaque wall atlas not upgraded');
assert(find(legacy,'GhostTheme_Base').objectAt(0).tile.property('ghost.key')==='background-corners.jpg','wrong background in existing autumn map');
var map=tiled.mapFormat('tmx').read(input);
// Existing empty/moved/hidden background layers must be repaired by Apply.
var emptyBase=new ObjectGroup('GhostTheme_Base');map.addLayer(emptyBase);emptyBase.opacity=0;emptyBase.visible=false;emptyBase.offset={x:100,y:200};
GhostTheme.applyTheme(map);
var appliedBase=find(map,'GhostTheme_Base');
assert(map.layerAt(0)===appliedBase&&appliedBase.objectCount===1&&appliedBase.visible&&appliedBase.opacity===1&&appliedBase.offset.x===0&&appliedBase.offset.y===0,'background not repaired');
assert(appliedBase.objectAt(0).tile.property('ghost.key')==='background-corners.jpg','wrong four-corner background');
assert(find(map,'Ground').tileAt(5,5).id===7&&find(map,'Ground').tileAt(0,0).id===63,'background fix destroyed corridor or frame cells');
var n=map.layerCount;GhostTheme.applyTheme(map);assert(map.layerCount===n,'theme application duplicated layers');
var opts={seed:20261012,density:18,category:'mixed'};
var en=GhostTheme.edges(map);assert(en>20,'wall edges absent');var ed=snap(find(map,'GhostTheme_Edges'));
assert(find(map,'GhostTheme_Edges').objects.every(function(o){return ['top','left','right'].indexOf(o.property('ghost.wallSide'))>=0&&o.rotation===0;}),'bottom hay or rotated strips generated');
assert(find(map,'GhostTheme_Edges').objects.some(function(o){return o.tile.id===19&&!o.tileFlippedHorizontally;}),'right-facing individual hay absent');
assert(find(map,'GhostTheme_Edges').objects.every(function(o){var b=GhostTheme.bounds(o),horizontal=o.property('ghost.wallSide')==='top';return (horizontal?b.x:b.y)>=o.property('ghost.runStart')+4-.01&&(horizontal?b.right:b.bottom)<=o.property('ghost.runEnd')-4+.01;}),'hay extends past wall end');
GhostTheme.edges(map);assert(ed===snap(find(map,'GhostTheme_Edges')),'edges not idempotent');
// Door clearance must leave the opening empty without stripping adjacent walls.
var hayBounds=find(map,'GhostTheme_Edges').objects.map(GhostTheme.bounds);
find(map,'Door').objects.forEach(function(door){var d=GhostTheme.bounds(door);
 assert(hayBounds.every(function(b){return !(b.x<d.right&&b.right>d.x&&b.y<d.bottom&&b.bottom>d.y);}),'hay overlaps doorway');
 if(door.property('doortype')!=='v')return;
 var adjacent=hayBounds.filter(function(b){return b.x<d.right+60&&b.right>d.x-60;});
 assert(adjacent.some(function(b){return Math.abs(b.bottom-(d.y-4))<.01;}),'hay stops early above '+door.name);
 assert(adjacent.some(function(b){return Math.abs(b.y-(d.bottom+4))<.01;}),'hay starts late below '+door.name);
});
var ln=GhostTheme.roomLeaves(map,{mode:'both'});assert(ln>0,'indoor leaf piles absent');
var leafLayer=find(map,'GhostTheme_RoomLeaves');
assert(leafLayer.objects.some(function(o){return o.property('ghost.leafPlacement')==='corner';}),'corner piles absent');
assert(leafLayer.objects.some(function(o){return o.property('ghost.leafPlacement')==='edge';}),'edge piles absent');
assert(leafLayer.objects.every(function(o){var b=GhostTheme.bounds(o),x=o.property('ghost.wallAnchorX'),y=o.property('ghost.wallAnchorY');return b.x<x&&x<b.right&&b.y<y&&y<b.bottom;}),'leaf sprite does not straddle its wall seam');
assert(leafLayer.objects.every(function(o){return ['top','top-left','top-right'].indexOf(o.property('ghost.wallSide'))>=0;}),'lower room leaf pile generated');
assert(leafLayer.objects.some(function(o){return o.tile.id===20;}),'dedicated right corner absent');
var leavesSnapshot=snap(leafLayer);GhostTheme.roomLeaves(map,{mode:'both'});assert(leavesSnapshot===snap(leafLayer),'leaf generation not idempotent');
assert(leafLayer.objects.every(function(o){return o.property('ghost.room').indexOf('floor_')===0;}),'leaf room identity absent');
var gn=GhostTheme.grass(map,20261012);assert(gn>0,'wall grass absent');var grassSnapshot=snap(find(map,'GhostTheme_Grass'));GhostTheme.grass(map,20261012);assert(grassSnapshot===snap(find(map,'GhostTheme_Grass')),'grass not reproducible');
var rows={};find(map,'GhostTheme_Grass').objects.forEach(function(o){var key=o.property('ghost.row');if(!rows[key])rows[key]=[];rows[key].push(o);});
assert(Object.keys(rows).every(function(key){var row=rows[key];return row.length>=3&&row.length<=5&&row.every(function(o){return o.rotation===0;});}),'isolated grass or oversized row');
var sn=GhostTheme.scatter(map,opts),g=find(map,'GhostTheme_Scatter');assert(sn>10,'scatter absent');var first=snap(g);assert(g.objects.every(function(o){return ['fragment','paper','accent'].indexOf(o.tile.property('ghost.category'))>=0;}),'equipment or wall decor in random scatter');
assert(g.objects.some(function(o){return o.tile.property('ghost.category')==='accent';}),'mixed scatter has no natural accents');
assert(g.objects.filter(function(o){return o.tile.property('ghost.category')==='accent';}).every(function(o){return o.rotation===0;}),'upright accents rotated');
GhostTheme.scatter(map,opts);assert(first===snap(g),'same seed changed geometry');
opts.seed++;GhostTheme.scatter(map,opts);assert(first!==snap(g),'new seed did not change layout');
var locked=g.objectAt(0);locked.setProperty('ghost.locked',true);var lockedID=locked.id,lx=locked.x,ly=locked.y;
GhostTheme.scatter(map,opts);assert(g.objects.some(function(o){return o.id===lockedID&&o.x===lx&&o.y===ly;}),'locked object lost');
var left=g.objects.filter(function(o){return o.x<1200;}).map(function(o){return o.id;});opts.region={x:2400,y:600,right:4200,bottom:1800};
GhostTheme.scatter(map,opts);assert(left.every(function(id){return g.objects.some(function(o){return o.id===id;});}),'local regenerate changed outside area');
opts.region=null;opts.seed=20261012;locked.setProperty('ghost.locked',false);GhostTheme.scatter(map,opts);
assert(GhostTheme.propCatalog(map).length===7,'formal device catalog incomplete');
assert(JSON.stringify(GhostTheme.propCatalog(map).map(function(a){return a.id;}))==='[9,11,21,22,23,24,25]','reference equipment mismatch');
assert(GhostTheme.placementCatalog(map,'component').length===3&&GhostTheme.placementCatalog(map,'scene').length===4,'manual categories incomplete');
var accentRejected=false;try{GhostTheme.candidate(map,28,500,900,1,false);}catch(e){accentRejected=true;}assert(accentRejected,'natural accent allowed as equipment');
var previewObject=GhostTheme.candidate(map,21,450,1100,.75,true),preview=GhostTheme.previewMap(map,previewObject);
assert(preview.layerCount===1&&preview.tilesets[0].tile(0).width===Math.round(previewObject.width),'sprite preview absent');
var door=find(map,'Door').objectAt(0);
var atDoor=GhostTheme.place(map,9,door.x,door.y,1);
assert(atDoor.x===door.x&&atDoor.y===door.y,'door placement blocked or moved');
var placed=1;
for(var yy=1000;yy<4200&&placed<3;yy+=800)for(var xx=250;xx<4400&&placed<3;xx+=1700){try{GhostTheme.place(map,[9,11,21][placed],xx,yy,1);placed++;}catch(e){}}
assert(placed===3,'could not place test devices');
GhostTheme.scatter(map,opts);
// Wide and tall maps use an owned source crop and fill the map without overflow.
[[60,30],[30,60],[40,53]].forEach(function(size){
 var rectMap=tiled.mapFormat('tmx').read(input);rectMap.setSize(size[0],size[1]);rectMap.layers.forEach(function(l){if(l.isTileLayer)l.resize({width:size[0],height:size[1]},{x:0,y:0});});
 GhostTheme.applyTheme(rectMap);var bg=find(rectMap,'GhostTheme_Base').objectAt(0),crop=bg.tile.imageRect;
 assert(bg.x===0&&bg.y===size[1]*100&&bg.width===size[0]*100&&bg.height===size[1]*100,'background does not fill exact map bounds');
 assert(Math.abs(crop.width/crop.height-bg.width/bg.height)<.001,'background aspect ratio distorted');
 assert(Math.abs(crop.x*2+crop.width-4800)<=1&&Math.abs(crop.y*2+crop.height-4800)<=1,'crop not centered');
 assert(crop.width===4800||crop.height===4800,'background unnecessarily cropped on both axes');
 var decor=rectMap.tilesets.filter(function(t){return t.name==='abandoned-decorations-formal';})[0];
 assert(decor.tile(0).width===4800&&decor.tile(0).height===4800,'shared background modified');
 var cropTile=bg.tile,count=rectMap.tilesets.length;GhostTheme.applyTheme(rectMap);
 assert(bg.tile===cropTile&&rectMap.tilesets.length===count,'reapplying duplicates crop tilesets');
 var path=output+'.'+size[0]+'x'+size[1]+'.tmx';tiled.mapFormat('tmx').write(rectMap,path);
 var reopened=tiled.mapFormat('tmx').read(path),saved=find(reopened,'GhostTheme_Base').objectAt(0).tile.imageRect;
 assert(saved.x===crop.x&&saved.y===crop.y&&saved.width===crop.width&&saved.height===crop.height,'save/reopen lost background crop');
});
var rectangle=tiled.mapFormat('tmx').read(input.replace('Map_1.tmx','Map_4.tmx'));GhostTheme.applyTheme(rectangle);
assert(find(rectangle,'GhostTheme_Base').objectCount===1,'real non-square map failed');
tiled.mapFormat('tmx').write(map,output);
var reloaded=tiled.mapFormat('tmx').read(output);assert(find(reloaded,'GhostTheme_Props').objectCount===3,'save/reopen lost props');
assert(find(reloaded,'GhostTheme_Scatter').objects.every(function(o){return o.tile!==null;}),'save/reopen lost tile references');
var baseCount=find(map,'GhostTheme_Base').objectCount;
var sg=find(map,'GhostTheme_Scatter'),saved=sg.objectAt(0);saved.setProperty('ghost.locked',true);
assert(GhostTheme.reset(map,false)>0,'default reset removed nothing');
assert(sg.objectCount===1&&find(map,'GhostTheme_Props').objectCount===3,'default reset removed locked objects or props');
assert(GhostTheme.reset(map,true)===4,'full reset count mismatch');
assert(find(map,'GhostTheme_Base').objectCount===baseCount&&find(map,'GhostTheme_Props').objectCount===0,'reset touched background or left props');
// Natural-only scattering uses the same seed/selection protections.
GhostTheme.scatter(map,{seed:20261012,density:18,category:'accents'});
assert(sg.objectCount>0&&sg.objects.every(function(o){return o.tile.property('ghost.category')==='accent'&&o.rotation===0;}),'natural-only pool empty or mixed');
var accentSnap=snap(sg);GhostTheme.scatter(map,{seed:20261012,density:18,category:'accents'});assert(accentSnap===snap(sg),'natural accents not reproducible');
GhostTheme.reset(map,true);
[10,32].forEach(function(id){var placedObject=null;for(var y=600;y<4200&&!placedObject;y+=400)for(var x=300;x<4200&&!placedObject;x+=400){try{placedObject=GhostTheme.place(map,id,x,y,.2);}catch(e){}}
assert(placedObject&&placedObject.layer.name===(id===10?'GhostTheme_Components':'GhostTheme_Scenes'),'manual category went into equipment layer');});
assert(GhostTheme.reset(map,false)===0,'locked parts/corners reset');assert(GhostTheme.reset(map,true)===2,'parts/corners omitted from reset');
var generated=GhostTheme.generateEnvironment(map,{seed:20261012,density:18});
assert(generated.hay>0&&generated.grass>0&&generated.leaves>0&&generated.scatter>0,'one-click environment generation incomplete');
assert(find(map,'GhostTheme_Props').objectCount===0&&find(map,'GhostTheme_Components').objectCount===0&&find(map,'GhostTheme_Scenes').objectCount===0,'one-click generation added manual equipment');
GhostTheme.applyOriginalTheme(map);
assert(map.property('ghost.mapTheme')==='original','original theme property missing');
assert(!find(map,'GhostTheme_Base').visible&&!find(map,'GhostTheme_Edges').visible&&!find(map,'GhostTheme_Scatter').visible&&!find(map,'GhostTheme_RoomLeaves').visible&&!find(map,'GhostTheme_Grass').visible,'autumn layers remain visible in original theme');
['Edges','Scatter','RoomLeaves','Grass'].forEach(function(s){assert(find(map,'GhostTheme_'+s).objectCount===0,'autumn decoration remains in original: '+s);});
tiled.mapFormat('tmx').write(map,output+'.original.tmx');
var originalReloaded=tiled.mapFormat('tmx').read(output+'.original.tmx');
assert(originalReloaded.property('ghost.mapTheme')==='original','original theme lost on reopen');
assert(find(originalReloaded,'GhostTheme_RoomLeaves').objectCount===0,'saved original contains leaves');
var originalBlocked=false;try{GhostTheme.scatter(map,{seed:1,density:10,category:'mixed'});}catch(e){originalBlocked=true;}assert(originalBlocked,'original theme still accepts autumn generation');
GhostTheme.applyTheme(map);
assert(map.property('ghost.mapTheme')==='autumn'&&find(map,'GhostTheme_Base').visible,'autumn theme did not restore its layers');
// Real Qt input widgets; use exactly the callback installed by all three dialogs.
var dialog=new Dialog('dialog regression'),xbox=dialog.addNumberInput('X',300),ybox=dialog.addNumberInput('Y',700),scaleBox=dialog.addNumberInput('Scale',1),captured=null;
xbox.maximum=5000;ybox.maximum=5000;xbox.value=300;ybox.value=700;
GhostTheme.acceptValues(dialog,function(){return {x:xbox.value,y:ybox.value,scale:scaleBox.value};},function(v){captured=v;})();
var panelTest=GhostTheme.openPanel();tiled.log('PANEL_HEIGHT='+panelTest.height);
assert(captured.x===300&&captured.y===700&&captured.scale===1,'dialog values lost before close');
tiled.log('THEME_TEST_OK edges='+en+' scatter='+find(reloaded,'GhostTheme_Scatter').objectCount+' props='+placed);
'''
output.parent.mkdir(parents=True,exist_ok=True)
with tempfile.TemporaryDirectory() as tmp:
 path=Path(tmp)/'integration.js';path.write_text(code);env=dict(os.environ,QT_QPA_PLATFORM='offscreen')
 result=subprocess.run([a.tiled,'--new-instance','--evaluate',str(path)],env=env,text=True,capture_output=True)
 print(result.stdout);print(result.stderr)
 if 'THEME_TEST_OK' not in result.stdout:raise SystemExit(1)

# Check actual pixels: all four fixed corner scenes must survive the Ground
# overlay and the display export, including after saving/reopening the map.
sys.path.insert(0,str(root))
from xml.etree import ElementTree as ET
from PIL import Image
from theme_bake import Renderer,THEME_LAYERS,bake_theme
document=ET.parse(output).getroot()
base_only=copy.deepcopy(document)
for child in list(base_only):
 if child.get('name') in THEME_LAYERS-{'GhostTheme_Base'}:base_only.remove(child)
visible=Renderer(base_only,output).render()
with Image.open(root/'Map_img/themes/abandoned/background.jpg') as bg:
 expected=bg.convert('RGBA')
 for box in [(0,0,900,900),(3900,0,4800,900),(0,3900,900,4800),(3900,3900,4800,4800)]:
  assert visible.crop(box).tobytes()==expected.crop(box).tobytes(),f'Corner background is covered: {box}'
original=Path(str(output)+'.original.tmx')
restored=Renderer(ET.parse(original).getroot(),original).render()
initial=Renderer(ET.parse(root/'Map_model/Map_1.tmx').getroot(),root/'Map_model/Map_1.tmx').render()
for box in [(500,500,600,600),(0,0,100,100)]:
 assert restored.crop(box).tobytes()==initial.crop(box).tobytes(),'Original corridor/frame did not restore'
with tempfile.TemporaryDirectory() as tmp:
 target=Path(tmp)/'display/Map_model/Map_1.tmx'
 bake_theme(output,target)
 assert Renderer(document,output).render().tobytes()==Renderer(ET.parse(target).getroot(),target).render().tobytes(),'Display export lost background pixels'
print('BACKGROUND_PIXELS_OK four corners, original corridor/frame, display export')

# Verify cropped background pixels and the normal display pipeline, not just geometry.
for width,height in [(60,30),(30,60),(40,53)]:
 path=Path(str(output)+f'.{width}x{height}.tmx')
 doc=ET.parse(path).getroot()
 for child in list(doc):
  if child.tag in {'layer','objectgroup'} and child.get('name')!='GhostTheme_Base':doc.remove(child)
 rendered=Renderer(doc,path).render()
 with Image.open(root/'Map_img/themes/abandoned/background.jpg') as bg:
  scale=max(width*100/bg.width,height*100/bg.height)
  cw=round(width*100/scale);ch=round(height*100/scale);x=(bg.width-cw)//2;y=(bg.height-ch)//2
  expected=bg.convert('RGBA').crop((x,y,x+cw,y+ch)).resize((width*100,height*100),Image.Resampling.LANCZOS)
  assert rendered.tobytes()==expected.tobytes(),f'Incorrect crop pixels: {width}x{height}'
 with tempfile.TemporaryDirectory() as tmp:
  target=Path(tmp)/'display/Map_model/Map_1.tmx';bake_theme(path,target)
  assert Renderer(ET.parse(path).getroot(),path).render().tobytes()==Renderer(ET.parse(target).getroot(),target).render().tobytes(),'Rectangular display export lost pixels'
print('RECTANGLE_PIXELS_OK wide, tall, 40x53, save/reopen, display export')
