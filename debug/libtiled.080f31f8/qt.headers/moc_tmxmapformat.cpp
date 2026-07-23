/****************************************************************************
** Meta object code from reading C++ file 'tmxmapformat.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libtiled/tmxmapformat.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmxmapformat.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12TmxMapFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TmxMapFormat::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TmxMapFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TmxMapFormat, qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TmxMapFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<MapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>.metaTypes,
    nullptr
} };

void Tiled::TmxMapFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TmxMapFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::TmxMapFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TmxMapFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12TmxMapFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.MapFormat"))
        return static_cast< Tiled::MapFormat*>(this);
    return MapFormat::qt_metacast(_clname);
}

int Tiled::TmxMapFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TsxTilesetFormat::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TsxTilesetFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TsxTilesetFormat, qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TsxTilesetFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<TilesetFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>.metaTypes,
    nullptr
} };

void Tiled::TsxTilesetFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TsxTilesetFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::TsxTilesetFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TsxTilesetFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16TsxTilesetFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.TilesetFormat"))
        return static_cast< Tiled::TilesetFormat*>(this);
    return TilesetFormat::qt_metacast(_clname);
}

int Tiled::TsxTilesetFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TilesetFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::XmlObjectTemplateFormat::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::XmlObjectTemplateFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XmlObjectTemplateFormat, qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::XmlObjectTemplateFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<ObjectTemplateFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>.metaTypes,
    nullptr
} };

void Tiled::XmlObjectTemplateFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XmlObjectTemplateFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::XmlObjectTemplateFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::XmlObjectTemplateFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23XmlObjectTemplateFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.ObjectTemplateFormat"))
        return static_cast< Tiled::ObjectTemplateFormat*>(this);
    return ObjectTemplateFormat::qt_metacast(_clname);
}

int Tiled::XmlObjectTemplateFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ObjectTemplateFormat::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
