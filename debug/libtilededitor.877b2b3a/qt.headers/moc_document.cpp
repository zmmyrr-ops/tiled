/****************************************************************************
** Meta object code from reading C++ file 'document.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/document.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'document.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled8DocumentE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::Document::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled8DocumentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::Document",
        "changed",
        "",
        "ChangeEvent",
        "change",
        "saved",
        "fileNameChanged",
        "fileName",
        "oldFileName",
        "modifiedChanged",
        "isReadOnlyChanged",
        "readOnly",
        "currentObjectSet",
        "Object*",
        "object",
        "currentObjectChanged",
        "currentObjectsChanged",
        "editCurrentObject",
        "propertyAdded",
        "name",
        "propertyRemoved",
        "propertyChanged",
        "propertiesChanged",
        "ignoreBrokenLinksChanged",
        "ignoreBrokenLinks",
        "modified"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changed'
        QtMocHelpers::SignalData<void(const ChangeEvent &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'saved'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileNameChanged'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 },
        }}),
        // Signal 'modifiedChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isReadOnlyChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'currentObjectSet'
        QtMocHelpers::SignalData<void(Object *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'currentObjectChanged'
        QtMocHelpers::SignalData<void(Object *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'currentObjectsChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editCurrentObject'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'propertyAdded'
        QtMocHelpers::SignalData<void(Object *, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 19 },
        }}),
        // Signal 'propertyRemoved'
        QtMocHelpers::SignalData<void(Object *, const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 19 },
        }}),
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(Object *, const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 19 },
        }}),
        // Signal 'propertiesChanged'
        QtMocHelpers::SignalData<void(Object *)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'ignoreBrokenLinksChanged'
        QtMocHelpers::SignalData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'modified'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Document, qt_meta_tag_ZN5Tiled8DocumentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::Document::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8DocumentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8DocumentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled8DocumentE_t>.metaTypes,
    nullptr
} };

void Tiled::Document::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Document *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast<std::add_pointer_t<ChangeEvent>>(_a[1]))); break;
        case 1: _t->saved(); break;
        case 2: _t->fileNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->modifiedChanged(); break;
        case 4: _t->isReadOnlyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->currentObjectSet((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1]))); break;
        case 6: _t->currentObjectChanged((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1]))); break;
        case 7: _t->currentObjectsChanged(); break;
        case 8: _t->editCurrentObject(); break;
        case 9: _t->propertyAdded((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->propertyRemoved((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->propertiesChanged((*reinterpret_cast<std::add_pointer_t<Object*>>(_a[1]))); break;
        case 13: _t->ignoreBrokenLinksChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Document::*)(const ChangeEvent & )>(_a, &Document::changed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)()>(_a, &Document::saved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(const QString & , const QString & )>(_a, &Document::fileNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)()>(_a, &Document::modifiedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(bool )>(_a, &Document::isReadOnlyChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * )>(_a, &Document::currentObjectSet, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * )>(_a, &Document::currentObjectChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)()>(_a, &Document::currentObjectsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)()>(_a, &Document::editCurrentObject, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * , const QString & )>(_a, &Document::propertyAdded, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * , const QString & )>(_a, &Document::propertyRemoved, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * , const QString & )>(_a, &Document::propertyChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(Object * )>(_a, &Document::propertiesChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Document::*)(bool )>(_a, &Document::ignoreBrokenLinksChanged, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isModified(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::Document::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::Document::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled8DocumentE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QEnableSharedFromThis<Document>"))
        return static_cast< QEnableSharedFromThis<Document>*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::Document::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
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
void Tiled::Document::changed(const ChangeEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::Document::saved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::Document::fileNameChanged(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void Tiled::Document::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Tiled::Document::isReadOnlyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::Document::currentObjectSet(Object * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Tiled::Document::currentObjectChanged(Object * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Tiled::Document::currentObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Tiled::Document::editCurrentObject()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Tiled::Document::propertyAdded(Object * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void Tiled::Document::propertyRemoved(Object * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void Tiled::Document::propertyChanged(Object * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void Tiled::Document::propertiesChanged(Object * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Tiled::Document::ignoreBrokenLinksChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
