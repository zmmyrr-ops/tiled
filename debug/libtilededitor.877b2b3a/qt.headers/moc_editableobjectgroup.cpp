/****************************************************************************
** Meta object code from reading C++ file 'editableobjectgroup.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableobjectgroup.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableobjectgroup.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableObjectGroup::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableObjectGroup",
        "setColor",
        "",
        "QColor",
        "color",
        "setDrawOrder",
        "DrawOrder",
        "drawOrder",
        "objectAt",
        "Tiled::EditableMapObject*",
        "index",
        "removeObjectAt",
        "removeObject",
        "editableMapObject",
        "insertObjectAt",
        "addObject",
        "EditableObjectGroup",
        "name",
        "parent",
        "objects",
        "QList<QObject*>",
        "objectCount",
        "UnknownOrder",
        "TopDownOrder",
        "IndexOrder"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setColor'
        QtMocHelpers::SlotData<void(const QColor &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setDrawOrder'
        QtMocHelpers::SlotData<void(enum DrawOrder)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'objectAt'
        QtMocHelpers::MethodData<Tiled::EditableMapObject *(int)>(8, 2, QMC::AccessPublic, 0x80000000 | 9, {{
            { QMetaType::Int, 10 },
        }}),
        // Method 'removeObjectAt'
        QtMocHelpers::MethodData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Method 'removeObject'
        QtMocHelpers::MethodData<void(Tiled::EditableMapObject *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 13 },
        }}),
        // Method 'insertObjectAt'
        QtMocHelpers::MethodData<void(int, Tiled::EditableMapObject *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { 0x80000000 | 9, 13 },
        }}),
        // Method 'addObject'
        QtMocHelpers::MethodData<void(Tiled::EditableMapObject *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'objects'
        QtMocHelpers::PropertyData<QList<QObject*>>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'objectCount'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'color'
        QtMocHelpers::PropertyData<QColor>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'drawOrder'
        QtMocHelpers::PropertyData<enum DrawOrder>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DrawOrder'
        QtMocHelpers::EnumData<enum DrawOrder>(6, 6, QMC::EnumFlags{}).add({
            {   22, DrawOrder::UnknownOrder },
            {   23, DrawOrder::TopDownOrder },
            {   24, DrawOrder::IndexOrder },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QString, 17 }, { QMetaType::QObjectStar, 18 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 17 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<EditableObjectGroup, qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableObjectGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableObjectGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableObjectGroup *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableObjectGroup *_r = new EditableObjectGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableObjectGroup *_r = new EditableObjectGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { EditableObjectGroup *_r = new EditableObjectGroup();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableObjectGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 1: { new (_a[0]) EditableObjectGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 2: { new (_a[0]) EditableObjectGroup(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->setDrawOrder((*reinterpret_cast<std::add_pointer_t<enum DrawOrder>>(_a[1]))); break;
        case 2: { Tiled::EditableMapObject* _r = _t->objectAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableMapObject**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->removeObjectAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->removeObject((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMapObject*>>(_a[1]))); break;
        case 5: _t->insertObjectAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::EditableMapObject*>>(_a[2]))); break;
        case 6: _t->addObject((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMapObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableMapObject* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableMapObject* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tiled::EditableMapObject* >(); break;
            }
            break;
        }
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
        case 0: *reinterpret_cast<QList<QObject*>*>(_v) = _t->objects(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->objectCount(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast<enum DrawOrder*>(_v) = _t->drawOrder(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setColor(*reinterpret_cast<QColor*>(_v)); break;
        case 3: _t->setDrawOrder(*reinterpret_cast<enum DrawOrder*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableObjectGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableObjectGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19EditableObjectGroupE_t>.strings))
        return static_cast<void*>(this);
    return EditableLayer::qt_metacast(_clname);
}

int Tiled::EditableObjectGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
