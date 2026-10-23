/**
 * 猛鬼工具集 - Tiled 扩展
 *
 * 将 generate_map.py 的地图后处理逻辑移植到 Tiled JS 扩展，
 * 在"猛鬼工具集"菜单中提供以下功能：
 *   - 生成地图图层（Bed_N、Collision；Road 由人工绘制）
 *   - 验证地图图层命名规范（含 Bed_x 是否在 room_x 范围内）
 *   - 生成小地图
 *
 * 「更新日志」由独立扩展 extensions/changelog 挂到同一菜单。
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

function asTileLayer(layer, expectedName) {
    if (!layer) return null;
    if (layer.cellAt === undefined) {
        throw new Error("图层 " + expectedName + " 必须是瓦片层（Tile Layer）");
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

/** 将矩形写入对象层（对应 generate_map.py 的 create_rect_object） */
function addRectMapObject(layer, rect) {
    var obj = new MapObject();
    obj.shape = MapObject.Rectangle;
    obj.x = rect.x;
    obj.y = rect.y;
    obj.width = rect.w;
    obj.height = rect.h;
    layer.addObject(obj);
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

/**
 * 从地图图块集中查找 placeholder 图块（优先 placeholder01）。
 * 返回 Tile 对象；找不到则返回 null。
 */
function findPlaceholderTile(map) {
    var tilesets = map.tilesets;
    var fallback = null;
    for (var ti = 0; ti < tilesets.length; ti++) {
        var ts = tilesets[ti];
        for (var i = 0; i < ts.tileCount; i++) {
            var tile = ts.findTile ? ts.findTile(i) : ts.tile(i);
            if (!tile) continue;
            var imgSrc = (tile.imageFileName || "").toLowerCase();
            if (imgSrc.indexOf("placeholder01") !== -1)
                return tile;
            if (!fallback && imgSrc.indexOf("placeholder") !== -1)
                fallback = tile;
        }
    }
    return fallback;
}

// ─────────────────────────────────────────────────────────────────────────────
// 解析床位命名 Bed_N 或 Bed_N_M
// ─────────────────────────────────────────────────────────────────────────────

var BED_PATTERN = /^Bed_(\d+)(?:_(\d+))?$/;
var BED_LAYER_PATTERN = /^Bed_\d+(?:_\d+)?$/;
/** 生成后的 Bed 输出图层：Bed_1 … Bed_8 */
var BED_OUTPUT_LAYER_PATTERN = /^Bed_([1-8])$/;
var DOOR_MULTI_PATTERN = /^door_(\d+)_(\d+)_(\d+)$/;

/** 判断矩形四个角是否都在多边形内（用于 Bed 图块不超出 room 范围） */
function rectWithinPolygon(rect, poly) {
    var corners = [
        { x: rect.x, y: rect.y },
        { x: rect.x + rect.w, y: rect.y },
        { x: rect.x, y: rect.y + rect.h },
        { x: rect.x + rect.w, y: rect.y + rect.h }
    ];
    for (var i = 0; i < corners.length; i++) {
        if (!pointInPolygon(corners[i].x, corners[i].y, poly))
            return false;
    }
    return true;
}

/** 收集 Room 层 room_N → 多边形 */
function collectRoomPolygons(roomLayer) {
    var roomPolys = {};
    for (var ri = 0; ri < roomLayer.objectCount; ri++) {
        var roomObj = roomLayer.objectAt(ri);
        var name = safeName(roomObj);
        var m = /^room_(\d+)$/.exec(name);
        if (!m) continue;
        roomPolys[m[1]] = parsePolygon(roomObj);
    }
    return roomPolys;
}

/** Bed_1…Bed_8 图层中的图块不得超出对应 room_x 多边形 */
function validateBedLayersWithinRooms(map, roomLayer, errors) {
    var roomPolys = {};
    try {
        roomPolys = collectRoomPolygons(roomLayer);
    } catch (e) {
        errors.push("Room 层多边形解析失败：" + e.message);
        return;
    }

    var bedLayers = findLayersByPattern(map, BED_OUTPUT_LAYER_PATTERN);
    for (var li = 0; li < bedLayers.length; li++) {
        var layer = bedLayers[li];
        var lm = BED_OUTPUT_LAYER_PATTERN.exec(layer.name);
        var roomNum = lm[1];
        var poly = roomPolys[roomNum];
        if (!poly) {
            errors.push("Bed_" + roomNum + " 缺少对应的 room_" + roomNum + " 范围");
            continue;
        }

        var bedLayer;
        try {
            bedLayer = asObjectGroup(layer, layer.name);
        } catch (e) {
            errors.push(e.message);
            continue;
        }

        var tileSize = map.tileWidth;
        for (var oi = 0; oi < bedLayer.objectCount; oi++) {
            var obj = bedLayer.objectAt(oi);
            var rect;
            try {
                rect = parseRect(obj);
            } catch (e) {
                errors.push("Bed_" + roomNum + " 对象解析失败：" + e.message);
                continue;
            }
            if (rectWithinPolygon(rect, poly))
                continue;

            var cx = Math.floor((rect.x + rect.w / 2) / tileSize);
            var cy = Math.floor((rect.y + rect.h / 2) / tileSize);
            errors.push("Bed_" + roomNum + " 存在超出 room_" + roomNum +
                " 范围的图块（约格子 " + cx + ", " + cy + "）");
        }
    }
}

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

function generateBedLayers(map, bedLayer, floorLayer, roomLayer, doorLayer, tileSize, placeholderTile) {
    if (!placeholderTile)
        throw new Error("地图中未找到 placeholder 图块（期望 placeholder01）");

    var generatedLayers = [];

    // 按房间号分组：Bed_N / Bed_N_M → 输出图层统一为 Bed_N
    var bedsByRoom = {};
    for (var i = 0; i < bedLayer.objectCount; i++) {
        var obj = bedLayer.objectAt(i);
        if (!BED_PATTERN.test(safeName(obj))) continue;
        var info = parseBedName(obj.name);
        if (!bedsByRoom[info.roomNum]) bedsByRoom[info.roomNum] = [];
        bedsByRoom[info.roomNum].push(obj);
    }

    var roomNums = Object.keys(bedsByRoom).sort(function(a, b) {
        return parseInt(a, 10) - parseInt(b, 10);
    });

    for (var ri = 0; ri < roomNums.length; ri++) {
        var roomNum = roomNums[ri];
        var roomBeds = bedsByRoom[roomNum];
        var layerName = "Bed_" + roomNum;

        var floorObj = findObject(floorLayer, "floor_" + roomNum);
        if (!floorObj) throw new Error(layerName + " 缺少关联对象: floor_" + roomNum);

        // 校验每张床的门关联（多人房 door_N_M_K / 单人房 door_N）
        for (var bi = 0; bi < roomBeds.length; bi++)
            getDoorsForBed(roomBeds[bi].name, doorLayer);

        // floor 内去掉该房间全部门 + 全部床
        var doorObjs = getDoorsForRoom(roomNum, doorLayer);
        if (doorObjs.length === 0)
            throw new Error(layerName + " 缺少关联对象: door_" + roomNum);

        var excludes = doorObjs.map(parseRect);
        for (var bj = 0; bj < roomBeds.length; bj++)
            excludes.push(parseRect(roomBeds[bj]));

        var floorPoly = parsePolygon(floorObj);
        var cells = rasterizePolygon(floorPoly, tileSize, excludes);

        var group = new ObjectGroup(layerName);
        group.visible = false;

        for (var key in cells) {
            var c = cells[key];
            var newObj = new MapObject();
            newObj.shape = MapObject.Rectangle;
            // 必须先设 tile：图块对象以左下角为原点；未设 tile 时按左上角解释，会整体下移一格
            newObj.tile = placeholderTile;
            newObj.x = c.gx * tileSize;
            newObj.y = (c.gy + 1) * tileSize;
            newObj.width = tileSize;
            newObj.height = tileSize;
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
// 核心：根据手工 Road 层生成 Collision（全图减去可走区域）
// ─────────────────────────────────────────────────────────────────────────────

/** Road 层格子是否有图块（视为可走区域，不生成碰撞） */
function isRoadTile(roadLayer, col, row) {
    var cell = roadLayer.cellAt(col, row);
    return cell && !cell.empty;
}

/** 将非 Road 格子合并为 Collision 矩形列表 */
function generateCollisionRectsFromRoad(map, roadLayer) {
    var w = map.width;
    var h = map.height;
    var tileSize = map.tileWidth;
    var cells = {};
    for (var row = 0; row < h; row++) {
        for (var col = 0; col < w; col++) {
            if (isRoadTile(roadLayer, col, row))
                continue;
            cells[col + "," + row] = { gx: col, gy: row };
        }
    }
    return mergeCellsToRects(cells, tileSize);
}

// ─────────────────────────────────────────────────────────────────────────────
// 删除之前生成的图层
// ─────────────────────────────────────────────────────────────────────────────

function removeGeneratedLayers(map) {
    var toRemove = [];
    for (var i = 0; i < map.layerCount; i++) {
        var layer = map.layerAt(i);
        if (BED_LAYER_PATTERN.test(layer.name)) toRemove.push(layer);
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

    // 校验必填图层（Road 由人工绘制，不参与生成）
    var REQUIRED = ["Floor", "Room", "Door", "Bed", "Road"];
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
        var roadLayer  = asTileLayer(findLayer(map, "Road"), "Road");
        var collisionLayer = findLayer(map, "Collision");

        var tileSize = map.tileWidth;
        var placeholderTile = findPlaceholderTile(map);

        // 只删上次生成的 Bed_N（Road / Collision 均不删）
        removeGeneratedLayers(map);

        // Collision = 全图格子 − Road 可走格子，合并为矩形
        var collisionRects = generateCollisionRectsFromRoad(map, roadLayer);

        var collisionWasLocked = false;
        if (!collisionLayer) {
            collisionLayer = new ObjectGroup("Collision");
            collisionLayer.visible = false;
            map.addLayer(collisionLayer);
        } else {
            collisionLayer = asObjectGroup(collisionLayer, "Collision");
            var collisionWasLocked = collisionLayer.locked;
            if (collisionWasLocked) collisionLayer.locked = false;
            while (collisionLayer.objectCount > 0)
                collisionLayer.removeObjectAt(0);
        }
        collisionLayer.visible = false;
        for (var ci = 0; ci < collisionRects.length; ci++)
            addRectMapObject(collisionLayer, collisionRects[ci]);
        if (collisionWasLocked) collisionLayer.locked = true;

        // 生成 Bed_N 图层
        var bedLayers = generateBedLayers(map, bedLayer, floorLayer, roomLayer, doorLayer, tileSize, placeholderTile);
        for (var bli = 0; bli < bedLayers.length; bli++) {
            map.addLayer(bedLayers[bli]);
        }

        showInfo("地图图层生成完成！\nBed 图层 " + bedLayers.length +
            " 个，Collision 矩形 " + collisionRects.length +
            " 个（依据手工 Road 层，不生成 Road）。");
        tiled.log("[猛鬼工具集] generateMap collisionRects=" + collisionRects.length +
            " bedLayers=" + bedLayers.length);

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

        validateBedLayersWithinRooms(map, roomLayer, errors);

        if (errors.length === 0) {
            showInfo("验证通过！图层命名规范正确，且 Bed_1~Bed_8 均在对应 room 范围内。");
        } else {
            showWarning("发现 " + errors.length + " 个问题：\n" + errors.join("\n"));
        }
    } catch (e) {
        showError("验证失败：" + e.message);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// 生成小地图（最长边 190px）
//
// 绘制规则：
//   1. 透明底（走廊 / 地图外）
//   2. Floor 多边形 → 深色填充
//   3. Collision 全部矩形（含四周边界）→ 距离变换填绿
//      薄墙、以及长边不超过 4 格的小障碍整块填实（避免中间留洞）
//      三面被围住的一格缺口补上；两面夹住的走廊 / 门洞保持畅通
//   4. 4x 超采样预乘 alpha 降采样
// ─────────────────────────────────────────────────────────────────────────────

var MINIMAP_ALGO_VERSION = "2026-10-23-wallfill-v12";
var MINIMAP_MAX_SIZE = 190;
var MINIMAP_SUPERSAMPLE = 4;
/** 薄墙判定：矩形短边缩放后 ≤ 此值（px）视为薄墙，整段填绿 */
var MINIMAP_THIN_THRESH = 5;
/** 小块障碍：长边不超过这么多格则整块填实，不按厚墙只描边 */
var MINIMAP_SOLID_TILES = 4;
/** 一个地图格子在小地图 hi-res 上的厚度（像素） */
function minimapTileDepthHiRes(tileWidth, baseScale) {
    return Math.max(1, Math.round(tileWidth * baseScale * MINIMAP_SUPERSAMPLE));
}
/** 房间 Floor 深色 */
var MINIMAP_FLOOR_FILL = { r: 18, g: 30, b: 44, a: 179 };
/** Collision 墙体内填充（亮绿，与设计稿一致） */
var MINIMAP_WALL_FILL  = { r: 96, g: 206, b: 182, a: 179 };
/** Collision 外沿描边 */
var MINIMAP_STROKE     = { r: 96, g: 206, b: 182, a: 179 };

function clamp(v, lo, hi) {
    return Math.max(lo, Math.min(hi, v));
}

function colorToRgba(c) {
    return tiled.color(c.r / 255, c.g / 255, c.b / 255, c.a / 255);
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

function createMask(w, h) {
    var m = [];
    for (var y = 0; y < h; y++) {
        m[y] = [];
        for (var x = 0; x < w; x++) m[y][x] = 0;
    }
    return m;
}

function fillMaskPolygon(mask, w, h, pts) {
    if (!pts || pts.length < 3) return;
    var minY = Infinity, maxY = -Infinity, i;
    for (i = 0; i < pts.length; i++) {
        minY = Math.min(minY, pts[i].y);
        maxY = Math.max(maxY, pts[i].y);
    }
    minY = Math.max(0, Math.floor(minY));
    maxY = Math.min(h - 1, Math.ceil(maxY));
    for (var y = minY; y <= maxY; y++) {
        var nodes = [];
        var j = pts.length - 1;
        for (i = 0; i < pts.length; i++) {
            var pi = pts[i], pj = pts[j];
            if (pi.y !== pj.y &&
                ((pi.y < y && pj.y >= y) || (pj.y < y && pi.y >= y)))
                nodes.push(pi.x + (y - pi.y) / (pj.y - pi.y) * (pj.x - pi.x));
            j = i;
        }
        nodes.sort(function(a, b) { return a - b; });
        for (var k = 0; k + 1 < nodes.length; k += 2) {
            var x0 = Math.max(0, Math.floor(nodes[k]));
            var x1 = Math.min(w - 1, Math.ceil(nodes[k + 1]));
            for (var x = x0; x <= x1; x++)
                mask[y][x] = 1;
        }
    }
}

function fillMaskRect(mask, w, h, rect) {
    var x0 = clamp(Math.floor(rect.x), 0, w);
    var y0 = clamp(Math.floor(rect.y), 0, h);
    var x1 = clamp(Math.ceil(rect.x + rect.w), 0, w);
    var y1 = clamp(Math.ceil(rect.y + rect.h), 0, h);
    for (var y = y0; y < y1; y++)
        for (var x = x0; x < x1; x++)
            mask[y][x] = 1;
}

function buildCollisionMask(w, h, collisionRects, scale, baseScale, tileWidth) {
    var coll = createMask(w, h);
    var thin = createMask(w, h);
    var solidMax = tileWidth * MINIMAP_SOLID_TILES;
    var i, rect, r, x0, y0, x1, y1, y, x, isSolid;
    for (i = 0; i < collisionRects.length; i++) {
        rect = collisionRects[i];
        // 薄墙，或长边不超过 4 格的小障碍：整块填实。地图边框又长又厚，仍只描边。
        isSolid = Math.min(rect.w, rect.h) * baseScale <= MINIMAP_THIN_THRESH
            || Math.max(rect.w, rect.h) <= solidMax;
        r = transformRect(rect, scale);
        x0 = clamp(Math.floor(r.x), 0, w);
        y0 = clamp(Math.floor(r.y), 0, h);
        x1 = clamp(Math.ceil(r.x + r.w), 0, w);
        y1 = clamp(Math.ceil(r.y + r.h), 0, h);
        for (y = y0; y < y1; y++) {
            for (x = x0; x < x1; x++) {
                coll[y][x] = 1;
                if (isSolid) thin[y][x] = 1;
            }
        }
    }
    return { coll: coll, thin: thin };
}

/**
 * 补墙中间的一格缺口：某空像素在上下左右至少三个方向、一格距离内都是墙，就补成墙。
 * 只有两面夹住的长走廊和门洞不会被补上。
 */
function closeCollisionPinholes(coll, thin, w, h, reach) {
    var cap = reach + 1;
    var left = [];
    var right = [];
    var up = [];
    var down = [];
    var y, x, d, n;
    for (y = 0; y < h; y++) {
        left[y] = [];
        right[y] = [];
        up[y] = [];
        down[y] = [];
    }
    for (y = 0; y < h; y++) {
        d = cap;
        for (x = 0; x < w; x++) {
            if (coll[y][x]) d = 0;
            else if (d < cap) d++;
            left[y][x] = d;
        }
        d = cap;
        for (x = w - 1; x >= 0; x--) {
            if (coll[y][x]) d = 0;
            else if (d < cap) d++;
            right[y][x] = d;
        }
    }
    for (x = 0; x < w; x++) {
        d = cap;
        for (y = 0; y < h; y++) {
            if (coll[y][x]) d = 0;
            else if (d < cap) d++;
            up[y][x] = d;
        }
        d = cap;
        for (y = h - 1; y >= 0; y--) {
            if (coll[y][x]) d = 0;
            else if (d < cap) d++;
            down[y][x] = d;
        }
    }
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            if (coll[y][x]) continue;
            n = 0;
            if (left[y][x] >= 1 && left[y][x] <= reach) n++;
            if (right[y][x] >= 1 && right[y][x] <= reach) n++;
            if (up[y][x] >= 1 && up[y][x] <= reach) n++;
            if (down[y][x] >= 1 && down[y][x] <= reach) n++;
            if (n >= 3) {
                coll[y][x] = 1;
                thin[y][x] = 1;
            }
        }
    }
}

/**
 * 多源 BFS：计算每个 Coll 像素到最近非 Coll（走廊 / Floor / 地图外）的距离。
 * Python 参考实现用的同一思路，保证外层绿带连续无断档。
 */
function buildDistToOpen(coll, w, h) {
    var INF = 1000000;
    var dist = [];
    var queue = [];
    var qh = 0;
    var dirs = [[1, 0], [-1, 0], [0, 1], [0, -1]];
    var x, y, i, nx, ny, d, nd;
    for (y = 0; y < h; y++) {
        dist[y] = [];
        for (x = 0; x < w; x++) {
            if (!coll[y][x]) {
                dist[y][x] = 0;
                queue.push(x, y);
            } else {
                dist[y][x] = INF;
            }
        }
    }
    while (qh < queue.length) {
        x = queue[qh++];
        y = queue[qh++];
        d = dist[y][x];
        for (i = 0; i < dirs.length; i++) {
            nx = x + dirs[i][0];
            ny = y + dirs[i][1];
            if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
            nd = d + 1;
            if (dist[ny][nx] > nd) {
                dist[ny][nx] = nd;
                queue.push(nx, ny);
            }
        }
    }
    return dist;
}

/** 墙填充：薄墙和小块障碍整段亮绿；厚墙从各开放面向内填 bandDepth 层 */
function buildWallFillMask(coll, thin, w, h, bandDepth) {
    var dist = buildDistToOpen(coll, w, h);
    var wall = createMask(w, h);
    var y, x, d;
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            if (!coll[y][x]) continue;
            if (thin[y][x]) {
                wall[y][x] = 1;
                continue;
            }
            d = dist[y][x];
            if (d >= 1 && d <= bandDepth)
                wall[y][x] = 1;
        }
    }
    return wall;
}

/** 盒式降采样：预乘 alpha 合成到黑底，避免细描边被透明像素稀释变暗 */
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
                    var px = src.pixel(xx, yy);
                    var a = (px >>> 24) & 0xff;
                    rs += ((px >>> 16) & 0xff) * a;
                    gs += ((px >>> 8) & 0xff) * a;
                    bs += (px & 0xff) * a;
                    as += a;
                    n++;
                }
            }
            if (as > 0) {
                dst.setPixelColor(x, y, tiled.color(
                    (rs / as) / 255,
                    (gs / as) / 255,
                    (bs / as) / 255,
                    (as / n) / 255
                ));
            }
        }
    }
    return dst;
}

