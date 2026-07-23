/****************************************************************************
** Meta object code from reading C++ file 'tileseteditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tileseteditor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tileseteditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13TilesetEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TilesetEditor::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13TilesetEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TilesetEditor",
        "currentTileChanged",
        "",
        "Tile*",
        "tile",
        "currentWangSetChanged",
        "currentWangColorIndexChanged",
        "colorIndex",
        "collisionEditor",
        "Tiled::TileCollisionDock*",
        "currentWangSet",
        "Tiled::EditableWangSet*",
        "currentWangColorIndex"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentTileChanged'
        QtMocHelpers::SignalData<void(Tile *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'currentWangSetChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentWangColorIndexChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'collisionEditor'
        QtMocHelpers::PropertyData<Tiled::TileCollisionDock*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'currentWangSet'
        QtMocHelpers::PropertyData<Tiled::EditableWangSet*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'currentWangColorIndex'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TilesetEditor, qt_meta_tag_ZN5Tiled13TilesetEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TilesetEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<Editor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13TilesetEditorE_t>.metaTypes,
    nullptr
} };

void Tiled::TilesetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TilesetEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentTileChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 1: _t->currentWangSetChanged(); break;
        case 2: _t->currentWangColorIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TilesetEditor::*)(Tile * )>(_a, &TilesetEditor::currentTileChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetEditor::*)()>(_a, &TilesetEditor::currentWangSetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetEditor::*)(int )>(_a, &TilesetEditor::currentWangColorIndexChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::TileCollisionDock**>(_v) = _t->collisionEditor(); break;
        case 1: *reinterpret_cast<Tiled::EditableWangSet**>(_v) = _t->currentWangSet(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->currentWangColorIndex(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentWangSet(*reinterpret_cast<Tiled::EditableWangSet**>(_v)); break;
        case 2: _t->setCurrentWangColorIndex(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::TilesetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TilesetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13TilesetEditorE_t>.strings))
        return static_cast<void*>(this);
    return Editor::qt_metacast(_clname);
}

int Tiled::TilesetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Editor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tiled::TilesetEditor::currentTileChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::TilesetEditor::currentWangSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::TilesetEditor::currentWangColorIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
