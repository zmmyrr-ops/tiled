/****************************************************************************
** Meta object code from reading C++ file 'tilelayerwangedit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilelayerwangedit.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilelayerwangedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TileLayerWangEdit::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TileLayerWangEdit",
        "setWangIndex",
        "",
        "x",
        "y",
        "Tiled::WangIndex::Value",
        "index",
        "color",
        "QPoint",
        "pos",
        "setCorner",
        "setEdge",
        "edge",
        "apply",
        "generate",
        "Tiled::EditableTileLayer*",
        "target",
        "wangSet",
        "Tiled::EditableWangSet*",
        "mergeable",
        "correctionsEnabled",
        "erasingEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setWangIndex'
        QtMocHelpers::SlotData<void(int, int, Tiled::WangIndex::Value, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setWangIndex'
        QtMocHelpers::SlotData<void(QPoint, Tiled::WangIndex::Value, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 5, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setCorner'
        QtMocHelpers::SlotData<void(int, int, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setCorner'
        QtMocHelpers::SlotData<void(QPoint, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setEdge'
        QtMocHelpers::SlotData<void(int, int, Tiled::WangIndex::Value, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { 0x80000000 | 5, 12 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setEdge'
        QtMocHelpers::SlotData<void(QPoint, Tiled::WangIndex::Value, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 5, 12 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'apply'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'generate'
        QtMocHelpers::MethodData<Tiled::EditableTileLayer *()>(14, 2, QMC::AccessPublic, 0x80000000 | 15),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'target'
        QtMocHelpers::PropertyData<Tiled::EditableTileLayer*>(16, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'wangSet'
        QtMocHelpers::PropertyData<Tiled::EditableWangSet*>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'mergeable'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'correctionsEnabled'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'erasingEnabled'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TileLayerWangEdit, qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TileLayerWangEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>.metaTypes,
    nullptr
} };

void Tiled::TileLayerWangEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TileLayerWangEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setWangIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Tiled::WangIndex::Value>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->setWangIndex((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::WangIndex::Value>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->setCorner((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->setCorner((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->setEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Tiled::WangIndex::Value>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 5: _t->setEdge((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::WangIndex::Value>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->apply(); break;
        case 7: { Tiled::EditableTileLayer* _r = _t->generate();
            if (_a[0]) *reinterpret_cast<Tiled::EditableTileLayer**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tiled::EditableWangSet* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::EditableTileLayer**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast<Tiled::EditableWangSet**>(_v) = _t->wangSet(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isMergeable(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->correctionsEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->erasingEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setMergeable(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setCorrectionsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setErasingEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::TileLayerWangEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TileLayerWangEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileLayerWangEditE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::TileLayerWangEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled9WangIndexE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::WangIndex::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled9WangIndexE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::WangIndex",
        "Value",
        "Top",
        "TopRight",
        "Right",
        "BottomRight",
        "Bottom",
        "BottomLeft",
        "Left",
        "TopLeft",
        "NumCorners",
        "NumEdges",
        "NumIndexes"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Value'
        QtMocHelpers::EnumData<Value>(1, 1, QMC::EnumFlags{}).add({
            {    2, Value::Top },
            {    3, Value::TopRight },
            {    4, Value::Right },
            {    5, Value::BottomRight },
            {    6, Value::Bottom },
            {    7, Value::BottomLeft },
            {    8, Value::Left },
            {    9, Value::TopLeft },
            {   10, Value::NumCorners },
            {   11, Value::NumEdges },
            {   12, Value::NumIndexes },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Tiled9WangIndexE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Tiled9WangIndexE =
    Tiled::WangIndex::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled9WangIndexE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Tiled9WangIndexE =
    qt_staticMetaObjectContent_ZN5Tiled9WangIndexE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Tiled9WangIndexE =
    qt_staticMetaObjectContent_ZN5Tiled9WangIndexE.relocatingData;

Q_CONSTINIT const QMetaObject Tiled::WangIndex::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Tiled9WangIndexE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Tiled9WangIndexE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Tiled9WangIndexE.metaTypes,
    nullptr
} };

QT_WARNING_POP