/** 渲染小地图：Floor 填充 + 全部 Collision 填绿（含四周边界） */
function renderMinimapImage(outW, outH, floorPolys, collisionRects, baseScale, tileWidth) {
    var ss = MINIMAP_SUPERSAMPLE;
    var scale = baseScale * ss;
    var w = Math.max(1, Math.round(outW * ss));
    var h = Math.max(1, Math.round(outH * ss));
    var bandDepth = minimapTileDepthHiRes(tileWidth, baseScale);
    var floor = createMask(w, h);
    var i, y, x;

    for (i = 0; i < floorPolys.length; i++)
        fillMaskPolygon(floor, w, h, transformPoly(floorPolys[i], scale));

    var collMask = buildCollisionMask(w, h, collisionRects, scale, baseScale, tileWidth);
    var coll = collMask.coll;
    var thin = collMask.thin;
    closeCollisionPinholes(coll, thin, w, h, bandDepth);
    var wallFill = buildWallFillMask(coll, thin, w, h, bandDepth);

    var hi = new Image(w, h);
    hi.fill(tiled.color(0, 0, 0, 0));
    var floorQ = colorToRgba(MINIMAP_FLOOR_FILL);
    var wallQ = colorToRgba(MINIMAP_WALL_FILL);
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            if (wallFill[y][x]) hi.setPixelColor(x, y, wallQ);
            else if (floor[y][x]) hi.setPixelColor(x, y, floorQ);
        }
    }

    if (ss > 1)
        return downsampleImage(hi, outW, outH);
    return hi;
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

        var fillPolys = collectPolygons(floorLayer);
        var collRects = collectRects(collisionLayer);

        var img = renderMinimapImage(
            outW, outH, fillPolys, collRects, baseScale, map.tileWidth
        );

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
        dialog.addLabel("算法：" + MINIMAP_ALGO_VERSION);
        dialog.addLabel("Floor RGB：" + MINIMAP_FLOOR_FILL.r + "," + MINIMAP_FLOOR_FILL.g + "," + MINIMAP_FLOOR_FILL.b +
            "  墙体 RGB：" + MINIMAP_WALL_FILL.r + "," + MINIMAP_WALL_FILL.g + "," + MINIMAP_WALL_FILL.b);
        dialog.addLabel("Collision 矩形：" + collRects.length + " 个（含四周边界）");
        dialog.addLabel("墙带深度(hi-res)：" + minimapTileDepthHiRes(map.tileWidth, baseScale) + "px");
        dialog.addLabel("尺寸：" + outW + " × " + outH);
        dialog.addLabel("路径：" + outPath);
        dialog.addImage("", img);
        dialog.exec();
        tiled.log("[猛鬼工具集] 小地图已保存: " + outPath + " (" + outW + "x" + outH + ", " + MINIMAP_ALGO_VERSION +
            ", Coll=" + collRects.length + ")");

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
actionGenerate.text = "生成地图图层（Bed / Collision）";

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

tiled.log("[猛鬼工具集] 已加载 " + MINIMAP_ALGO_VERSION +
    " floor=" + MINIMAP_FLOOR_FILL.r + "," + MINIMAP_FLOOR_FILL.g + "," + MINIMAP_FLOOR_FILL.b +
    " wall=" + MINIMAP_WALL_FILL.r + "," + MINIMAP_WALL_FILL.g + "," + MINIMAP_WALL_FILL.b);
