/****************************************************************************
** Meta object code from reading C++ file 'editablemapobject.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editablemapobject.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editablemapobject.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled4FontE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::Font::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled4FontE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::Font",
        "family",
        "pixelSize",
        "bold",
        "italic",
        "underline",
        "strikeOut",
        "kerning"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'family'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'pixelSize'
        QtMocHelpers::PropertyData<int>(2, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'bold'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'italic'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'underline'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'strikeOut'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'kerning'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Font, qt_meta_tag_ZN5Tiled4FontE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::Font::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QFont>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled4FontE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled4FontE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled4FontE_t>.metaTypes,
    nullptr
} };

void Tiled::Font::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Font *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->family(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->pixelSize(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->bold(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->italic(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->underline(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->strikeOut(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->kerning(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFamily(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPixelSize(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setBold(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setItalic(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setUnderline(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setStrikeOut(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setKerning(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN5Tiled17EditableMapObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableMapObject::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableMapObject",
        "setShape",
        "",
        "Shape",
        "shape",
        "setName",
        "name",
        "setX",
        "x",
        "setY",
        "y",
        "setPos",
        "QPointF",
        "pos",
        "setWidth",
        "width",
        "setHeight",
        "height",
        "setSize",
        "QSizeF",
        "size",
        "setRotation",
        "rotation",
        "setOpacity",
        "opacity",
        "setVisible",
        "visible",
        "setPolygon",
        "QJSValue",
        "polygon",
        "QPolygonF",
        "setText",
        "text",
        "setFont",
        "Font",
        "font",
        "setTextAlignment",
        "Qt::Alignment",
        "textAlignment",
        "setWordWrap",
        "wordWrap",
        "setTextColor",
        "QColor",
        "textColor",
        "setTile",
        "EditableTile*",
        "tile",
        "setTileFlippedHorizontally",
        "tileFlippedHorizontally",
        "setTileFlippedVertically",
        "tileFlippedVertically",
        "setSelected",
        "selected",
        "resolvedClassName",
        "EditableMapObject",
        "parent",
        "id",
        "type",
        "Tiled::Font",
        "Tiled::EditableTile*",
        "layer",
        "Tiled::EditableObjectGroup*",
        "map",
        "Tiled::EditableMap*",
        "Rectangle",
        "Polygon",
        "Polyline",
        "Ellipse",
        "Capsule",
        "Text",
        "Point"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setShape'
        QtMocHelpers::SlotData<void(enum Shape)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setName'
        QtMocHelpers::SlotData<void(QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'setX'
        QtMocHelpers::SlotData<void(qreal)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 8 },
        }}),
        // Slot 'setY'
        QtMocHelpers::SlotData<void(qreal)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 10 },
        }}),
        // Slot 'setPos'
        QtMocHelpers::SlotData<void(QPointF)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setWidth'
        QtMocHelpers::SlotData<void(qreal)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 15 },
        }}),
        // Slot 'setHeight'
        QtMocHelpers::SlotData<void(qreal)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 17 },
        }}),
        // Slot 'setSize'
        QtMocHelpers::SlotData<void(QSizeF)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'setRotation'
        QtMocHelpers::SlotData<void(qreal)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 22 },
        }}),
        // Slot 'setOpacity'
        QtMocHelpers::SlotData<void(qreal)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 24 },
        }}),
        // Slot 'setVisible'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'setPolygon'
        QtMocHelpers::SlotData<void(QJSValue)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Slot 'setPolygon'
        QtMocHelpers::SlotData<void(const QPolygonF &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 29 },
        }}),
        // Slot 'setText'
        QtMocHelpers::SlotData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Slot 'setFont'
        QtMocHelpers::SlotData<void(const Font &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Slot 'setTextAlignment'
        QtMocHelpers::SlotData<void(Qt::Alignment)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Slot 'setWordWrap'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setTextColor'
        QtMocHelpers::SlotData<void(const QColor &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'setTile'
        QtMocHelpers::SlotData<void(EditableTile *)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 45, 46 },
        }}),
        // Slot 'setTileFlippedHorizontally'
        QtMocHelpers::SlotData<void(bool)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 48 },
        }}),
        // Slot 'setTileFlippedVertically'
        QtMocHelpers::SlotData<void(bool)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 50 },
        }}),
        // Slot 'setSelected'
        QtMocHelpers::SlotData<void(bool)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 52 },
        }}),
        // Method 'resolvedClassName'
        QtMocHelpers::MethodData<QString() const>(53, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(56, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'shape'
        QtMocHelpers::PropertyData<enum Shape>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'type'
        QtMocHelpers::PropertyData<QString>(57, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'x'
        QtMocHelpers::PropertyData<qreal>(8, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'y'
        QtMocHelpers::PropertyData<qreal>(10, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'pos'
        QtMocHelpers::PropertyData<QPointF>(13, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'width'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'height'
        QtMocHelpers::PropertyData<qreal>(17, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'size'
        QtMocHelpers::PropertyData<QSizeF>(20, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'rotation'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'opacity'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'polygon'
        QtMocHelpers::PropertyData<QJSValue>(29, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'text'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'font'
        QtMocHelpers::PropertyData<Tiled::Font>(35, 0x80000000 | 58, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'textAlignment'
        QtMocHelpers::PropertyData<Qt::Alignment>(38, 0x80000000 | 37, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'wordWrap'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'textColor'
        QtMocHelpers::PropertyData<QColor>(43, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'tile'
        QtMocHelpers::PropertyData<Tiled::EditableTile*>(46, 0x80000000 | 59, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'tileFlippedHorizontally'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tileFlippedVertically'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'selected'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'layer'
        QtMocHelpers::PropertyData<Tiled::EditableObjectGroup*>(60, 0x80000000 | 61, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'map'
        QtMocHelpers::PropertyData<Tiled::EditableMap*>(62, 0x80000000 | 63, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Shape'
        QtMocHelpers::EnumData<enum Shape>(3, 3, QMC::EnumFlags{}).add({
            {   64, Shape::Rectangle },
            {   65, Shape::Polygon },
            {   66, Shape::Polyline },
            {   67, Shape::Ellipse },
            {   68, Shape::Capsule },
            {   69, Shape::Text },
            {   70, Shape::Point },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QString, 6 }, { QMetaType::QObjectStar, 55 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 6 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
        QtMocHelpers::ConstructorData<Constructor(enum Shape, const QString &, QObject *)>(2, QMC::AccessPublic, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 6 }, { QMetaType::QObjectStar, 55 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(enum Shape, const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 6 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(enum Shape)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    return QtMocHelpers::metaObjectData<EditableMapObject, qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableMapObject::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableMapObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableMapObject *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableMapObject *_r = new EditableMapObject((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableMapObject *_r = new EditableMapObject((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { EditableMapObject *_r = new EditableMapObject();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { EditableMapObject *_r = new EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 4: { EditableMapObject *_r = new EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 5: { EditableMapObject *_r = new EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableMapObject((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 1: { new (_a[0]) EditableMapObject((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 2: { new (_a[0]) EditableMapObject(); } break;
        case 3: { new (_a[0]) EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3]))); } break;
        case 4: { new (_a[0]) EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); } break;
        case 5: { new (_a[0]) EditableMapObject((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1]))); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShape((*reinterpret_cast<std::add_pointer_t<enum Shape>>(_a[1]))); break;
        case 1: _t->setName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setX((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->setY((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 4: _t->setPos((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 5: _t->setWidth((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->setHeight((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->setSize((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 8: _t->setRotation((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 9: _t->setOpacity((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 10: _t->setVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setPolygon((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 12: _t->setPolygon((*reinterpret_cast<std::add_pointer_t<QPolygonF>>(_a[1]))); break;
        case 13: _t->setText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->setFont((*reinterpret_cast<std::add_pointer_t<Font>>(_a[1]))); break;
        case 15: _t->setTextAlignment((*reinterpret_cast<std::add_pointer_t<Qt::Alignment>>(_a[1]))); break;
        case 16: _t->setWordWrap((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setTextColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 18: _t->setTile((*reinterpret_cast<std::add_pointer_t<EditableTile*>>(_a[1]))); break;
        case 19: _t->setTileFlippedHorizontally((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->setTileFlippedVertically((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setSelected((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: { QString _r = _t->resolvedClassName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast<enum Shape*>(_v) = _t->shape(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->className(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->x(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->y(); break;
        case 6: *reinterpret_cast<QPointF*>(_v) = _t->pos(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->width(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->height(); break;
        case 9: *reinterpret_cast<QSizeF*>(_v) = _t->size(); break;
        case 10: *reinterpret_cast<qreal*>(_v) = _t->rotation(); break;
        case 11: *reinterpret_cast<qreal*>(_v) = _t->opacity(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 13: *reinterpret_cast<QJSValue*>(_v) = _t->polygon(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 15: *reinterpret_cast<Tiled::Font*>(_v) = _t->font(); break;
        case 16: *reinterpret_cast<Qt::Alignment*>(_v) = _t->textAlignment(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->wordWrap(); break;
        case 18: *reinterpret_cast<QColor*>(_v) = _t->textColor(); break;
        case 19: *reinterpret_cast<Tiled::EditableTile**>(_v) = _t->tile(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->tileFlippedHorizontally(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->tileFlippedVertically(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isSelected(); break;
        case 23: *reinterpret_cast<Tiled::EditableObjectGroup**>(_v) = _t->layer(); break;
        case 24: *reinterpret_cast<Tiled::EditableMap**>(_v) = _t->map(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setShape(*reinterpret_cast<enum Shape*>(_v)); break;
        case 2: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setClassName(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setX(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setY(*reinterpret_cast<qreal*>(_v)); break;
        case 6: _t->setPos(*reinterpret_cast<QPointF*>(_v)); break;
        case 7: _t->setWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 9: _t->setSize(*reinterpret_cast<QSizeF*>(_v)); break;
        case 10: _t->setRotation(*reinterpret_cast<qreal*>(_v)); break;
        case 11: _t->setOpacity(*reinterpret_cast<qreal*>(_v)); break;
        case 12: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setPolygon(*reinterpret_cast<QJSValue*>(_v)); break;
        case 14: _t->setText(*reinterpret_cast<QString*>(_v)); break;
        case 15: _t->setFont(*reinterpret_cast<Tiled::Font*>(_v)); break;
        case 16: _t->setTextAlignment(*reinterpret_cast<Qt::Alignment*>(_v)); break;
        case 17: _t->setWordWrap(*reinterpret_cast<bool*>(_v)); break;
        case 18: _t->setTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 19: _t->setTile(*reinterpret_cast<Tiled::EditableTile**>(_v)); break;
        case 20: _t->setTileFlippedHorizontally(*reinterpret_cast<bool*>(_v)); break;
        case 21: _t->setTileFlippedVertically(*reinterpret_cast<bool*>(_v)); break;
        case 22: _t->setSelected(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableMapObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableMapObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableMapObjectE_t>.strings))
        return static_cast<void*>(this);
    return EditableObject::qt_metacast(_clname);
}

int Tiled::EditableMapObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
