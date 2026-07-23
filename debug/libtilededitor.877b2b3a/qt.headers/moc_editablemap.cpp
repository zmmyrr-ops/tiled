/****************************************************************************
** Meta object code from reading C++ file 'editablemap.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editablemap.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editablemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN5Tiled11EditableMapE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableMap::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11EditableMapE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableMap",
        "currentLayerChanged",
        "",
        "selectedLayersChanged",
        "selectedObjectsChanged",
        "regionEdited",
        "Tiled::RegionValueType",
        "region",
        "Tiled::EditableTileLayer*",
        "layer",
        "layerAt",
        "Tiled::EditableLayer*",
        "index",
        "removeLayerAt",
        "removeLayer",
        "editableLayer",
        "insertLayerAt",
        "addLayer",
        "addTileset",
        "Tiled::EditableTileset*",
        "tileset",
        "replaceTileset",
        "oldEditableTileset",
        "newEditableTileset",
        "removeTileset",
        "editableTileset",
        "usedTilesets",
        "QList<QObject*>",
        "removeObjects",
        "objects",
        "merge",
        "Tiled::EditableMap*",
        "editableMap",
        "canJoin",
        "resize",
        "QSize",
        "size",
        "QPoint",
        "offset",
        "autoMap",
        "rulesFile",
        "QRect",
        "QRectF",
        "toImage",
        "Tiled::ScriptImage*",
        "screenToTile",
        "QPointF",
        "x",
        "y",
        "position",
        "tileToScreen",
        "screenToPixel",
        "pixelToScreen",
        "pixelToTile",
        "tileToPixel",
        "setSize",
        "width",
        "height",
        "setTileSize",
        "EditableMap",
        "parent",
        "tileWidth",
        "tileHeight",
        "infinite",
        "hexSideLength",
        "staggerAxis",
        "StaggerAxis",
        "staggerIndex",
        "StaggerIndex",
        "skewX",
        "skewY",
        "parallaxOrigin",
        "orientation",
        "Orientation",
        "renderOrder",
        "RenderOrder",
        "backgroundColor",
        "QColor",
        "layerDataFormat",
        "LayerDataFormat",
        "chunkSize",
        "compressionLevel",
        "layerCount",
        "tilesets",
        "layers",
        "selectedArea",
        "Tiled::EditableSelectedArea*",
        "currentLayer",
        "selectedLayers",
        "selectedObjects",
        "Unknown",
        "Orthogonal",
        "Isometric",
        "Staggered",
        "Hexagonal",
        "Oblique",
        "XML",
        "Base64",
        "Base64Gzip",
        "Base64Zlib",
        "Base64Zstandard",
        "CSV",
        "RightDown",
        "RightUp",
        "LeftDown",
        "LeftUp",
        "StaggerX",
        "StaggerY",
        "StaggerOdd",
        "StaggerEven"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentLayerChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedLayersChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedObjectsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'regionEdited'
        QtMocHelpers::SignalData<void(const Tiled::RegionValueType &, Tiled::EditableTileLayer *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Method 'layerAt'
        QtMocHelpers::MethodData<Tiled::EditableLayer *(int)>(10, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { QMetaType::Int, 12 },
        }}),
        // Method 'removeLayerAt'
        QtMocHelpers::MethodData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Method 'removeLayer'
        QtMocHelpers::MethodData<void(Tiled::EditableLayer *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 15 },
        }}),
        // Method 'insertLayerAt'
        QtMocHelpers::MethodData<void(int, Tiled::EditableLayer *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { 0x80000000 | 11, 15 },
        }}),
        // Method 'addLayer'
        QtMocHelpers::MethodData<void(Tiled::EditableLayer *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 15 },
        }}),
        // Method 'addTileset'
        QtMocHelpers::MethodData<bool(Tiled::EditableTileset *)>(18, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Method 'replaceTileset'
        QtMocHelpers::MethodData<bool(Tiled::EditableTileset *, Tiled::EditableTileset *)>(21, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 19, 22 }, { 0x80000000 | 19, 23 },
        }}),
        // Method 'removeTileset'
        QtMocHelpers::MethodData<bool(Tiled::EditableTileset *)>(24, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 19, 25 },
        }}),
        // Method 'usedTilesets'
        QtMocHelpers::MethodData<QList<QObject*>() const>(26, 2, QMC::AccessPublic, 0x80000000 | 27),
        // Method 'removeObjects'
        QtMocHelpers::MethodData<void(const QList<QObject*> &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 29 },
        }}),
        // Method 'merge'
        QtMocHelpers::MethodData<void(Tiled::EditableMap *, bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 }, { QMetaType::Bool, 33 },
        }}),
        // Method 'merge'
        QtMocHelpers::MethodData<void(Tiled::EditableMap *)>(30, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Method 'resize'
        QtMocHelpers::MethodData<void(QSize, QPoint, bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 37, 38 }, { QMetaType::Bool, 28 },
        }}),
        // Method 'resize'
        QtMocHelpers::MethodData<void(QSize, QPoint)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 37, 38 },
        }}),
        // Method 'resize'
        QtMocHelpers::MethodData<void(QSize)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void()>(39, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const QRect &, const QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 7 }, { QMetaType::QString, 40 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const QRect &)>(39, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 41, 7 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const QRectF &, const QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 7 }, { QMetaType::QString, 40 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const QRectF &)>(39, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 42, 7 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const Tiled::RegionValueType &, const QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::QString, 40 },
        }}),
        // Method 'autoMap'
        QtMocHelpers::MethodData<void(const Tiled::RegionValueType &)>(39, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'toImage'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(QSize) const>(43, 2, QMC::AccessPublic, 0x80000000 | 44, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Method 'toImage'
        QtMocHelpers::MethodData<Tiled::ScriptImage *() const>(43, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 44),
        // Method 'screenToTile'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(45, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'screenToTile'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(45, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'tileToScreen'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(50, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'tileToScreen'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(50, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'screenToPixel'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(51, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'screenToPixel'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(51, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'pixelToScreen'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(52, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'pixelToScreen'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(52, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'pixelToTile'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(53, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'pixelToTile'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(53, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'tileToPixel'
        QtMocHelpers::MethodData<QPointF(qreal, qreal) const>(54, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::QReal, 47 }, { QMetaType::QReal, 48 },
        }}),
        // Method 'tileToPixel'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(54, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { 0x80000000 | 46, 49 },
        }}),
        // Method 'setSize'
        QtMocHelpers::MethodData<void(int, int)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 56 }, { QMetaType::Int, 57 },
        }}),
        // Method 'setTileSize'
        QtMocHelpers::MethodData<void(int, int)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 56 }, { QMetaType::Int, 57 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'width'
        QtMocHelpers::PropertyData<int>(56, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'height'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(36, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'tileWidth'
        QtMocHelpers::PropertyData<int>(61, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tileHeight'
        QtMocHelpers::PropertyData<int>(62, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'infinite'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'hexSideLength'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'staggerAxis'
        QtMocHelpers::PropertyData<enum StaggerAxis>(65, 0x80000000 | 66, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'staggerIndex'
        QtMocHelpers::PropertyData<enum StaggerIndex>(67, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'skewX'
        QtMocHelpers::PropertyData<int>(69, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'skewY'
        QtMocHelpers::PropertyData<int>(70, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'parallaxOrigin'
        QtMocHelpers::PropertyData<QPointF>(71, 0x80000000 | 46, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'orientation'
        QtMocHelpers::PropertyData<enum Orientation>(72, 0x80000000 | 73, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'renderOrder'
        QtMocHelpers::PropertyData<enum RenderOrder>(74, 0x80000000 | 75, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(76, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'layerDataFormat'
        QtMocHelpers::PropertyData<enum LayerDataFormat>(78, 0x80000000 | 79, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'chunkSize'
        QtMocHelpers::PropertyData<QSize>(80, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'compressionLevel'
        QtMocHelpers::PropertyData<int>(81, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'layerCount'
        QtMocHelpers::PropertyData<int>(82, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'tilesets'
        QtMocHelpers::PropertyData<QList<QObject*>>(83, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'layers'
        QtMocHelpers::PropertyData<QList<QObject*>>(84, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'selectedArea'
        QtMocHelpers::PropertyData<Tiled::EditableSelectedArea*>(85, 0x80000000 | 86, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'currentLayer'
        QtMocHelpers::PropertyData<Tiled::EditableLayer*>(87, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'selectedLayers'
        QtMocHelpers::PropertyData<QList<QObject*>>(88, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'selectedObjects'
        QtMocHelpers::PropertyData<QList<QObject*>>(89, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Orientation'
        QtMocHelpers::EnumData<enum Orientation>(73, 73, QMC::EnumFlags{}).add({
            {   90, Orientation::Unknown },
            {   91, Orientation::Orthogonal },
            {   92, Orientation::Isometric },
            {   93, Orientation::Staggered },
            {   94, Orientation::Hexagonal },
            {   95, Orientation::Oblique },
        }),
        // enum 'LayerDataFormat'
        QtMocHelpers::EnumData<enum LayerDataFormat>(79, 79, QMC::EnumFlags{}).add({
            {   96, LayerDataFormat::XML },
            {   97, LayerDataFormat::Base64 },
            {   98, LayerDataFormat::Base64Gzip },
            {   99, LayerDataFormat::Base64Zlib },
            {  100, LayerDataFormat::Base64Zstandard },
            {  101, LayerDataFormat::CSV },
        }),
        // enum 'RenderOrder'
        QtMocHelpers::EnumData<enum RenderOrder>(75, 75, QMC::EnumFlags{}).add({
            {  102, RenderOrder::RightDown },
            {  103, RenderOrder::RightUp },
            {  104, RenderOrder::LeftDown },
            {  105, RenderOrder::LeftUp },
        }),
        // enum 'StaggerAxis'
        QtMocHelpers::EnumData<enum StaggerAxis>(66, 66, QMC::EnumFlags{}).add({
            {  106, StaggerAxis::StaggerX },
            {  107, StaggerAxis::StaggerY },
        }),
        // enum 'StaggerIndex'
        QtMocHelpers::EnumData<enum StaggerIndex>(68, 68, QMC::EnumFlags{}).add({
            {  108, StaggerIndex::StaggerOdd },
            {  109, StaggerIndex::StaggerEven },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QObjectStar, 60 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<EditableMap, qt_meta_tag_ZN5Tiled11EditableMapE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableMap::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableAsset::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11EditableMapE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11EditableMapE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11EditableMapE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableMap *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableMap *_r = new EditableMap((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableMap *_r = new EditableMap();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableMap((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) EditableMap(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentLayerChanged(); break;
        case 1: _t->selectedLayersChanged(); break;
        case 2: _t->selectedObjectsChanged(); break;
        case 3: _t->regionEdited((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileLayer*>>(_a[2]))); break;
        case 4: { Tiled::EditableLayer* _r = _t->layerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableLayer**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->removeLayerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->removeLayer((*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[1]))); break;
        case 7: _t->insertLayerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[2]))); break;
        case 8: _t->addLayer((*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[1]))); break;
        case 9: { bool _r = _t->addTileset((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileset*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->replaceTileset((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileset*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileset*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->removeTileset((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileset*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { QList<QObject*> _r = _t->usedTilesets();
            if (_a[0]) *reinterpret_cast<QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->removeObjects((*reinterpret_cast<std::add_pointer_t<QList<QObject*>>>(_a[1]))); break;
        case 14: _t->merge((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMap*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 15: _t->merge((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMap*>>(_a[1]))); break;
        case 16: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 17: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 18: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 19: _t->autoMap((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->autoMap(); break;
        case 21: _t->autoMap((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->autoMap((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 23: _t->autoMap((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->autoMap((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 25: _t->autoMap((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->autoMap((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 27: { Tiled::ScriptImage* _r = _t->toImage((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 28: { Tiled::ScriptImage* _r = _t->toImage();
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 29: { QPointF _r = _t->screenToTile((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 30: { QPointF _r = _t->screenToTile((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 31: { QPointF _r = _t->tileToScreen((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 32: { QPointF _r = _t->tileToScreen((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 33: { QPointF _r = _t->screenToPixel((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 34: { QPointF _r = _t->screenToPixel((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 35: { QPointF _r = _t->pixelToScreen((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 36: { QPointF _r = _t->pixelToScreen((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 37: { QPointF _r = _t->pixelToTile((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 38: { QPointF _r = _t->pixelToTile((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 39: { QPointF _r = _t->tileToPixel((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 40: { QPointF _r = _t->tileToPixel((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->setSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 42: _t->setTileSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QObject*> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableMap* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableMap* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditableMap::*)()>(_a, &EditableMap::currentLayerChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditableMap::*)()>(_a, &EditableMap::selectedLayersChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditableMap::*)()>(_a, &EditableMap::selectedObjectsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditableMap::*)(const Tiled::RegionValueType & , Tiled::EditableTileLayer * )>(_a, &EditableMap::regionEdited, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
        case 23:
        case 20:
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->tileWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->tileHeight(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->infinite(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->hexSideLength(); break;
        case 7: *reinterpret_cast<enum StaggerAxis*>(_v) = _t->staggerAxis(); break;
        case 8: *reinterpret_cast<enum StaggerIndex*>(_v) = _t->staggerIndex(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->skewX(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->skewY(); break;
        case 11: *reinterpret_cast<QPointF*>(_v) = _t->parallaxOrigin(); break;
        case 12: *reinterpret_cast<enum Orientation*>(_v) = _t->orientation(); break;
        case 13: *reinterpret_cast<enum RenderOrder*>(_v) = _t->renderOrder(); break;
        case 14: *reinterpret_cast<QColor*>(_v) = _t->backgroundColor(); break;
        case 15: *reinterpret_cast<enum LayerDataFormat*>(_v) = _t->layerDataFormat(); break;
        case 16: *reinterpret_cast<QSize*>(_v) = _t->chunkSize(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->compressionLevel(); break;
        case 18: *reinterpret_cast<int*>(_v) = _t->layerCount(); break;
        case 19: *reinterpret_cast<QList<QObject*>*>(_v) = _t->tilesets(); break;
        case 20: *reinterpret_cast<QList<QObject*>*>(_v) = _t->layers(); break;
        case 21: *reinterpret_cast<Tiled::EditableSelectedArea**>(_v) = _t->selectedArea(); break;
        case 22: *reinterpret_cast<Tiled::EditableLayer**>(_v) = _t->currentLayer(); break;
        case 23: *reinterpret_cast<QList<QObject*>*>(_v) = _t->selectedLayers(); break;
        case 24: *reinterpret_cast<QList<QObject*>*>(_v) = _t->selectedObjects(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setTileWidth(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setTileHeight(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setInfinite(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setHexSideLength(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setStaggerAxis(*reinterpret_cast<enum StaggerAxis*>(_v)); break;
        case 8: _t->setStaggerIndex(*reinterpret_cast<enum StaggerIndex*>(_v)); break;
        case 9: _t->setSkewX(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setSkewY(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setParallaxOrigin(*reinterpret_cast<QPointF*>(_v)); break;
        case 12: _t->setOrientation(*reinterpret_cast<enum Orientation*>(_v)); break;
        case 13: _t->setRenderOrder(*reinterpret_cast<enum RenderOrder*>(_v)); break;
        case 14: _t->setBackgroundColor(*reinterpret_cast<QColor*>(_v)); break;
        case 15: _t->setLayerDataFormat(*reinterpret_cast<enum LayerDataFormat*>(_v)); break;
        case 16: _t->setChunkSize(*reinterpret_cast<QSize*>(_v)); break;
        case 17: _t->setCompressionLevel(*reinterpret_cast<int*>(_v)); break;
        case 22: _t->setCurrentLayer(*reinterpret_cast<Tiled::EditableLayer**>(_v)); break;
        case 23: _t->setSelectedLayers(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        case 24: _t->setSelectedObjects(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11EditableMapE_t>.strings))
        return static_cast<void*>(this);
    return EditableAsset::qt_metacast(_clname);
}

int Tiled::EditableMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableAsset::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Tiled::EditableMap::currentLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::EditableMap::selectedLayersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::EditableMap::selectedObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Tiled::EditableMap::regionEdited(const Tiled::RegionValueType & _t1, Tiled::EditableTileLayer * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP
