/****************************************************************************
** Meta object code from reading C++ file 'regionvaluetype.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/regionvaluetype.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regionvaluetype.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15RegionValueTypeE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::RegionValueType::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15RegionValueTypeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::RegionValueType",
        "toString",
        "",
        "contains",
        "x",
        "y",
        "QPoint",
        "point",
        "add",
        "QRect",
        "rect",
        "QRectF",
        "region",
        "subtract",
        "intersect",
        "contiguousRegions",
        "QList<Tiled::RegionValueType>",
        "boundingRect",
        "rects",
        "QList<QRect>"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'toString'
        QtMocHelpers::MethodData<QString() const>(1, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'contains'
        QtMocHelpers::MethodData<bool(int, int) const>(3, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 4 }, { QMetaType::Int, 5 },
        }}),
        // Method 'contains'
        QtMocHelpers::MethodData<bool(QPoint) const>(3, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'add'
        QtMocHelpers::MethodData<void(const QRect &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'add'
        QtMocHelpers::MethodData<void(const QRectF &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 10 },
        }}),
        // Method 'add'
        QtMocHelpers::MethodData<void(const Tiled::RegionValueType &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 0, 12 },
        }}),
        // Method 'subtract'
        QtMocHelpers::MethodData<void(const QRect &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'subtract'
        QtMocHelpers::MethodData<void(const QRectF &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 10 },
        }}),
        // Method 'subtract'
        QtMocHelpers::MethodData<void(const Tiled::RegionValueType &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 0, 12 },
        }}),
        // Method 'intersect'
        QtMocHelpers::MethodData<void(const QRect &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'intersect'
        QtMocHelpers::MethodData<void(const QRectF &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 10 },
        }}),
        // Method 'intersect'
        QtMocHelpers::MethodData<void(const Tiled::RegionValueType &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 0, 12 },
        }}),
        // Method 'contiguousRegions'
        QtMocHelpers::MethodData<QVector<Tiled::RegionValueType>() const>(15, 2, QMC::AccessPublic, 0x80000000 | 16),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'boundingRect'
        QtMocHelpers::PropertyData<QRect>(17, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'rects'
        QtMocHelpers::PropertyData<QList<QRect>>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RegionValueType, qt_meta_tag_ZN5Tiled15RegionValueTypeE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::RegionValueType::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15RegionValueTypeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15RegionValueTypeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15RegionValueTypeE_t>.metaTypes,
    nullptr
} };

void Tiled::RegionValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<RegionValueType *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->contains((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->contains((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->add((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 4: _t->add((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 5: _t->add((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 6: _t->subtract((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 7: _t->subtract((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 8: _t->subtract((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 9: _t->intersect((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 10: _t->intersect((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 11: _t->intersect((*reinterpret_cast<std::add_pointer_t<Tiled::RegionValueType>>(_a[1]))); break;
        case 12: { QList<Tiled::RegionValueType> _r = _t->contiguousRegions();
            if (_a[0]) *reinterpret_cast<QList<Tiled::RegionValueType>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QRect*>(_v) = _t->boundingRect(); break;
        case 1: *reinterpret_cast<QList<QRect>*>(_v) = _t->rects(); break;
        default: break;
        }
    }
}
QT_WARNING_POP
