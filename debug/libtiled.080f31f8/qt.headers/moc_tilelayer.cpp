/****************************************************************************
** Meta object code from reading C++ file 'tilelayer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libtiled/tilelayer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilelayer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled4CellE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::Cell::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled4CellE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::Cell",
        "tileId",
        "empty",
        "flags",
        "flippedHorizontally",
        "flippedVertically",
        "flippedAntiDiagonally",
        "rotatedHexagonal120"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'tileId'
        QtMocHelpers::PropertyData<int>(1, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'empty'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'flags'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'flippedHorizontally'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'flippedVertically'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'flippedAntiDiagonally'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'rotatedHexagonal120'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Cell, qt_meta_tag_ZN5Tiled4CellE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::Cell::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled4CellE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled4CellE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled4CellE_t>.metaTypes,
    nullptr
} };

void Tiled::Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Cell *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->tileId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isEmpty(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->flags(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->flippedHorizontally(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->flippedVertically(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->flippedAntiDiagonally(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->rotatedHexagonal120(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFlags(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setFlippedHorizontally(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setFlippedVertically(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setFlippedAntiDiagonally(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setRotatedHexagonal120(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}
QT_WARNING_POP
