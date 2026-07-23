/****************************************************************************
** Meta object code from reading C++ file 'preferences.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/preferences.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled11PreferencesE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::Preferences::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled11PreferencesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::Preferences",
        "showGridChanged",
        "",
        "showGrid",
        "showWorldGridChanged",
        "showWorldGrid",
        "snapToWorldGridChanged",
        "snapToWorldGrid",
        "showTileObjectOutlinesChanged",
        "enabled",
        "showTileAnimationsChanged",
        "showTileCollisionShapesChanged",
        "showObjectReferencesChanged",
        "parallaxEnabledChanged",
        "snapModeChanged",
        "SnapMode",
        "snapMode",
        "gridColorChanged",
        "QColor",
        "gridColor",
        "backgroundFadeColorChanged",
        "backgroundFadeColor",
        "gridFineChanged",
        "gridFine",
        "gridMajorChanged",
        "QSize",
        "gridMajor",
        "objectLineWidthChanged",
        "lineWidth",
        "highlightCurrentLayerChanged",
        "highlight",
        "highlightHoveredObjectChanged",
        "showTilesetGridChanged",
        "showTilesetGrid",
        "objectLabelVisibilityChanged",
        "ObjectLabelVisiblity",
        "labelForHoveredObjectChanged",
        "applicationStyleChanged",
        "ApplicationStyle",
        "baseColorChanged",
        "baseColor",
        "selectionColorChanged",
        "selectionColor",
        "applicationFontChanged",
        "useOpenGLChanged",
        "useOpenGL",
        "languageChanged",
        "propertyTypesChanged",
        "isPatronChanged",
        "recentFilesChanged",
        "recentProjectsChanged",
        "naturalSortingChanged",
        "checkForUpdatesChanged",
        "on",
        "displayNewsChanged",
        "aboutToSwitchSession",
        "setShowGrid",
        "setShowWorldGrid",
        "setSnapToWorldGrid",
        "setShowTileObjectOutlines",
        "setShowTileAnimations",
        "setShowTileCollisionShapes",
        "setShowObjectReferences",
        "setParallaxEnabled",
        "setSnapMode",
        "setGridColor",
        "setBackgroundFadeColor",
        "setGridFine",
        "setGridMajor",
        "setGridMajorX",
        "gridMajorX",
        "setGridMajorY",
        "gridMajorY",
        "setObjectLineWidth",
        "setHighlightCurrentLayer",
        "setHighlightHoveredObject",
        "setShowTilesetGrid",
        "setRestoreSessionOnStartup",
        "setPluginEnabled",
        "fileName",
        "setWheelZoomsByDefault",
        "mode",
        "clearRecentFiles",
        "clearRecentProjects"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showGridChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'showWorldGridChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'snapToWorldGridChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'showTileObjectOutlinesChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'showTileAnimationsChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'showTileCollisionShapesChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'showObjectReferencesChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'parallaxEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'snapModeChanged'
        QtMocHelpers::SignalData<void(SnapMode)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'gridColorChanged'
        QtMocHelpers::SignalData<void(QColor)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'backgroundFadeColorChanged'
        QtMocHelpers::SignalData<void(QColor)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 21 },
        }}),
        // Signal 'gridFineChanged'
        QtMocHelpers::SignalData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Signal 'gridMajorChanged'
        QtMocHelpers::SignalData<void(QSize)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'objectLineWidthChanged'
        QtMocHelpers::SignalData<void(qreal)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 28 },
        }}),
        // Signal 'highlightCurrentLayerChanged'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Signal 'highlightHoveredObjectChanged'
        QtMocHelpers::SignalData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Signal 'showTilesetGridChanged'
        QtMocHelpers::SignalData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Signal 'objectLabelVisibilityChanged'
        QtMocHelpers::SignalData<void(enum ObjectLabelVisiblity)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 2 },
        }}),
        // Signal 'labelForHoveredObjectChanged'
        QtMocHelpers::SignalData<void(bool)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'applicationStyleChanged'
        QtMocHelpers::SignalData<void(enum ApplicationStyle)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 2 },
        }}),
        // Signal 'baseColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 40 },
        }}),
        // Signal 'selectionColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 42 },
        }}),
        // Signal 'applicationFontChanged'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'useOpenGLChanged'
        QtMocHelpers::SignalData<void(bool)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Signal 'languageChanged'
        QtMocHelpers::SignalData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'propertyTypesChanged'
        QtMocHelpers::SignalData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isPatronChanged'
        QtMocHelpers::SignalData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'recentFilesChanged'
        QtMocHelpers::SignalData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'recentProjectsChanged'
        QtMocHelpers::SignalData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalSortingChanged'
        QtMocHelpers::SignalData<void(bool)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'checkForUpdatesChanged'
        QtMocHelpers::SignalData<void(bool)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 53 },
        }}),
        // Signal 'displayNewsChanged'
        QtMocHelpers::SignalData<void(bool)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 53 },
        }}),
        // Signal 'aboutToSwitchSession'
        QtMocHelpers::SignalData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setShowGrid'
        QtMocHelpers::SlotData<void(bool)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'setShowWorldGrid'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'setSnapToWorldGrid'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'setShowTileObjectOutlines'
        QtMocHelpers::SlotData<void(bool)>(59, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setShowTileAnimations'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setShowTileCollisionShapes'
        QtMocHelpers::SlotData<void(bool)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setShowObjectReferences'
        QtMocHelpers::SlotData<void(bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setParallaxEnabled'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setSnapMode'
        QtMocHelpers::SlotData<void(SnapMode)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'setGridColor'
        QtMocHelpers::SlotData<void(QColor)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'setBackgroundFadeColor'
        QtMocHelpers::SlotData<void(QColor)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 21 },
        }}),
        // Slot 'setGridFine'
        QtMocHelpers::SlotData<void(int)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'setGridMajor'
        QtMocHelpers::SlotData<void(QSize)>(68, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'setGridMajorX'
        QtMocHelpers::SlotData<void(int)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 70 },
        }}),
        // Slot 'setGridMajorY'
        QtMocHelpers::SlotData<void(int)>(71, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 72 },
        }}),
        // Slot 'setObjectLineWidth'
        QtMocHelpers::SlotData<void(qreal)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 28 },
        }}),
        // Slot 'setHighlightCurrentLayer'
        QtMocHelpers::SlotData<void(bool)>(74, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'setHighlightHoveredObject'
        QtMocHelpers::SlotData<void(bool)>(75, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'setShowTilesetGrid'
        QtMocHelpers::SlotData<void(bool)>(76, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'setRestoreSessionOnStartup'
        QtMocHelpers::SlotData<void(bool)>(77, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setPluginEnabled'
        QtMocHelpers::SlotData<void(const QString &, bool)>(78, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 79 }, { QMetaType::Bool, 9 },
        }}),
        // Slot 'setWheelZoomsByDefault'
        QtMocHelpers::SlotData<void(bool)>(80, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'clearRecentFiles'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearRecentProjects'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Preferences, qt_meta_tag_ZN5Tiled11PreferencesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::Preferences::staticMetaObject = { {
    QMetaObject::SuperData::link<QSettings::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11PreferencesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11PreferencesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled11PreferencesE_t>.metaTypes,
    nullptr
} };

void Tiled::Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Preferences *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showGridChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->showWorldGridChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->snapToWorldGridChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->showTileObjectOutlinesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->showTileAnimationsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->showTileCollisionShapesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->showObjectReferencesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->parallaxEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->snapModeChanged((*reinterpret_cast<std::add_pointer_t<SnapMode>>(_a[1]))); break;
        case 9: _t->gridColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 10: _t->backgroundFadeColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 11: _t->gridFineChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->gridMajorChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 13: _t->objectLineWidthChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 14: _t->highlightCurrentLayerChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->highlightHoveredObjectChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->showTilesetGridChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->objectLabelVisibilityChanged((*reinterpret_cast<std::add_pointer_t<enum ObjectLabelVisiblity>>(_a[1]))); break;
        case 18: _t->labelForHoveredObjectChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->applicationStyleChanged((*reinterpret_cast<std::add_pointer_t<enum ApplicationStyle>>(_a[1]))); break;
        case 20: _t->baseColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 21: _t->selectionColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 22: _t->applicationFontChanged(); break;
        case 23: _t->useOpenGLChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->languageChanged(); break;
        case 25: _t->propertyTypesChanged(); break;
        case 26: _t->isPatronChanged(); break;
        case 27: _t->recentFilesChanged(); break;
        case 28: _t->recentProjectsChanged(); break;
        case 29: _t->naturalSortingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->checkForUpdatesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->displayNewsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->aboutToSwitchSession(); break;
        case 33: _t->setShowGrid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->setShowWorldGrid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->setSnapToWorldGrid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->setShowTileObjectOutlines((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->setShowTileAnimations((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->setShowTileCollisionShapes((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->setShowObjectReferences((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->setParallaxEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->setSnapMode((*reinterpret_cast<std::add_pointer_t<SnapMode>>(_a[1]))); break;
        case 42: _t->setGridColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 43: _t->setBackgroundFadeColor((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 44: _t->setGridFine((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->setGridMajor((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 46: _t->setGridMajorX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->setGridMajorY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->setObjectLineWidth((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 49: _t->setHighlightCurrentLayer((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->setHighlightHoveredObject((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->setShowTilesetGrid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->setRestoreSessionOnStartup((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->setPluginEnabled((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 54: _t->setWheelZoomsByDefault((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->clearRecentFiles(); break;
        case 56: _t->clearRecentProjects(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showGridChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showWorldGridChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::snapToWorldGridChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showTileObjectOutlinesChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showTileAnimationsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showTileCollisionShapesChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showObjectReferencesChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::parallaxEnabledChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(SnapMode )>(_a, &Preferences::snapModeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(QColor )>(_a, &Preferences::gridColorChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(QColor )>(_a, &Preferences::backgroundFadeColorChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(int )>(_a, &Preferences::gridFineChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(QSize )>(_a, &Preferences::gridMajorChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(qreal )>(_a, &Preferences::objectLineWidthChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::highlightCurrentLayerChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::highlightHoveredObjectChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::showTilesetGridChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(ObjectLabelVisiblity )>(_a, &Preferences::objectLabelVisibilityChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::labelForHoveredObjectChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(ApplicationStyle )>(_a, &Preferences::applicationStyleChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(const QColor & )>(_a, &Preferences::baseColorChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(const QColor & )>(_a, &Preferences::selectionColorChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::applicationFontChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::useOpenGLChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::languageChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::propertyTypesChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::isPatronChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::recentFilesChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::recentProjectsChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::naturalSortingChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::checkForUpdatesChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)(bool )>(_a, &Preferences::displayNewsChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::aboutToSwitchSession, 32))
            return;
    }
}

const QMetaObject *Tiled::Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled11PreferencesE_t>.strings))
        return static_cast<void*>(this);
    return QSettings::qt_metacast(_clname);
}

int Tiled::Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSettings::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Preferences::showGridChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::Preferences::showWorldGridChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::Preferences::snapToWorldGridChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::Preferences::showTileObjectOutlinesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::Preferences::showTileAnimationsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::Preferences::showTileCollisionShapesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Tiled::Preferences::showObjectReferencesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Tiled::Preferences::parallaxEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Tiled::Preferences::snapModeChanged(SnapMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Tiled::Preferences::gridColorChanged(QColor _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Tiled::Preferences::backgroundFadeColorChanged(QColor _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Tiled::Preferences::gridFineChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Tiled::Preferences::gridMajorChanged(QSize _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Tiled::Preferences::objectLineWidthChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Tiled::Preferences::highlightCurrentLayerChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Tiled::Preferences::highlightHoveredObjectChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Tiled::Preferences::showTilesetGridChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Tiled::Preferences::objectLabelVisibilityChanged(ObjectLabelVisiblity _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void Tiled::Preferences::labelForHoveredObjectChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void Tiled::Preferences::applicationStyleChanged(ApplicationStyle _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void Tiled::Preferences::baseColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void Tiled::Preferences::selectionColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void Tiled::Preferences::applicationFontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Tiled::Preferences::useOpenGLChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void Tiled::Preferences::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Tiled::Preferences::propertyTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Tiled::Preferences::isPatronChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Tiled::Preferences::recentFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Tiled::Preferences::recentProjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Tiled::Preferences::naturalSortingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void Tiled::Preferences::checkForUpdatesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1);
}

// SIGNAL 31
void Tiled::Preferences::displayNewsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1);
}

// SIGNAL 32
void Tiled::Preferences::aboutToSwitchSession()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}
QT_WARNING_POP
