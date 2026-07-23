/****************************************************************************
** Meta object code from reading C++ file 'editablewangset.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editablewangset.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editablewangset.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15EditableWangSetE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableWangSet::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15EditableWangSetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableWangSet",
        "wangId",
        "QJSValue",
        "",
        "Tiled::EditableTile*",
        "tile",
        "setWangId",
        "value",
        "colorName",
        "colorIndex",
        "setColorName",
        "name",
        "effectiveTypeForColor",
        "Type",
        "color",
        "type",
        "imageTile",
        "colorCount",
        "tileset",
        "Tiled::EditableTileset*",
        "Corner",
        "Edge",
        "Mixed"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'wangId'
        QtMocHelpers::MethodData<QJSValue(Tiled::EditableTile *)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Method 'setWangId'
        QtMocHelpers::MethodData<void(Tiled::EditableTile *, QJSValue)>(6, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 2, 7 },
        }}),
        // Method 'colorName'
        QtMocHelpers::MethodData<QString(int) const>(8, 3, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 9 },
        }}),
        // Method 'setColorName'
        QtMocHelpers::MethodData<void(int, const QString &)>(10, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::QString, 11 },
        }}),
        // Method 'effectiveTypeForColor'
        QtMocHelpers::MethodData<enum Type(int) const>(12, 3, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'type'
        QtMocHelpers::PropertyData<enum Type>(15, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'imageTile'
        QtMocHelpers::PropertyData<Tiled::EditableTile*>(16, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'colorCount'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tileset'
        QtMocHelpers::PropertyData<Tiled::EditableTileset*>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Type'
        QtMocHelpers::EnumData<enum Type>(13, 13, QMC::EnumFlags{}).add({
            {   20, Type::Corner },
            {   21, Type::Edge },
            {   22, Type::Mixed },
        }),
    };
    return QtMocHelpers::metaObjectData<EditableWangSet, qt_meta_tag_ZN5Tiled15EditableWangSetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableWangSet::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableWangSetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableWangSetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15EditableWangSetE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableWangSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableWangSet *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QJSValue _r = _t->wangId((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTile*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setWangId((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 2: { QString _r = _t->colorName((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setColorName((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: { enum Type _r = _t->effectiveTypeForColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<enum Type*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<enum Type*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast<Tiled::EditableTile**>(_v) = _t->imageTile(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->colorCount(); break;
        case 4: *reinterpret_cast<Tiled::EditableTileset**>(_v) = _t->tileset(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setType(*reinterpret_cast<enum Type*>(_v)); break;
        case 2: _t->setImageTile(*reinterpret_cast<Tiled::EditableTile**>(_v)); break;
        case 3: _t->setColorCount(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableWangSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableWangSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableWangSetE_t>.strings))
        return static_cast<void*>(this);
    return EditableObject::qt_metacast(_clname);
}

int Tiled::EditableWangSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
