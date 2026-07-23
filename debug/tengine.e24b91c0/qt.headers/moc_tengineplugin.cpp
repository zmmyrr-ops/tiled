/****************************************************************************
** Meta object code from reading C++ file 'tengineplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/plugins/tengine/tengineplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tengineplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Tengine13TenginePluginE_t {};
} // unnamed namespace

template <> constexpr inline auto Tengine::TenginePlugin::qt_create_metaobjectdata<qt_meta_tag_ZN7Tengine13TenginePluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tengine::TenginePlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TenginePlugin, qt_meta_tag_ZN7Tengine13TenginePluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tengine::TenginePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<Tiled::WritableMapFormat::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Tengine13TenginePluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Tengine13TenginePluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Tengine13TenginePluginE_t>.metaTypes,
    nullptr
} };

void Tengine::TenginePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TenginePlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tengine::TenginePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tengine::TenginePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Tengine13TenginePluginE_t>.strings))
        return static_cast<void*>(this);
    return Tiled::WritableMapFormat::qt_metacast(_clname);
}

int Tengine::TenginePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tiled::WritableMapFormat::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace Tengine;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_TenginePlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x77,  'o',  'r',  'g',  '.',  'm',  'a', 
    'p',  'e',  'd',  'i',  't',  'o',  'r',  '.', 
    'M',  'a',  'p',  'F',  'o',  'r',  'm',  'a', 
    't', 
    // "className"
    0x03,  0x6d,  'T',  'e',  'n',  'g',  'i',  'n', 
    'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(Tengine::TenginePlugin, TenginePlugin, qt_pluginMetaDataV2_TenginePlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_TenginePlugin[] = {
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
    0x03,  0x6d,  'T',  'e',  'n',  'g',  'i',  'n', 
    'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6d,  'd',  'e',  'f',  'a',  'u', 
    'l',  't',  'E',  'n',  'a',  'b',  'l',  'e', 
    0xf4, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Tengine::TenginePlugin, TenginePlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
