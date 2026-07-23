/****************************************************************************
** Meta object code from reading C++ file 'resizehelper.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/resizehelper.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resizehelper.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12ResizeHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ResizeHelper::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12ResizeHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ResizeHelper",
        "offsetChanged",
        "",
        "QPoint",
        "offset",
        "offsetXChanged",
        "value",
        "offsetYChanged",
        "offsetBoundsChanged",
        "QRect",
        "bounds",
        "setOldSize",
        "QSize",
        "size",
        "setNewSize",
        "setOffset",
        "setOffsetX",
        "x",
        "setOffsetY",
        "y",
        "setNewWidth",
        "width",
        "setNewHeight",
        "height"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'offsetChanged'
        QtMocHelpers::SignalData<void(QPoint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'offsetXChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'offsetYChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'offsetBoundsChanged'
        QtMocHelpers::SignalData<void(const QRect &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'setOldSize'
        QtMocHelpers::SlotData<void(QSize)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setNewSize'
        QtMocHelpers::SlotData<void(QSize)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setOffset'
        QtMocHelpers::SlotData<void(QPoint)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setOffsetX'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'setOffsetY'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setNewWidth'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Slot 'setNewHeight'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ResizeHelper, qt_meta_tag_ZN5Tiled12ResizeHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ResizeHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ResizeHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ResizeHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12ResizeHelperE_t>.metaTypes,
    nullptr
} };

void Tiled::ResizeHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ResizeHelper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->offsetXChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->offsetYChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->offsetBoundsChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 4: _t->setOldSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 5: _t->setNewSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 6: _t->setOffset((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 7: _t->setOffsetX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setOffsetY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setNewWidth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setNewHeight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ResizeHelper::*)(QPoint )>(_a, &ResizeHelper::offsetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ResizeHelper::*)(int )>(_a, &ResizeHelper::offsetXChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ResizeHelper::*)(int )>(_a, &ResizeHelper::offsetYChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ResizeHelper::*)(const QRect & )>(_a, &ResizeHelper::offsetBoundsChanged, 3))
            return;
    }
}

const QMetaObject *Tiled::ResizeHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ResizeHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ResizeHelperE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tiled::ResizeHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Tiled::ResizeHelper::offsetChanged(QPoint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::ResizeHelper::offsetXChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::ResizeHelper::offsetYChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::ResizeHelper::offsetBoundsChanged(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
