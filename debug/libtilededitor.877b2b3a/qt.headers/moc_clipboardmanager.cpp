/****************************************************************************
** Meta object code from reading C++ file 'clipboardmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/clipboardmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipboardmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled16ClipboardManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ClipboardManager::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ClipboardManager",
        "hasMapChanged",
        "",
        "hasPropertiesChanged",
        "hasValuesChanged",
        "PasteFlags",
        "PasteFlag",
        "PasteDefault",
        "PasteNoTileObjects",
        "PasteInPlace"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'hasMapChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasPropertiesChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasValuesChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'PasteFlags'
        QtMocHelpers::EnumData<PasteFlags>(5, 6, QMC::EnumIsFlag).add({
            {    7, PasteFlag::PasteDefault },
            {    8, PasteFlag::PasteNoTileObjects },
            {    9, PasteFlag::PasteInPlace },
        }),
    };
    return QtMocHelpers::metaObjectData<ClipboardManager, qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ClipboardManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>.metaTypes,
    nullptr
} };

void Tiled::ClipboardManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClipboardManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->hasMapChanged(); break;
        case 1: _t->hasPropertiesChanged(); break;
        case 2: _t->hasValuesChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ClipboardManager::*)()>(_a, &ClipboardManager::hasMapChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ClipboardManager::*)()>(_a, &ClipboardManager::hasPropertiesChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ClipboardManager::*)()>(_a, &ClipboardManager::hasValuesChanged, 2))
            return;
    }
}

const QMetaObject *Tiled::ClipboardManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ClipboardManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled16ClipboardManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::ClipboardManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Tiled::ClipboardManager::hasMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::ClipboardManager::hasPropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Tiled::ClipboardManager::hasValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
