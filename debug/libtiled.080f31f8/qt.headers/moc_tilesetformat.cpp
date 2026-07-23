/****************************************************************************
** Meta object code from reading C++ file 'tilesetformat.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libtiled/tilesetformat.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilesetformat.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13TilesetFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TilesetFormat::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13TilesetFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TilesetFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TilesetFormat, qt_meta_tag_ZN5Tiled13TilesetFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TilesetFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<FileFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13TilesetFormatE_t>.metaTypes,
    nullptr
} };

void Tiled::TilesetFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TilesetFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::TilesetFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TilesetFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.FileFormat"))
        return static_cast< Tiled::FileFormat*>(this);
    return FileFormat::qt_metacast(_clname);
}

int Tiled::TilesetFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::WritableTilesetFormat::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::WritableTilesetFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WritableTilesetFormat, qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::WritableTilesetFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<TilesetFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>.metaTypes,
    nullptr
} };

void Tiled::WritableTilesetFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WritableTilesetFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::WritableTilesetFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::WritableTilesetFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled21WritableTilesetFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.TilesetFormat"))
        return static_cast< Tiled::TilesetFormat*>(this);
    return TilesetFormat::qt_metacast(_clname);
}

int Tiled::WritableTilesetFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TilesetFormat::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
