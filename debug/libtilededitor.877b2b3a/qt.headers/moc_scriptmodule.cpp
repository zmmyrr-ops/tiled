/****************************************************************************
** Meta object code from reading C++ file 'scriptmodule.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptmodule.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptmodule.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled12ScriptModuleE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptModule::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12ScriptModuleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptModule",
        "assetCreated",
        "",
        "Tiled::EditableAsset*",
        "asset",
        "assetOpened",
        "assetReloaded",
        "assetAboutToBeSaved",
        "assetSaved",
        "assetAboutToBeClosed",
        "activeAssetChanged",
        "worldsChanged",
        "trigger",
        "actionName",
        "executeCommand",
        "name",
        "inTerminal",
        "alert",
        "text",
        "title",
        "confirm",
        "prompt",
        "label",
        "log",
        "warn",
        "QJSValue",
        "activated",
        "error",
        "color",
        "QColor",
        "r",
        "g",
        "b",
        "a",
        "cell",
        "Tiled::Cell",
        "Tiled::EditableTile*",
        "tile",
        "flags",
        "filePath",
        "Tiled::FilePath",
        "QUrl",
        "path",
        "objectRef",
        "Tiled::ObjectRef",
        "id",
        "propertyValue",
        "QVariant",
        "typeName",
        "value",
        "cursor",
        "QCursor",
        "Qt::CursorShape",
        "shape",
        "Tiled::ScriptImage*",
        "image",
        "hotX",
        "hotY",
        "versionLessThan",
        "open",
        "fileName",
        "close",
        "reload",
        "registerAction",
        "Tiled::ScriptedAction*",
        "callback",
        "registerMapFormat",
        "shortName",
        "mapFormatObject",
        "registerTilesetFormat",
        "tilesetFormatObject",
        "registerTool",
        "toolObject",
        "mapFormat",
        "Tiled::ScriptMapFormatWrapper*",
        "mapFormatForFile",
        "tilesetFormat",
        "Tiled::ScriptTilesetFormatWrapper*",
        "tilesetFormatForFile",
        "extendMenu",
        "idName",
        "items",
        "compress",
        "data",
        "CompressionMethod",
        "method",
        "compressionLevel",
        "decompress",
        "promptDirectory",
        "defaultDir",
        "promptOpenFiles",
        "filters",
        "promptOpenFile",
        "promptSaveFile",
        "loadWorld",
        "unloadWorld",
        "unloadAllWorlds",
        "version",
        "qtVersion",
        "platform",
        "arch",
        "extensionsPath",
        "applicationDirPath",
        "projectFilePath",
        "scriptArguments",
        "actions",
        "menus",
        "mapFormats",
        "tilesetFormats",
        "activeAsset",
        "openAssets",
        "QList<QObject*>",
        "project",
        "session",
        "Tiled::ScriptSession*",
        "mapEditor",
        "Tiled::MapEditor*",
        "tilesetEditor",
        "Tiled::TilesetEditor*",
        "worlds",
        "Gzip",
        "Zlib",
        "Zstandard"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'assetCreated'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'assetOpened'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'assetReloaded'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'assetAboutToBeSaved'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'assetSaved'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'assetAboutToBeClosed'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activeAssetChanged'
        QtMocHelpers::SignalData<void(Tiled::EditableAsset *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'worldsChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'trigger'
        QtMocHelpers::SlotData<void(const QByteArray &) const>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 13 },
        }}),
        // Slot 'executeCommand'
        QtMocHelpers::SlotData<void(const QString &, bool) const>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 }, { QMetaType::Bool, 16 },
        }}),
        // Slot 'executeCommand'
        QtMocHelpers::SlotData<void(const QString &) const>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'alert'
        QtMocHelpers::SlotData<void(const QString &, const QString &) const>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'alert'
        QtMocHelpers::SlotData<void(const QString &) const>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'confirm'
        QtMocHelpers::SlotData<bool(const QString &, const QString &) const>(20, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'confirm'
        QtMocHelpers::SlotData<bool(const QString &) const>(20, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'prompt'
        QtMocHelpers::SlotData<QString(const QString &, const QString &, const QString &) const>(21, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 22 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'prompt'
        QtMocHelpers::SlotData<QString(const QString &, const QString &) const>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 22 }, { QMetaType::QString, 18 },
        }}),
        // Slot 'prompt'
        QtMocHelpers::SlotData<QString(const QString &) const>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'log'
        QtMocHelpers::SlotData<void(const QString &) const>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'warn'
        QtMocHelpers::SlotData<void(const QString &, QJSValue)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 }, { 0x80000000 | 25, 26 },
        }}),
        // Slot 'warn'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'error'
        QtMocHelpers::SlotData<void(const QString &, QJSValue)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 }, { 0x80000000 | 25, 26 },
        }}),
        // Slot 'error'
        QtMocHelpers::SlotData<void(const QString &)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Method 'color'
        QtMocHelpers::MethodData<QColor(const QString &) const>(28, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::QString, 15 },
        }}),
        // Method 'color'
        QtMocHelpers::MethodData<QColor(float, float, float, float) const>(28, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::Float, 30 }, { QMetaType::Float, 31 }, { QMetaType::Float, 32 }, { QMetaType::Float, 33 },
        }}),
        // Method 'color'
        QtMocHelpers::MethodData<QColor(float, float, float) const>(28, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 29, {{
            { QMetaType::Float, 30 }, { QMetaType::Float, 31 }, { QMetaType::Float, 32 },
        }}),
        // Method 'cell'
        QtMocHelpers::MethodData<Tiled::Cell(Tiled::EditableTile *, int) const>(34, 2, QMC::AccessPublic, 0x80000000 | 35, {{
            { 0x80000000 | 36, 37 }, { QMetaType::Int, 38 },
        }}),
        // Method 'cell'
        QtMocHelpers::MethodData<Tiled::Cell(Tiled::EditableTile *) const>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 35, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Method 'cell'
        QtMocHelpers::MethodData<Tiled::Cell() const>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 35),
        // Method 'filePath'
        QtMocHelpers::MethodData<Tiled::FilePath(const QUrl &) const>(39, 2, QMC::AccessPublic, 0x80000000 | 40, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Method 'objectRef'
        QtMocHelpers::MethodData<Tiled::ObjectRef(int) const>(43, 2, QMC::AccessPublic, 0x80000000 | 44, {{
            { QMetaType::Int, 45 },
        }}),
        // Method 'propertyValue'
        QtMocHelpers::MethodData<QVariant(const QString &, const QJSValue &) const>(46, 2, QMC::AccessPublic, 0x80000000 | 47, {{
            { QMetaType::QString, 48 }, { 0x80000000 | 25, 49 },
        }}),
        // Method 'cursor'
        QtMocHelpers::MethodData<QCursor(Qt::CursorShape)>(50, 2, QMC::AccessPublic, 0x80000000 | 51, {{
            { 0x80000000 | 52, 53 },
        }}),
        // Method 'cursor'
        QtMocHelpers::MethodData<QCursor(Tiled::ScriptImage *, int, int)>(50, 2, QMC::AccessPublic, 0x80000000 | 51, {{
            { 0x80000000 | 54, 55 }, { QMetaType::Int, 56 }, { QMetaType::Int, 57 },
        }}),
        // Method 'cursor'
        QtMocHelpers::MethodData<QCursor(Tiled::ScriptImage *, int)>(50, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 51, {{
            { 0x80000000 | 54, 55 }, { QMetaType::Int, 56 },
        }}),
        // Method 'cursor'
        QtMocHelpers::MethodData<QCursor(Tiled::ScriptImage *)>(50, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 51, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Method 'versionLessThan'
        QtMocHelpers::MethodData<bool(const QString &)>(58, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 33 },
        }}),
        // Method 'versionLessThan'
        QtMocHelpers::MethodData<bool(const QString &, const QString &)>(58, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 33 }, { QMetaType::QString, 32 },
        }}),
        // Method 'open'
        QtMocHelpers::MethodData<Tiled::EditableAsset *(const QString &) const>(59, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::QString, 60 },
        }}),
        // Method 'close'
        QtMocHelpers::MethodData<bool(Tiled::EditableAsset *) const>(61, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'reload'
        QtMocHelpers::MethodData<Tiled::EditableAsset *(Tiled::EditableAsset *) const>(62, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'registerAction'
        QtMocHelpers::MethodData<Tiled::ScriptedAction *(const QByteArray &, QJSValue)>(63, 2, QMC::AccessPublic, 0x80000000 | 64, {{
            { QMetaType::QByteArray, 45 }, { 0x80000000 | 25, 65 },
        }}),
        // Method 'registerMapFormat'
        QtMocHelpers::MethodData<void(const QString &, QJSValue)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 67 }, { 0x80000000 | 25, 68 },
        }}),
        // Method 'registerTilesetFormat'
        QtMocHelpers::MethodData<void(const QString &, QJSValue)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 67 }, { 0x80000000 | 25, 70 },
        }}),
        // Method 'registerTool'
        QtMocHelpers::MethodData<QJSValue(const QString &, QJSValue)>(71, 2, QMC::AccessPublic, 0x80000000 | 25, {{
            { QMetaType::QString, 67 }, { 0x80000000 | 25, 72 },
        }}),
        // Method 'mapFormat'
        QtMocHelpers::MethodData<Tiled::ScriptMapFormatWrapper *(const QString &) const>(73, 2, QMC::AccessPublic, 0x80000000 | 74, {{
            { QMetaType::QString, 67 },
        }}),
        // Method 'mapFormatForFile'
        QtMocHelpers::MethodData<Tiled::ScriptMapFormatWrapper *(const QString &) const>(75, 2, QMC::AccessPublic, 0x80000000 | 74, {{
            { QMetaType::QString, 60 },
        }}),
        // Method 'tilesetFormat'
        QtMocHelpers::MethodData<Tiled::ScriptTilesetFormatWrapper *(const QString &) const>(76, 2, QMC::AccessPublic, 0x80000000 | 77, {{
            { QMetaType::QString, 67 },
        }}),
        // Method 'tilesetFormatForFile'
        QtMocHelpers::MethodData<Tiled::ScriptTilesetFormatWrapper *(const QString &) const>(78, 2, QMC::AccessPublic, 0x80000000 | 77, {{
            { QMetaType::QString, 60 },
        }}),
        // Method 'extendMenu'
        QtMocHelpers::MethodData<void(const QByteArray &, QJSValue)>(79, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 80 }, { 0x80000000 | 25, 81 },
        }}),
        // Method 'compress'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &, enum CompressionMethod, int)>(82, 2, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 83 }, { 0x80000000 | 84, 85 }, { QMetaType::Int, 86 },
        }}),
        // Method 'compress'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &, enum CompressionMethod)>(82, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 83 }, { 0x80000000 | 84, 85 },
        }}),
        // Method 'compress'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &)>(82, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 83 },
        }}),
        // Method 'decompress'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &, enum CompressionMethod)>(87, 2, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 83 }, { 0x80000000 | 84, 85 },
        }}),
        // Method 'decompress'
        QtMocHelpers::MethodData<QByteArray(const QByteArray &)>(87, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 83 },
        }}),
        // Method 'promptDirectory'
        QtMocHelpers::MethodData<QString(const QString &, const QString &) const>(88, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 19 },
        }}),
        // Method 'promptDirectory'
        QtMocHelpers::MethodData<QString(const QString &) const>(88, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 89 },
        }}),
        // Method 'promptDirectory'
        QtMocHelpers::MethodData<QString() const>(88, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'promptOpenFiles'
        QtMocHelpers::MethodData<QStringList(const QString &, const QString &, const QString &) const>(90, 2, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 }, { QMetaType::QString, 19 },
        }}),
        // Method 'promptOpenFiles'
        QtMocHelpers::MethodData<QStringList(const QString &, const QString &) const>(90, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QStringList, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 },
        }}),
        // Method 'promptOpenFiles'
        QtMocHelpers::MethodData<QStringList(const QString &) const>(90, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QStringList, {{
            { QMetaType::QString, 89 },
        }}),
        // Method 'promptOpenFiles'
        QtMocHelpers::MethodData<QStringList() const>(90, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QStringList),
        // Method 'promptOpenFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &) const>(92, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 }, { QMetaType::QString, 19 },
        }}),
        // Method 'promptOpenFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &) const>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 },
        }}),
        // Method 'promptOpenFile'
        QtMocHelpers::MethodData<QString(const QString &) const>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 89 },
        }}),
        // Method 'promptOpenFile'
        QtMocHelpers::MethodData<QString() const>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'promptSaveFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &) const>(93, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 }, { QMetaType::QString, 19 },
        }}),
        // Method 'promptSaveFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &) const>(93, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 91 },
        }}),
        // Method 'promptSaveFile'
        QtMocHelpers::MethodData<QString(const QString &) const>(93, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 89 },
        }}),
        // Method 'promptSaveFile'
        QtMocHelpers::MethodData<QString() const>(93, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'loadWorld'
        QtMocHelpers::MethodData<void(const QString &) const>(94, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 60 },
        }}),
        // Method 'unloadWorld'
        QtMocHelpers::MethodData<void(const QString &) const>(95, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 60 },
        }}),
        // Method 'unloadAllWorlds'
        QtMocHelpers::MethodData<void() const>(96, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'version'
        QtMocHelpers::PropertyData<QString>(97, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'qtVersion'
        QtMocHelpers::PropertyData<QString>(98, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'platform'
        QtMocHelpers::PropertyData<QString>(99, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'arch'
        QtMocHelpers::PropertyData<QString>(100, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'extensionsPath'
        QtMocHelpers::PropertyData<QString>(101, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'applicationDirPath'
        QtMocHelpers::PropertyData<QString>(102, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'projectFilePath'
        QtMocHelpers::PropertyData<QString>(103, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'scriptArguments'
        QtMocHelpers::PropertyData<QStringList>(104, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'actions'
        QtMocHelpers::PropertyData<QStringList>(105, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'menus'
        QtMocHelpers::PropertyData<QStringList>(106, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'mapFormats'
        QtMocHelpers::PropertyData<QStringList>(107, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'tilesetFormats'
        QtMocHelpers::PropertyData<QStringList>(108, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'activeAsset'
        QtMocHelpers::PropertyData<Tiled::EditableAsset*>(109, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'openAssets'
        QtMocHelpers::PropertyData<QList<QObject*>>(110, 0x80000000 | 111, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'project'
        QtMocHelpers::PropertyData<Tiled::EditableAsset*>(112, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'session'
        QtMocHelpers::PropertyData<Tiled::ScriptSession*>(113, 0x80000000 | 114, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'mapEditor'
        QtMocHelpers::PropertyData<Tiled::MapEditor*>(115, 0x80000000 | 116, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'tilesetEditor'
        QtMocHelpers::PropertyData<Tiled::TilesetEditor*>(117, 0x80000000 | 118, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'worlds'
        QtMocHelpers::PropertyData<QList<QObject*>>(119, 0x80000000 | 111, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'CompressionMethod'
        QtMocHelpers::EnumData<enum CompressionMethod>(84, 84, QMC::EnumFlags{}).add({
            {  120, CompressionMethod::Gzip },
            {  121, CompressionMethod::Zlib },
            {  122, CompressionMethod::Zstandard },
        }),
    };
    return QtMocHelpers::metaObjectData<ScriptModule, qt_meta_tag_ZN5Tiled12ScriptModuleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptModuleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptModuleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12ScriptModuleE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptModule *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->assetCreated((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 1: _t->assetOpened((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 2: _t->assetReloaded((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 3: _t->assetAboutToBeSaved((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 4: _t->assetSaved((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 5: _t->assetAboutToBeClosed((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 6: _t->activeAssetChanged((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1]))); break;
        case 7: _t->worldsChanged(); break;
        case 8: _t->trigger((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->executeCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: _t->executeCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->alert((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->alert((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { bool _r = _t->confirm((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->confirm((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->prompt((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->prompt((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->prompt((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->log((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->warn((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 20: _t->warn((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 22: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: { QColor _r = _t->color((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 24: { QColor _r = _t->color((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 25: { QColor _r = _t->color((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 26: { Tiled::Cell _r = _t->cell((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::Cell*>(_a[0]) = std::move(_r); }  break;
        case 27: { Tiled::Cell _r = _t->cell((*reinterpret_cast<std::add_pointer_t<Tiled::EditableTile*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::Cell*>(_a[0]) = std::move(_r); }  break;
        case 28: { Tiled::Cell _r = _t->cell();
            if (_a[0]) *reinterpret_cast<Tiled::Cell*>(_a[0]) = std::move(_r); }  break;
        case 29: { Tiled::FilePath _r = _t->filePath((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::FilePath*>(_a[0]) = std::move(_r); }  break;
        case 30: { Tiled::ObjectRef _r = _t->objectRef((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ObjectRef*>(_a[0]) = std::move(_r); }  break;
        case 31: { QVariant _r = _t->propertyValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 32: { QCursor _r = _t->cursor((*reinterpret_cast<std::add_pointer_t<Qt::CursorShape>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QCursor*>(_a[0]) = std::move(_r); }  break;
        case 33: { QCursor _r = _t->cursor((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QCursor*>(_a[0]) = std::move(_r); }  break;
        case 34: { QCursor _r = _t->cursor((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QCursor*>(_a[0]) = std::move(_r); }  break;
        case 35: { QCursor _r = _t->cursor((*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QCursor*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->versionLessThan((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->versionLessThan((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { Tiled::EditableAsset* _r = _t->open((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableAsset**>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->close((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { Tiled::EditableAsset* _r = _t->reload((*reinterpret_cast<std::add_pointer_t<Tiled::EditableAsset*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::EditableAsset**>(_a[0]) = std::move(_r); }  break;
        case 41: { Tiled::ScriptedAction* _r = _t->registerAction((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptedAction**>(_a[0]) = std::move(_r); }  break;
        case 42: _t->registerMapFormat((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 43: _t->registerTilesetFormat((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 44: { QJSValue _r = _t->registerTool((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 45: { Tiled::ScriptMapFormatWrapper* _r = _t->mapFormat((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptMapFormatWrapper**>(_a[0]) = std::move(_r); }  break;
        case 46: { Tiled::ScriptMapFormatWrapper* _r = _t->mapFormatForFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptMapFormatWrapper**>(_a[0]) = std::move(_r); }  break;
        case 47: { Tiled::ScriptTilesetFormatWrapper* _r = _t->tilesetFormat((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptTilesetFormatWrapper**>(_a[0]) = std::move(_r); }  break;
        case 48: { Tiled::ScriptTilesetFormatWrapper* _r = _t->tilesetFormatForFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Tiled::ScriptTilesetFormatWrapper**>(_a[0]) = std::move(_r); }  break;
        case 49: _t->extendMenu((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 50: { QByteArray _r = _t->compress((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum CompressionMethod>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 51: { QByteArray _r = _t->compress((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum CompressionMethod>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 52: { QByteArray _r = _t->compress((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 53: { QByteArray _r = _t->decompress((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum CompressionMethod>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 54: { QByteArray _r = _t->decompress((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 55: { QString _r = _t->promptDirectory((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 56: { QString _r = _t->promptDirectory((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 57: { QString _r = _t->promptDirectory();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 58: { QStringList _r = _t->promptOpenFiles((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 59: { QStringList _r = _t->promptOpenFiles((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 60: { QStringList _r = _t->promptOpenFiles((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 61: { QStringList _r = _t->promptOpenFiles();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->promptOpenFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->promptOpenFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->promptOpenFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->promptOpenFile();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->promptSaveFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->promptSaveFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 68: { QString _r = _t->promptSaveFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 69: { QString _r = _t->promptSaveFile();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->loadWorld((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 71: _t->unloadWorld((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 72: _t->unloadAllWorlds(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetOpened, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetReloaded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetAboutToBeSaved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetSaved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::assetAboutToBeClosed, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)(Tiled::EditableAsset * )>(_a, &ScriptModule::activeAssetChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptModule::*)()>(_a, &ScriptModule::worldsChanged, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->qtVersion(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->platform(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->arch(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->extensionsPath(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->applicationDirPath(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->projectFilePath(); break;
        case 7: *reinterpret_cast<QStringList*>(_v) = _t->scriptArguments(); break;
        case 8: *reinterpret_cast<QStringList*>(_v) = _t->actions(); break;
        case 9: *reinterpret_cast<QStringList*>(_v) = _t->menus(); break;
        case 10: *reinterpret_cast<QStringList*>(_v) = _t->mapFormats(); break;
        case 11: *reinterpret_cast<QStringList*>(_v) = _t->tilesetFormats(); break;
        case 12: *reinterpret_cast<Tiled::EditableAsset**>(_v) = _t->activeAsset(); break;
        case 13: *reinterpret_cast<QList<QObject*>*>(_v) = _t->openAssets(); break;
        case 14: *reinterpret_cast<Tiled::EditableAsset**>(_v) = _t->project(); break;
        case 15: *reinterpret_cast<Tiled::ScriptSession**>(_v) = _t->session(); break;
        case 16: *reinterpret_cast<Tiled::MapEditor**>(_v) = _t->mapEditor(); break;
        case 17: *reinterpret_cast<Tiled::TilesetEditor**>(_v) = _t->tilesetEditor(); break;
        case 18: *reinterpret_cast<QList<QObject*>*>(_v) = _t->worlds(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 12: _t->setActiveAsset(*reinterpret_cast<Tiled::EditableAsset**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptModuleE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::ScriptModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Tiled::ScriptModule::assetCreated(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::ScriptModule::assetOpened(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::ScriptModule::assetReloaded(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::ScriptModule::assetAboutToBeSaved(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::ScriptModule::assetSaved(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::ScriptModule::assetAboutToBeClosed(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Tiled::ScriptModule::activeAssetChanged(Tiled::EditableAsset * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Tiled::ScriptModule::worldsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
