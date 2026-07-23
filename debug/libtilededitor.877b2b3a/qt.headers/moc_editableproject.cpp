/****************************************************************************
** Meta object code from reading C++ file 'editableproject.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableproject.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableproject.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15EditableProjectE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableProject::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15EditableProjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableProject",
        "removeTypeByName",
        "",
        "name",
        "findTypeByName",
        "ScriptPropertyType*",
        "addClassType",
        "addEnumType",
        "extensionsPath",
        "automappingRulesFile",
        "fileName",
        "folders",
        "propertyTypes",
        "QList<ScriptPropertyType*>"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'removeTypeByName'
        QtMocHelpers::MethodData<bool(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'findTypeByName'
        QtMocHelpers::MethodData<ScriptPropertyType *(const QString &)>(4, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'addClassType'
        QtMocHelpers::MethodData<ScriptPropertyType *(const QString &)>(6, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'addEnumType'
        QtMocHelpers::MethodData<ScriptPropertyType *(const QString &)>(7, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'extensionsPath'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'automappingRulesFile'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'folders'
        QtMocHelpers::PropertyData<QStringList>(11, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'propertyTypes'
        QtMocHelpers::PropertyData<QList<ScriptPropertyType*>>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditableProject, qt_meta_tag_ZN5Tiled15EditableProjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableProject::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableAsset::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableProjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableProjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15EditableProjectE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableProject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->removeTypeByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { ScriptPropertyType* _r = _t->findTypeByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<ScriptPropertyType**>(_a[0]) = std::move(_r); }  break;
        case 2: { ScriptPropertyType* _r = _t->addClassType((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<ScriptPropertyType**>(_a[0]) = std::move(_r); }  break;
        case 3: { ScriptPropertyType* _r = _t->addEnumType((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<ScriptPropertyType**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ScriptPropertyType*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->extensionsPath(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->automappingRulesFile(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 3: *reinterpret_cast<QStringList*>(_v) = _t->folders(); break;
        case 4: *reinterpret_cast<QList<ScriptPropertyType*>*>(_v) = _t->propertyTypes(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15EditableProjectE_t>.strings))
        return static_cast<void*>(this);
    return EditableAsset::qt_metacast(_clname);
}

int Tiled::EditableProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableAsset::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
