/****************************************************************************
** Meta object code from reading C++ file 'tilesetdock.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilesetdock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilesetdock.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled11TilesetDockE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TilesetDock::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11TilesetDockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TilesetDock",
        "currentTilesetChanged",
        "",
        "currentTileChanged",
        "Tile*",
        "tile",
        "stampCaptured",
        "TileStamp",
        "localFilesDropped",
        "paths",
        "currentTileset",
        "Tiled::EditableTileset*",
        "selectedTiles",
        "QList<QObject*>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentTilesetChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTileChanged'
        QtMocHelpers::SignalData<void(Tile *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'stampCaptured'
        QtMocHelpers::SignalData<void(const TileStamp &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Signal 'localFilesDropped'
        QtMocHelpers::SignalData<void(const QStringList &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentTileset'
        QtMocHelpers::PropertyData<Tiled::EditableTileset*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 0),
        // property 'selectedTiles'
        QtMocHelpers::PropertyData<QList<QObject*>>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TilesetDock, qt_meta_tag_ZN5Tiled11TilesetDockE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TilesetDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetDockE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetDockE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11TilesetDockE_t>.metaTypes,
    nullptr
} };

void Tiled::TilesetDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TilesetDock *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentTilesetChanged(); break;
        case 1: _t->currentTileChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 2: _t->stampCaptured((*reinterpret_cast<std::add_pointer_t<TileStamp>>(_a[1]))); break;
        case 3: _t->localFilesDropped((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TilesetDock::*)()>(_a, &TilesetDock::currentTilesetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDock::*)(Tile * )>(_a, &TilesetDock::currentTileChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDock::*)(const TileStamp & )>(_a, &TilesetDock::stampCaptured, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDock::*)(const QStringList & )>(_a, &TilesetDock::localFilesDropped, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::EditableTileset**>(_v) = _t->currentEditableTileset(); break;
        case 1: *reinterpret_cast<QList<QObject*>*>(_v) = _t->selectedTiles(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentEditableTileset(*reinterpret_cast<Tiled::EditableTileset**>(_v)); break;
        case 1: _t->setSelectedTiles(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::TilesetDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TilesetDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetDockE_t>.strings))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Tiled::TilesetDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Tiled::TilesetDock::currentTilesetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::TilesetDock::currentTileChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::TilesetDock::stampCaptured(const TileStamp & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::TilesetDock::localFilesDropped(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
