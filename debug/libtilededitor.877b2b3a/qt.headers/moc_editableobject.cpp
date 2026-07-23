/****************************************************************************
** Meta object code from reading C++ file 'editableobject.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableobject.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableobject.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled14EditableObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableObject::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled14EditableObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableObject",
        "setClassName",
        "",
        "type",
        "property",
        "QVariant",
        "name",
        "setProperty",
        "QJSValue",
        "value",
        "path",
        "setColorProperty",
        "QColor",
        "r",
        "g",
        "b",
        "a",
        "setFloatProperty",
        "properties",
        "QVariantMap",
        "setProperties",
        "removeProperty",
        "resolvedProperty",
        "resolvedProperties",
        "asset",
        "Tiled::EditableAsset*",
        "readOnly",
        "className"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setClassName'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'property'
        QtMocHelpers::MethodData<QVariant(const QString &) const>(4, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'setProperty'
        QtMocHelpers::MethodData<void(const QString &, const QJSValue &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { 0x80000000 | 8, 9 },
        }}),
        // Method 'setProperty'
        QtMocHelpers::MethodData<void(const QStringList &, const QJSValue &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 10 }, { 0x80000000 | 8, 9 },
        }}),
        // Method 'setColorProperty'
        QtMocHelpers::MethodData<void(const QString &, const QColor &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { 0x80000000 | 12, 9 },
        }}),
        // Method 'setColorProperty'
        QtMocHelpers::MethodData<void(const QString &, int, int, int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::Int, 13 }, { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
            { QMetaType::Int, 16 },
        }}),
        // Method 'setColorProperty'
        QtMocHelpers::MethodData<void(const QString &, int, int, int)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::Int, 13 }, { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Method 'setFloatProperty'
        QtMocHelpers::MethodData<void(const QString &, qreal)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::QReal, 9 },
        }}),
        // Method 'properties'
        QtMocHelpers::MethodData<QVariantMap() const>(18, 2, QMC::AccessPublic, 0x80000000 | 19),
        // Method 'setProperties'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 18 },
        }}),
        // Method 'removeProperty'
        QtMocHelpers::MethodData<void(const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'resolvedProperty'
        QtMocHelpers::MethodData<QVariant(const QString &) const>(22, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'resolvedProperties'
        QtMocHelpers::MethodData<QVariantMap() const>(23, 2, QMC::AccessPublic, 0x80000000 | 19),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'asset'
        QtMocHelpers::PropertyData<Tiled::EditableAsset*>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'readOnly'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'className'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditableObject, qt_meta_tag_ZN5Tiled14EditableObjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled14EditableObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled14EditableObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled14EditableObjectE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setClassName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QVariant _r = _t->property((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 3: _t->setProperty((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 4: _t->setColorProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 5: _t->setColorProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 6: _t->setColorProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->setFloatProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 8: { QVariantMap _r = _t->properties();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setProperties((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 10: _t->removeProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QVariant _r = _t->resolvedProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVariantMap _r = _t->resolvedProperties();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::EditableAsset**>(_v) = _t->asset(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isReadOnly(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->className(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setClassName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled14EditableObjectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::EditableObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
