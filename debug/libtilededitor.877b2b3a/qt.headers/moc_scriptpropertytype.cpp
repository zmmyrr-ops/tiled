/****************************************************************************
** Meta object code from reading C++ file 'scriptpropertytype.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptpropertytype.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptpropertytype.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptPropertyType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptPropertyType",
        "name",
        "isClass",
        "isEnum",
        "defaultValue",
        "QVariant"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isClass'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isEnum'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'defaultValue'
        QtMocHelpers::PropertyData<QVariant>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptPropertyType, qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptPropertyType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptPropertyType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptPropertyType *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isClass(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isEnum(); break;
        case 3: *reinterpret_cast<QVariant*>(_v) = _t->defaultValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptPropertyType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptPropertyType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18ScriptPropertyTypeE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::ScriptPropertyType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptEnumPropertyType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptEnumPropertyType",
        "addValue",
        "",
        "name",
        "nameOf",
        "value",
        "QVariant",
        "storageType",
        "StorageType",
        "values",
        "StringValue",
        "IntValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'addValue'
        QtMocHelpers::MethodData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'nameOf'
        QtMocHelpers::MethodData<QString(int) const>(4, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 5 },
        }}),
        // Method 'nameOf'
        QtMocHelpers::MethodData<QString(const QVariant &) const>(4, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 6, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'storageType'
        QtMocHelpers::PropertyData<enum StorageType>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'values'
        QtMocHelpers::PropertyData<QStringList>(9, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'StorageType'
        QtMocHelpers::EnumData<enum StorageType>(8, 8, QMC::EnumFlags{}).add({
            {   10, StorageType::StringValue },
            {   11, StorageType::IntValue },
        }),
    };
    return QtMocHelpers::metaObjectData<ScriptEnumPropertyType, qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptEnumPropertyType::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptPropertyType::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptEnumPropertyType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptEnumPropertyType *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QString _r = _t->nameOf((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->nameOf((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum StorageType*>(_v) = _t->storageType(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->values(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStorageType(*reinterpret_cast<enum StorageType*>(_v)); break;
        case 1: _t->setValues(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptEnumPropertyType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptEnumPropertyType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptEnumPropertyTypeE_t>.strings))
        return static_cast<void*>(this);
    return ScriptPropertyType::qt_metacast(_clname);
}

int Tiled::ScriptEnumPropertyType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptPropertyType::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptClassPropertyType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptClassPropertyType",
        "removeMember",
        "",
        "name",
        "setMember",
        "QVariant",
        "value",
        "color",
        "QColor",
        "members",
        "QVariantMap",
        "drawFill",
        "usageFlags",
        "ClassUsageFlag",
        "PropertyValueType",
        "LayerClass",
        "MapObjectClass",
        "MapClass",
        "TilesetClass",
        "TileClass",
        "WangSetClass",
        "WangColorClass",
        "ProjectClass",
        "AnyUsage",
        "AnyObjectClass"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'removeMember'
        QtMocHelpers::MethodData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'setMember'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'color'
        QtMocHelpers::PropertyData<QColor>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'members'
        QtMocHelpers::PropertyData<QVariantMap>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'drawFill'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'usageFlags'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ClassUsageFlag'
        QtMocHelpers::EnumData<enum ClassUsageFlag>(13, 13, QMC::EnumFlags{}).add({
            {   14, ClassUsageFlag::PropertyValueType },
            {   15, ClassUsageFlag::LayerClass },
            {   16, ClassUsageFlag::MapObjectClass },
            {   17, ClassUsageFlag::MapClass },
            {   18, ClassUsageFlag::TilesetClass },
            {   19, ClassUsageFlag::TileClass },
            {   20, ClassUsageFlag::WangSetClass },
            {   21, ClassUsageFlag::WangColorClass },
            {   22, ClassUsageFlag::ProjectClass },
            {   23, ClassUsageFlag::AnyUsage },
            {   24, ClassUsageFlag::AnyObjectClass },
        }),
    };
    return QtMocHelpers::metaObjectData<ScriptClassPropertyType, qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptClassPropertyType::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptPropertyType::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptClassPropertyType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptClassPropertyType *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->removeMember((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setMember((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast<QVariantMap*>(_v) = _t->members(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->drawFill(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->usageFlags(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast<QColor*>(_v)); break;
        case 2: _t->setDrawFill(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setUsageFlags(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptClassPropertyType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptClassPropertyType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptClassPropertyTypeE_t>.strings))
        return static_cast<void*>(this);
    return ScriptPropertyType::qt_metacast(_clname);
}

int Tiled::ScriptClassPropertyType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptPropertyType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
