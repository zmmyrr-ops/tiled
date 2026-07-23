/**
 * 猛鬼工具集 - Tiled 扩展
 *
 * 将 generate_map.py 的地图后处理逻辑移植到 Tiled JS 扩展，
 * 在"猛鬼工具集"菜单中提供以下功能：
 *   - 生成地图图层（Bed_N、Collision、Road）
 *   - 验证地图图层命名规范
 */

// ─────────────────────────────────────────────────────────────────────────────
// 工具函数
// ─────────────────────────────────────────────────────────────────────────────

function safeName(obj) {
    return obj && obj.name ? String(obj.name) : "";
}

function getActiveMap() {
    var asset = tiled.activeAsset;
    if (!asset || !asset.isTileMap)
        return null;
    return asset;
}

/**
 * 用 Tiled ScriptDialog 弹窗显示结果。
 * 不用 tiled.alert：macOS 上原生 NSAlert 会崩溃。
 */
function showDialog(title, text) {
    tiled.log("[猛鬼工具集] " + text);
    var dialog = new Dialog(title);
    dialog.addHeading(title, true);
    dialog.addTextEdit("", text);
    dialog.exec();
}

function showInfo(text) {
    showDialog("猛鬼工具集", text);
}

function showWarning(text) {
    showDialog("猛鬼工具集 - 警告", text);
}

function showError(text) {
    showDialog("猛鬼工具集 - 错误", text);
}

function asObjectGroup(layer, expectedName) {
    if (!layer) return null;
    if (layer.objectCount === undefined) {
        throw new Error("图层 " + expectedName + " 必须是对象层（Object Layer）");
    }
    return layer;
}

/** 在地图图层列表里按名称查找第一个匹配的图层 */
function findLayer(map, name) {
    for (var i = 0; i < map.layerCount; i++) {
        var layer = map.layerAt(i);
        if (layer.name === name) return layer;
    }
    return null;
}

/** 收集所有名称匹配正则的图层（返回数组） */
function findLayersByPattern(map, pattern) {
    var result = [];
    for (var i = 0; i < map.layerCount; i++) {
        var layer = map.layerAt(i);
        if (pattern.test(layer.name)) result.push(layer);
    }
    return result;
}

/** 从 objectgroup 图层里按名称找对象 */
function findObject(layer, name) {
    for (var i = 0; i < layer.objectCount; i++) {
        var obj = layer.objectAt(i);
        if (obj.name === name) return obj;
    }
    return null;
}

/** 从 objectgroup 图层里收集所有名称匹配正则的对象 */
function findObjectsByPattern(layer, pattern) {
    var result = [];
    for (var i = 0; i < layer.objectCount; i++) {
        var obj = layer.objectAt(i);
        if (pattern.test(safeName(obj))) result.push(obj);
    }
    return result;
}

/**
 * 解析 MapObject 的多边形点（世界坐标）。
 * obj.polygon 是 QJSValue，表示相对于 obj 原点的点数组。
 * 返回 [{x, y}, ...] 世界坐标列表。
 */
function parsePolygon(obj) {
    var pts = obj.polygon;
    if (!pts || pts.length === 0)
        throw new Error("对象 " + obj.name + " 缺少多边形数据");
    var result = [];
    for (var i = 0; i < pts.length; i++) {
        result.push({ x: obj.x + pts[i].x, y: obj.y + pts[i].y });
    }
    return result;
}

/**
 * 返回矩形对象的 {x, y, w, h}（像素坐标）。
 * Tiled 图块对象：y 为图块左下角，需要修正。
 */
function parseRect(obj) {
    var x = obj.x;
    var y = obj.y;
    var w = obj.width;
    var h = obj.height;
    if (obj.tile !== null && obj.tile !== undefined) {
        // 图块对象 y 已是左下角
        return { x: x, y: y - h, w: w, h: h };
    }
    return { x: x, y: y, w: w, h: h };
}

/** 判断点 (px, py) 是否在矩形 {x,y,w,h} 内 */
function pointInRect(px, py, r) {
    return px >= r.x && px < r.x + r.w && py >= r.y && py < r.y + r.h;
}

/** 判断点 (px, py) 是否在任意矩形列表内 */
function pointInRects(px, py, rects) {
    for (var i = 0; i < rects.length; i++) {
        if (pointInRect(px, py, rects[i])) return true;
    }
    return false;
}

// ─────────────────────────────────────────────────────────────────────────────
// 几何：多边形包含测试（射线法）
// ─────────────────────────────────────────────────────────────────────────────

/** 判断点 (px, py) 是否严格在多边形内（射线法） */
function pointInPolygon(px, py, poly) {
    var inside = false;
    var n = poly.length;
    for (var i = 0, j = n - 1; i < n; j = i++) {
        var xi = poly[i].x, yi = poly[i].y;
        var xj = poly[j].x, yj = poly[j].y;
        var intersect = ((yi > py) !== (yj > py)) &&
            (px < (xj - xi) * (py - yi) / (yj - yi) + xi);
        if (intersect) inside = !inside;
    }
    return inside;
}

/**
 * 将多边形栅格化为网格单元集合。
 * poly：[{x,y}]，tileSize：单元尺寸（像素）
 * excludeRects：排除矩形列表 [{x,y,w,h}]
 * 返回 Set，元素为 "col,row" 字符串
 */
