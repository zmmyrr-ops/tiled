/****************************************************************************
** Meta object code from reading C++ file 'editablelayer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editablelayer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editablelayer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13EditableLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableLayer::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13EditableLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableLayer",
        "setName",
        "",
        "name",
        "setOpacity",
        "opacity",
        "setTintColor",
        "QColor",
        "color",
        "setVisible",
        "visible",
        "setLocked",
        "locked",
        "setOffset",
        "QPointF",
        "offset",
        "setParallaxFactor",
        "factor",
        "setBlendMode",
        "BlendModeNS::Value",
        "mode",
        "setSelected",
        "selected",
        "id",
        "tintColor",
        "parallaxFactor",
        "blendMode",
        "map",
        "Tiled::EditableMap*",
        "parentLayer",
        "Tiled::EditableGroupLayer*",
        "isTileLayer",
        "isObjectLayer",
        "isGroupLayer",
        "isImageLayer",
        "TypeFlag",
        "TileLayerType",
        "ObjectGroupType",
        "ImageLayerType",
        "GroupLayerType"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setName'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'setOpacity'
        QtMocHelpers::SlotData<void(qreal)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 5 },
        }}),
        // Slot 'setTintColor'
        QtMocHelpers::SlotData<void(const QColor &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'setVisible'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'setLocked'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setOffset'
        QtMocHelpers::SlotData<void(QPointF)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setParallaxFactor'
        QtMocHelpers::SlotData<void(QPointF)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 17 },
        }}),
        // Slot 'setBlendMode'
        QtMocHelpers::SlotData<void(BlendModeNS::Value)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'setSelected'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'opacity'
        QtMocHelpers::PropertyData<qreal>(5, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tintColor'
        QtMocHelpers::PropertyData<QColor>(24, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'locked'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'offset'
        QtMocHelpers::PropertyData<QPointF>(15, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'parallaxFactor'
        QtMocHelpers::PropertyData<QPointF>(25, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'blendMode'
        QtMocHelpers::PropertyData<BlendModeNS::Value>(26, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'map'
        QtMocHelpers::PropertyData<Tiled::EditableMap*>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'parentLayer'
        QtMocHelpers::PropertyData<Tiled::EditableGroupLayer*>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'selected'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isTileLayer'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isObjectLayer'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isGroupLayer'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isImageLayer'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TypeFlag'
        QtMocHelpers::EnumData<enum TypeFlag>(35, 35, QMC::EnumFlags{}).add({
            {   36, TypeFlag::TileLayerType },
            {   37, TypeFlag::ObjectGroupType },
            {   38, TypeFlag::ImageLayerType },
            {   39, TypeFlag::GroupLayerType },
        }),
    };
    return QtMocHelpers::metaObjectData<EditableLayer, qt_meta_tag_ZN5Tiled13EditableLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Tiled13EditableLayerE[] = {
    QMetaObject::SuperData::link<Tiled::BlendModeNS::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Tiled::EditableLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableLayerE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Tiled13EditableLayerE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13EditableLayerE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableLayer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setOpacity((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->setTintColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->setVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setLocked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setOffset((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 6: _t->setParallaxFactor((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 7: _t->setBlendMode((*reinterpret_cast<std::add_pointer_t<BlendModeNS::Value>>(_a[1]))); break;
        case 8: _t->setSelected((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->opacity(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->tintColor(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isLocked(); break;
        case 6: *reinterpret_cast<QPointF*>(_v) = _t->offset(); break;
        case 7: *reinterpret_cast<QPointF*>(_v) = _t->parallaxFactor(); break;
        case 8: *reinterpret_cast<BlendModeNS::Value*>(_v) = _t->blendMode(); break;
        case 9: *reinterpret_cast<Tiled::EditableMap**>(_v) = _t->map(); break;
        case 10: *reinterpret_cast<Tiled::EditableGroupLayer**>(_v) = _t->parentLayer(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isSelected(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isTileLayer(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isObjectLayer(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isGroupLayer(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isImageLayer(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setOpacity(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setTintColor(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setLocked(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setOffset(*reinterpret_cast<QPointF*>(_v)); break;
        case 7: _t->setParallaxFactor(*reinterpret_cast<QPointF*>(_v)); break;
        case 8: _t->setBlendMode(*reinterpret_cast<BlendModeNS::Value*>(_v)); break;
        case 11: _t->setSelected(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableLayerE_t>.strings))
        return static_cast<void*>(this);
    return EditableObject::qt_metacast(_clname);
}

int Tiled::EditableLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled11BlendModeNSE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::BlendModeNS::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11BlendModeNSE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::BlendModeNS",
        "Value",
        "Normal",
        "Add",
        "Multiply",
        "Screen",
        "Overlay",
        "Darken",
        "Lighten",
        "ColorDodge",
        "ColorBurn",
        "HardLight",
        "SoftLight",
        "Difference",
        "Exclusion"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Value'
        QtMocHelpers::EnumData<Value>(1, 1, QMC::EnumFlags{}).add({
            {    2, Value::Normal },
            {    3, Value::Add },
            {    4, Value::Multiply },
            {    5, Value::Screen },
            {    6, Value::Overlay },
            {    7, Value::Darken },
            {    8, Value::Lighten },
            {    9, Value::ColorDodge },
            {   10, Value::ColorBurn },
            {   11, Value::HardLight },
            {   12, Value::SoftLight },
            {   13, Value::Difference },
            {   14, Value::Exclusion },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Tiled11BlendModeNSE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Tiled11BlendModeNSE =
    Tiled::BlendModeNS::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11BlendModeNSE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Tiled11BlendModeNSE =
    qt_staticMetaObjectContent_ZN5Tiled11BlendModeNSE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Tiled11BlendModeNSE =
    qt_staticMetaObjectContent_ZN5Tiled11BlendModeNSE.relocatingData;

Q_CONSTINIT const QMetaObject Tiled::BlendModeNS::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Tiled11BlendModeNSE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Tiled11BlendModeNSE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Tiled11BlendModeNSE.metaTypes,
    nullptr
} };

QT_WARNING_POP
