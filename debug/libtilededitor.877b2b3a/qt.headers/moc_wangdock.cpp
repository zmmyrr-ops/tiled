/****************************************************************************
** Meta object code from reading C++ file 'wangdock.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/wangdock.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wangdock.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled8WangDockE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::WangDock::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled8WangDockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::WangDock",
        "currentWangSetChanged",
        "",
        "WangSet*",
        "wangSet",
        "currentWangIdChanged",
        "WangId",
        "wangId",
        "addWangSetRequested",
        "WangSet::Type",
        "type",
        "duplicateWangSetRequested",
        "removeWangSetRequested",
        "selectWangBrush",
        "wangColorChanged",
        "color",
        "setCurrentWangSet",
        "onCurrentWangIdChanged",
        "onWangIdUsedChanged",
        "setCurrentWangColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentWangSetChanged'
        QtMocHelpers::SignalData<void(WangSet *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'currentWangIdChanged'
        QtMocHelpers::SignalData<void(WangId)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'addWangSetRequested'
        QtMocHelpers::SignalData<void(WangSet::Type)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'duplicateWangSetRequested'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'removeWangSetRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectWangBrush'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wangColorChanged'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'setCurrentWangSet'
        QtMocHelpers::SlotData<void(WangSet *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCurrentWangIdChanged'
        QtMocHelpers::SlotData<void(WangId)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onWangIdUsedChanged'
        QtMocHelpers::SlotData<void(WangId)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'setCurrentWangColor'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WangDock, qt_meta_tag_ZN5Tiled8WangDockE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::WangDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8WangDockE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8WangDockE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled8WangDockE_t>.metaTypes,
    nullptr
} };

void Tiled::WangDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WangDock *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentWangSetChanged((*reinterpret_cast<std::add_pointer_t<WangSet*>>(_a[1]))); break;
        case 1: _t->currentWangIdChanged((*reinterpret_cast<std::add_pointer_t<WangId>>(_a[1]))); break;
        case 2: _t->addWangSetRequested((*reinterpret_cast<std::add_pointer_t<WangSet::Type>>(_a[1]))); break;
        case 3: _t->duplicateWangSetRequested(); break;
        case 4: _t->removeWangSetRequested(); break;
        case 5: _t->selectWangBrush(); break;
        case 6: _t->wangColorChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setCurrentWangSet((*reinterpret_cast<std::add_pointer_t<WangSet*>>(_a[1]))); break;
        case 8: _t->onCurrentWangIdChanged((*reinterpret_cast<std::add_pointer_t<WangId>>(_a[1]))); break;
        case 9: _t->onWangIdUsedChanged((*reinterpret_cast<std::add_pointer_t<WangId>>(_a[1]))); break;
        case 10: _t->setCurrentWangColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)(WangSet * )>(_a, &WangDock::currentWangSetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)(WangId )>(_a, &WangDock::currentWangIdChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)(WangSet::Type )>(_a, &WangDock::addWangSetRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)()>(_a, &WangDock::duplicateWangSetRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)()>(_a, &WangDock::removeWangSetRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)()>(_a, &WangDock::selectWangBrush, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WangDock::*)(int )>(_a, &WangDock::wangColorChanged, 6))
            return;
    }
}

const QMetaObject *Tiled::WangDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::WangDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8WangDockE_t>.strings))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Tiled::WangDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void Tiled::WangDock::currentWangSetChanged(WangSet * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::WangDock::currentWangIdChanged(WangId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::WangDock::addWangSetRequested(WangSet::Type _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::WangDock::duplicateWangSetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Tiled::WangDock::removeWangSetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Tiled::WangDock::selectWangBrush()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Tiled::WangDock::wangColorChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
