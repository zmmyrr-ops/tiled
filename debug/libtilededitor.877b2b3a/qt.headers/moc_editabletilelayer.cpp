/****************************************************************************
** Meta object code from reading C++ file 'editabletilelayer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editabletilelayer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editabletilelayer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled17EditableTileLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableTileLayer::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableTileLayer",
        "resize",
        "",
        "QSize",
        "size",
        "QPoint",
        "offset",
        "region",
        "Tiled::RegionValueType",
        "cellAt",
        "Tiled::Cell",
        "x",
        "y",
        "flagsAt",
        "tileAt",
        "Tiled::EditableTile*",
        "edit",
        "Tiled::TileLayerEdit*",
        "wangEdit",
        "Tiled::TileLayerWangEdit*",
        "Tiled::EditableWangSet*",
        "wangSet",
        "EditableTileLayer",
        "name",
        "parent",
        "width",
        "height"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'resize'
        QtMocHelpers::MethodData<void(QSize, QPoint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Method 'resize'
        QtMocHelpers::MethodData<void(QSize)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'region'
        QtMocHelpers::MethodData<Tiled::RegionValueType() const>(7, 2, QMC::AccessPublic, 0x80000000 | 8),
        // Method 'cellAt'
        QtMocHelpers::MethodData<Tiled::Cell(int, int) const>(9, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Method 'flagsAt'
        QtMocHelpers::MethodData<int(int, int) const>(13, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Method 'tileAt'
        QtMocHelpers::MethodData<Tiled::EditableTile *(int, int) const>(14, 2, QMC::AccessPublic, 0x80000000 | 15, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Method 'edit'
        QtMocHelpers::MethodData<Tiled::TileLayerEdit *()>(16, 2, QMC::AccessPublic, 0x80000000 | 17),
        // Method 'wangEdit'
        QtMocHelpers::MethodData<Tiled::TileLayerWangEdit *(Tiled::EditableWangSet *)>(18, 2, QMC::AccessPublic, 0x80000000 | 19, {{
            { 0x80000000 | 20, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'width'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'height'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &, QSize, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QString, 23 }, { 0x80000000 | 3, 4 }, { QMetaType::QObjectStar, 24 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &, QSize)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 23 }, { 0x80000000 | 3, 4 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 23 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<EditableTileLayer, qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::EditableTileLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableTileLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableTileLayer *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EditableTileLayer *_r = new EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { EditableTileLayer *_r = new EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { EditableTileLayer *_r = new EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { EditableTileLayer *_r = new EditableTileLayer();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3]))); } break;
        case 1: { new (_a[0]) EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[2]))); } break;
        case 2: { new (_a[0]) EditableTileLayer((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 3: { new (_a[0]) EditableTileLayer(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: { Tiled::RegionValueType _r = _t->region();
            if (_a[0]) *reinterpret_cast<Tiled::RegionValueType*>(_a[0]) = std::move(_r); }  break;
        case 3: { Tiled::Cell _r = _t->cellAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::Cell*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->flagsAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 5: { Tiled::EditableTile* _r = _t->tileAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableTile**>(_a[0]) = std::move(_r); }  break;
        case 6: { Tiled::TileLayerEdit* _r = _t->edit();
            if (_a[0]) *reinterpret_cast<Tiled::TileLayerEdit**>(_a[0]) = std::move(_r); }  break;
        case 7: { Tiled::TileLayerWangEdit* _r = _t->wangEdit((*reinterpret_cast<std::add_pointer_t<Tiled::EditableWangSet*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::TileLayerWangEdit**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setSize(*reinterpret_cast<QSize*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableTileLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableTileLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17EditableTileLayerE_t>.strings))
        return static_cast<void*>(this);
    return EditableLayer::qt_metacast(_clname);
}

int Tiled::EditableTileLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