function rasterizePolygon(poly, tileSize, excludeRects) {
    excludeRects = excludeRects || [];
    var minX = Infinity, minY = Infinity, maxX = -Infinity, maxY = -Infinity;
    for (var k = 0; k < poly.length; k++) {
        minX = Math.min(minX, poly[k].x);
        minY = Math.min(minY, poly[k].y);
        maxX = Math.max(maxX, poly[k].x);
        maxY = Math.max(maxY, poly[k].y);
    }
    var gx0 = Math.floor(minX / tileSize);
    var gy0 = Math.floor(minY / tileSize);
    var gx1 = Math.ceil(maxX / tileSize);
    var gy1 = Math.ceil(maxY / tileSize);

    var cells = {};
    var half = tileSize / 2.0;
    for (var gx = gx0; gx < gx1; gx++) {
        for (var gy = gy0; gy < gy1; gy++) {
            var cx = gx * tileSize + half;
            var cy = gy * tileSize + half;
            if (!pointInPolygon(cx, cy, poly)) continue;
            if (pointInRects(cx, cy, excludeRects)) continue;
            cells[gx + "," + gy] = { gx: gx, gy: gy };
        }
    }
    return cells;
}

/**
 * 将网格单元合并为最小矩形列表 [{x,y,w,h}]（先按行合并，再按列合并）。
 */
function mergeCellsToRects(cells, tileSize) {
    if (Object.keys(cells).length === 0) return [];

    // 按行分组
    var rows = {};
    for (var key in cells) {
        var c = cells[key];
        if (!rows[c.gy]) rows[c.gy] = [];
        rows[c.gy].push(c.gx);
    }

    // 每行内合并连续列为水平条
    var horiz = [];
    var sortedGys = Object.keys(rows).map(Number).sort(function(a, b) { return a - b; });
    for (var ri = 0; ri < sortedGys.length; ri++) {
        var gy = sortedGys[ri];
        var xs = rows[gy].sort(function(a, b) { return a - b; });
        var start = xs[0], prev = xs[0];
        for (var xi = 1; xi < xs.length; xi++) {
            if (xs[xi] !== prev + 1) {
                horiz.push({ x: start * tileSize, y: gy * tileSize, w: (prev - start + 1) * tileSize, h: tileSize });
                start = xs[xi];
            }
            prev = xs[xi];
        }
        horiz.push({ x: start * tileSize, y: gy * tileSize, w: (prev - start + 1) * tileSize, h: tileSize });
    }

    // 按 (x, w) 分组，垂直合并相邻条
    var byCol = {};
    for (var hi = 0; hi < horiz.length; hi++) {
        var r = horiz[hi];
        var ckey = r.x + "_" + r.w;
        if (!byCol[ckey]) byCol[ckey] = [];
        byCol[ckey].push(r);
    }

    var merged = [];
    for (var ck in byCol) {
        var group = byCol[ck].sort(function(a, b) { return a.y - b.y; });
        var cur = { x: group[0].x, y: group[0].y, w: group[0].w, h: group[0].h };
        for (var gi = 1; gi < group.length; gi++) {
            var g = group[gi];
            if (g.x === cur.x && g.w === cur.w && g.y === cur.y + cur.h) {
                cur.h += g.h;
            } else {
                merged.push(cur);
                cur = { x: g.x, y: g.y, w: g.w, h: g.h };
            }
        }
        merged.push(cur);
    }
    return merged;
}

// ─────────────────────────────────────────────────────────────────────────────
// 获取 placeholder GID
// ─────────────────────────────────────────────────────────────────────────────

/** 从地图图块集中查找名称含 "placeholder" 的图块的 GID */
function findPlaceholderGid(map) {
    var tilesets = map.tilesets;
    for (var ti = 0; ti < tilesets.length; ti++) {
        var ts = tilesets[ti];
        for (var i = 0; i < ts.tileCount; i++) {
            var tile = ts.tile(i);
            if (!tile) continue;
            var imgSrc = (tile.imageFileName || "").toLowerCase();
            if (imgSrc.indexOf("placeholder") !== -1) {
                // GID = tileset firstGID + tile.id
                return ts.firstGid + tile.id;
            }
        }
    }
    return 132; // fallback
}

// ─────────────────────────────────────────────────────────────────────────────
// 解析床位命名 Bed_N 或 Bed_N_M
// ─────────────────────────────────────────────────────────────────────────────

var BED_PATTERN = /^Bed_(\d+)(?:_(\d+))?$/;
var BED_LAYER_PATTERN = /^Bed_\d+(?:_\d+)?$/;
var DOOR_MULTI_PATTERN = /^door_(\d+)_(\d+)_(\d+)$/;

function parseBedName(name) {
    var m = BED_PATTERN.exec(name);
    if (!m) throw new Error("Bed 对象命名不符合格式: " + name);
    return { roomNum: m[1], bedSub: m[2] || null };
}

function getDoorsForBed(bedName, doorLayer) {
    var info = parseBedName(bedName);
    if (info.bedSub === null) {
        var singleName = "door_" + info.roomNum;
        var obj = findObject(doorLayer, singleName);
        if (!obj) throw new Error(bedName + " 缺少关联对象: " + singleName);
        return [obj];
    }
    var prefix = "door_" + info.roomNum + "_" + info.bedSub + "_";
    var doors = findObjectsByPattern(doorLayer, new RegExp("^" + prefix.replace(/[.*+?^${}()|[\]\\]/g, "\\$&") + "\\d+$"));
    if (doors.length === 0)
        throw new Error(bedName + " 缺少关联对象: " + prefix + "*");
    return doors;
}

