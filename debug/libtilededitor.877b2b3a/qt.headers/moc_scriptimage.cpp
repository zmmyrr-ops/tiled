/****************************************************************************
** Meta object code from reading C++ file 'scriptimage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptimage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptimage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled11ScriptImageE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptImage::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11ScriptImageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptImage",
        "pixel",
        "",
        "x",
        "y",
        "pixelColor",
        "QColor",
        "setPixel",
        "index_or_rgb",
        "setPixelColor",
        "color",
        "fill",
        "load",
        "fileName",
        "format",
        "loadFromData",
        "data",
        "save",
        "quality",
        "saveToData",
        "i",
        "colorTable",
        "QJSValue",
        "setColor",
        "rgb",
        "setColorTable",
        "colors",
        "copy",
        "Tiled::ScriptImage*",
        "QRect",
        "rect",
        "w",
        "h",
        "scaled",
        "AspectRatioMode",
        "aspectMode",
        "TransformationMode",
        "mode",
        "mirrored",
        "horiz",
        "vert",
        "ScriptImage",
        "parent",
        "width",
        "height",
        "Format",
        "bytesPerLine",
        "depth",
        "size",
        "QSize",
        "Format_Invalid",
        "Format_Mono",
        "Format_MonoLSB",
        "Format_Indexed8",
        "Format_RGB32",
        "Format_ARGB32",
        "Format_ARGB32_Premultiplied",
        "Format_RGB16",
        "Format_ARGB8565_Premultiplied",
        "Format_RGB666",
        "Format_ARGB6666_Premultiplied",
        "Format_RGB555",
        "Format_ARGB8555_Premultiplied",
        "Format_RGB888",
        "Format_RGB444",
        "Format_ARGB4444_Premultiplied",
        "Format_RGBX8888",
        "Format_RGBA8888",
        "Format_RGBA8888_Premultiplied",
        "Format_BGR30",
        "Format_A2BGR30_Premultiplied",
        "Format_RGB30",
        "Format_A2RGB30_Premultiplied",
        "Format_Alpha8",
        "Format_Grayscale8",
        "Format_RGBX64",
        "Format_RGBA64",
        "Format_RGBA64_Premultiplied",
        "Format_Grayscale16",
        "Format_BGR888",
        "NImageFormats",
        "IgnoreAspectRatio",
        "KeepAspectRatio",
        "KeepAspectRatioByExpanding",
        "FastTransformation",
        "SmoothTransformation"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'pixel'
        QtMocHelpers::MethodData<uint(int, int) const>(1, 2, QMC::AccessPublic, QMetaType::UInt, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Method 'pixelColor'
        QtMocHelpers::MethodData<QColor(int, int) const>(5, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Method 'setPixel'
        QtMocHelpers::MethodData<void(int, int, uint)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::UInt, 8 },
        }}),
        // Method 'setPixelColor'
        QtMocHelpers::MethodData<void(int, int, const QColor &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { 0x80000000 | 6, 10 },
        }}),
        // Method 'fill'
        QtMocHelpers::MethodData<void(uint)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Method 'fill'
        QtMocHelpers::MethodData<void(const QColor &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 10 },
        }}),
        // Method 'load'
        QtMocHelpers::MethodData<bool(const QString &, const QByteArray &)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 13 }, { QMetaType::QByteArray, 14 },
        }}),
        // Method 'load'
        QtMocHelpers::MethodData<bool(const QString &)>(12, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 13 },
        }}),
        // Method 'loadFromData'
        QtMocHelpers::MethodData<bool(const QByteArray &, const QByteArray &)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 16 }, { QMetaType::QByteArray, 14 },
        }}),
        // Method 'loadFromData'
        QtMocHelpers::MethodData<bool(const QByteArray &)>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QByteArray, 16 },
        }}),
        // Method 'save'
        QtMocHelpers::MethodData<bool(const QString &, const QByteArray &, int)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 13 }, { QMetaType::QByteArray, 14 }, { QMetaType::Int, 18 },
        }}),
        // Method 'save'
        QtMocHelpers::MethodData<bool(const QString &, const QByteArray &)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 13 }, { QMetaType::QByteArray, 14 },
        }}),
        // Method 'save'
        QtMocHelpers::MethodData<bool(const QString &)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 13 },
        }}),
        // Method 'saveToData'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &, int)>(19, 2, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 14 }, { QMetaType::Int, 18 },
        }}),
        // Method 'saveToData'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &)>(19, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 14 },
        }}),
        // Method 'saveToData'
        QtMocHelpers::MethodData<QByteArray()>(19, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray),
        // Method 'color'
        QtMocHelpers::MethodData<uint(int) const>(10, 2, QMC::AccessPublic, QMetaType::UInt, {{
            { QMetaType::Int, 20 },
        }}),
        // Method 'colorTable'
        QtMocHelpers::MethodData<QJSValue() const>(21, 2, QMC::AccessPublic, 0x80000000 | 22),
        // Method 'setColor'
        QtMocHelpers::MethodData<void(int, uint)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 }, { QMetaType::UInt, 24 },
        }}),
        // Method 'setColor'
        QtMocHelpers::MethodData<void(int, const QColor &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 }, { 0x80000000 | 6, 10 },
        }}),
        // Method 'setColorTable'
        QtMocHelpers::MethodData<void(QJSValue)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 26 },
        }}),
        // Method 'copy'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(QRect) const>(27, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Method 'copy'
        QtMocHelpers::MethodData<Tiled::ScriptImage *() const>(27, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 28),
        // Method 'copy'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(int, int, int, int) const>(27, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::Int, 31 }, { QMetaType::Int, 32 },
        }}),
        // Method 'scaled'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(int, int, enum AspectRatioMode, enum TransformationMode) const>(33, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 32 }, { 0x80000000 | 34, 35 }, { 0x80000000 | 36, 37 },
        }}),
        // Method 'scaled'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(int, int, enum AspectRatioMode) const>(33, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 28, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 32 }, { 0x80000000 | 34, 35 },
        }}),
        // Method 'scaled'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(int, int) const>(33, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 28, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 32 },
        }}),
        // Method 'mirrored'
        QtMocHelpers::MethodData<Tiled::ScriptImage *(bool, bool) const>(38, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Bool, 39 }, { QMetaType::Bool, 40 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'width'
        QtMocHelpers::PropertyData<int>(43, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'height'
        QtMocHelpers::PropertyData<int>(44, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'depth'
        QtMocHelpers::PropertyData<int>(47, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(48, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'format'
        QtMocHelpers::PropertyData<enum Format>(14, 0x80000000 | 45, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Format'
        QtMocHelpers::EnumData<enum Format>(45, 45, QMC::EnumFlags{}).add({
            {   50, Format::Format_Invalid },
            {   51, Format::Format_Mono },
            {   52, Format::Format_MonoLSB },
            {   53, Format::Format_Indexed8 },
            {   54, Format::Format_RGB32 },
            {   55, Format::Format_ARGB32 },
            {   56, Format::Format_ARGB32_Premultiplied },
            {   57, Format::Format_RGB16 },
            {   58, Format::Format_ARGB8565_Premultiplied },
            {   59, Format::Format_RGB666 },
            {   60, Format::Format_ARGB6666_Premultiplied },
            {   61, Format::Format_RGB555 },
            {   62, Format::Format_ARGB8555_Premultiplied },
            {   63, Format::Format_RGB888 },
            {   64, Format::Format_RGB444 },
            {   65, Format::Format_ARGB4444_Premultiplied },
            {   66, Format::Format_RGBX8888 },
            {   67, Format::Format_RGBA8888 },
            {   68, Format::Format_RGBA8888_Premultiplied },
            {   69, Format::Format_BGR30 },
            {   70, Format::Format_A2BGR30_Premultiplied },
            {   71, Format::Format_RGB30 },
            {   72, Format::Format_A2RGB30_Premultiplied },
            {   73, Format::Format_Alpha8 },
            {   74, Format::Format_Grayscale8 },
            {   75, Format::Format_RGBX64 },
            {   76, Format::Format_RGBA64 },
            {   77, Format::Format_RGBA64_Premultiplied },
            {   78, Format::Format_Grayscale16 },
            {   79, Format::Format_BGR888 },
            {   80, Format::NImageFormats },
        }),
        // enum 'AspectRatioMode'
        QtMocHelpers::EnumData<enum AspectRatioMode>(34, 34, QMC::EnumFlags{}).add({
            {   81, AspectRatioMode::IgnoreAspectRatio },
            {   82, AspectRatioMode::KeepAspectRatio },
            {   83, AspectRatioMode::KeepAspectRatioByExpanding },
        }),
        // enum 'TransformationMode'
        QtMocHelpers::EnumData<enum TransformationMode>(36, 36, QMC::EnumFlags{}).add({
            {   84, TransformationMode::FastTransformation },
            {   85, TransformationMode::SmoothTransformation },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QObjectStar, 42 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
        QtMocHelpers::ConstructorData<Constructor(int, int, enum Format, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { 0x80000000 | 45, 14 }, { QMetaType::QObjectStar, 42 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(int, int, enum Format)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { 0x80000000 | 45, 14 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(int, int)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::Int, 43 }, { QMetaType::Int, 44 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QByteArray &, int, int, enum Format, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QByteArray, 16 }, { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { 0x80000000 | 45, 14 },
            { QMetaType::QObjectStar, 42 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QByteArray &, int, int, enum Format)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QByteArray, 16 }, { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { 0x80000000 | 45, 14 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QByteArray &, int, int, int, enum Format, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QByteArray, 16 }, { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 46 },
            { 0x80000000 | 45, 14 }, { QMetaType::QObjectStar, 42 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QByteArray &, int, int, int, enum Format)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QByteArray, 16 }, { QMetaType::Int, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 46 },
            { 0x80000000 | 45, 14 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &, const QByteArray &, QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QString, 13 }, { QMetaType::QByteArray, 14 }, { QMetaType::QObjectStar, 42 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &, const QByteArray &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 13 }, { QMetaType::QByteArray, 14 },
        }}),
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(2, QMC::AccessPublic | QMC::MethodCloned, {{
            { QMetaType::QString, 13 },
        }}),
    };
    return QtMocHelpers::metaObjectData<ScriptImage, qt_meta_tag_ZN5Tiled11ScriptImageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11ScriptImageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11ScriptImageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11ScriptImageE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptImage *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { ScriptImage *_r = new ScriptImage();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 4: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 5: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 6: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 7: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[6])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 8: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 9: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 10: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 11: { ScriptImage *_r = new ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) ScriptImage(); } break;
        case 2: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[4]))); } break;
        case 3: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[3]))); } break;
        case 4: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); } break;
        case 5: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[5]))); } break;
        case 6: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[4]))); } break;
        case 7: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[6]))); } break;
        case 8: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<enum Format>>(_a[5]))); } break;
        case 9: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3]))); } break;
        case 10: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2]))); } break;
        case 11: { new (_a[0]) ScriptImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { uint _r = _t->pixel((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 1: { QColor _r = _t->pixelColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setPixel((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3]))); break;
        case 3: _t->setPixelColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[3]))); break;
        case 4: _t->fill((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->fill((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 6: { bool _r = _t->load((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->load((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->loadFromData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->loadFromData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->save((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->save((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->save((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QByteArray _r = _t->saveToData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 14: { QByteArray _r = _t->saveToData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 15: { QByteArray _r = _t->saveToData();
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 16: { uint _r = _t->color((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 17: { QJSValue _r = _t->colorTable();
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        case 19: _t->setColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 20: _t->setColorTable((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 21: { Tiled::ScriptImage* _r = _t->copy((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 22: { Tiled::ScriptImage* _r = _t->copy();
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 23: { Tiled::ScriptImage* _r = _t->copy((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 24: { Tiled::ScriptImage* _r = _t->scaled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum AspectRatioMode>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum TransformationMode>>(_a[4])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 25: { Tiled::ScriptImage* _r = _t->scaled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum AspectRatioMode>>(_a[3])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 26: { Tiled::ScriptImage* _r = _t->scaled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        case 27: { Tiled::ScriptImage* _r = _t->mirrored((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptImage**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->depth(); break;
        case 3: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast<enum Format*>(_v) = _t->format(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11ScriptImageE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::ScriptImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
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
