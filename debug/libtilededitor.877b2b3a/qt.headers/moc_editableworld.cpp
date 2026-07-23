/****************************************************************************
** Meta object code from reading C++ file 'editableworld.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editableworld.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableworld.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled13EditableWorldE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableWorld::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled13EditableWorldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableWorld",
        "mapsInRect",
        "QList<WorldMapEntry>",
        "",
        "QRect",
        "rect",
        "allMaps",
        "containsMap",
        "fileName",
        "EditableMap*",
        "setMapRect",
        "mapFileName",
        "setMapPos",
        "map",
        "x",
        "y",
        "addMap",
        "removeMap",
        "maps",
        "patterns",
        "QList<WorldPattern>"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'mapsInRect'
        QtMocHelpers::MethodData<QVector<WorldMapEntry>(const QRect &) const>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Method 'allMaps'
        QtMocHelpers::MethodData<QVector<WorldMapEntry>() const>(6, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'containsMap'
        QtMocHelpers::MethodData<bool(const QString &) const>(7, 3, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 8 },
        }}),
        // Method 'containsMap'
        QtMocHelpers::MethodData<bool(EditableMap *) const>(7, 3, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 8 },
        }}),
        // Method 'setMapRect'
        QtMocHelpers::MethodData<void(const QString &, const QRect &)>(10, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { 0x80000000 | 4, 5 },
        }}),
        // Method 'setMapPos'
        QtMocHelpers::MethodData<void(EditableMap *, int, int)>(12, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 13 }, { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Method 'addMap'
        QtMocHelpers::MethodData<void(const QString &, const QRect &)>(16, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { 0x80000000 | 4, 5 },
        }}),
        // Method 'addMap'
        QtMocHelpers::MethodData<void(EditableMap *, int, int)>(16, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 13 }, { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Method 'removeMap'
        QtMocHelpers::MethodData<void(const QString &)>(17, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Method 'removeMap'
        QtMocHelpers::MethodData<void(EditableMap *)>(17, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'maps'
        QtMocHelpers::PropertyData<QList<WorldMapEntry>>(18, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'patterns'
        QtMocHelpers::PropertyData<QList<WorldPattern>>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditableWorld, qt_meta_tag_ZN5Tiled13EditableWorldE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableWorld::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableAsset::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableWorldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableWorldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled13EditableWorldE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableWorld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableWorld *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QList<WorldMapEntry> _r = _t->mapsInRect((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<WorldMapEntry>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<WorldMapEntry> _r = _t->allMaps();
            if (_a[0]) *reinterpret_cast<QList<WorldMapEntry>*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->containsMap((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->containsMap((*reinterpret_cast<std::add_pointer_t<EditableMap*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setMapRect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[2]))); break;
        case 5: _t->setMapPos((*reinterpret_cast<std::add_pointer_t<EditableMap*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->addMap((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[2]))); break;
        case 7: _t->addMap((*reinterpret_cast<std::add_pointer_t<EditableMap*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->removeMap((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->removeMap((*reinterpret_cast<std::add_pointer_t<EditableMap*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EditableMap* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EditableMap* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EditableMap* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EditableMap* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<WorldMapEntry>*>(_v) = _t->maps(); break;
        case 1: *reinterpret_cast<QList<WorldPattern>*>(_v) = _t->patterns(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled13EditableWorldE_t>.strings))
        return static_cast<void*>(this);
    return EditableAsset::qt_metacast(_clname);
}

int Tiled::EditableWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableAsset::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