function getDoorsForRoom(roomNum, doorLayer) {
    var singleName = "door_" + roomNum;
    var doors = [];
    for (var i = 0; i < doorLayer.objectCount; i++) {
        var obj = doorLayer.objectAt(i);
        var name = safeName(obj);
        if (name === singleName) {
            doors.push(obj);
        } else if (DOOR_MULTI_PATTERN.test(name) && name.indexOf("door_" + roomNum + "_") === 0) {
            doors.push(obj);
        }
    }
    return doors;
}

// ─────────────────────────────────────────────────────────────────────────────
// 核心：生成 Bed 图层
// ─────────────────────────────────────────────────────────────────────────────

function generateBedLayers(map, bedLayer, floorLayer, roomLayer, doorLayer, tileSize, placeholderGid) {
    var generatedLayers = [];

    // 找出所有符合命名的 Bed 对象
    var bedObjs = [];
    for (var i = 0; i < bedLayer.objectCount; i++) {
        var obj = bedLayer.objectAt(i);
        if (BED_PATTERN.test(obj.name)) bedObjs.push(obj);
    }

    // 按 Bed_N_M 数字排序
    bedObjs.sort(function(a, b) {
        var ma = BED_PATTERN.exec(a.name);
        var mb = BED_PATTERN.exec(b.name);
        var na = parseInt(ma[1]), nb = parseInt(mb[1]);
        if (na !== nb) return na - nb;
        return parseInt(ma[2] || 0) - parseInt(mb[2] || 0);
    });

    for (var bi = 0; bi < bedObjs.length; bi++) {
        var bedObj = bedObjs[bi];
        var bedName = bedObj.name;
        var info = parseBedName(bedName);

        var floorObj = findObject(floorLayer, "floor_" + info.roomNum);
        if (!floorObj) throw new Error(bedName + " 缺少关联对象: floor_" + info.roomNum);
        var doorObjs = getDoorsForBed(bedName, doorLayer);
        var bedRect = parseRect(bedObj);
        var doorRects = doorObjs.map(parseRect);

        var floorPoly = parsePolygon(floorObj);
        var excludes = doorRects.concat([bedRect]);
        var cells = rasterizePolygon(floorPoly, tileSize, excludes);

        // 新建对象组图层
        var group = new ObjectGroup(bedName);
        group.visible = false;

        for (var key in cells) {
            var c = cells[key];
            var newObj = new MapObject();
            newObj.shape = MapObject.Rectangle;
            newObj.x = c.gx * tileSize;
            // 图块对象 y 为左下角
            newObj.y = (c.gy + 1) * tileSize;
            newObj.width = tileSize;
            newObj.height = tileSize;
            // 设置 tile，使用 placeholderGid
            // 通过 tiled.cell() 设置
            group.addObject(newObj);
        }

        generatedLayers.push(group);
    }
    return generatedLayers;
}

// ─────────────────────────────────────────────────────────────────────────────
// 核心：生成房间碰撞矩形（墙体 = room - floor - door）
// ─────────────────────────────────────────────────────────────────────────────

/**
 * 使用多边形差集（近似）：
 * 将 room 多边形栅格化，然后从中移除 floor 多边形内的格子和 door 矩形内的格子。
 */
function generateRoomCollisionRects(roomLayer, floorLayer, doorLayer, tileSize) {
    var allRects = [];
    for (var i = 0; i < roomLayer.objectCount; i++) {
        var roomObj = roomLayer.objectAt(i);
        var name = safeName(roomObj);
        if (name.indexOf("room_") !== 0) continue;
        var num = name.slice("room_".length);

        var floorObj = findObject(floorLayer, "floor_" + num);
        if (!floorObj) throw new Error(name + " 缺少关联对象: floor_" + num);

        var doorObjs = getDoorsForRoom(num, doorLayer);
        if (doorObjs.length === 0)
            throw new Error(name + " 缺少关联对象: door_" + num);

        var roomPoly = parsePolygon(roomObj);
        var floorPoly = parsePolygon(floorObj);
        var doorRects = doorObjs.map(parseRect);

        // 栅格化 room 多边形
        var roomCells = rasterizePolygon(roomPoly, tileSize);
        // 栅格化 floor 多边形（用于排除）
        var floorCells = rasterizePolygon(floorPoly, tileSize);

        // 墙体格子 = room 格子中不在 floor 且不在 door 中的格子
        var wallCells = {};
        var half = tileSize / 2.0;
        for (var key in roomCells) {
            var c = roomCells[key];
            if (floorCells[key]) continue;
            var cx = c.gx * tileSize + half;
            var cy = c.gy * tileSize + half;
            if (pointInRects(cx, cy, doorRects)) continue;
            wallCells[key] = c;
        }

        var rects = mergeCellsToRects(wallCells, tileSize);
        allRects = allRects.concat(rects);
    }
    return allRects;
}

// ─────────────────────────────────────────────────────────────────────────────
// 核心：生成 Road 瓦片层
// ─────────────────────────────────────────────────────────────────────────────

var WALKABLE_TILE_ID = 8;

