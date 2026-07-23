/****************************************************************************
** Meta object code from reading C++ file 'world.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libtiled/world.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'world.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13WorldMapEntryE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::WorldMapEntry::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13WorldMapEntryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::WorldMapEntry",
        "fileName",
        "rect",
        "QRect"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'rect'
        QtMocHelpers::PropertyData<QRect>(2, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WorldMapEntry, qt_meta_tag_ZN5Tiled13WorldMapEntryE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::WorldMapEntry::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13WorldMapEntryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13WorldMapEntryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13WorldMapEntryE_t>.metaTypes,
    nullptr
} };

void Tiled::WorldMapEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<WorldMapEntry *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileName; break;
        case 1: *reinterpret_cast<QRect*>(_v) = _t->rect; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: QtMocHelpers::setProperty(_t->fileName, *reinterpret_cast<QString*>(_v)); break;
        case 1: QtMocHelpers::setProperty(_t->rect, *reinterpret_cast<QRect*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN5Tiled12WorldPatternE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::WorldPattern::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12WorldPatternE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::WorldPattern",
        "regExp",
        "multiplierX",
        "multiplierY",
        "offset",
        "QPoint",
        "mapSize",
        "QSize"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'regExp'
        QtMocHelpers::PropertyData<QRegularExpression>(1, QMetaType::QRegularExpression, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'multiplierX'
        QtMocHelpers::PropertyData<int>(2, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'multiplierY'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'offset'
        QtMocHelpers::PropertyData<QPoint>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'mapSize'
        QtMocHelpers::PropertyData<QSize>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WorldPattern, qt_meta_tag_ZN5Tiled12WorldPatternE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::WorldPattern::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12WorldPatternE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12WorldPatternE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12WorldPatternE_t>.metaTypes,
    nullptr
} };

void Tiled::WorldPattern::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<WorldPattern *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QRegularExpression*>(_v) = _t->regexp; break;
        case 1: *reinterpret_cast<int*>(_v) = _t->multiplierX; break;
        case 2: *reinterpret_cast<int*>(_v) = _t->multiplierY; break;
        case 3: *reinterpret_cast<QPoint*>(_v) = _t->offset; break;
        case 4: *reinterpret_cast<QSize*>(_v) = _t->mapSize; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: QtMocHelpers::setProperty(_t->regexp, *reinterpret_cast<QRegularExpression*>(_v)); break;
        case 1: QtMocHelpers::setProperty(_t->multiplierX, *reinterpret_cast<int*>(_v)); break;
        case 2: QtMocHelpers::setProperty(_t->multiplierY, *reinterpret_cast<int*>(_v)); break;
        case 3: QtMocHelpers::setProperty(_t->offset, *reinterpret_cast<QPoint*>(_v)); break;
        case 4: QtMocHelpers::setProperty(_t->mapSize, *reinterpret_cast<QSize*>(_v)); break;
        default: break;
        }
    }
}
QT_WARNING_POP
