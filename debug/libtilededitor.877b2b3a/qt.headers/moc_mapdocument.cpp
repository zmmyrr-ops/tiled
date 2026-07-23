/****************************************************************************
** Meta object code from reading C++ file 'mapdocument.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/mapdocument.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdocument.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled11MapDocumentE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::MapDocument::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11MapDocumentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::MapDocument",
        "selectedAreaChanged",
        "",
        "QRegion",
        "newSelection",
        "oldSelection",
        "selectedLayersChanged",
        "selectedObjectsChanged",
        "hoveredMapObjectChanged",
        "MapObject*",
        "object",
        "previous",
        "aboutToBeSelectedObjectsChanged",
        "QList<MapObject*>",
        "objects",
        "focusMapObjectRequested",
        "mapObjectPickRequest",
        "cancelMapObjectPickRequest",
        "mapObjectPicked",
        "mapResized",
        "layerAdded",
        "Layer*",
        "layer",
        "layerAboutToBeRemoved",
        "GroupLayer*",
        "parentLayer",
        "index",
        "layerRemoved",
        "editLayerNameRequested",
        "currentLayerChanged",
        "regionChanged",
        "region",
        "TileLayer*",
        "tileLayer",
        "regionEdited",
        "tileLayerChanged",
        "TileLayerChangeFlags",
        "flags",
        "tilesetAboutToBeAdded",
        "tilesetAdded",
        "Tileset*",
        "tileset",
        "tilesetAboutToBeRemoved",
        "tilesetRemoved",
        "tilesetReplaced",
        "oldTileset",
        "objectTemplateReplaced",
        "const ObjectTemplate*",
        "newObjectTemplate",
        "oldObjectTemplate",
        "objectsInserted",
        "ObjectGroup*",
        "objectGroup",
        "first",
        "last",
        "objectsIndexChanged",
        "tilesetNameChanged",
        "tilesetTilePositioningChanged",
        "tileImageSourceChanged",
        "Tile*",
        "tile",
        "tileProbabilityChanged",
        "tileObjectGroupChanged",
        "updateTemplateInstances",
        "objectTemplate",
        "selectAllInstances",
        "deselectObjects",
        "map",
        "Map*",
        "TileLayerChangeFlag",
        "LayerDrawMarginsChanged",
        "LayerBoundsChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectedAreaChanged'
        QtMocHelpers::SignalData<void(const QRegion &, const QRegion &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'selectedLayersChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedObjectsChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hoveredMapObjectChanged'
        QtMocHelpers::SignalData<void(MapObject *, MapObject *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 9, 11 },
        }}),
        // Signal 'aboutToBeSelectedObjectsChanged'
        QtMocHelpers::SignalData<void(const QList<MapObject*> &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'focusMapObjectRequested'
        QtMocHelpers::SignalData<void(MapObject *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'mapObjectPickRequest'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelMapObjectPickRequest'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mapObjectPicked'
        QtMocHelpers::SignalData<void(MapObject *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'mapResized'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layerAdded'
        QtMocHelpers::SignalData<void(Layer *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'layerAboutToBeRemoved'
        QtMocHelpers::SignalData<void(GroupLayer *, int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { QMetaType::Int, 26 },
        }}),
        // Signal 'layerRemoved'
        QtMocHelpers::SignalData<void(Layer *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'editLayerNameRequested'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentLayerChanged'
        QtMocHelpers::SignalData<void(Layer *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'regionChanged'
        QtMocHelpers::SignalData<void(const QRegion &, TileLayer *)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 31 }, { 0x80000000 | 32, 33 },
        }}),
        // Signal 'regionEdited'
        QtMocHelpers::SignalData<void(const QRegion &, TileLayer *)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 31 }, { 0x80000000 | 32, 22 },
        }}),
        // Signal 'tileLayerChanged'
        QtMocHelpers::SignalData<void(TileLayer *, TileLayerChangeFlags)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 22 }, { 0x80000000 | 36, 37 },
        }}),
        // Signal 'tilesetAboutToBeAdded'
        QtMocHelpers::SignalData<void(int)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Signal 'tilesetAdded'
        QtMocHelpers::SignalData<void(int, Tileset *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 }, { 0x80000000 | 40, 41 },
        }}),
        // Signal 'tilesetAboutToBeRemoved'
        QtMocHelpers::SignalData<void(int)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Signal 'tilesetRemoved'
        QtMocHelpers::SignalData<void(Tileset *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Signal 'tilesetReplaced'
        QtMocHelpers::SignalData<void(int, Tileset *, Tileset *)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 }, { 0x80000000 | 40, 41 }, { 0x80000000 | 40, 45 },
        }}),
        // Signal 'objectTemplateReplaced'
        QtMocHelpers::SignalData<void(const ObjectTemplate *, const ObjectTemplate *)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 48 }, { 0x80000000 | 47, 49 },
        }}),
        // Signal 'objectsInserted'
        QtMocHelpers::SignalData<void(ObjectGroup *, int, int)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 }, { QMetaType::Int, 53 }, { QMetaType::Int, 54 },
        }}),
        // Signal 'objectsIndexChanged'
        QtMocHelpers::SignalData<void(ObjectGroup *, int, int)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 }, { QMetaType::Int, 53 }, { QMetaType::Int, 54 },
        }}),
        // Signal 'tilesetNameChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Signal 'tilesetTilePositioningChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Signal 'tileImageSourceChanged'
        QtMocHelpers::SignalData<void(Tile *)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 59, 60 },
        }}),
        // Signal 'tileProbabilityChanged'
        QtMocHelpers::SignalData<void(Tile *)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 59, 60 },
        }}),
        // Signal 'tileObjectGroupChanged'
        QtMocHelpers::SignalData<void(Tile *)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 59, 60 },
        }}),
        // Slot 'updateTemplateInstances'
        QtMocHelpers::SlotData<void(const ObjectTemplate *)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 64 },
        }}),
        // Slot 'selectAllInstances'
        QtMocHelpers::SlotData<void(const ObjectTemplate *)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 64 },
        }}),
        // Slot 'deselectObjects'
        QtMocHelpers::SlotData<void(const QList<MapObject*> &)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'map'
        QtMocHelpers::PropertyData<Map*>(67, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'TileLayerChangeFlags'
        QtMocHelpers::EnumData<TileLayerChangeFlags>(36, 69, QMC::EnumIsFlag).add({
            {   70, TileLayerChangeFlag::LayerDrawMarginsChanged },
            {   71, TileLayerChangeFlag::LayerBoundsChanged },
        }),
    };
    return QtMocHelpers::metaObjectData<MapDocument, qt_meta_tag_ZN5Tiled11MapDocumentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::MapDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<Document::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11MapDocumentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11MapDocumentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11MapDocumentE_t>.metaTypes,
    nullptr
} };

void Tiled::MapDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MapDocument *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedAreaChanged((*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[2]))); break;
        case 1: _t->selectedLayersChanged(); break;
        case 2: _t->selectedObjectsChanged(); break;
        case 3: _t->hoveredMapObjectChanged((*reinterpret_cast<std::add_pointer_t<MapObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<MapObject*>>(_a[2]))); break;
        case 4: _t->aboutToBeSelectedObjectsChanged((*reinterpret_cast<std::add_pointer_t<QList<MapObject*>>>(_a[1]))); break;
        case 5: _t->focusMapObjectRequested((*reinterpret_cast<std::add_pointer_t<MapObject*>>(_a[1]))); break;
        case 6: _t->mapObjectPickRequest(); break;
        case 7: _t->cancelMapObjectPickRequest(); break;
        case 8: _t->mapObjectPicked((*reinterpret_cast<std::add_pointer_t<MapObject*>>(_a[1]))); break;
        case 9: _t->mapResized(); break;
        case 10: _t->layerAdded((*reinterpret_cast<std::add_pointer_t<Layer*>>(_a[1]))); break;
        case 11: _t->layerAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<GroupLayer*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->layerRemoved((*reinterpret_cast<std::add_pointer_t<Layer*>>(_a[1]))); break;
        case 13: _t->editLayerNameRequested(); break;
        case 14: _t->currentLayerChanged((*reinterpret_cast<std::add_pointer_t<Layer*>>(_a[1]))); break;
        case 15: _t->regionChanged((*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TileLayer*>>(_a[2]))); break;
        case 16: _t->regionEdited((*reinterpret_cast<std::add_pointer_t<QRegion>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TileLayer*>>(_a[2]))); break;
        case 17: _t->tileLayerChanged((*reinterpret_cast<std::add_pointer_t<TileLayer*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TileLayerChangeFlags>>(_a[2]))); break;
        case 18: _t->tilesetAboutToBeAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->tilesetAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[2]))); break;
        case 20: _t->tilesetAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->tilesetRemoved((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 22: _t->tilesetReplaced((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[3]))); break;
        case 23: _t->objectTemplateReplaced((*reinterpret_cast<std::add_pointer_t<const ObjectTemplate*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const ObjectTemplate*>>(_a[2]))); break;
        case 24: _t->objectsInserted((*reinterpret_cast<std::add_pointer_t<ObjectGroup*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 25: _t->objectsIndexChanged((*reinterpret_cast<std::add_pointer_t<ObjectGroup*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 26: _t->tilesetNameChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 27: _t->tilesetTilePositioningChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 28: _t->tileImageSourceChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 29: _t->tileProbabilityChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 30: _t->tileObjectGroupChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 31: _t->updateTemplateInstances((*reinterpret_cast<std::add_pointer_t<const ObjectTemplate*>>(_a[1]))); break;
        case 32: _t->selectAllInstances((*reinterpret_cast<std::add_pointer_t<const ObjectTemplate*>>(_a[1]))); break;
        case 33: _t->deselectObjects((*reinterpret_cast<std::add_pointer_t<QList<MapObject*>>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(const QRegion & , const QRegion & )>(_a, &MapDocument::selectedAreaChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::selectedLayersChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::selectedObjectsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(MapObject * , MapObject * )>(_a, &MapDocument::hoveredMapObjectChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(const QList<MapObject*> & )>(_a, &MapDocument::aboutToBeSelectedObjectsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(MapObject * )>(_a, &MapDocument::focusMapObjectRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::mapObjectPickRequest, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::cancelMapObjectPickRequest, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(MapObject * )>(_a, &MapDocument::mapObjectPicked, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::mapResized, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Layer * )>(_a, &MapDocument::layerAdded, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(GroupLayer * , int )>(_a, &MapDocument::layerAboutToBeRemoved, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Layer * )>(_a, &MapDocument::layerRemoved, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)()>(_a, &MapDocument::editLayerNameRequested, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Layer * )>(_a, &MapDocument::currentLayerChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(const QRegion & , TileLayer * )>(_a, &MapDocument::regionChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(const QRegion & , TileLayer * )>(_a, &MapDocument::regionEdited, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(TileLayer * , TileLayerChangeFlags )>(_a, &MapDocument::tileLayerChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(int )>(_a, &MapDocument::tilesetAboutToBeAdded, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(int , Tileset * )>(_a, &MapDocument::tilesetAdded, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(int )>(_a, &MapDocument::tilesetAboutToBeRemoved, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tileset * )>(_a, &MapDocument::tilesetRemoved, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(int , Tileset * , Tileset * )>(_a, &MapDocument::tilesetReplaced, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(const ObjectTemplate * , const ObjectTemplate * )>(_a, &MapDocument::objectTemplateReplaced, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(ObjectGroup * , int , int )>(_a, &MapDocument::objectsInserted, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(ObjectGroup * , int , int )>(_a, &MapDocument::objectsIndexChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tileset * )>(_a, &MapDocument::tilesetNameChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tileset * )>(_a, &MapDocument::tilesetTilePositioningChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tile * )>(_a, &MapDocument::tileImageSourceChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tile * )>(_a, &MapDocument::tileProbabilityChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (MapDocument::*)(Tile * )>(_a, &MapDocument::tileObjectGroupChanged, 30))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Map**>(_v) = _t->map(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::MapDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::MapDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11MapDocumentE_t>.strings))
        return static_cast<void*>(this);
    return Document::qt_metacast(_clname);
}

int Tiled::MapDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Document::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Tiled::MapDocument::selectedAreaChanged(const QRegion & _t1, const QRegion & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Tiled::MapDocument::selectedLayersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::MapDocument::selectedObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Tiled::MapDocument::hoveredMapObjectChanged(MapObject * _t1, MapObject * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void Tiled::MapDocument::aboutToBeSelectedObjectsChanged(const QList<MapObject*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::MapDocument::focusMapObjectRequested(MapObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Tiled::MapDocument::mapObjectPickRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Tiled::MapDocument::cancelMapObjectPickRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Tiled::MapDocument::mapObjectPicked(MapObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Tiled::MapDocument::mapResized()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Tiled::MapDocument::layerAdded(Layer * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Tiled::MapDocument::layerAboutToBeRemoved(GroupLayer * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void Tiled::MapDocument::layerRemoved(Layer * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Tiled::MapDocument::editLayerNameRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Tiled::MapDocument::currentLayerChanged(Layer * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Tiled::MapDocument::regionChanged(const QRegion & _t1, TileLayer * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void Tiled::MapDocument::regionEdited(const QRegion & _t1, TileLayer * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2);
}

// SIGNAL 17
void Tiled::MapDocument::tileLayerChanged(TileLayer * _t1, TileLayerChangeFlags _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}

// SIGNAL 18
void Tiled::MapDocument::tilesetAboutToBeAdded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void Tiled::MapDocument::tilesetAdded(int _t1, Tileset * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1, _t2);
}

// SIGNAL 20
void Tiled::MapDocument::tilesetAboutToBeRemoved(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void Tiled::MapDocument::tilesetRemoved(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void Tiled::MapDocument::tilesetReplaced(int _t1, Tileset * _t2, Tileset * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2, _t3);
}

// SIGNAL 23
void Tiled::MapDocument::objectTemplateReplaced(const ObjectTemplate * _t1, const ObjectTemplate * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1, _t2);
}

// SIGNAL 24
void Tiled::MapDocument::objectsInserted(ObjectGroup * _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1, _t2, _t3);
}

// SIGNAL 25
void Tiled::MapDocument::objectsIndexChanged(ObjectGroup * _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2, _t3);
}

// SIGNAL 26
void Tiled::MapDocument::tilesetNameChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void Tiled::MapDocument::tilesetTilePositioningChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void Tiled::MapDocument::tileImageSourceChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void Tiled::MapDocument::tileProbabilityChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void Tiled::MapDocument::tileObjectGroupChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1);
}
QT_WARNING_POP
