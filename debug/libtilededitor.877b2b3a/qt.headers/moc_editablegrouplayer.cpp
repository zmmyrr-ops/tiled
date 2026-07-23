/****************************************************************************
** Meta object code from reading C++ file 'editablegrouplayer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editablegrouplayer.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editablegrouplayer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableGroupLayer::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableGroupLayer",
        "layerAt",
        "Tiled::EditableLayer*",
        "",
        "index",
        "removeLayerAt",
        "removeLayer",
        "editableLayer",
        "insertLayerAt",
        "addLayer",
        "EditableGroupLayer",
        "name",
        "parent",
        "layerCount",
        "layers",
        "QList<QObject*>"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'layerAt'
        QtMocHelpers::MethodData<Tiled::EditableLayer *(int)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Int, 4 },
        }}),
        // Method 'removeLayerAt'
        QtMocHelpers::MethodData<void(int)>(5, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Method 'removeLayer'
        QtMocHelpers::MethodData<void(Tiled::EditableLayer *)>(6, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 2, 7 },
        }}),
        // Method 'insertLayerAt'
        QtMocHelpers::MethodData<void(int, Tiled::EditableLayer *)>(8, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 2, 7 },
        }}),
        // Method 'addLayer'
        QtMocHelpers::MethodData<void(Tiled::EditableLayer *)>(9, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 2, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'layerCount'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'layers'
        QtMocHelpers::PropertyData<QList<QObject*>>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &, QObject *)>(3, QMC::AccessPublic, {{
            { QMetaType::QString, 11 }, { QMetaType::QObjectStar, 12 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(3, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 11 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(3, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<EditableGroupLayer, qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableGroupLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableGroupLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableGroupLayer *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableGroupLayer *_r = new EditableGroupLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableGroupLayer *_r = new EditableGroupLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { EditableGroupLayer *_r = new EditableGroupLayer();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableGroupLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 1: { new (_a[0]) EditableGroupLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 2: { new (_a[0]) EditableGroupLayer(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { Tiled::EditableLayer* _r = _t->layerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableLayer**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->removeLayerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->removeLayer((*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[1]))); break;
        case 3: _t->insertLayerAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[2]))); break;
        case 4: _t->addLayer((*reinterpret_cast<std::add_pointer_t<Tiled::EditableLayer*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableLayer* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableLayer* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableLayer* >(); break;
            }
            break;
        }
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
        case 0: *reinterpret_cast<int*>(_v) = _t->layerCount(); break;
        case 1: *reinterpret_cast<QList<QObject*>*>(_v) = _t->layers(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableGroupLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableGroupLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18EditableGroupLayerE_t>.strings))
        return static_cast<void*>(this);
    return EditableLayer::qt_metacast(_clname);
}

int Tiled::EditableGroupLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
