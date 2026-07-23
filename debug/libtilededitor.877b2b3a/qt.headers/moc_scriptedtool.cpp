/****************************************************************************
** Meta object code from reading C++ file 'scriptedtool.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptedtool.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptedtool.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12ScriptedToolE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptedTool::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12ScriptedToolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptedTool",
        "icon",
        "map",
        "Tiled::EditableMap*",
        "selectedTile",
        "Tiled::EditableTile*",
        "preview",
        "toolBarActions"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'icon'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'map'
        QtMocHelpers::PropertyData<Tiled::EditableMap*>(2, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'selectedTile'
        QtMocHelpers::PropertyData<Tiled::EditableTile*>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'preview'
        QtMocHelpers::PropertyData<Tiled::EditableMap*>(6, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'toolBarActions'
        QtMocHelpers::PropertyData<QStringList>(7, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptedTool, qt_meta_tag_ZN5Tiled12ScriptedToolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptedTool::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractTileTool::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptedToolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptedToolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12ScriptedToolE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptedTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptedTool *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->iconFileName(); break;
        case 1: *reinterpret_cast<Tiled::EditableMap**>(_v) = _t->editableMap(); break;
        case 2: *reinterpret_cast<Tiled::EditableTile**>(_v) = _t->editableTile(); break;
        case 3: *reinterpret_cast<Tiled::EditableMap**>(_v) = _t->preview(); break;
        case 4: *reinterpret_cast<QStringList*>(_v) = _t->toolBarActions(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconFileName(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setPreview(*reinterpret_cast<Tiled::EditableMap**>(_v)); break;
        case 4: _t->setToolBarActions(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptedTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptedTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptedToolE_t>.strings))
        return static_cast<void*>(this);
    return AbstractTileTool::qt_metacast(_clname);
}

int Tiled::ScriptedTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTileTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
