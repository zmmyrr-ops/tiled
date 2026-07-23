/****************************************************************************
** Meta object code from reading C++ file 'mapeditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/mapeditor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapeditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled9MapEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::MapEditor::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled9MapEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::MapEditor",
        "currentBrushChanged",
        "",
        "currentWangSetChanged",
        "currentWangColorIndexChanged",
        "colorIndex",
        "selectedToolChanged",
        "AbstractTool*",
        "tool",
        "id",
        "tilesetsView",
        "Tiled::TilesetDock*",
        "currentBrush",
        "Tiled::EditableMap*",
        "currentWangSet",
        "Tiled::EditableWangSet*",
        "currentWangColorIndex",
        "currentMapView",
        "Tiled::MapView*",
        "selectedTool",
        "Tiled::AbstractTool*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentBrushChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentWangSetChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentWangColorIndexChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'selectedToolChanged'
        QtMocHelpers::SignalData<void(AbstractTool *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Method 'tool'
        QtMocHelpers::MethodData<AbstractTool *(const QByteArray &) const>(8, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QByteArray, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'tilesetsView'
        QtMocHelpers::PropertyData<Tiled::TilesetDock*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'currentBrush'
        QtMocHelpers::PropertyData<Tiled::EditableMap*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'currentWangSet'
        QtMocHelpers::PropertyData<Tiled::EditableWangSet*>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'currentWangColorIndex'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'currentMapView'
        QtMocHelpers::PropertyData<Tiled::MapView*>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'selectedTool'
        QtMocHelpers::PropertyData<Tiled::AbstractTool*>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MapEditor, qt_meta_tag_ZN5Tiled9MapEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::MapEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<Editor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled9MapEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled9MapEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled9MapEditorE_t>.metaTypes,
    nullptr
} };

void Tiled::MapEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MapEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentBrushChanged(); break;
        case 1: _t->currentWangSetChanged(); break;
        case 2: _t->currentWangColorIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->selectedToolChanged((*reinterpret_cast<std::add_pointer_t<AbstractTool*>>(_a[1]))); break;
        case 4: { AbstractTool* _r = _t->tool((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<AbstractTool**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MapEditor::*)()>(_a, &MapEditor::currentBrushChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapEditor::*)()>(_a, &MapEditor::currentWangSetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapEditor::*)(int )>(_a, &MapEditor::currentWangColorIndexChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapEditor::*)(AbstractTool * )>(_a, &MapEditor::selectedToolChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::TilesetDock**>(_v) = _t->tilesetDock(); break;
        case 1: *reinterpret_cast<Tiled::EditableMap**>(_v) = _t->currentBrush(); break;
        case 2: *reinterpret_cast<Tiled::EditableWangSet**>(_v) = _t->currentWangSet(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->currentWangColorIndex(); break;
        case 4: *reinterpret_cast<Tiled::MapView**>(_v) = _t->currentMapView(); break;
        case 5: *reinterpret_cast<Tiled::AbstractTool**>(_v) = _t->selectedTool(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentBrush(*reinterpret_cast<Tiled::EditableMap**>(_v)); break;
        case 2: _t->setCurrentWangSet(*reinterpret_cast<Tiled::EditableWangSet**>(_v)); break;
        case 3: _t->setCurrentWangColorIndex(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setSelectedTool(*reinterpret_cast<Tiled::AbstractTool**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::MapEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::MapEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled9MapEditorE_t>.strings))
        return static_cast<void*>(this);
    return Editor::qt_metacast(_clname);
}

int Tiled::MapEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Editor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Tiled::MapEditor::currentBrushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::MapEditor::currentWangSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::MapEditor::currentWangColorIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::MapEditor::selectedToolChanged(AbstractTool * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
