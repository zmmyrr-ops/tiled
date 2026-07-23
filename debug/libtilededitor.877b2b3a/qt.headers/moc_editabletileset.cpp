/****************************************************************************
** Meta object code from reading C++ file 'editabletileset.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editabletileset.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editabletileset.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15EditableTilesetE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableTileset::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15EditableTilesetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableTileset",
        "setName",
        "",
        "name",
        "setImageFileName",
        "imageFilePath",
        "setTileWidth",
        "width",
        "setTileHeight",
        "height",
        "setTileSize",
        "QSize",
        "size",
        "setTileSpacing",
        "tileSpacing",
        "setMargin",
        "margin",
        "setColumnCount",
        "columnCount",
        "setObjectAlignment",
        "Alignment",
        "objectAlignment",
        "setTileRenderSize",
        "TileRenderSize",
        "tileRenderSize",
        "setFillMode",
        "FillMode",
        "fillMode",
        "setTileOffset",
        "QPoint",
        "tileOffset",
        "setOrientation",
        "Orientation",
        "orientation",
        "setTransparentColor",
        "QColor",
        "color",
        "setBackgroundColor",
        "setTransformationFlags",
        "Tileset::TransformationFlags",
        "flags",
        "loadFromImage",
        "Tiled::ScriptImage*",
        "image",
        "source",
        "tile",
        "Tiled::EditableTile*",
        "id",
        "findTile",
        "addTile",
        "removeTiles",
        "QList<QObject*>",
        "tiles",
        "addWangSet",
        "Tiled::EditableWangSet*",
        "type",
        "removeWangSet",
        "wangSet",
        "EditableTileset",
        "parent",
        "imageFileName",
        "wangSets",
        "tileCount",
        "nextTileId",
        "tileWidth",
        "tileHeight",
        "tileSize",
        "imageWidth",
        "imageHeight",
        "imageSize",
        "transparentColor",
        "backgroundColor",
        "collection",
        "isCollection",
        "selectedTiles",
        "transformationFlags",
        "Unspecified",
        "TopLeft",
        "Top",
        "TopRight",
        "Left",
        "Center",
        "Right",
        "BottomLeft",
        "Bottom",
        "BottomRight",
        "Orthogonal",
        "Isometric",
        "TileSize",
        "GridSize",
        "Stretch",
        "PreserveAspectFit",
        "TransformationFlag",
        "NoTransformation",
        "AllowFlipHorizontally",
        "AllowFlipVertically",
        "AllowRotate",
        "PreferUntransformed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setName'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'setImageFileName'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'setTileWidth'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setTileHeight'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setTileSize'
        QtMocHelpers::SlotData<void(QSize)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'setTileSize'
        QtMocHelpers::SlotData<void(int, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'setTileSpacing'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'setMargin'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'setColumnCount'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'setObjectAlignment'
        QtMocHelpers::SlotData<void(enum Alignment)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'setTileRenderSize'
        QtMocHelpers::SlotData<void(enum TileRenderSize)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'setFillMode'
        QtMocHelpers::SlotData<void(enum FillMode)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'setTileOffset'
        QtMocHelpers::SlotData<void(QPoint)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'setOrientation'
        QtMocHelpers::SlotData<void(enum Orientation)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'setTransparentColor'
        QtMocHelpers::SlotData<void(const QColor &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setBackgroundColor'
        QtMocHelpers::SlotData<void(const QColor &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setTransformationFlags'
        QtMocHelpers::SlotData<void(Tileset::TransformationFlags)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 39, 40 },
        }}),
        // Method 'loadFromImage'
        QtMocHelpers::MethodData<void(Tiled::ScriptImage *, const QString &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 43 }, { QMetaType::QString, 44 },
        }}),
        // Method 'loadFromImage'
        QtMocHelpers::MethodData<void(Tiled::ScriptImage *)>(41, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Method 'tile'
        QtMocHelpers::MethodData<Tiled::EditableTile *(int)>(45, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::Int, 47 },
        }}),
        // Method 'findTile'
        QtMocHelpers::MethodData<Tiled::EditableTile *(int)>(48, 2, QMC::AccessPublic, 0x80000000 | 46, {{
            { QMetaType::Int, 47 },
        }}),
        // Method 'addTile'
        QtMocHelpers::MethodData<Tiled::EditableTile *()>(49, 2, QMC::AccessPublic, 0x80000000 | 46),
        // Method 'removeTiles'
        QtMocHelpers::MethodData<void(const QList<QObject*> &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Method 'addWangSet'
        QtMocHelpers::MethodData<Tiled::EditableWangSet *(const QString &, int)>(53, 2, QMC::AccessPublic, 0x80000000 | 54, {{
            { QMetaType::QString, 3 }, { QMetaType::Int, 55 },
        }}),
        // Method 'removeWangSet'
        QtMocHelpers::MethodData<void(Tiled::EditableWangSet *)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 54, 57 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'image'
        QtMocHelpers::PropertyData<QString>(43, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'imageFileName'
        QtMocHelpers::PropertyData<QString>(60, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tiles'
        QtMocHelpers::PropertyData<QList<QObject*>>(52, 0x80000000 | 51, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'wangSets'
        QtMocHelpers::PropertyData<QList<QObject*>>(61, 0x80000000 | 51, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'tileCount'
        QtMocHelpers::PropertyData<int>(62, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'columnCount'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'nextTileId'
        QtMocHelpers::PropertyData<int>(63, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'tileWidth'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tileHeight'
        QtMocHelpers::PropertyData<int>(65, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tileSize'
        QtMocHelpers::PropertyData<QSize>(66, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'imageWidth'
        QtMocHelpers::PropertyData<int>(67, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'imageHeight'
        QtMocHelpers::PropertyData<int>(68, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'imageSize'
        QtMocHelpers::PropertyData<QSize>(69, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'tileSpacing'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'margin'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'objectAlignment'
        QtMocHelpers::PropertyData<enum Alignment>(21, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'tileRenderSize'
        QtMocHelpers::PropertyData<enum TileRenderSize>(24, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'fillMode'
        QtMocHelpers::PropertyData<enum FillMode>(27, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'tileOffset'
        QtMocHelpers::PropertyData<QPoint>(30, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'orientation'
        QtMocHelpers::PropertyData<enum Orientation>(33, 0x80000000 | 32, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'transparentColor'
        QtMocHelpers::PropertyData<QColor>(70, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(71, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'collection'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isCollection'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'selectedTiles'
        QtMocHelpers::PropertyData<QList<QObject*>>(74, 0x80000000 | 51, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'transformationFlags'
        QtMocHelpers::PropertyData<Tileset::TransformationFlags>(75, 0x80000000 | 39, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Alignment'
        QtMocHelpers::EnumData<enum Alignment>(20, 20, QMC::EnumFlags{}).add({
            {   76, Alignment::Unspecified },
            {   77, Alignment::TopLeft },
            {   78, Alignment::Top },
            {   79, Alignment::TopRight },
            {   80, Alignment::Left },
            {   81, Alignment::Center },
            {   82, Alignment::Right },
            {   83, Alignment::BottomLeft },
            {   84, Alignment::Bottom },
            {   85, Alignment::BottomRight },
        }),
        // enum 'Orientation'
        QtMocHelpers::EnumData<enum Orientation>(32, 32, QMC::EnumFlags{}).add({
            {   86, Orientation::Orthogonal },
            {   87, Orientation::Isometric },
        }),
        // enum 'TileRenderSize'
        QtMocHelpers::EnumData<enum TileRenderSize>(23, 23, QMC::EnumFlags{}).add({
            {   88, TileRenderSize::TileSize },
            {   89, TileRenderSize::GridSize },
        }),
        // enum 'FillMode'
        QtMocHelpers::EnumData<enum FillMode>(26, 26, QMC::EnumFlags{}).add({
            {   90, FillMode::Stretch },
            {   91, FillMode::PreserveAspectFit },
        }),
        // enum 'TransformationFlag'
        QtMocHelpers::EnumData<enum TransformationFlag>(92, 92, QMC::EnumFlags{}).add({
            {   93, TransformationFlag::NoTransformation },
            {   94, TransformationFlag::AllowFlipHorizontally },
            {   95, TransformationFlag::AllowFlipVertically },
            {   96, TransformationFlag::AllowRotate },
            {   97, TransformationFlag::PreferUntransformed },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QString, 3 }, { QMetaType::QObjectStar, 59 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 3 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<EditableTileset, qt_meta_tag_ZN5Tiled15EditableTilesetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableTileset::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableAsset::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableTilesetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableTilesetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15EditableTilesetE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableTileset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableTileset *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableTileset *_r = new EditableTileset((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableTileset *_r = new EditableTileset((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { EditableTileset *_r = new EditableTileset();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableTileset((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 1: { new (_a[0]) EditableTileset((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 2: { new (_a[0]) EditableTileset(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setImageFileName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setTileWidth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setTileHeight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setTileSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 5: _t->setTileSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->setTileSpacing((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setMargin((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setColumnCount((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setObjectAlignment((*reinterpret_cast<std::add_pointer_t<enum Alignment>>(_a[1]))); break;
        case 10: _t->setTileRenderSize((*reinterpret_cast<std::add_pointer_t<enum TileRenderSize>>(_a[1]))); break;
        case 11: _t->setFillMode((*reinterpret_cast<std::add_pointer_t<enum FillMode>>(_a[1]))); break;
        case 12: _t->setTileOffset((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->setOrientation((*reinterpret_cast<std::add_pointer_t<enum Orientation>>(_a[1]))); break;
        case 14: _t->setTransparentColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 15: _t->setBackgroundColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 16: _t->setTransformationFlags((*reinterpret_cast<std::add_pointer_t<Tileset::TransformationFlags>>(_a[1]))); break;
        case 17: _t->loadFromImage((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->loadFromImage((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1]))); break;
        case 19: { Tiled::EditableTile* _r = _t->tile((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableTile**>(_a[0]) = std::move(_r); }  break;
        case 20: { Tiled::EditableTile* _r = _t->findTile((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableTile**>(_a[0]) = std::move(_r); }  break;
        case 21: { Tiled::EditableTile* _r = _t->addTile();
            if (_a[0]) *reinterpret_cast<Tiled::EditableTile**>(_a[0]) = std::move(_r); }  break;
        case 22: _t->removeTiles((*reinterpret_cast<std::add_pointer_t<QList<QObject*>>>(_a[1]))); break;
        case 23: { Tiled::EditableWangSet* _r = _t->addWangSet((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableWangSet**>(_a[0]) = std::move(_r); }  break;
        case 24: _t->removeWangSet((*reinterpret_cast<std::add_pointer_t<Tiled::EditableWangSet*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QObject*> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->imageFileName(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->imageFileName(); break;
        case 3: *reinterpret_cast<QList<QObject*>*>(_v) = _t->tiles(); break;
        case 4: *reinterpret_cast<QList<QObject*>*>(_v) = _t->wangSets(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->tileCount(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->columnCount(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->nextTileId(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->tileWidth(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->tileHeight(); break;
        case 10: *reinterpret_cast<QSize*>(_v) = _t->tileSize(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->imageWidth(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->imageHeight(); break;
        case 13: *reinterpret_cast<QSize*>(_v) = _t->imageSize(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->tileSpacing(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->margin(); break;
        case 16: *reinterpret_cast<enum Alignment*>(_v) = _t->objectAlignment(); break;
        case 17: *reinterpret_cast<enum TileRenderSize*>(_v) = _t->tileRenderSize(); break;
        case 18: *reinterpret_cast<enum FillMode*>(_v) = _t->fillMode(); break;
        case 19: *reinterpret_cast<QPoint*>(_v) = _t->tileOffset(); break;
        case 20: *reinterpret_cast<enum Orientation*>(_v) = _t->orientation(); break;
        case 21: *reinterpret_cast<QColor*>(_v) = _t->transparentColor(); break;
        case 22: *reinterpret_cast<QColor*>(_v) = _t->backgroundColor(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->isCollection(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->isCollection(); break;
        case 25: *reinterpret_cast<QList<QObject*>*>(_v) = _t->selectedTiles(); break;
        case 26: *reinterpret_cast<Tileset::TransformationFlags*>(_v) = _t->transformationFlags(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setImageFileName(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setImageFileName(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setColumnCount(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setTileWidth(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setTileHeight(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setTileSize(*reinterpret_cast<QSize*>(_v)); break;
        case 14: _t->setTileSpacing(*reinterpret_cast<int*>(_v)); break;
        case 15: _t->setMargin(*reinterpret_cast<int*>(_v)); break;
        case 16: _t->setObjectAlignment(*reinterpret_cast<enum Alignment*>(_v)); break;
        case 17: _t->setTileRenderSize(*reinterpret_cast<enum TileRenderSize*>(_v)); break;
        case 18: _t->setFillMode(*reinterpret_cast<enum FillMode*>(_v)); break;
        case 19: _t->setTileOffset(*reinterpret_cast<QPoint*>(_v)); break;
        case 20: _t->setOrientation(*reinterpret_cast<enum Orientation*>(_v)); break;
        case 21: _t->setTransparentColor(*reinterpret_cast<QColor*>(_v)); break;
        case 22: _t->setBackgroundColor(*reinterpret_cast<QColor*>(_v)); break;
        case 25: _t->setSelectedTiles(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        case 26: _t->setTransformationFlags(*reinterpret_cast<Tileset::TransformationFlags*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableTileset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableTileset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableTilesetE_t>.strings))
        return static_cast<void*>(this);
    return EditableAsset::qt_metacast(_clname);
}

int Tiled::EditableTileset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableAsset::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
