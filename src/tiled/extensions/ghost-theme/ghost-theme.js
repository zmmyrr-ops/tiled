/* Static theme authoring. All edits use undo macros; generated objects are editable.
 * The paired ghost-config exporter compiles these explicit layers into display tiles.
 */
var GhostTheme = (function () {
    'use strict';
    var PREFIX = 'GhostTheme_', OWNER = 'ghost-theme-v1', FORMAL_RULE_VERSION = 'autumn-formal-v2', headlessRoot = null, retainedTilesets = [];
    function layer(map, name) { for (var i=0;i<map.layerCount;i++) if(map.layerAt(i).name===name)return map.layerAt(i); return null; }
    function requireMap(map) {
        if(!map || !map.isTileMap)throw new Error('请先打开并保存地图');
        if(!map.fileName&&!headlessRoot)throw new Error('请先保存地图');
        if(map.tileWidth!==100 || map.tileHeight!==100)throw new Error('试用主题目前按 100×100 格制作');
    }
    function load(map, file) {
        var path=FileInfo.cleanPath(FileInfo.joinPaths(headlessRoot || FileInfo.cleanPath(FileInfo.joinPaths(FileInfo.path(map.fileName),'..')),'Map_tsx',file));
        var existing=null;
        for(var i=0;i<map.tilesets.length;i++)if(map.tilesets[i]&&(FileInfo.cleanPath(map.tilesets[i].fileName)===path||map.tilesets[i].name===file.replace('.tsx',''))){existing=map.tilesets[i];break;}
        var decorFile=file==='abandoned-decorations-formal.tsx',wallFile=file==='abandoned-map03-formal.tsx';
        if(existing&&(!decorFile||existing.property('ghost.catalogVersion')===4)&&(!wallFile||existing.property('ghost.backgroundMode')==='corners-v1'))return existing;
        var format=tiled.tilesetFormatForFile(path);if(!format)throw new Error('无法读取图集 '+path);
        var ts=format.read(path);if(ts)retainedTilesets.push(ts);if(!ts)throw new Error('缺少主题素材，请先安装 ghost-config 主题包：'+path);
        if(decorFile&&(ts.property('ghost.catalogVersion')!==4||ts.tileCount<37)||wallFile&&ts.property('ghost.backgroundMode')!=='corners-v1')throw new Error('主题素材库版本过旧，请更新地图所在目录的主题资源：'+path);
        if(existing)map.macro('更新主题素材库',function(){if(!map.replaceTileset(existing,ts))throw new Error('更新主题图集失败');});
        return ts;
    }
    function group(map, suffix) {
        var name=PREFIX+suffix,g=layer(map,name);
        if(g && !g.isObjectLayer)throw new Error(name+' 必须是对象层');
        if(g && g.locked)throw new Error(name+' 已锁定，请先解锁');
        if(!g){g=new ObjectGroup(name);g.drawOrder=ObjectGroup.IndexOrder;map.addLayer(g);}return g;
    }
    function object(ts,id,x,y,scale,rotation) {
        var t=ts.tile(id);if(!t)throw new Error('素材编号不存在：'+id);
        var o=new MapObject(String(t.property('ghost.label')||t.id));o.tile=t;
        o.width=t.width*scale;o.height=t.height*scale;o.x=x;o.y=y;o.rotation=rotation||0;
        o.setProperty('ghost.generatedBy',OWNER);o.setProperty('ghost.assetKey',t.property('ghost.key'));return o;
    }
    function isAutumnTheme(map) {
        var selected=map.property('ghost.mapTheme');
        return selected ? selected === 'autumn' : map.property('ghost.theme') === 'abandoned-v1';
    }
    function setAutumnLayers(map, visible) {
        ['Base','Edges','Scatter','RoomLeaves','Grass','Props','Components','Scenes'].forEach(function(suffix){var l=layer(map,PREFIX+suffix);if(l)l.visible=visible;});
    }
    function applyTheme(map) {
        requireMap(map);
        if(map.width!==map.height)throw new Error('整张参考底图只适配正方形地图；长方形地图需先制作对应比例底图');
        // Include embedded legacy tileset upgrades in the same undo operation.
        map.macro('切换到秋季地图主题',function(){
        var walls=load(map,'abandoned-map03-formal.tsx'),decor=load(map,'abandoned-decorations-formal.tsx');
        var old=map.tilesets.filter(function(t){return t&&(t.name==='map01'||t.name==='map01-original'||t.name==='abandoned-map01'||t.name==='abandoned-map03-formal');});
        if(!old.length && !map.tilesets.some(function(t){return t&&(t.name==='abandoned-map01'||t.name==='abandoned-map03-formal');}))throw new Error('未找到 map01 图集，暂不自动替换其他主题');
        var backgroundTile=decor.tile(0);
        if(!backgroundTile||!backgroundTile.image.width||!backgroundTile.image.height)throw new Error('秋季四角背景图片缺失，请更新主题资源');
            old.forEach(function(t){if(t===walls)return;if(!map.replaceTileset(t,walls))throw new Error('替换图集失败');});if(map.tilesets.indexOf(decor)<0)map.addTileset(decor);
            // Old ground contains stray floor cells in the outer border. Reveal the new base there.
            var ground=layer(map,'Ground'),floors=layer(map,'Floor'),polys=[];
            if(floors)floors.objects.forEach(function(o){if(o.polygon&&o.polygon.length)polys.push(o.polygon.map(function(p){return{x:p.x+o.x,y:p.y+o.y};}));});
            if(ground&&ground.isTileLayer&&polys.length){var edit=ground.edit();
                for(var gy=0;gy<map.height;gy++)for(var gx=0;gx<map.width;gx++){
                    var tile=ground.tileAt(gx,gy);
                    if(tile&&tile.tileset.name==='abandoned-map03-formal'&&(tile.id<=3||(tile.id>=42&&tile.id<=62))&&!polys.some(function(p){return pointIn(p,(gx+.5)*100,(gy+.5)*100);}))edit.setTile(gx,gy,null);
                }edit.apply();
            }
            var base=layer(map,PREFIX+'Base');
            if(base&&!base.isObjectLayer)throw new Error(PREFIX+'Base 必须是对象层');
            if(!base){base=new ObjectGroup(PREFIX+'Base');map.insertLayerAt(0,base);}
            else if(map.layerAt(0)!==base){map.removeLayer(base);map.insertLayerAt(0,base);}
            base.drawOrder=ObjectGroup.IndexOrder;base.offset={x:0,y:0};base.opacity=1;
            var bg=base.objects.filter(function(o){return o.tile&&(o.tile.id===0&&o.tile.tileset===decor||o.tile.property('ghost.category')==='background');})[0];
            if(!bg){bg=object(decor,0,0,map.height*100,1,0);base.addObject(bg);}
            bg.tile=backgroundTile;bg.x=0;bg.y=map.height*100;bg.width=map.width*100;bg.height=map.height*100;bg.rotation=0;bg.visible=true;
            bg.tileFlippedHorizontally=false;bg.tileFlippedVertically=false;
            bg.setProperty('ghost.assetKey',backgroundTile.property('ghost.key'));
            base.locked=true;setAutumnLayers(map,true);map.setProperty('ghost.theme','abandoned-v1');map.setProperty('ghost.mapTheme','autumn');map.setProperty('ghost.decorationRules',FORMAL_RULE_VERSION);
            group(map,'Edges');group(map,'Scatter');group(map,'Props');group(map,'RoomLeaves');group(map,'Grass');
        });
    }
    function applyOriginalTheme(map) {
        requireMap(map);
        var original=load(map,'map01-original.tsx');
        var old=map.tilesets.filter(function(t){return t&&(t.name==='abandoned-map03-formal'||t.name==='abandoned-map01'||t.name==='map01');});
        map.macro('切换到原始主题',function(){
            old.forEach(function(t){if(t===original)return;if(!map.replaceTileset(t,original))throw new Error('恢复原始图集失败');});
            ['Edges','Scatter','RoomLeaves','Grass'].forEach(function(suffix){
                var g=layer(map,PREFIX+suffix);if(!g||!g.isObjectLayer)return;
                g.objects.slice().forEach(function(o){if(o.property('ghost.generatedBy')===OWNER)g.removeObject(o);});
            });
            setAutumnLayers(map,false);
            map.setProperty('ghost.mapTheme','original');
        });
    }
    function rng(seed) {var n=seed>>>0;return function(){n=(Math.imul(n,1664525)+1013904223)>>>0;return n/4294967296;};}
    function bounds(o) {
        var w=o.width,h=o.height,pts=o.polygon;
        var corners=(pts&&pts.length)?pts:[{x:0,y:o.tile?-h:0},{x:w,y:o.tile?-h:0},{x:w,y:o.tile?0:h},{x:0,y:o.tile?0:h}];
        var a=o.rotation*Math.PI/180,c=Math.cos(a),s=Math.sin(a),xs=[],ys=[];
        corners.forEach(function(p){xs.push(o.x+c*p.x-s*p.y);ys.push(o.y+s*p.x+c*p.y);});
        return {x:Math.min.apply(null,xs),y:Math.min.apply(null,ys),right:Math.max.apply(null,xs),bottom:Math.max.apply(null,ys)};
    }
    function overlap(a,b,pad){pad=pad||0;return a.x<b.right+pad&&a.right>b.x-pad&&a.y<b.bottom+pad&&a.bottom>b.y-pad;}
    function intersects(o,rect,pad){return overlap(bounds(o),rect,pad);}
    function protectedRects(map, includeBuild, doorPadding) {
        var list=[];['Door','Born','Supply','Bed'].forEach(function(n){var l=layer(map,n);if(l&&l.isObjectLayer)l.objects.forEach(function(o){var b=bounds(o),pad=n==='Door'&&doorPadding!==undefined?doorPadding:60;b.x-=pad;b.y-=pad;b.right+=pad;b.bottom+=pad;list.push(b);});});
        // Default protection keeps automatically generated clutter outside building areas.
        for(var i=0;i<map.layerCount;i++){var l=map.layerAt(i);if(l.isObjectLayer&&((includeBuild!==false&&/^Bed_\d/.test(l.name))||l.name==='GhostTheme_NoDecor'))l.objects.forEach(function(o){list.push(bounds(o));});}
        return list;
    }
    function roadAt(road,x,y,map){return x>=0&&y>=0&&x<map.width&&y<map.height&&road.cellAt(x,y)&&!road.cellAt(x,y).empty;}
    function clearGenerated(g,region){g.objects.slice().forEach(function(o){if(o.property('ghost.generatedBy')===OWNER&&!o.property('ghost.locked')&&(!region||intersects(o,region)))g.removeObject(o);});}
    function region(map){var b=map.selectedArea.boundingRect;if(!b||b.width<=0||b.height<=0)return null;return {x:b.x*100,y:b.y*100,right:(b.x+b.width)*100,bottom:(b.y+b.height)*100};}
    function scatter(map,options) {
        // Formal scatter is biased toward edges and prop halos; callers should use small density values.
        requireMap(map);if(!isAutumnTheme(map))throw new Error('请先切换到秋季地图');
        var road=layer(map,'Road');if(!road||!road.isTileLayer)throw new Error('缺少 Road 瓦片层');
        var ts=load(map,'abandoned-decorations-formal.tsx'),g=layer(map,PREFIX+'Scatter'),area=options.region||null,random=rng(options.seed),blocked=protectedRects(map),keep=[];
        if(g&&g.locked)throw new Error('散布图层已锁定');
        ['Props','Components','Scenes','Edges','RoomLeaves','Grass','Scatter'].forEach(function(s){var l=layer(map,PREFIX+s);if(l)l.objects.forEach(function(o){if(s!=='Scatter'||o.property('ghost.locked')||o.property('ghost.generatedBy')!==OWNER||(area&&!intersects(o,area))){var b=bounds(o);b.accent=o.tile&&o.tile.property('ghost.category')==='accent';keep.push(b);}});});
        var leafIds=[3,4,5,6,14,15,18,36],accentIds=ts.tiles.filter(function(t){return t.property('ghost.category')==='accent';}).map(function(t){return t.id;});
        var cfg=rules(map).randomAccents||{mixedChance:.16,densityFactor:.22,minSpacing:180,minScale:.75,maxScale:1};
        var accentsOnly=options.category==='accents',mixed=options.category==='mixed';
        var result=[],ids=options.category==='paper'?[16,17]:options.category==='small-leaf'?leafIds:leafIds.concat([16,17]);
        for(var y=0;y<map.height;y++)for(var x=0;x<map.width;x++) {
            if(!roadAt(road,x,y,map))continue;
            var edge=!roadAt(road,x-1,y,map)||!roadAt(road,x+1,y,map)||!roadAt(road,x,y-1,map)||!roadAt(road,x,y+1,map);
            if(random()>(options.density/100)*(edge?1.8:.45)*(accentsOnly?cfg.densityFactor:1))continue;
            var accent=accentsOnly||(mixed&&random()<cfg.mixedChance),pool=accent?accentIds:ids;
            var id=pool[Math.floor(random()*pool.length)],scale=accent?cfg.minScale+random()*(cfg.maxScale-cfg.minScale):.45+random()*.45;
            var o=object(ts,id,(x+.15+random()*.7)*100,(y+.3+random()*.6)*100,scale,accent?0:(random()-.5)*80),b=bounds(o);
            o.setProperty('ghost.role',accent?'accent':'fragment');
            if(b.x<200||b.y<400||b.right>map.width*100-200||b.bottom>map.height*100-400)continue;
            if(area&&(b.x<area.x||b.y<area.y||b.right>area.right||b.bottom>area.bottom))continue;
            if(blocked.some(function(r){return overlap(b,r);})||keep.some(function(r){return overlap(b,r,accent||r.accent?cfg.minSpacing:12);}))continue;
            var valid=true;for(var gy=Math.floor(b.y/100);gy<Math.ceil(b.bottom/100);gy++)for(var gx=Math.floor(b.x/100);gx<Math.ceil(b.right/100);gx++)if(!roadAt(road,gx,gy,map))valid=false;
            if(!valid)continue;o.setProperty('ghost.seed',options.seed);result.push(o);b.accent=accent;keep.push(b);
        }
        map.macro('散布主题装饰',function(){g=group(map,'Scatter');clearGenerated(g,area);result.forEach(function(o){g.addObject(o);});map.setProperty('ghost.seed',options.seed);});return result.length;
    }
    function pointIn(poly,x,y){var inside=false;for(var i=0,j=poly.length-1;i<poly.length;j=i++){var a=poly[i],b=poly[j];if((a.y>y)!==(b.y>y)&&x<(b.x-a.x)*(y-a.y)/(b.y-a.y)+a.x)inside=!inside;}return inside;}
    function wallMask(map) {
        var ground=layer(map,'Ground'),mask={};if(!ground||!ground.isTileLayer)throw new Error('缺少 Ground');
        for(var y=0;y<map.height;y++)for(var x=0;x<map.width;x++){
            var t=ground.tileAt(x,y);if(t&&t.tileset&&(t.tileset.name==='map01'||t.tileset.name==='abandoned-map01'||t.tileset.name==='abandoned-map03-formal')&&t.id>=8&&t.id<=41)mask[x+','+y]=true;
        }return mask;
    }
    function rules(map) {
        var root=headlessRoot||FileInfo.cleanPath(FileInfo.joinPaths(FileInfo.path(map.fileName),'..'));
        var path=FileInfo.joinPaths(root,'decoration-rules-formal.json');
        if(!File.exists(path))throw new Error('缺少装饰规则文件：'+path);
        var f=new TextFile(path,TextFile.ReadOnly),config;
        try {config=JSON.parse(f.readAll());} catch(e) {throw new Error('装饰规则不是有效 JSON，请检查文件中是否混入说明文字：'+path);} finally {f.close();}
        if(!config||config.version!==2||!config.wallHay||!config.roomLeafPiles||!config.wallGrass)throw new Error('装饰规则版本不匹配，请更新地图所在目录的主题资源：'+path);
        return config;
    }
    function roomPolygons(map) {
        var floors=layer(map,'Floor');if(!floors||!floors.isObjectLayer)throw new Error('缺少 Floor 房间区域');
        return floors.objects.map(function(o){return {name:o.name,points:o.polygon&&o.polygon.length?o.polygon.map(function(p){return {x:p.x+o.x,y:p.y+o.y};}):[{x:o.x,y:o.y},{x:o.x+o.width,y:o.y},{x:o.x+o.width,y:o.y+o.height},{x:o.x,y:o.y+o.height}]};});
    }
    // Merge adjacent exposed wall faces before placing sprites. Bounds of each
    // sprite stay within the whole run, including its first and last piece.
    function wallRuns(map,sides) {
        var road=layer(map,'Road'),walls=wallMask(map),rooms=roomPolygons(map),lines={};
        if(!road||!road.isTileLayer)throw new Error('缺少 Road');
        Object.keys(walls).sort().forEach(function(key){var xy=key.split(','),x=+xy[0],y=+xy[1];
            [{side:'top',dx:0,dy:-1},{side:'left',dx:-1,dy:0},{side:'right',dx:1,dy:0},{side:'bottom',dx:0,dy:1}].forEach(function(d){
                if(sides.indexOf(d.side)<0||walls[(x+d.dx)+','+(y+d.dy)]||!roadAt(road,x+d.dx,y+d.dy,map))return;
                if(rooms.some(function(r){return pointIn(r.points,(x+d.dx+.5)*100,(y+d.dy+.5)*100);}))return;
                var horizontal=!d.dx,fixed=(horizontal?y+(d.dy>0?1:0):x+(d.dx>0?1:0))*100,start=(horizontal?x:y)*100;
                var k=d.side+':'+fixed;if(!lines[k])lines[k]=[];lines[k].push(start);
            });
        });
        var result=[];Object.keys(lines).sort().forEach(function(key){
            var parts=key.split(':'),spans=lines[key].sort(function(a,b){return a-b;}),start=spans[0],end=start+100;
            function emit(){result.push({side:parts[0],fixed:+parts[1],start:start,end:end,horizontal:parts[0]==='top'||parts[0]==='bottom'});}
            for(var i=1;i<spans.length;i++){if(spans[i]<=end)end=Math.max(end,spans[i]+100);else{emit();start=spans[i];end=start+100;}}emit();
        });return result;
    }
    function existingBounds(map,suffixes,own) {
        var result=[];suffixes.forEach(function(s){var g=layer(map,PREFIX+s);if(g)g.objects.forEach(function(o){
            if(s!==own||o.property('ghost.locked')||o.property('ghost.generatedBy')!==OWNER)result.push(bounds(o));
        });});return result;
    }
    function insideMap(map,b){return b.x>=0&&b.y>=0&&b.right<=map.width*100&&b.bottom<=map.height*100;}
    function edges(map) {
        requireMap(map);if(!isAutumnTheme(map))throw new Error('请先切换到秋季地图');
        // Wall runs already end at the doorway. The scatter clearance would
        // discard whole hay sprites on the adjacent solid wall as well.
        var cfg=rules(map).wallHay,ts=load(map,'abandoned-decorations-formal.tsx'),blocked=protectedRects(map,true,0),g=layer(map,PREFIX+'Edges'),result=[];
        if(g&&g.locked)throw new Error('草垛图层已锁定');
        var keep=existingBounds(map,['Props','Components','Scenes','Edges'],'Edges');
        wallRuns(map,cfg.sides).forEach(function(run){
            var id=run.side==='top'?7:run.side==='left'?8:19,t=ts.tile(id),size=run.horizontal?t.width:t.height;
            var start=run.start+cfg.endInset,end=run.end-cfg.endInset,length=end-start;
            if(length<size)return;
            var count=Math.ceil((length-size)/(size*cfg.stepRatio))+1,step=count>1?(length-size)/(count-1):0;
            for(var i=0;i<count;i++){
                var pos=start+i*step,o=object(ts,id,0,0,1,0);
                if(run.horizontal){o.x=pos;o.y=run.fixed+cfg.wallOverlap;}
                else {o.x=run.side==='left'?run.fixed-o.width+cfg.wallOverlap:run.fixed-cfg.wallOverlap;o.y=pos+o.height;}
                var b=bounds(o);if(!insideMap(map,b)||blocked.some(function(r){return overlap(b,r);})||keep.some(function(r){return overlap(b,r);}))continue;
                o.setProperty('ghost.wallSide',run.side);o.setProperty('ghost.runStart',run.start);o.setProperty('ghost.runEnd',run.end);result.push(o);
            }
        });
        map.macro('沿连续墙段铺草垛',function(){g=group(map,'Edges');clearGenerated(g);result.forEach(function(o){g.addObject(o);});});return result.length;
    }
    function roomLeaves(map, options) {
        requireMap(map);if(!isAutumnTheme(map))throw new Error('请先切换到秋季地图');
        options=options||{mode:'both'};
        var cfg=rules(map).roomLeafPiles,ts=load(map,'abandoned-decorations-formal.tsx'),walls=wallMask(map),g=layer(map,PREFIX+'RoomLeaves');
        if(g&&g.locked)throw new Error('叶堆图层已锁定');
        var blocked=protectedRects(map,false),occupied=existingBounds(map,['Props','Components','Scenes','RoomLeaves'],'RoomLeaves'),results=[];
        function wallAt(x,y){return !!walls[Math.floor(x/100)+','+Math.floor(y/100)];}
        function add(room,id,x,y,kind,ax,ay,side){
            var o=object(ts,id,x,y+ts.tile(id).height*cfg.scale,cfg.scale,0),b=bounds(o);
            if(!insideMap(map,b)||blocked.some(function(r){return overlap(b,r);})||occupied.some(function(r){return overlap(b,r,12);}))return;
            // Decorative pixels may overlap the wall, but never the outside road.
            for(var py=b.y+2;py<b.bottom;py+=8)for(var px=b.x+2;px<b.right;px+=8){if(!pointIn(room.points,px,py)&&!wallAt(px,py))return;}
            o.setProperty('ghost.room',room.name);o.setProperty('ghost.leafPlacement',kind);o.setProperty('ghost.wallSide',side);
            o.setProperty('ghost.wallAnchorX',ax);o.setProperty('ghost.wallAnchorY',ay);
            results.push(o);occupied.push(b);
        }
        roomPolygons(map).forEach(function(room){var poly=room.points;
            if(options.mode!=='edge')poly.forEach(function(v){
                [-1,1].forEach(function(sx){
                    // Floor must lie BELOW this corner. Lower room corners are excluded.
                    if(!pointIn(poly,v.x+sx*20,v.y+20)||!wallAt(v.x-sx*20,v.y+20)||!wallAt(v.x+sx*20,v.y-20))return;
                    var id=sx>0?2:20,anchor=sx>0?cfg.leftAnchorX:cfg.rightAnchorX;
                    add(room,id,v.x-anchor*cfg.scale,v.y-cfg.topOverlap,'corner',v.x,v.y,sx>0?'top-left':'top-right');
                });
            });
            if(options.mode==='corner')return;
            for(var i=0;i<poly.length;i++){
                var a=poly[i],b=poly[(i+1)%poly.length];if(Math.abs(a.y-b.y)>1)continue;
                var start=Math.min(a.x,b.x),end=Math.max(a.x,b.x);
                for(var cx=start+cfg.cornerClearance;cx<end-cfg.cornerClearance;cx+=cfg.edgeSpacing){
                    if(!pointIn(poly,cx,a.y+15)||!wallAt(cx,a.y-20))continue;
                    add(room,1,cx-ts.tile(1).width*cfg.scale/2,a.y-cfg.edgeOverlap,'edge',cx,a.y,'top');
                }
            }
        });
        map.macro('布置上侧墙根与左右上角叶堆',function(){
            g=group(map,'RoomLeaves');clearGenerated(g);results.forEach(function(o){g.addObject(o);});
            var old=layer(map,PREFIX+'Scatter');if(old&&!old.locked)old.objects.slice().forEach(function(o){
                if(o.property('ghost.generatedBy')===OWNER&&!o.property('ghost.locked')&&['leaves_a','leaves_b','中间落叶.png','左上角落叶.png','落叶-右上角.png'].indexOf(o.property('ghost.assetKey'))>=0)old.removeObject(o);
            });
        });return results.length;
    }
    function grass(map,seed) {
        requireMap(map);if(!isAutumnTheme(map))throw new Error('请先切换到秋季地图');
        var cfg=rules(map).wallGrass,ts=load(map,'abandoned-decorations-formal.tsx'),g=layer(map,PREFIX+'Grass');
        if(g&&g.locked)throw new Error('小草图层已锁定');
        var random=rng(seed||20261013),blocked=protectedRects(map,false),keep=existingBounds(map,['Props','Components','Scenes','Edges','RoomLeaves','Grass'],'Grass'),result=[];
        wallRuns(map,cfg.sides).forEach(function(run){
            // Several upright blades form each short row; all roots share the
            // same wall seam. Door checks can split a row, but not shift it.
            for(var start=run.start+cfg.endInset;start<run.end-cfg.endInset;start+=cfg.rowStep){
                var count=cfg.minPerRow+Math.floor(random()*(cfg.maxPerRow-cfg.minPerRow+1)),segment=[];
                function flush(){if(segment.length>=cfg.minPerRow)Array.prototype.push.apply(result,segment);segment=[];}
                for(var i=0;i<count;i++){
                    var o=object(ts,12,0,0,cfg.scale,0),pos=start+i*cfg.spacing;
                    if(pos+(run.horizontal?o.width:o.height)>run.end-cfg.endInset)break;
                    if(run.horizontal){o.x=pos;o.y=run.side==='bottom'?run.fixed+o.height-cfg.wallOverlap:run.fixed+cfg.wallOverlap;}
                    else{o.x=run.side==='left'?run.fixed-o.width+cfg.wallOverlap:run.fixed-cfg.wallOverlap;o.y=pos+o.height;}
                    var b=bounds(o);if(!insideMap(map,b)||blocked.some(function(r){return overlap(b,r);})||keep.some(function(r){return overlap(b,r,3);})){flush();continue;}
                    o.setProperty('ghost.wallSide',run.side);o.setProperty('ghost.row',run.side+':'+run.fixed+':'+start);o.setProperty('ghost.seed',seed||20261013);segment.push(o);
                }flush();
            }
        });
        map.macro('沿墙根联排布置小草',function(){g=group(map,'Grass');clearGenerated(g);result.forEach(function(o){g.addObject(o);});});return result.length;
    }
    function placementCatalog(map,category) {
        var ts=load(map,'abandoned-decorations-formal.tsx');
        return ts.tiles.filter(function(t){return t.property('ghost.category')===(category||'prop');}).map(function(t){return {id:t.id,label:String(t.property('ghost.label')),category:t.property('ghost.category')};});
    }
    function propCatalog(map) {return placementCatalog(map,'prop');}
    function placementLayer(o){var category=o.tile.property('ghost.category');return category==='scene'?'Scenes':category==='component'?'Components':'Props';}
    function candidate(map,id,x,y,scale,flip) {
        requireMap(map);if(!isAutumnTheme(map))throw new Error('请先切换到秋季地图');
        if(!isFinite(x)||!isFinite(y)||!isFinite(scale)||scale<=0)throw new Error('摆放坐标或缩放无效');
        var ts=load(map,'abandoned-decorations-formal.tsx'),t=ts.tile(id);
        if(!t||['prop','component','scene'].indexOf(t.property('ghost.category'))<0)throw new Error('请选择成套设备、组合零件或场景边角');
        var o=object(ts,id,x,y,scale,0);o.tileFlippedHorizontally=!!flip;return o;
    }
    function placementError(map,o) {
        var props=layer(map,PREFIX+placementLayer(o));
        return props&&props.locked?'摆放图层已锁定':'';
    }
    function place(map,id,x,y,scale,flip) {
        var o=candidate(map,id,x,y,scale,flip),error=placementError(map,o);if(error)throw new Error(error);
        o.setProperty('ghost.locked',true);o.setProperty('ghost.visualOnly',true);
        map.macro('放置 '+o.name,function(){var g=group(map,placementLayer(o));g.addObject(o);map.currentLayer=g;map.selectedObjects=[o];});return o;
    }
    var placementTool=null,placement=null,panelStatus=null;
    function placementStatus(text){if(panelStatus)panelStatus.text=text;if(placementTool)placementTool.statusInfo=text;}
    function stopPlacement(){
        var map=placement?placement.map:tiled.activeAsset,g=map&&map.isTileMap?layer(map,PREFIX+(placement?placement.categoryLayer:'Props')):null;
        if(g&&!g.locked)map.currentLayer=g;
        placement=null;
        if(placementTool)placementTool.preview=new TileMap();
        if(tiled.mapEditor&&tiled.mapEditor.selectedTool===tiled.mapEditor.tool('GhostTheme_PlaceProp')){
            tiled.mapEditor.selectedTool=tiled.mapEditor.tool('ObjectSelectionTool');
            if(tiled.mapEditor.selectedTool===tiled.mapEditor.tool('GhostTheme_PlaceProp'))tiled.mapEditor.selectedTool=null;
        }
        placementStatus('已结束放置；可选择并拖动摆放物');
    }
    function previewMap(map,o,ts){
        // Scripted-tool brushes render tile layers, not object groups. Give the
        // preview tile the exact size and bottom-left anchor of the placed object.
        if(!ts){
            ts=new Tileset('摆放预览');var im=o.tile.image.copy(o.tile.imageRect);
            im=im.scaled(Math.round(o.width),Math.round(o.height),Image.IgnoreAspectRatio,Image.SmoothTransformation);
            if(o.tileFlippedHorizontally)im=im.mirrored(true,false);ts.addTile().setImage(im);
        }
        var tile=ts.tile(0);
        var x=Math.floor(o.x/100),y=Math.floor(o.y/100)-1;
        ts.tileOffset={x:o.x-x*100,y:o.y-(y+1)*100};
        var preview=new TileMap();preview.tileWidth=100;preview.tileHeight=100;preview.width=map.width;preview.height=map.height;preview.addTileset(ts);
        var g=new TileLayer('摆放预览');g.width=map.width;g.height=map.height;preview.addLayer(g);
        var edit=g.edit();edit.setTile(x,y,tile);edit.apply();return preview;
    }
    function updatePlacement(tool,x,y,modifiers){
        if(!placement||tool.map!==placement.map){tool.preview=new TileMap();return null;}
        placement.cursor={x:x,y:y,modifiers:modifiers};
        var t=placement.tileset.tile(placement.id),px=x-t.width*placement.scale/2,py=y;
        if(!(modifiers&Qt.ShiftModifier)){px=Math.round(px/10)*10;py=Math.round(py/10)*10;}
        var o=candidate(tool.map,placement.id,px,py,placement.scale,placement.flip),error=placementError(tool.map,o);
        var preview=previewMap(tool.map,o,placement.previewTileset);placement.previewTileset=preview.tilesets[0];tool.preview=preview;
        placementStatus(error?'不可放置：'+error:o.name+' · 单击放置一个后结束 · H 镜像 · Shift 自由定位 · 右键/Esc 取消');
        return {object:o,error:error};
    }
    function ensurePlacementTool(){
        if(placementTool)return placementTool;
        placementTool=tiled.registerTool('GhostTheme_PlaceProp',{
            name:'放置一个装饰',usesSelectedTiles:true,
            updateEnabledState:function(){this.enabled=!!this.map;},updateStatusInfo:function(){},
            mouseMoved:function(x,y,m){try{updatePlacement(this,x,y,m);}catch(e){placementStatus(e.message);}},
            mousePressed:function(button,x,y,m){
                if(button===Qt.RightButton){stopPlacement();return;}if(button!==Qt.LeftButton)return;
                try{var p=updatePlacement(this,x,y,m);if(p&&!p.error){var placed=place(this.map,placement.id,p.object.x,p.object.y,placement.scale,placement.flip);stopPlacement();placementStatus('已放置 '+placed.name+'；可拖动调整，再放一个请重新点击“放置一个”');}}
                catch(e){placementStatus('未放置：'+e.message);}
            },
            keyPressed:function(key){if(key===Qt.Key_Escape)stopPlacement();else if(key===Qt.Key_H&&placement){placement.flip=!placement.flip;placement.previewTileset=null;var c=placement.cursor;if(c)updatePlacement(this,c.x,c.y,c.modifiers);}},
            modifiersChanged:function(m){if(placement&&placement.cursor)updatePlacement(this,placement.cursor.x,placement.cursor.y,m);},
            mouseLeft:function(){this.preview=new TileMap();},
            deactivated:function(){this.preview=new TileMap();},
            mapChanged:function(){placement=null;this.preview=new TileMap();}
        });return placementTool;
    }
    function beginPlacement(map,id,scale){
        candidate(map,id,0,0,scale,false); // Validate before activating a tool.
        var tool=ensurePlacementTool();
        placement={map:map,id:id,scale:scale,flip:false,categoryLayer:placementLayer(candidate(map,id,0,0,scale,false)),tileset:load(map,'abandoned-decorations-formal.tsx')};
        tiled.mapEditor.selectedTool=tiled.mapEditor.tool('GhostTheme_PlaceProp');
        placementStatus('移动鼠标预览，单击放置一个后结束；H 镜像，右键/Esc 取消');return tool;
    }
    function reset(map, all) {
        requireMap(map);
        var targets=[];
        ['Edges','Scatter','RoomLeaves','Grass','Props','Components','Scenes'].forEach(function(suffix){
            var g=layer(map,PREFIX+suffix);if(!g)return;
            if(!g.isObjectLayer)throw new Error(g.name+' 必须是对象层');
            if(g.locked)throw new Error(g.name+' 已锁定，请先解锁图层');
            g.objects.forEach(function(o){
                if(all||(o.property('ghost.generatedBy')===OWNER&&!o.property('ghost.locked')))targets.push(o);
            });
        });
        map.macro(all?'清空全部主题装饰':'重置未锁定自动装饰',function(){
            targets.forEach(function(o){o.layer.removeObject(o);});
        });
        return targets.length;
    }
    function generateEnvironment(map, options) {
        options=options||{};
        requireMap(map);
        var seed=options.seed===undefined?20261012:options.seed;
        var density=options.density===undefined?12:options.density;
        // Keep the one-click action self-contained: a fresh map receives the
        // theme first, while existing devices remain in their own manual layer.
        applyTheme(map);
        var hay=edges(map),leaves=roomLeaves(map,{mode:'both'}),grassCount=grass(map,seed),scatterCount=scatter(map,{seed:seed,density:density,category:'mixed',region:options.region||null});
        return {hay:hay,leaves:leaves,grass:grassCount,scatter:scatterCount,total:hay+leaves+grassCount+scatterCount};
    }
    // ScriptDialog has WA_DeleteOnClose. Snapshot widget values BEFORE accept().
    function acceptValues(dialog, read, receive) {
        return function(){receive(read());dialog.accept();};
    }
    function message(text){var d=new Dialog('主题装饰');d.addLabel(text);d.addButton('关闭').clicked.connect(function(){d.accept();});d.exec();}
    function guarded(fn){return function(){try{fn(tiled.activeAsset);}catch(e){message(String(e.message||e));}};}
    var panel=null;
    function openPanel(){
        if(panel){panel.show();panel.raise();return panel;}
        var d=new Dialog('地图主题切换');panel=d;
        d.finished.connect(function(){panel=null;panelStatus=null;});
        d.addHeading('地图主题',true);
        // ScriptDialog has no tab container. Exclusive, styled page buttons
        // switch complete widget sets, including field labels.
        var tabs=[d.addButton('原始主题'),d.addButton('秋季地图')];
        tabs.forEach(function(tab){tab.checkable=true;tab.minimumHeight=32;tab.styleSheet='QPushButton { padding: 6px 24px; border: 0; border-bottom: 3px solid #c9c9c9; border-radius: 0; } QPushButton:checked { color: #2468cc; border-bottom-color: #2468cc; font-weight: bold; background: #edf3ff; }';});
        d.addNewRow();
        var status=d.addLabel('选择主题页签，再点击应用。每次地图操作均可撤销。');panelStatus=status;
        var pages=[[],[]],page=0,catalog=[],catalogMap=null,density,seed=20261012,adjustments,selectedPage=0,advanced=[];
        function widget(w){pages[page].push(w);return w;}
        function heading(text){return widget(d.addHeading(text));}
        function label(text){d.addNewRow();return widget(d.addLabel(text));}
        function field(text,make,inline){if(!inline)d.addNewRow();widget(d.addLabel(text));return widget(make());}
        function run(fn){return function(){try{var map=tiled.activeAsset;requireMap(map);var result=fn(map);status.text=result||'完成';}catch(e){status.text='未执行：'+e.message;}};}
        function button(text,fn){var b=widget(d.addButton(text));b.clicked.connect(run(fn));return b;}
        function selectPage(index){
            stopPlacement();
            selectedPage=index;
            tabs.forEach(function(tab,i){tab.checked=i===index;pages[i].forEach(function(w){w.visible=i===index;});});
            updateAdvanced();
            status.text=index===0?'原始主题：使用原始地图，不生成秋季装饰。':'秋季地图：应用主题后，可一键生成环境或单独放置设备。';
        }
        function updateAdvanced(){advanced.forEach(function(w){w.visible=selectedPage===1&&adjustments.checked;});d.size=Qt.size(d.width,1);}
        tabs.forEach(function(tab,i){tab.clicked.connect(function(){selectPage(i);});});
        heading('原始主题');
        label('恢复原始墙面和地面；此主题不使用秋季装饰。');
        label('应用时清理秋季自动装饰（含锁定项），隐藏秋季手动摆放物；可撤销。');
        button('应用原始主题',function(m){stopPlacement();applyOriginalTheme(m);return '已应用原始主题；秋季自动装饰已清理';});
        page=1;
        heading('秋季地图');
        button('应用秋季地图',function(m){stopPlacement();applyTheme(m);refreshCatalog(m);return '已应用秋季地图；可一键生成环境装饰';});
        heading('一键生成');
        label('草垛、小草、随机点缀、落叶堆一起生成，设备另行放置。');
        button('一键生成环境装饰',function(m){var result=generateEnvironment(m,{seed:seed,density:density.value,region:region(m)});return '已生成：草垛 '+result.hay+'、小草 '+result.grass+'、随机点缀 '+result.scatter+'、落叶堆 '+result.leaves;});
        density=field('密度 %',function(){return d.addNumberInput('',12);});density.minimum=1;density.maximum=60;
        d.addNewRow();adjustments=widget(d.addCheckBox('展开单项调整',false));var advancedStart=pages[1].length;
        heading('单项调整');
        button('生成草垛',function(m){return '已生成 '+edges(m)+' 个草垛';});
        button('生成小草',function(m){return '已放置 '+grass(m,seed)+' 丛小草';});
        button('生成随机点缀',function(m){return '已散布 '+scatter(m,{seed:seed,density:density.value,category:'mixed',region:region(m)})+' 处综合点缀';});
        var leafMode=field('落叶位置',function(){return d.addComboBox('',['贴墙 + 角落','仅贴墙','仅角落']);});
        button('生成落叶堆',function(m){return '已布置 '+roomLeaves(m,{mode:['both','edge','corner'][leafMode.currentIndex]})+' 处室内叶堆';});
        advanced=pages[1].slice(advancedStart);adjustments.toggled.connect(updateAdvanced);
        heading('设备放置');
        var device=field('设备',function(){return d.addComboBox('',[]);});
        var scale=field('缩放',function(){return d.addNumberInput('',1);},true);
        scale.minimum=.1;scale.maximum=3;scale.decimals=2;scale.value=1;
        var thumbnail=field('预览',function(){return d.addImage('',new Image());});
        function showAsset(){if(!catalogMap||!catalog[device.currentIndex])return;var t=load(catalogMap,'abandoned-decorations-formal.tsx').tile(catalog[device.currentIndex].id);thumbnail.image=t.image.copy(t.imageRect).scaled(140,90,Image.KeepAspectRatio,Image.SmoothTransformation);}
        function refreshCatalog(m){catalog=propCatalog(m);catalogMap=m;device.clear();device.addItems(catalog.map(function(a){return a.label;}));showAsset();}
        device.currentIndexChanged.connect(showAsset);
        button('刷新素材库',function(m){refreshCatalog(m);return '已加载 '+catalog.length+' 项素材';});
        button('放置一个',function(m){if(catalogMap!==m)refreshCatalog(m);if(!catalog[device.currentIndex])throw new Error('请刷新素材库');beginPlacement(m,catalog[device.currentIndex].id,scale.value);return '单击放置一个后自动结束 · H 镜像 · Shift 自由定位 · 右键/Esc 取消';});
        button('结束放置',function(){stopPlacement();return '可在地图中选择、拖动摆放物';});
        heading('装饰管理');
        button('锁定 / 解锁所选装饰',function(m){m.macro('锁定所选装饰',function(){m.selectedObjects.forEach(function(o){if(o.property('ghost.generatedBy')===OWNER)o.setProperty('ghost.locked',!o.property('ghost.locked'));});});return '所选装饰锁定状态已切换';});
        var resetMode=field('重置范围',function(){return d.addComboBox('',['未锁定自动装饰','全部主题装饰（含设备和锁定项）']);});
        button('重置装饰物',function(m){return '已清理 '+reset(m,resetMode.currentIndex===1)+' 个装饰物';});
        d.addNewRow();d.addButton('关闭面板').clicked.connect(function(){d.accept();});
        var active=tiled.activeAsset;
        selectPage(active&&active.isTileMap&&isAutumnTheme(active)?1:0);d.show();
        try{if(active&&active.isTileMap&&isAutumnTheme(active))refreshCatalog(active);}catch(e){status.text=e.message;}
        return d;
    }
    function setupUI(){
        ensurePlacementTool();
        var action=tiled.registerAction('GhostTheme_Panel',openPanel);action.text='地图主题切换…';
        tiled.extendMenu('GhostTools',[{separator:true},{action:'GhostTheme_Panel'}]);
    }
    return {placementCatalog:placementCatalog,propCatalog:propCatalog,candidate:candidate,placementError:placementError,previewMap:previewMap,beginPlacement:beginPlacement,stopPlacement:stopPlacement,wallRuns:wallRuns,grass:grass,roomLeaves:roomLeaves,generateEnvironment:generateEnvironment,openPanel:openPanel,reset:reset,acceptValues:acceptValues,setResourceRoot:function(path){headlessRoot=path;},applyTheme:applyTheme,applyOriginalTheme:applyOriginalTheme,scatter:scatter,edges:edges,place:place,bounds:bounds,setupUI:setupUI};
}());
// CLI scripts load the same implementation without requiring editor menus.
if (typeof GhostThemeHeadless === 'undefined') {
    try { GhostTheme.setupUI(); } catch (e) { tiled.log('[主题工具] 菜单初始化不可用（命令行无菜单）：' + e.message); }
}
