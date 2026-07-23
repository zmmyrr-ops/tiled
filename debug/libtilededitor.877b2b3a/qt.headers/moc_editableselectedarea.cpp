/****************************************************************************
** Meta object code from reading C++ file 'editableselectedarea.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableselectedarea.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableselectedarea.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableSelectedArea::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableSelectedArea",
        "set",
        "",
        "QRect",
        "rect",
        "QRectF",
        "Tiled::RegionValueType",
        "region",
        "add",
        "subtract",
        "intersect",
        "get",
        "boundingRect"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'set'
        QtMocHelpers::SlotData<void(const QRect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'set'
        QtMocHelpers::SlotData<void(const QRectF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 4 },
        }}),
        // Slot 'set'
        QtMocHelpers::SlotData<void(const Tiled::RegionValueType &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(const QRect &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(const QRectF &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 4 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(const Tiled::RegionValueType &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'subtract'
        QtMocHelpers::SlotData<void(const QRect &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'subtract'
        QtMocHelpers::SlotData<void(const QRectF &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 4 },
        }}),
        // Slot 'subtract'
        QtMocHelpers::SlotData<void(const Tiled::RegionValueType &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'intersect'
        QtMocHelpers::SlotData<void(const QRect &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'intersect'
        QtMocHelpers::SlotData<void(const QRectF &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 4 },
        }}),
        // Slot 'intersect'
        QtMocHelpers::SlotData<void(const Tiled::RegionValueType &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'get'
        QtMocHelpers::MethodData<Tiled::RegionValueType() const>(11, 2, QMC::AccessPublic, 0x80000000 | 6),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'boundingRect'
        QtMocHelpers::PropertyData<QRect>(12, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditableSelectedArea, qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableSelectedArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableSelectedArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableSelectedArea *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->set((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 1: _t->set((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 2: _t->set((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 3: _t->add((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 4: _t->add((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 5: _t->add((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 6: _t->subtract((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 7: _t->subtract((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 8: _t->subtract((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 9: _t->intersect((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 10: _t->intersect((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 11: _t->intersect((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 12: { Tiled::RegionValueType _r = _t->get();
            if (_a[0]) *reinterpret_cast<Tiled::RegionValueType*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QRect*>(_v) = _t->boundingRect(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableSelectedArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableSelectedArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled20EditableSelectedAreaE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::EditableSelectedArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
