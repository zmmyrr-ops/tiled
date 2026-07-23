/****************************************************************************
** Meta object code from reading C++ file 'variantmapproperty.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/variantmapproperty.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variantmapproperty.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::VariantMapProperty::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::VariantMapProperty",
        "memberValueChanged",
        "",
        "PropertyPath",
        "path",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'memberValueChanged'
        QtMocHelpers::SignalData<void(const PropertyPath &, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VariantMapProperty, qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::VariantMapProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<GroupProperty::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>.metaTypes,
    nullptr
} };

void Tiled::VariantMapProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VariantMapProperty *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->memberValueChanged((*reinterpret_cast<std::add_pointer_t<PropertyPath>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VariantMapProperty::*)(const PropertyPath & , const QVariant & )>(_a, &VariantMapProperty::memberValueChanged, 0))
            return;
    }
}

const QMetaObject *Tiled::VariantMapProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::VariantMapProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled18VariantMapPropertyE_t>.strings))
        return static_cast<void*>(this);
    return GroupProperty::qt_metacast(_clname);
}

int Tiled::VariantMapProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GroupProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Tiled::VariantMapProperty::memberValueChanged(const PropertyPath & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN5Tiled13ClassPropertyE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ClassProperty::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13ClassPropertyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ClassProperty",
        "memberValueChanged",
        "",
        "PropertyPath",
        "path",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'memberValueChanged'
        QtMocHelpers::SignalData<void(const PropertyPath &, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ClassProperty, qt_meta_tag_ZN5Tiled13ClassPropertyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ClassProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<GroupProperty::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13ClassPropertyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13ClassPropertyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13ClassPropertyE_t>.metaTypes,
    nullptr
} };

void Tiled::ClassProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClassProperty *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->memberValueChanged((*reinterpret_cast<std::add_pointer_t<PropertyPath>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ClassProperty::*)(const PropertyPath & , const QVariant & )>(_a, &ClassProperty::memberValueChanged, 0))
            return;
    }
}

const QMetaObject *Tiled::ClassProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ClassProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13ClassPropertyE_t>.strings))
        return static_cast<void*>(this);
    return GroupProperty::qt_metacast(_clname);
}

int Tiled::ClassProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GroupProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Tiled::ClassProperty::memberValueChanged(const PropertyPath & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN5Tiled19VariantListPropertyE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::VariantListProperty::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::VariantListProperty"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VariantListProperty, qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::VariantListProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<GroupProperty::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>.metaTypes,
    nullptr
} };

void Tiled::VariantListProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VariantListProperty *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Tiled::VariantListProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::VariantListProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled19VariantListPropertyE_t>.strings))
        return static_cast<void*>(this);
    return GroupProperty::qt_metacast(_clname);
}

int Tiled::VariantListProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GroupProperty::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled16AddValuePropertyE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::AddValueProperty::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::AddValueProperty",
        "placeholderTextChanged",
        "",
        "text"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AddValueProperty, qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::AddValueProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<Property::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>.metaTypes,
    nullptr
} };

void Tiled::AddValueProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AddValueProperty *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AddValueProperty::*)(const QString & )>(_a, &AddValueProperty::placeholderTextChanged, 0))
            return;
    }
}

const QMetaObject *Tiled::AddValueProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::AddValueProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16AddValuePropertyE_t>.strings))
        return static_cast<void*>(this);
    return Property::qt_metacast(_clname);
}

int Tiled::AddValueProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Property::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Tiled::AddValueProperty::placeholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
