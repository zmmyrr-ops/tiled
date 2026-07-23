/****************************************************************************
** Meta object code from reading C++ file 'tilesetview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilesetview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilesetview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled11TilesetViewE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TilesetView::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11TilesetViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TilesetView",
        "wangSetImageSelected",
        "",
        "Tile*",
        "tile",
        "wangColorImageSelected",
        "index",
        "wangIdUsedChanged",
        "WangId",
        "wangId",
        "currentWangIdChanged",
        "swapTilesRequested",
        "tileA",
        "tileB"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'wangSetImageSelected'
        QtMocHelpers::SignalData<void(Tile *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'wangColorImageSelected'
        QtMocHelpers::SignalData<void(Tile *, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'wangIdUsedChanged'
        QtMocHelpers::SignalData<void(WangId)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'currentWangIdChanged'
        QtMocHelpers::SignalData<void(WangId)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'swapTilesRequested'
        QtMocHelpers::SignalData<void(Tile *, Tile *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 12 }, { 0x80000000 | 3, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TilesetView, qt_meta_tag_ZN5Tiled11TilesetViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TilesetView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11TilesetViewE_t>.metaTypes,
    nullptr
} };

void Tiled::TilesetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TilesetView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->wangSetImageSelected((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 1: _t->wangColorImageSelected((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->wangIdUsedChanged((*reinterpret_cast<std::add_pointer_t<WangId>>(_a[1]))); break;
        case 3: _t->currentWangIdChanged((*reinterpret_cast<std::add_pointer_t<WangId>>(_a[1]))); break;
        case 4: _t->swapTilesRequested((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TilesetView::*)(Tile * )>(_a, &TilesetView::wangSetImageSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetView::*)(Tile * , int )>(_a, &TilesetView::wangColorImageSelected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetView::*)(WangId )>(_a, &TilesetView::wangIdUsedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetView::*)(WangId )>(_a, &TilesetView::currentWangIdChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetView::*)(Tile * , Tile * )>(_a, &TilesetView::swapTilesRequested, 4))
            return;
    }
}

const QMetaObject *Tiled::TilesetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TilesetView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11TilesetViewE_t>.strings))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int Tiled::TilesetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Tiled::TilesetView::wangSetImageSelected(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::TilesetView::wangColorImageSelected(Tile * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void Tiled::TilesetView::wangIdUsedChanged(WangId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::TilesetView::currentWangIdChanged(WangId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::TilesetView::swapTilesRequested(Tile * _t1, Tile * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
