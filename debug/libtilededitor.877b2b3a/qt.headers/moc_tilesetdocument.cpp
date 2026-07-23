/****************************************************************************
** Meta object code from reading C++ file 'tilesetdocument.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/tilesetdocument.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilesetdocument.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15TilesetDocumentE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::TilesetDocument::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::TilesetDocument",
        "tilesetChanged",
        "",
        "Tileset*",
        "tileset",
        "tilesAdded",
        "QList<Tile*>",
        "tiles",
        "tilesRemoved",
        "tilesetNameChanged",
        "tilesetTileOffsetChanged",
        "tilesetObjectAlignmentChanged",
        "tileImageSourceChanged",
        "Tile*",
        "tile",
        "tileWangSetChanged",
        "tileProbabilityChanged",
        "tileObjectGroupChanged",
        "tileAnimationChanged",
        "selectedTilesChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'tilesetChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'tilesAdded'
        QtMocHelpers::SignalData<void(const QList<Tile*> &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'tilesRemoved'
        QtMocHelpers::SignalData<void(const QList<Tile*> &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'tilesetNameChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'tilesetTileOffsetChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'tilesetObjectAlignmentChanged'
        QtMocHelpers::SignalData<void(Tileset *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'tileImageSourceChanged'
        QtMocHelpers::SignalData<void(Tile *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'tileWangSetChanged'
        QtMocHelpers::SignalData<void(const QList<Tile*> &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'tileProbabilityChanged'
        QtMocHelpers::SignalData<void(Tile *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'tileObjectGroupChanged'
        QtMocHelpers::SignalData<void(Tile *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'tileAnimationChanged'
        QtMocHelpers::SignalData<void(Tile *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'selectedTilesChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TilesetDocument, qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::TilesetDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<Document::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>.metaTypes,
    nullptr
} };

void Tiled::TilesetDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TilesetDocument *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tilesetChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 1: _t->tilesAdded((*reinterpret_cast<std::add_pointer_t<QList<Tile*>>>(_a[1]))); break;
        case 2: _t->tilesRemoved((*reinterpret_cast<std::add_pointer_t<QList<Tile*>>>(_a[1]))); break;
        case 3: _t->tilesetNameChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 4: _t->tilesetTileOffsetChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 5: _t->tilesetObjectAlignmentChanged((*reinterpret_cast<std::add_pointer_t<Tileset*>>(_a[1]))); break;
        case 6: _t->tileImageSourceChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 7: _t->tileWangSetChanged((*reinterpret_cast<std::add_pointer_t<QList<Tile*>>>(_a[1]))); break;
        case 8: _t->tileProbabilityChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 9: _t->tileObjectGroupChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 10: _t->tileAnimationChanged((*reinterpret_cast<std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 11: _t->selectedTilesChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tileset * )>(_a, &TilesetDocument::tilesetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(const QList<Tile*> & )>(_a, &TilesetDocument::tilesAdded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(const QList<Tile*> & )>(_a, &TilesetDocument::tilesRemoved, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tileset * )>(_a, &TilesetDocument::tilesetNameChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tileset * )>(_a, &TilesetDocument::tilesetTileOffsetChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tileset * )>(_a, &TilesetDocument::tilesetObjectAlignmentChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tile * )>(_a, &TilesetDocument::tileImageSourceChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(const QList<Tile*> & )>(_a, &TilesetDocument::tileWangSetChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tile * )>(_a, &TilesetDocument::tileProbabilityChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tile * )>(_a, &TilesetDocument::tileObjectGroupChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)(Tile * )>(_a, &TilesetDocument::tileAnimationChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (TilesetDocument::*)()>(_a, &TilesetDocument::selectedTilesChanged, 11))
            return;
    }
}

const QMetaObject *Tiled::TilesetDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::TilesetDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15TilesetDocumentE_t>.strings))
        return static_cast<void*>(this);
    return Document::qt_metacast(_clname);
}

int Tiled::TilesetDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Document::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Tiled::TilesetDocument::tilesetChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::TilesetDocument::tilesAdded(const QList<Tile*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::TilesetDocument::tilesRemoved(const QList<Tile*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::TilesetDocument::tilesetNameChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::TilesetDocument::tilesetTileOffsetChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::TilesetDocument::tilesetObjectAlignmentChanged(Tileset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Tiled::TilesetDocument::tileImageSourceChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Tiled::TilesetDocument::tileWangSetChanged(const QList<Tile*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Tiled::TilesetDocument::tileProbabilityChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Tiled::TilesetDocument::tileObjectGroupChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Tiled::TilesetDocument::tileAnimationChanged(Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Tiled::TilesetDocument::selectedTilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
