/****************************************************************************
** Meta object code from reading C++ file 'tilecollisiondock.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilecollisiondock.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilecollisiondock.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled17TileCollisionDockE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TileCollisionDock::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TileCollisionDock",
        "dummyMapDocumentChanged",
        "",
        "MapDocument*",
        "mapDocument",
        "hasSelectedObjectsChanged",
        "statusInfoChanged",
        "info",
        "setTile",
        "Tile*",
        "tile",
        "cut",
        "copy",
        "paste",
        "pasteInPlace",
        "ClipboardManager::PasteFlags",
        "flags",
        "delete_",
        "Operation",
        "operation",
        "autoDetectMask",
        "focusObject",
        "Tiled::EditableMapObject*",
        "object",
        "selectedObjects",
        "QList<QObject*>",
        "view",
        "Tiled::MapView*",
        "ObjectsViewVisibility",
        "Hidden",
        "ShowRight",
        "ShowBottom"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dummyMapDocumentChanged'
        QtMocHelpers::SignalData<void(MapDocument *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'hasSelectedObjectsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusInfoChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'setTile'
        QtMocHelpers::SlotData<void(Tile *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'cut'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pasteInPlace'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void(ClipboardManager::PasteFlags)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'delete_'
        QtMocHelpers::SlotData<void(enum Operation)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'delete_'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'autoDetectMask'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'focusObject'
        QtMocHelpers::MethodData<void(Tiled::EditableMapObject *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectedObjects'
        QtMocHelpers::PropertyData<QList<QObject*>>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'view'
        QtMocHelpers::PropertyData<Tiled::MapView*>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ObjectsViewVisibility'
        QtMocHelpers::EnumData<enum ObjectsViewVisibility>(28, 28, QMC::EnumFlags{}).add({
            {   29, ObjectsViewVisibility::Hidden },
            {   30, ObjectsViewVisibility::ShowRight },
            {   31, ObjectsViewVisibility::ShowBottom },
        }),
    };
    return QtMocHelpers::metaObjectData<TileCollisionDock, qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TileCollisionDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>.metaTypes,
    nullptr
} };

void Tiled::TileCollisionDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TileCollisionDock *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dummyMapDocumentChanged((*reinterpret_cast<std::add_pointer_t<MapDocument*>>(_a[1]))); break;
        case 1: _t->hasSelectedObjectsChanged(); break;
        case 2: _t->statusInfoChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->setTile((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 4: _t->cut(); break;
        case 5: _t->copy(); break;
        case 6: _t->paste(); break;
        case 7: _t->pasteInPlace(); break;
        case 8: _t->paste((*reinterpret_cast<std::add_pointer_t<ClipboardManager::PasteFlags>>(_a[1]))); break;
        case 9: _t->delete_((*reinterpret_cast<std::add_pointer_t<enum Operation>>(_a[1]))); break;
        case 10: _t->delete_(); break;
        case 11: _t->autoDetectMask(); break;
        case 12: _t->focusObject((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMapObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MapDocument* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TileCollisionDock::*)(MapDocument * )>(_a, &TileCollisionDock::dummyMapDocumentChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TileCollisionDock::*)()>(_a, &TileCollisionDock::hasSelectedObjectsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TileCollisionDock::*)(const QString & )>(_a, &TileCollisionDock::statusInfoChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<QObject*>*>(_v) = _t->selectedObjectsForScript(); break;
        case 1: *reinterpret_cast<Tiled::MapView**>(_v) = _t->mapView(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedObjectsFromScript(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::TileCollisionDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TileCollisionDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17TileCollisionDockE_t>.strings))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Tiled::TileCollisionDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void Tiled::TileCollisionDock::dummyMapDocumentChanged(MapDocument * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::TileCollisionDock::hasSelectedObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::TileCollisionDock::statusInfoChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
