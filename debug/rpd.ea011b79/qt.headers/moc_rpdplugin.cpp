/****************************************************************************
** Meta object code from reading C++ file 'rpdplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/plugins/rpd/rpdplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpdplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3Rpd9RpdPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto Rpd::RpdPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN3Rpd9RpdPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Rpd::RpdPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RpdPlugin, qt_meta_tag_ZN3Rpd9RpdPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Rpd::RpdPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::Plugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd9RpdPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd9RpdPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3Rpd9RpdPluginE_t>.metaTypes,
    nullptr
} };

void Rpd::RpdPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RpdPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Rpd::RpdPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rpd::RpdPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd9RpdPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.Plugin"))
        return static_cast< Tiled::Plugin*>(this);
    return Tiled::Plugin::qt_metacast(_clname);
}

int Rpd::RpdPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::Plugin::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace Rpd;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_RpdPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x69,  'R',  'p',  'd',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(Rpd::RpdPlugin, RpdPlugin, qt_pluginMetaDataV2_RpdPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_RpdPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x69,  'R',  'p',  'd',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Rpd::RpdPlugin, RpdPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

namespace {
struct qt_meta_tag_ZN3Rpd12RpdMapFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto Rpd::RpdMapFormat::qt_create_metaobjectdata<qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Rpd::RpdMapFormat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RpdMapFormat, qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Rpd::RpdMapFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::WritableMapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>.metaTypes,
    nullptr
} };

void Rpd::RpdMapFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RpdMapFormat *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Rpd::RpdMapFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rpd::RpdMapFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3Rpd12RpdMapFormatE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.MapFormat"))
        return static_cast< Tiled::MapFormat*>(this);
    return Tiled::WritableMapFormat::qt_metacast(_clname);
}

int Rpd::RpdMapFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::WritableMapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
