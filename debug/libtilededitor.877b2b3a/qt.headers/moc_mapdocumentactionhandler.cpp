/****************************************************************************
** Meta object code from reading C++ file 'mapdocumentactionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/mapdocumentactionhandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdocumentactionhandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::MapDocumentActionHandler::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::MapDocumentActionHandler",
        "cut",
        "",
        "copy",
        "delete_",
        "selectAll",
        "selectInverse",
        "selectNone",
        "copyPosition",
        "cropToSelection",
        "autocrop",
        "addTileLayer",
        "addObjectGroup",
        "addImageLayer",
        "addGroupLayer",
        "layerViaCopy",
        "layerViaCut",
        "layerVia",
        "LayerViaVariant",
        "variant",
        "groupLayers",
        "ungroupLayers",
        "duplicateLayers",
        "mergeLayersDown",
        "selectPreviousLayer",
        "selectNextLayer",
        "selectAllLayers",
        "moveLayersUp",
        "moveLayersDown",
        "removeLayers",
        "toggleSelectedLayers",
        "toggleLockSelectedLayers",
        "toggleOtherLayers",
        "toggleLockOtherLayers",
        "layerProperties",
        "duplicateObjects",
        "removeObjects",
        "moveObjectsToGroup",
        "ObjectGroup*",
        "selectAllInstances",
        "const ObjectTemplate*",
        "objectTemplate"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'cut'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<bool()>(3, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'delete_'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectInverse'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectNone'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyPosition'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cropToSelection'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'autocrop'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addTileLayer'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addObjectGroup'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addImageLayer'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addGroupLayer'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'layerViaCopy'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'layerViaCut'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'layerVia'
        QtMocHelpers::SlotData<void(enum LayerViaVariant)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'groupLayers'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ungroupLayers'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'duplicateLayers'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mergeLayersDown'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectPreviousLayer'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectNextLayer'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAllLayers'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveLayersUp'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveLayersDown'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeLayers'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleSelectedLayers'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleLockSelectedLayers'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleOtherLayers'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleLockOtherLayers'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'layerProperties'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'duplicateObjects'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeObjects'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveObjectsToGroup'
        QtMocHelpers::SlotData<void(ObjectGroup *)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 2 },
        }}),
        // Slot 'selectAllInstances'
        QtMocHelpers::SlotData<void(const ObjectTemplate *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MapDocumentActionHandler, qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::MapDocumentActionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>.metaTypes,
    nullptr
} };

void Tiled::MapDocumentActionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MapDocumentActionHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cut(); break;
        case 1: { bool _r = _t->copy();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_(); break;
        case 3: _t->selectAll(); break;
        case 4: _t->selectInverse(); break;
        case 5: _t->selectNone(); break;
        case 6: _t->copyPosition(); break;
        case 7: _t->cropToSelection(); break;
        case 8: _t->autocrop(); break;
        case 9: _t->addTileLayer(); break;
        case 10: _t->addObjectGroup(); break;
        case 11: _t->addImageLayer(); break;
        case 12: _t->addGroupLayer(); break;
        case 13: _t->layerViaCopy(); break;
        case 14: _t->layerViaCut(); break;
        case 15: _t->layerVia((*reinterpret_cast<std::add_pointer_t<enum LayerViaVariant>>(_a[1]))); break;
        case 16: _t->groupLayers(); break;
        case 17: _t->ungroupLayers(); break;
        case 18: _t->duplicateLayers(); break;
        case 19: _t->mergeLayersDown(); break;
        case 20: _t->selectPreviousLayer(); break;
        case 21: _t->selectNextLayer(); break;
        case 22: _t->selectAllLayers(); break;
        case 23: _t->moveLayersUp(); break;
        case 24: _t->moveLayersDown(); break;
        case 25: _t->removeLayers(); break;
        case 26: _t->toggleSelectedLayers(); break;
        case 27: _t->toggleLockSelectedLayers(); break;
        case 28: _t->toggleOtherLayers(); break;
        case 29: _t->toggleLockOtherLayers(); break;
        case 30: _t->layerProperties(); break;
        case 31: _t->duplicateObjects(); break;
        case 32: _t->removeObjects(); break;
        case 33: _t->moveObjectsToGroup((*reinterpret_cast<std::add_pointer_t<ObjectGroup*>>(_a[1]))); break;
        case 34: _t->selectAllInstances((*reinterpret_cast<std::add_pointer_t<const ObjectTemplate*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Tiled::MapDocumentActionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::MapDocumentActionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled24MapDocumentActionHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::MapDocumentActionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
