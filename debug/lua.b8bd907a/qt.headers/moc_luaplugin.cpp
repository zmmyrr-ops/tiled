/****************************************************************************
** Meta object code from reading C++ file 'luaplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/plugins/lua/luaplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'luaplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3Lua9LuaPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto Lua::LuaPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN3Lua9LuaPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Lua::LuaPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LuaPlugin, qt_meta_tag_ZN3Lua9LuaPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Lua::LuaPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::Plugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua9LuaPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua9LuaPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3Lua9LuaPluginE_t>.metaTypes,
    nullptr
} };

void Lua::LuaPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LuaPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Lua::LuaPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lua::LuaPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua9LuaPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.Plugin"))
        return static_cast< Tiled::Plugin*>(this);
    return Tiled::Plugin::qt_metacast(_clname);
}

int Lua::LuaPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::Plugin::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace Lua;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_LuaPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x69,  'L',  'u',  'a',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf5, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(Lua::LuaPlugin, LuaPlugin, qt_pluginMetaDataV2_LuaPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_LuaPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x69,  'L',  'u',  'a',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf5, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Lua::LuaPlugin, LuaPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

namespace {
struct qt_meta_tag_ZN3Lua12LuaMapFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Lua::LuaMapFormat::qt_create_metaobjectdata<qt_meta_tag_ZN3Lua12LuaMapFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Lua::LuaMapFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LuaMapFormat, qt_meta_tag_ZN3Lua12LuaMapFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Lua::LuaMapFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::WritableMapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua12LuaMapFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua12LuaMapFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3Lua12LuaMapFormatE_t>.metaTypes,
    nullptr
} };

void Lua::LuaMapFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LuaMapFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Lua::LuaMapFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lua::LuaMapFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua12LuaMapFormatE_t>.strings))
        return static_cast<void*>(this);
    return Tiled::WritableMapFormat::qt_metacast(_clname);
}

int Lua::LuaMapFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::WritableMapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Lua::LuaTilesetFormat::qt_create_metaobjectdata<qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Lua::LuaTilesetFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LuaTilesetFormat, qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Lua::LuaTilesetFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::WritableTilesetFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>.metaTypes,
    nullptr
} };

void Lua::LuaTilesetFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LuaTilesetFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Lua::LuaTilesetFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lua::LuaTilesetFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Lua16LuaTilesetFormatE_t>.strings))
        return static_cast<void*>(this);
    return Tiled::WritableTilesetFormat::qt_metacast(_clname);
}

int Lua::LuaTilesetFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::WritableTilesetFormat::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
