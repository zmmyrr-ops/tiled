/****************************************************************************
** Meta object code from reading C++ file 'editabletile.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/editabletile.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editabletile.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12EditableTileE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::EditableTile::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12EditableTileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::EditableTile",
        "setImageFileName",
        "",
        "fileName",
        "setImageRect",
        "QRect",
        "rect",
        "setProbability",
        "probability",
        "setObjectGroup",
        "EditableObjectGroup*",
        "editableObjectGroup",
        "setFrames",
        "QJSValue",
        "value",
        "setImage",
        "Tiled::ScriptImage*",
        "image",
        "id",
        "width",
        "height",
        "size",
        "QSize",
        "type",
        "imageFileName",
        "imageRect",
        "objectGroup",
        "Tiled::EditableObjectGroup*",
        "frames",
        "animated",
        "tileset",
        "Tiled::EditableTileset*",
        "Flags",
        "FlippedHorizontally",
        "FlippedVertically",
        "FlippedAntiDiagonally",
        "RotatedHexagonal120",
        "Corner",
        "TopLeft",
        "TopRight",
        "BottomLeft",
        "BottomRight"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setImageFileName'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'setImageRect'
        QtMocHelpers::SlotData<void(const QRect &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setProbability'
        QtMocHelpers::SlotData<void(qreal)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 8 },
        }}),
        // Slot 'setObjectGroup'
        QtMocHelpers::SlotData<void(EditableObjectGroup *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'setFrames'
        QtMocHelpers::SlotData<void(QJSValue)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'setImage'
        QtMocHelpers::MethodData<void(Tiled::ScriptImage *, const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { QMetaType::QString, 3 },
        }}),
        // Method 'setImage'
        QtMocHelpers::MethodData<void(Tiled::ScriptImage *)>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'width'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'height'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'type'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'imageFileName'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'image'
        QtMocHelpers::PropertyData<Tiled::ScriptImage*>(17, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'imageRect'
        QtMocHelpers::PropertyData<QRect>(25, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'probability'
        QtMocHelpers::PropertyData<qreal>(8, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'objectGroup'
        QtMocHelpers::PropertyData<Tiled::EditableObjectGroup*>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'frames'
        QtMocHelpers::PropertyData<QJSValue>(28, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'animated'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'tileset'
        QtMocHelpers::PropertyData<Tiled::EditableTileset*>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Flags'
        QtMocHelpers::EnumData<enum Flags>(32, 32, QMC::EnumFlags{}).add({
            {   33, Flags::FlippedHorizontally },
            {   34, Flags::FlippedVertically },
            {   35, Flags::FlippedAntiDiagonally },
            {   36, Flags::RotatedHexagonal120 },
        }),
        // enum 'Corner'
        QtMocHelpers::EnumData<enum Corner>(37, 37, QMC::EnumFlags{}).add({
            {   38, Corner::TopLeft },
            {   39, Corner::TopRight },
            {   40, Corner::BottomLeft },
            {   41, Corner::BottomRight },
        }),
    };
    return QtMocHelpers::metaObjectData<EditableTile, qt_meta_tag_ZN5Tiled12EditableTileE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::EditableTile::staticMetaObject = { {
    QMetaObject::SuperData::link<EditableObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12EditableTileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12EditableTileE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12EditableTileE_t>.metaTypes,
    nullptr
} };

void Tiled::EditableTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditableTile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setImageFileName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setImageRect((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 2: _t->setProbability((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->setObjectGroup((*reinterpret_cast<std::add_pointer_t<EditableObjectGroup*>>(_a[1]))); break;
        case 4: _t->setFrames((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 5: _t->setImage((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->setImage((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 3: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->className(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->imageFileName(); break;
        case 6: *reinterpret_cast<Tiled::ScriptImage**>(_v) = _t->image(); break;
        case 7: *reinterpret_cast<QRect*>(_v) = _t->imageRect(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->probability(); break;
        case 9: *reinterpret_cast<Tiled::EditableObjectGroup**>(_v) = _t->objectGroup(); break;
        case 10: *reinterpret_cast<QJSValue*>(_v) = _t->frames(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isAnimated(); break;
        case 12: *reinterpret_cast<Tiled::EditableTileset**>(_v) = _t->tileset(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setClassName(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setImageFileName(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setImage(*reinterpret_cast<Tiled::ScriptImage**>(_v)); break;
        case 7: _t->setImageRect(*reinterpret_cast<QRect*>(_v)); break;
        case 8: _t->setProbability(*reinterpret_cast<qreal*>(_v)); break;
        case 9: _t->setObjectGroup(*reinterpret_cast<Tiled::EditableObjectGroup**>(_v)); break;
        case 10: _t->setFrames(*reinterpret_cast<QJSValue*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::EditableTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::EditableTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12EditableTileE_t>.strings))
        return static_cast<void*>(this);
    return EditableObject::qt_metacast(_clname);
}

int Tiled::EditableTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditableObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
