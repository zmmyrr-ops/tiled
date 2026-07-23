/****************************************************************************
** Meta object code from reading C++ file 'scriptfileformatwrappers.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptfileformatwrappers.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptfileformatwrappers.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptFileFormatWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptFileFormatWrapper",
        "supportsFile",
        "",
        "filename",
        "canRead",
        "canWrite",
        "nameFilter"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'supportsFile'
        QtMocHelpers::MethodData<bool(const QString &) const>(1, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'canRead'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'canWrite'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'nameFilter'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptFileFormatWrapper, qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptFileFormatWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptFileFormatWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptFileFormatWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->supportsFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->canRead(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->canWrite(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->nameFilter(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptFileFormatWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptFileFormatWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled23ScriptFileFormatWrapperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::ScriptFileFormatWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptTilesetFormatWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptTilesetFormatWrapper",
        "read",
        "Tiled::EditableTileset*",
        "",
        "filename",
        "write",
        "tileset"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'read'
        QtMocHelpers::MethodData<Tiled::EditableTileset *(const QString &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'write'
        QtMocHelpers::MethodData<void(Tiled::EditableTileset *, const QString &)>(5, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 2, 6 }, { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptTilesetFormatWrapper, qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptTilesetFormatWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptFileFormatWrapper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptTilesetFormatWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptTilesetFormatWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { Tiled::EditableTileset* _r = _t->read((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableTileset**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->write((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTileset*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Tiled::ScriptTilesetFormatWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptTilesetFormatWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled26ScriptTilesetFormatWrapperE_t>.strings))
        return static_cast<void*>(this);
    return ScriptFileFormatWrapper::qt_metacast(_clname);
}

int Tiled::ScriptTilesetFormatWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptFileFormatWrapper::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptMapFormatWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptMapFormatWrapper",
        "read",
        "Tiled::EditableMap*",
        "",
        "filename",
        "write",
        "map"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'read'
        QtMocHelpers::MethodData<Tiled::EditableMap *(const QString &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'write'
        QtMocHelpers::MethodData<void(Tiled::EditableMap *, const QString &)>(5, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 2, 6 }, { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptMapFormatWrapper, qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptMapFormatWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptFileFormatWrapper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptMapFormatWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptMapFormatWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { Tiled::EditableMap* _r = _t->read((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableMap**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->write((*reinterpret_cast<std::add_pointer_t<Tiled::EditableMap*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Tiled::ScriptMapFormatWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptMapFormatWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled22ScriptMapFormatWrapperE_t>.strings))
        return static_cast<void*>(this);
    return ScriptFileFormatWrapper::qt_metacast(_clname);
}

int Tiled::ScriptMapFormatWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptFileFormatWrapper::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
