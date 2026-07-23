/****************************************************************************
** Meta object code from reading C++ file 'jsonplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/plugins/json/jsonplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jsonplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4Json10JsonPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto Json::JsonPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN4Json10JsonPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Json::JsonPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<JsonPlugin, qt_meta_tag_ZN4Json10JsonPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Json::JsonPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::Plugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json10JsonPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json10JsonPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4Json10JsonPluginE_t>.metaTypes,
    nullptr
} };

void Json::JsonPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JsonPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Json::JsonPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Json::JsonPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json10JsonPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.Plugin"))
        return static_cast< Tiled::Plugin*>(this);
    return Tiled::Plugin::qt_metacast(_clname);
}

int Json::JsonPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::Plugin::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace Json;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_JsonPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x6a,  'J',  's',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf5, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(Json::JsonPlugin, JsonPlugin, qt_pluginMetaDataV2_JsonPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_JsonPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x6a,  'J',  's',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf5, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Json::JsonPlugin, JsonPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

namespace {
struct qt_meta_tag_ZN4Json13JsonMapFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Json::JsonMapFormat::qt_create_metaobjectdata<qt_meta_tag_ZN4Json13JsonMapFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Json::JsonMapFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<JsonMapFormat, qt_meta_tag_ZN4Json13JsonMapFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Json::JsonMapFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::MapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json13JsonMapFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json13JsonMapFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4Json13JsonMapFormatE_t>.metaTypes,
    nullptr
} };

void Json::JsonMapFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JsonMapFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Json::JsonMapFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Json::JsonMapFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json13JsonMapFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.MapFormat"))
        return static_cast< Tiled::MapFormat*>(this);
    return Tiled::MapFormat::qt_metacast(_clname);
}

int Json::JsonMapFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::MapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4Json17JsonTilesetFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Json::JsonTilesetFormat::qt_create_metaobjectdata<qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Json::JsonTilesetFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<JsonTilesetFormat, qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Json::JsonTilesetFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::TilesetFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>.metaTypes,
    nullptr
} };

void Json::JsonTilesetFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JsonTilesetFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Json::JsonTilesetFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Json::JsonTilesetFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json17JsonTilesetFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.TilesetFormat"))
        return static_cast< Tiled::TilesetFormat*>(this);
    return Tiled::TilesetFormat::qt_metacast(_clname);
}

int Json::JsonTilesetFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::TilesetFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Json::JsonObjectTemplateFormat::qt_create_metaobjectdata<qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Json::JsonObjectTemplateFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<JsonObjectTemplateFormat, qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Json::JsonObjectTemplateFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::ObjectTemplateFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>.metaTypes,
    nullptr
} };

void Json::JsonObjectTemplateFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JsonObjectTemplateFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Json::JsonObjectTemplateFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Json::JsonObjectTemplateFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4Json24JsonObjectTemplateFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.ObjectTemplateFormat"))
        return static_cast< Tiled::ObjectTemplateFormat*>(this);
    return Tiled::ObjectTemplateFormat::qt_metacast(_clname);
}

int Json::JsonObjectTemplateFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::ObjectTemplateFormat::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
