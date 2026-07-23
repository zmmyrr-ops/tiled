/****************************************************************************
** Meta object code from reading C++ file 'abstracttool.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/abstracttool.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstracttool.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12AbstractToolE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::AbstractTool::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12AbstractToolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::AbstractTool",
        "changed",
        "",
        "statusInfoChanged",
        "statusInfo",
        "cursorChanged",
        "QCursor",
        "cursor",
        "enabledChanged",
        "enabled",
        "visibleChanged",
        "visible",
        "id",
        "name",
        "icon",
        "QIcon",
        "shortcut",
        "QKeySequence",
        "usesSelectedTiles",
        "usesWangSets",
        "targetLayerType"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusInfoChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'cursorChanged'
        QtMocHelpers::SignalData<void(const QCursor &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<QByteArray>(12, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'shortcut'
        QtMocHelpers::PropertyData<QKeySequence>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'statusInfo'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'cursor'
        QtMocHelpers::PropertyData<QCursor>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'usesSelectedTiles'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'usesWangSets'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'targetLayerType'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractTool, qt_meta_tag_ZN5Tiled12AbstractToolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::AbstractTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12AbstractToolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12AbstractToolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12AbstractToolE_t>.metaTypes,
    nullptr
} };

void Tiled::AbstractTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractTool *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->statusInfoChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->cursorChanged((*reinterpret_cast<std::add_pointer_t<QCursor>>(_a[1]))); break;
        case 3: _t->enabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->visibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractTool::*)()>(_a, &AbstractTool::changed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractTool::*)(const QString & )>(_a, &AbstractTool::statusInfoChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractTool::*)(const QCursor & )>(_a, &AbstractTool::cursorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractTool::*)(bool )>(_a, &AbstractTool::enabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractTool::*)(bool )>(_a, &AbstractTool::visibleChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QByteArray*>(_v) = _t->idName(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast<QKeySequence*>(_v) = _t->shortcut(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->statusInfo(); break;
        case 5: *reinterpret_cast<QCursor*>(_v) = _t->cursor(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->usesSelectedTiles(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->usesWangSets(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->targetLayerType(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 3: _t->setShortcut(*reinterpret_cast<QKeySequence*>(_v)); break;
        case 4: _t->setStatusInfo(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setCursor(*reinterpret_cast<QCursor*>(_v)); break;
        case 6: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setUsesSelectedTiles(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setUsesWangSets(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setTargetLayerType(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::AbstractTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::AbstractTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12AbstractToolE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::AbstractTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Tiled::AbstractTool::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tiled::AbstractTool::statusInfoChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::AbstractTool::cursorChanged(const QCursor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::AbstractTool::enabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::AbstractTool::visibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
