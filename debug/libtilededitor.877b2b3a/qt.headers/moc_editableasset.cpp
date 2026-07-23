/****************************************************************************
** Meta object code from reading C++ file 'editableasset.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableasset.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableasset.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13EditableAssetE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableAsset::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13EditableAssetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableAsset",
        "modifiedChanged",
        "",
        "fileNameChanged",
        "fileName",
        "oldFileName",
        "undo",
        "redo",
        "save",
        "macro",
        "QJSValue",
        "text",
        "callback",
        "modified",
        "isTileMap",
        "isTileset",
        "assetType",
        "AssetType::Value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modifiedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileNameChanged'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'save'
        QtMocHelpers::MethodData<bool()>(8, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'macro'
        QtMocHelpers::MethodData<QJSValue(const QString &, QJSValue)>(9, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 11 }, { 0x80000000 | 10, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'modified'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'isTileMap'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isTileset'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'assetType'
        QtMocHelpers::PropertyData<AssetType::Value>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditableAsset, qt_meta_tag_ZN5Tiled13EditableAssetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN5Tiled13EditableAssetE[] = {
    QMetaObject::SuperData::link<Tiled::AssetType::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Tiled::EditableAsset::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableAssetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableAssetE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN5Tiled13EditableAssetE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13EditableAssetE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableAsset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableAsset *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modifiedChanged(); break;
        case 1: _t->fileNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->undo(); break;
        case 3: _t->redo(); break;
        case 4: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QJSValue _r = _t->macro((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditableAsset::*)()>(_a, &EditableAsset::modifiedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditableAsset::*)(const QString & , const QString & )>(_a, &EditableAsset::fileNameChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isModified(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isMap(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isTileset(); break;
        case 4: *reinterpret_cast<AssetType::Value*>(_v) = _t->assetType(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableAsset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableAsset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableAssetE_t>.strings))
        return static_cast<void*>(this);
    return EditableObject::qt_metacast(_clname);
}

int Tiled::EditableAsset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tiled::EditableAsset::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::EditableAsset::fileNameChanged(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN5Tiled9AssetTypeE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::AssetType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled9AssetTypeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::AssetType",
        "Value",
        "TileMap",
        "Tileset",
        "Project",
        "World"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Value'
        QtMocHelpers::EnumData<Value>(1, 1, QMC::EnumFlags{}).add({
            {    2, Value::TileMap },
            {    3, Value::Tileset },
            {    4, Value::Project },
            {    5, Value::World },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN5Tiled9AssetTypeE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN5Tiled9AssetTypeE =
    Tiled::AssetType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled9AssetTypeE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN5Tiled9AssetTypeE =
    qt_staticMetaObjectContent_ZN5Tiled9AssetTypeE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN5Tiled9AssetTypeE =
    qt_staticMetaObjectContent_ZN5Tiled9AssetTypeE.relocatingData;

Q_CONSTINIT const QMetaObject Tiled::AssetType::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN5Tiled9AssetTypeE.stringdata,
    qt_staticMetaObjectStaticContent_ZN5Tiled9AssetTypeE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN5Tiled9AssetTypeE.metaTypes,
    nullptr
} };

QT_WARNING_POP
