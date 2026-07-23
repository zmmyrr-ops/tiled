/****************************************************************************
** Meta object code from reading C++ file 'replicaislandplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/plugins/replicaisland/replicaislandplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replicaislandplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto ReplicaIsland::ReplicaIslandPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ReplicaIsland::ReplicaIslandPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ReplicaIslandPlugin, qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ReplicaIsland::ReplicaIslandPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::MapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>.metaTypes,
    nullptr
} };

void ReplicaIsland::ReplicaIslandPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ReplicaIslandPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ReplicaIsland::ReplicaIslandPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReplicaIsland::ReplicaIslandPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ReplicaIsland19ReplicaIslandPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.mapeditor.MapFormat"))
        return static_cast< Tiled::MapFormat*>(this);
    return Tiled::MapFormat::qt_metacast(_clname);
}

int ReplicaIsland::ReplicaIslandPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::MapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace ReplicaIsland;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_ReplicaIslandPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x77,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'M',  'a',  'p',  'F',  'o',  'r',  'm',  'a', 
    't', 
    // "className"
    0x03,  0x73,  'R',  'e',  'p',  'l',  'i',  'c', 
    'a',  'I',  's',  'l',  'a',  'n',  'd',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(ReplicaIsland::ReplicaIslandPlugin, ReplicaIslandPlugin, qt_pluginMetaDataV2_ReplicaIslandPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_ReplicaIslandPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x77,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'M',  'a',  'p',  'F',  'o',  'r',  'm',  'a', 
    't', 
    // "className"
    0x03,  0x73,  'R',  'e',  'p',  'l',  'i',  'c', 
    'a',  'I',  's',  'l',  'a',  'n',  'd',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ReplicaIsland::ReplicaIslandPlugin, ReplicaIslandPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
