/****************************************************************************
** Meta object code from reading C++ file 'documentmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/documentmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled15DocumentManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::DocumentManager::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled15DocumentManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::DocumentManager",
        "documentCreated",
        "",
        "Document*",
        "document",
        "documentOpened",
        "documentReloaded",
        "documentAboutToBeSaved",
        "documentSaved",
        "fileOpenDialogRequested",
        "fileOpenRequested",
        "path",
        "fileSaveRequested",
        "templateOpenRequested",
        "selectCustomPropertyRequested",
        "name",
        "templateTilesetReplaced",
        "currentDocumentChanged",
        "documentCloseRequested",
        "index",
        "documentAboutToClose",
        "currentEditorChanged",
        "Editor*",
        "editor",
        "reloadError",
        "error",
        "tilesetDocumentAdded",
        "TilesetDocument*",
        "tilesetDocument",
        "tilesetDocumentRemoved",
        "switchToLeftDocument",
        "switchToRightDocument",
        "openFileDialog",
        "openFile",
        "saveFile",
        "currentDocument"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'documentCreated'
        QtMocHelpers::SignalData<void(Document *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'documentOpened'
        QtMocHelpers::SignalData<void(Document *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'documentReloaded'
        QtMocHelpers::SignalData<void(Document *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'documentAboutToBeSaved'
        QtMocHelpers::SignalData<void(Document *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'documentSaved'
        QtMocHelpers::SignalData<void(Document *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'fileOpenDialogRequested'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileOpenRequested'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'fileSaveRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'templateOpenRequested'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'selectCustomPropertyRequested'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Signal 'templateTilesetReplaced'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDocumentChanged'
        QtMocHelpers::SignalData<void(Document *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'documentCloseRequested'
        QtMocHelpers::SignalData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'documentAboutToClose'
        QtMocHelpers::SignalData<void(Document *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'currentEditorChanged'
        QtMocHelpers::SignalData<void(Editor *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Signal 'reloadError'
        QtMocHelpers::SignalData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'tilesetDocumentAdded'
        QtMocHelpers::SignalData<void(TilesetDocument *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'tilesetDocumentRemoved'
        QtMocHelpers::SignalData<void(TilesetDocument *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'switchToLeftDocument'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToRightDocument'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openFileDialog'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openFile'
        QtMocHelpers::SlotData<void(const QString &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'saveFile'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentDocument'
        QtMocHelpers::PropertyData<Document*>(35, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DocumentManager, qt_meta_tag_ZN5Tiled15DocumentManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::DocumentManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15DocumentManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15DocumentManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled15DocumentManagerE_t>.metaTypes,
    nullptr
} };

void Tiled::DocumentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DocumentManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->documentCreated((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 1: _t->documentOpened((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 2: _t->documentReloaded((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 3: _t->documentAboutToBeSaved((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 4: _t->documentSaved((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 5: _t->fileOpenDialogRequested(); break;
        case 6: _t->fileOpenRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->fileSaveRequested(); break;
        case 8: _t->templateOpenRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->selectCustomPropertyRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->templateTilesetReplaced(); break;
        case 11: _t->currentDocumentChanged((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 12: _t->documentCloseRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->documentAboutToClose((*reinterpret_cast<std::add_pointer_t<Document*>>(_a[1]))); break;
        case 14: _t->currentEditorChanged((*reinterpret_cast<std::add_pointer_t<Editor*>>(_a[1]))); break;
        case 15: _t->reloadError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->tilesetDocumentAdded((*reinterpret_cast<std::add_pointer_t<TilesetDocument*>>(_a[1]))); break;
        case 17: _t->tilesetDocumentRemoved((*reinterpret_cast<std::add_pointer_t<TilesetDocument*>>(_a[1]))); break;
        case 18: _t->switchToLeftDocument(); break;
        case 19: _t->switchToRightDocument(); break;
        case 20: _t->openFileDialog(); break;
        case 21: _t->openFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->saveFile(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Document* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TilesetDocument* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TilesetDocument* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentOpened, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentReloaded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentAboutToBeSaved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentSaved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)()>(_a, &DocumentManager::fileOpenDialogRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(const QString & )>(_a, &DocumentManager::fileOpenRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)()>(_a, &DocumentManager::fileSaveRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(const QString & )>(_a, &DocumentManager::templateOpenRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(const QString & )>(_a, &DocumentManager::selectCustomPropertyRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)()>(_a, &DocumentManager::templateTilesetReplaced, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::currentDocumentChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(int )>(_a, &DocumentManager::documentCloseRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Document * )>(_a, &DocumentManager::documentAboutToClose, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(Editor * )>(_a, &DocumentManager::currentEditorChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(const QString & )>(_a, &DocumentManager::reloadError, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(TilesetDocument * )>(_a, &DocumentManager::tilesetDocumentAdded, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentManager::*)(TilesetDocument * )>(_a, &DocumentManager::tilesetDocumentRemoved, 17))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Document* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Document**>(_v) = _t->currentDocument(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::DocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::DocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled15DocumentManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tiled::DocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Tiled::DocumentManager::documentCreated(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Tiled::DocumentManager::documentOpened(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Tiled::DocumentManager::documentReloaded(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Tiled::DocumentManager::documentAboutToBeSaved(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Tiled::DocumentManager::documentSaved(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Tiled::DocumentManager::fileOpenDialogRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Tiled::DocumentManager::fileOpenRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Tiled::DocumentManager::fileSaveRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Tiled::DocumentManager::templateOpenRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Tiled::DocumentManager::selectCustomPropertyRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Tiled::DocumentManager::templateTilesetReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Tiled::DocumentManager::currentDocumentChanged(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Tiled::DocumentManager::documentCloseRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Tiled::DocumentManager::documentAboutToClose(Document * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Tiled::DocumentManager::currentEditorChanged(Editor * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Tiled::DocumentManager::reloadError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Tiled::DocumentManager::tilesetDocumentAdded(TilesetDocument * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Tiled::DocumentManager::tilesetDocumentRemoved(TilesetDocument * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}
QT_WARNING_POP
