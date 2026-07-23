/****************************************************************************
** Meta object code from reading C++ file 'tilestampmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilestampmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilestampmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled16TileStampManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TileStampManager::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled16TileStampManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TileStampManager",
        "setStamp",
        "",
        "TileStamp",
        "stamp",
        "createStamp",
        "addVariation",
        "targetStamp",
        "selectQuickStamp",
        "index",
        "createQuickStamp",
        "extendQuickStamp",
        "stampsDirectoryChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setStamp'
        QtMocHelpers::SignalData<void(const TileStamp &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'createStamp'
        QtMocHelpers::SlotData<TileStamp()>(5, 2, QMC::AccessPublic, 0x80000000 | 3),
        // Slot 'addVariation'
        QtMocHelpers::SlotData<void(const TileStamp &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 },
        }}),
        // Slot 'selectQuickStamp'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'createQuickStamp'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'extendQuickStamp'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'stampsDirectoryChanged'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TileStampManager, qt_meta_tag_ZN5Tiled16TileStampManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TileStampManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TileStampManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TileStampManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled16TileStampManagerE_t>.metaTypes,
    nullptr
} };

void Tiled::TileStampManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TileStampManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setStamp((*reinterpret_cast<std::add_pointer_t<TileStamp>>(_a[1]))); break;
        case 1: { TileStamp _r = _t->createStamp();
            if (_a[0]) *reinterpret_cast<TileStamp*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addVariation((*reinterpret_cast<std::add_pointer_t<TileStamp>>(_a[1]))); break;
        case 3: _t->selectQuickStamp((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->createQuickStamp((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->extendQuickStamp((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->stampsDirectoryChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TileStampManager::*)(const TileStamp & )>(_a, &TileStampManager::setStamp, 0))
            return;
    }
}

const QMetaObject *Tiled::TileStampManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TileStampManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TileStampManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::TileStampManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Tiled::TileStampManager::setStamp(const TileStamp & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