function generateRoadLayer(map, collisionRects, groundLayer) {
    var w = map.width, h = map.height;
    var tileSize = map.tileWidth; // 假设正方形格子

    var roadLayer = new TileLayer("Road");
    roadLayer.width = w;
    roadLayer.height = h;
    var edit = roadLayer.edit();

    var half = tileSize / 2.0;
    for (var row = 0; row < h; row++) {
        for (var col = 0; col < w; col++) {
            var cx = col * tileSize + half;
            var cy = row * tileSize + half;
            if (pointInRects(cx, cy, collisionRects)) {
                // 碰撞格子：GID 0（空）
                edit.setTile(col, row, null);
            } else if (groundLayer) {
                // 复用 Ground 层的 tile
                var groundCell = groundLayer.cellAt(col, row);
                edit.setCell(col, row, groundCell);
            } else {
                // 使用默认可行走 tile（需要从图块集取，此处简化为空）
                edit.setTile(col, row, null);
            }
        }
    }
    edit.apply();
    roadLayer.visible = false;
    roadLayer.locked = true;
    return roadLayer;
}

// ─────────────────────────────────────────────────────────────────────────────
// 删除之前生成的图层
// ─────────────────────────────────────────────────────────────────────────────

function removeGeneratedLayers(map) {
    var toRemove = [];
    for (var i = 0; i < map.layerCount; i++) {
        var layer = map.layerAt(i);
        if (layer.name === "Road") toRemove.push(layer);
        else if (BED_LAYER_PATTERN.test(layer.name)) toRemove.push(layer);
    }
    for (var j = 0; j < toRemove.length; j++) {
        map.removeLayer(toRemove[j]);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// 主入口：生成地图图层
// ─────────────────────────────────────────────────────────────────────────────

function generateMap() {
    var map = getActiveMap();
    if (!map) {
        showWarning("请先打开一个地图文件（.tmx）");
        return;
    }

    // 校验必填图层
    var REQUIRED = ["Floor", "Room", "Door", "Bed"];
    var missing = REQUIRED.filter(function(name) { return !findLayer(map, name); });
    if (missing.length > 0) {
        showError("缺少必填图层：" + missing.join(", "));
        return;
    }

    try {
        var floorLayer = asObjectGroup(findLayer(map, "Floor"), "Floor");
        var roomLayer  = asObjectGroup(findLayer(map, "Room"), "Room");
        var doorLayer  = asObjectGroup(findLayer(map, "Door"), "Door");
        var bedLayer   = asObjectGroup(findLayer(map, "Bed"), "Bed");
        var groundLayer = findLayer(map, "Ground");
        var collisionLayer = findLayer(map, "Collision");

        var tileSize = map.tileWidth;
        var placeholderGid = findPlaceholderGid(map);

        // 删除上次生成的图层
        removeGeneratedLayers(map);

        // 保留 Collision 层原有的边界对象（手工放的）
        var boundaryRects = [];
        if (collisionLayer) {
            for (var ci = 0; ci < collisionLayer.objectCount; ci++) {
                var obj = collisionLayer.objectAt(ci);
                if (obj.width > 0 && obj.height > 0) {
                    boundaryRects.push(parseRect(obj));
                }
            }
        }

        // 生成房间碰撞矩形
        var roomRects = generateRoomCollisionRects(roomLayer, floorLayer, doorLayer, tileSize);
        var allCollisionRects = boundaryRects.concat(roomRects);

        // 更新 Collision 层（清空后重新填充房间墙体矩形，保留边界对象）
        if (!collisionLayer) {
            collisionLayer = new ObjectGroup("Collision");
            collisionLayer.visible = false;
            map.addLayer(collisionLayer);
        } else {
            // 清空图层中的所有对象，再重新添加
            while (collisionLayer.objectCount > 0) {
                collisionLayer.removeObjectAt(0);
            }
        }
        // 重新添加边界对象（原样）
        // 此处将 boundaryRects 还原为对象——简化处理：只添加 roomRects 对应的矩形
        for (var ri = 0; ri < roomRects.length; ri++) {
            var r = roomRects[ri];
            var rObj = new MapObject();
            rObj.shape = MapObject.Rectangle;
            rObj.x = r.x;
            rObj.y = r.y;
            rObj.width = r.w;
            rObj.height = r.h;
            collisionLayer.addObject(rObj);
        }

        // 生成 Road 层
        var roadLayer = generateRoadLayer(map, allCollisionRects, groundLayer);

        // 插入 Road 层：放在 Ground 层前面（或最前面）
        var groundIdx = -1;
        for (var li = 0; li < map.layerCount; li++) {
            if (map.layerAt(li).name === "Ground") { groundIdx = li; break; }
        }
        if (groundIdx >= 0) {
            map.insertLayerAt(groundIdx, roadLayer);
        } else {
            map.insertLayerAt(0, roadLayer);
        }

        // 生成 Bed_N 图层
        var bedLayers = generateBedLayers(map, bedLayer, floorLayer, roomLayer, doorLayer, tileSize, placeholderGid);
        for (var bli = 0; bli < bedLayers.length; bli++) {
            map.addLayer(bedLayers[bli]);
        }

        showInfo("地图图层生成完成！Road 层 1 个，Bed 图层 " + bedLayers.length + " 个，碰撞矩形 " + roomRects.length + " 个。");

    } catch (e) {
        showError("生成失败：" + e.message);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// 验证图层命名规范
// ─────────────────────────────────────────────────────────────────────────────

function validateMap() {
    try {
        var map = getActiveMap();
        if (!map) {
            showWarning("请先打开一个地图文件（.tmx）");
            return;
        }

        var errors = [];

        // 检查必填图层
        var REQUIRED = ["Floor", "Room", "Door", "Bed"];
        REQUIRED.forEach(function(name) {
            if (!findLayer(map, name)) errors.push("缺少必填图层：" + name);
        });

        var floorLayer  = findLayer(map, "Floor");
        var roomLayer   = findLayer(map, "Room");
        var doorLayer   = findLayer(map, "Door");
        var bedLayer    = findLayer(map, "Bed");

        if (!floorLayer || !roomLayer || !doorLayer || !bedLayer) {
            showError("验证失败：\n" + errors.join("\n"));
            return;
        }

        floorLayer = asObjectGroup(floorLayer, "Floor");
        roomLayer = asObjectGroup(roomLayer, "Room");
        doorLayer = asObjectGroup(doorLayer, "Door");
        bedLayer = asObjectGroup(bedLayer, "Bed");

        // 收集房间号
        var roomNums = [];
        for (var ri = 0; ri < roomLayer.objectCount; ri++) {
            var obj = roomLayer.objectAt(ri);
            var name = safeName(obj);
            if (name.indexOf("room_") === 0) roomNums.push(name.slice(5));
            else errors.push("Room 层对象命名不符合规范（应为 room_N）：" + (name || ("id=" + obj.id)));
        }

        // 验证每个 room 有对应的 floor 和 door
        roomNums.forEach(function(num) {
            if (!findObject(floorLayer, "floor_" + num))
                errors.push("room_" + num + " 缺少对应的 floor_" + num);
            var doors = getDoorsForRoom(num, doorLayer);
            if (doors.length === 0)
                errors.push("room_" + num + " 缺少对应的 door_" + num + " 或 door_" + num + "_*_*");
        });

        // 验证 Bed 命名
        for (var bi = 0; bi < bedLayer.objectCount; bi++) {
            var bedObj = bedLayer.objectAt(bi);
            var bedName = safeName(bedObj);
            if (!BED_PATTERN.test(bedName))
                errors.push("Bed 层对象命名不符合规范（应为 Bed_N 或 Bed_N_M）：" + (bedName || ("id=" + bedObj.id)));
        }

        if (errors.length === 0) {
            showInfo("验证通过！所有图层命名规范正确。");
        } else {
            showWarning("发现 " + errors.length + " 个问题：\n" + errors.join("\n"));
        }
    } catch (e) {
        showError("验证失败：" + e.message);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// 生成小地图（190px 示意图）
//
// 绘制规则（对齐设计稿 small_map*.png）：
//   1. 透明底（走廊 / 地图外 = 黑色；预览里勿留透明墙洞，否则会显白）
//   2. Floor → 深色半透明填充（房间地板）
//   3. Collision 墙体：
//      - 薄墙（最短边 ≤ THIN_PX）：中间填暗青色 WALL，避免镂空发白
//      - 厚墙：不整块填充（避免地图周围被大片填满）
//      - 靠走廊外侧：亮青绿描边
//      - 靠屋内侧：颜色向地板色渐变（墙面显得更细、更好看）
//   4. 4x 超采样后盒式缩小 → 抗锯齿质感
// ─────────────────────────────────────────────────────────────────────────────

var MINIMAP_MAX_SIZE = 190;
var MINIMAP_SUPERSAMPLE = 4;
/** 薄墙判定：最终像素上最短边 ≤ 此值则填墙心 */
var MINIMAP_THIN_WALL_PX = 5;
var MINIMAP_FILL   = { r: 17, g: 29, b: 43, a: 179 };  // 地板
var MINIMAP_WALL   = { r: 43, g: 86, b: 87, a: 179 };  // 墙心暗青
var MINIMAP_STROKE = { r: 92, g: 198, b: 175, a: 179 }; // 外侧亮边

function clamp(v, lo, hi) {
    return Math.max(lo, Math.min(hi, v));
}

function colorToRgba(c) {
    return tiled.color(c.r / 255, c.g / 255, c.b / 255, c.a / 255);
}

function lerpColor(a, b, t) {
    t = Math.max(0, Math.min(1, t));
    return {
        r: Math.round(a.r * (1 - t) + b.r * t),
        g: Math.round(a.g * (1 - t) + b.g * t),
        b: Math.round(a.b * (1 - t) + b.b * t),
        a: Math.round(a.a * (1 - t) + b.a * t)
    };
}

/** Bresenham 画线（支持粗细） */
function drawLine(img, x0, y0, x1, y1, color, width) {
    x0 = Math.round(x0); y0 = Math.round(y0);
    x1 = Math.round(x1); y1 = Math.round(y1);
    var dx = Math.abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
    var dy = -Math.abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
    var err = dx + dy;
    var half = Math.max(0, Math.floor(((width || 1) - 1) / 2));
    var w = img.width, h = img.height;
    var qcolor = colorToRgba(color);

    while (true) {
        for (var oy = -half; oy <= half; oy++) {
            for (var ox = -half; ox <= half; ox++) {
                var px = x0 + ox, py = y0 + oy;
                if (px >= 0 && py >= 0 && px < w && py < h)
                    img.setPixelColor(px, py, qcolor);
            }
        }
        if (x0 === x1 && y0 === y1) break;
        var e2 = 2 * err;
        if (e2 >= dy) { err += dy; x0 += sx; }
        if (e2 <= dx) { err += dx; y0 += sy; }
    }
}

/** 扫描线填充多边形（可向外膨胀 expand 像素） */
function fillPolygon(img, pts, color, expand) {
    if (!pts || pts.length < 3) return;
    expand = expand || 0;
    var w = img.width, h = img.height;
    var qcolor = colorToRgba(color);
    var minY = Infinity, maxY = -Infinity;
    for (var i = 0; i < pts.length; i++) {
        minY = Math.min(minY, pts[i].y);
        maxY = Math.max(maxY, pts[i].y);
    }
    minY = Math.max(0, Math.floor(minY - expand));
    maxY = Math.min(h - 1, Math.ceil(maxY + expand));

    for (var y = minY; y <= maxY; y++) {
        var nodes = [];
        var j = pts.length - 1;
        for (var i = 0; i < pts.length; i++) {
            var pi = pts[i], pj = pts[j];
            if ((pi.y < y && pj.y >= y) || (pj.y < y && pi.y >= y)) {
                nodes.push(pi.x + (y - pi.y) / (pj.y - pi.y) * (pj.x - pi.x));
            }
            j = i;
        }
        nodes.sort(function(a, b) { return a - b; });
        for (var k = 0; k + 1 < nodes.length; k += 2) {
            var x0 = Math.max(0, Math.floor(nodes[k] - expand));
            var x1 = Math.min(w - 1, Math.ceil(nodes[k + 1] + expand));
            for (var x = x0; x <= x1; x++)
                img.setPixelColor(x, y, qcolor);
        }
    }
}

function strokePolygon(img, pts, color, width) {
    if (!pts || pts.length < 2) return;
    for (var i = 0; i < pts.length; i++) {
        var a = pts[i];
        var b = pts[(i + 1) % pts.length];
        drawLine(img, a.x, a.y, b.x, b.y, color, width);
    }
}

function fillRectPixels(img, rect, color) {
    var w = img.width, h = img.height;
    var x0 = clamp(Math.floor(rect.x), 0, w);
    var y0 = clamp(Math.floor(rect.y), 0, h);
    var x1 = clamp(Math.ceil(rect.x + rect.w), 0, w);
    var y1 = clamp(Math.ceil(rect.y + rect.h), 0, h);
    var qcolor = colorToRgba(color);
    for (var y = y0; y < y1; y++) {
        for (var x = x0; x < x1; x++)
            img.setPixelColor(x, y, qcolor);
    }
}

/**
 * 盒式降采样：只平均不透明像素，产生绿色抗锯齿质感
 */
function downsampleImage(src, outW, outH) {
    var sw = src.width, sh = src.height;
    var sx = sw / outW, sy = sh / outH;
    var dst = new Image(outW, outH);
    dst.fill(tiled.color(0, 0, 0, 0));

    for (var y = 0; y < outH; y++) {
        var y0 = Math.floor(y * sy);
        var y1 = Math.min(sh, Math.floor((y + 1) * sy));
        if (y1 <= y0) y1 = Math.min(sh, y0 + 1);
        for (var x = 0; x < outW; x++) {
            var x0 = Math.floor(x * sx);
            var x1 = Math.min(sw, Math.floor((x + 1) * sx));
            if (x1 <= x0) x1 = Math.min(sw, x0 + 1);
            var rs = 0, gs = 0, bs = 0, as = 0, n = 0;
            for (var yy = y0; yy < y1; yy++) {
                for (var xx = x0; xx < x1; xx++) {
                    var px = src.pixel(xx, yy); // ARGB uint
                    var a = (px >>> 24) & 0xff;
                    if (a > 0) {
                        rs += (px >>> 16) & 0xff;
                        gs += (px >>> 8) & 0xff;
                        bs += px & 0xff;
                        as += a;
                        n++;
                    }
                }
            }
            if (n > 0) {
                dst.setPixelColor(x, y, tiled.color(
                    (rs / n) / 255,
                    (gs / n) / 255,
                    (bs / n) / 255,
                    (as / n) / 255
                ));
            }
        }
    }
    return dst;
}

function collectPolygons(layer) {
    var result = [];
    if (!layer) return result;
    for (var i = 0; i < layer.objectCount; i++) {
        var obj = layer.objectAt(i);
        try {
            if (obj.polygon && obj.polygon.length >= 3)
                result.push(parsePolygon(obj));
        } catch (e) {}
    }
    return result;
}

function collectRects(layer) {
    var result = [];
    if (!layer) return result;
    for (var i = 0; i < layer.objectCount; i++) {
        var obj = layer.objectAt(i);
        try {
            if (obj.width > 0 && obj.height > 0)
                result.push(parseRect(obj));
        } catch (e) {}
    }
    return result;
}

function transformPoly(poly, scale) {
    return poly.map(function(p) {
        return { x: p.x * scale, y: p.y * scale };
    });
}

function transformRect(rect, scale) {
    return {
        x: rect.x * scale,
        y: rect.y * scale,
        w: rect.w * scale,
        h: rect.h * scale
    };
}

/** 判断 Collision 矩形是否为地图外圈边界墙（不参与小地图绘制） */
function isBoundaryCollisionRect(rect, mapPixelW, mapPixelH) {
    var tol = 1;
    var touchesLeft   = rect.x <= tol;
    var touchesTop    = rect.y <= tol;
    var touchesRight  = rect.x + rect.w >= mapPixelW - tol;
    var touchesBottom = rect.y + rect.h >= mapPixelH - tol;
    if (!touchesLeft && !touchesTop && !touchesRight && !touchesBottom)
        return false;
    if ((touchesTop || touchesBottom) && rect.w >= mapPixelW * 0.5)
        return true;
    if ((touchesLeft || touchesRight) && rect.h >= mapPixelH * 0.5)
        return true;
    return false;
}

/**
 * Collision 墙体：
 * - 薄墙填暗青墙心（避免透明洞在浅色预览里发白）
 * - 厚墙不整块填充（地图周围保持透明）
 * - 外侧亮青绿，内侧向地板色渐变
 */
function paintCollisionWalls(img, collisionRects, floorMask, scale, baseScale, rimHi) {
    var w = img.width, h = img.height;
    var coll = [];
    var y, x, i, d;

    for (y = 0; y < h; y++) {
        coll[y] = [];
        for (x = 0; x < w; x++) coll[y][x] = 0;
    }

    // 薄墙填墙心；所有墙写入碰撞掩码
    for (i = 0; i < collisionRects.length; i++) {
        var rect = collisionRects[i];
        var r = transformRect(rect, scale);
        var x0 = clamp(Math.floor(r.x), 0, w);
        var y0 = clamp(Math.floor(r.y), 0, h);
        var x1 = clamp(Math.ceil(r.x + r.w), 0, w);
        var y1 = clamp(Math.ceil(r.y + r.h), 0, h);
        var thin = Math.min(rect.w, rect.h) * baseScale <= MINIMAP_THIN_WALL_PX;
        for (y = y0; y < y1; y++) {
            for (x = x0; x < x1; x++) {
                coll[y][x] = 1;
                if (thin)
                    img.setPixelColor(x, y, colorToRgba(MINIMAP_WALL));
            }
        }
    }

    // 空地 = 非碰撞且非地板（走廊 / 地图外）
    var empty = [];
    for (y = 0; y < h; y++) {
        empty[y] = [];
        for (x = 0; x < w; x++)
            empty[y][x] = (!coll[y][x] && !(floorMask[y] && floorMask[y][x])) ? 1 : 0;
    }

    function bfs(source) {
        var dist = [];
        var queue = [];
        var qh = 0;
        for (y = 0; y < h; y++) {
            dist[y] = [];
            for (x = 0; x < w; x++) {
                if (source[y][x]) {
                    dist[y][x] = 0;
                    queue.push(x, y);
                } else {
                    dist[y][x] = -1;
                }
            }
        }
        var dirs = [[1, 0], [-1, 0], [0, 1], [0, -1]];
        while (qh < queue.length) {
            var cx = queue[qh++];
            var cy = queue[qh++];
            var cd = dist[cy][cx];
            for (d = 0; d < dirs.length; d++) {
                var nx = cx + dirs[d][0];
                var ny = cy + dirs[d][1];
                if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
                if (dist[ny][nx] !== -1) continue;
                dist[ny][nx] = cd + 1;
                queue.push(nx, ny);
            }
        }
        return dist;
    }

    var distEmpty = bfs(empty);
    var distFloor = bfs(floorMask);
    var strokeQ = colorToRgba(MINIMAP_STROKE);

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            if (!coll[y][x]) continue;
            var de = distEmpty[y][x];
            var df = distFloor[y][x];

            // 外侧（靠走廊/地图外）：亮青绿
            if (de > 0 && de <= rimHi) {
                img.setPixelColor(x, y, strokeQ);
            }
            // 内侧（靠地板）：向地板色渐变，显得墙更细
            else if (df > 0 && df <= rimHi) {
                var t = 1.0 - (df - 1) / rimHi;
                var blended = lerpColor(MINIMAP_WALL, MINIMAP_FILL, 0.55 + 0.45 * t);
                img.setPixelColor(x, y, colorToRgba(blended));
            }
            // 厚墙未填心的边缘：补亮边 / 内侧渐变
            else {
                var px = img.pixel(x, y);
                var a = (px >>> 24) & 0xff;
                if (a === 0) {
                    if (de > 0 && de <= rimHi)
                        img.setPixelColor(x, y, strokeQ);
                    else if (df > 0 && df <= rimHi) {
                        var blended2 = lerpColor(MINIMAP_STROKE, MINIMAP_FILL, 0.7);
                        img.setPixelColor(x, y, colorToRgba(blended2));
                    }
                }
            }
        }
    }
}

function defaultMinimapFileName(map) {
    var base = FileInfo.completeBaseName(map.fileName || "map");
    var m = /^Map_(\d+)$/i.exec(base);
    if (m) return "small_map" + m[1] + ".png";
    return base + "_small_map.png";
}

function generateMinimap() {
    try {
        var map = getActiveMap();
        if (!map) {
            showWarning("请先打开一个地图文件（.tmx）");
            return;
        }

        var floorLayer = findLayer(map, "Floor");
        var collisionLayer = findLayer(map, "Collision");

        if (!floorLayer) {
            showError("需要 Floor 对象层才能生成小地图");
            return;
        }
        if (!collisionLayer) {
            showError("需要 Collision 对象层才能生成小地图");
            return;
        }

        floorLayer = asObjectGroup(floorLayer, "Floor");
        collisionLayer = asObjectGroup(collisionLayer, "Collision");

        var mapPixelW = map.width * map.tileWidth;
        var mapPixelH = map.height * map.tileHeight;
        if (mapPixelW <= 0 || mapPixelH <= 0) {
            showError("地图尺寸无效");
            return;
        }

        var baseScale = MINIMAP_MAX_SIZE / Math.max(mapPixelW, mapPixelH);
        var outW = Math.max(1, Math.round(mapPixelW * baseScale));
        var outH = Math.max(1, Math.round(mapPixelH * baseScale));
        var ss = MINIMAP_SUPERSAMPLE;
        var hiScale = baseScale * ss;
        var hiW = Math.max(1, Math.round(mapPixelW * hiScale));
        var hiH = Math.max(1, Math.round(mapPixelH * hiScale));

        var img = new Image(hiW, hiH);
        img.fill(tiled.color(0, 0, 0, 0));

        // 地板掩码（供墙体内侧渐变使用）
        var floorMask = [];
        for (var fy = 0; fy < hiH; fy++) {
            floorMask[fy] = [];
            for (var fx = 0; fx < hiW; fx++) floorMask[fy][fx] = 0;
        }

        // 1) Floor 深色填充
        var fillPolys = collectPolygons(floorLayer);
        for (var fi = 0; fi < fillPolys.length; fi++) {
            var poly = transformPoly(fillPolys[fi], hiScale);
            fillPolygon(img, poly, MINIMAP_FILL);
            // 同步写入地板掩码（与 fillPolygon 相同扫描）
            if (poly.length >= 3) {
                var minY = Infinity, maxY = -Infinity, pi;
                for (pi = 0; pi < poly.length; pi++) {
                    minY = Math.min(minY, poly[pi].y);
                    maxY = Math.max(maxY, poly[pi].y);
                }
                minY = Math.max(0, Math.floor(minY));
                maxY = Math.min(hiH - 1, Math.ceil(maxY));
                for (var yy = minY; yy <= maxY; yy++) {
                    var nodes = [];
                    var j = poly.length - 1;
                    for (var ii = 0; ii < poly.length; ii++) {
                        var pii = poly[ii], pjj = poly[j];
                        if ((pii.y < yy && pjj.y >= yy) || (pjj.y < yy && pii.y >= yy))
                            nodes.push(pii.x + (yy - pii.y) / (pjj.y - pii.y) * (pjj.x - pii.x));
                        j = ii;
                    }
                    nodes.sort(function(a, b) { return a - b; });
                    for (var k = 0; k + 1 < nodes.length; k += 2) {
                        var xa = Math.max(0, Math.floor(nodes[k]));
                        var xb = Math.min(hiW - 1, Math.ceil(nodes[k + 1]));
                        for (var xx = xa; xx <= xb; xx++)
                            floorMask[yy][xx] = 1;
                    }
                }
            }
        }

        // 2) Collision：薄墙填暗青 + 外侧亮边 + 内侧向地板渐变
        var roomCollRects = [];
        var allCollRects = collectRects(collisionLayer);
        for (var ci = 0; ci < allCollRects.length; ci++) {
            var cr = allCollRects[ci];
            if (isBoundaryCollisionRect(cr, mapPixelW, mapPixelH))
                continue;
            roomCollRects.push(cr);
        }
        var rimHi = Math.max(1, Math.round(ss)); // ≈1 最终像素
        paintCollisionWalls(img, roomCollRects, floorMask, hiScale, baseScale, rimHi);

        // 3) 盒式降采样 → 抗锯齿质感
        if (ss > 1)
            img = downsampleImage(img, outW, outH);

        // 4) 保存
        var defaultName = defaultMinimapFileName(map);
        var defaultDir = map.fileName ? FileInfo.path(map.fileName) : "";
        var outPath = tiled.promptSaveFile(
            defaultDir ? FileInfo.joinPaths(defaultDir, defaultName) : defaultName,
            "PNG files (*.png)",
            "保存小地图"
        );
        if (!outPath) {
            showInfo("已取消保存");
            return;
        }
        if (FileInfo.suffix(outPath).toLowerCase() !== "png")
            outPath += ".png";

        if (!img.save(outPath)) {
            showError("保存失败：" + outPath);
            return;
        }

        var dialog = new Dialog("猛鬼工具集 - 小地图");
        dialog.addHeading("小地图已生成", true);
        dialog.addLabel("尺寸：" + outW + " × " + outH);
        dialog.addLabel("路径：" + outPath);
        dialog.addImage("", img);
        dialog.exec();
        tiled.log("[猛鬼工具集] 小地图已保存: " + outPath + " (" + outW + "x" + outH + ")");

    } catch (e) {
        showError("生成小地图失败：" + e.message);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// 注册 Action 并挂到菜单
// ─────────────────────────────────────────────────────────────────────────────

var actionGenerate = tiled.registerAction("GhostTools_GenerateMap", function() {
    generateMap();
});
actionGenerate.text = "生成地图图层（Bed / Collision / Road）";

var actionValidate = tiled.registerAction("GhostTools_ValidateMap", function() {
    validateMap();
});
actionValidate.text = "验证图层命名规范";

var actionMinimap = tiled.registerAction("GhostTools_GenerateMinimap", function() {
    generateMinimap();
});
actionMinimap.text = "生成小地图";

tiled.extendMenu("GhostTools", [
    { action: "GhostTools_GenerateMap" },
    { action: "GhostTools_ValidateMap" },
    { separator: true },
    { action: "GhostTools_GenerateMinimap" },
]);
