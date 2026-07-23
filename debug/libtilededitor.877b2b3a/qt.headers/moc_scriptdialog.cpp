/****************************************************************************
** Meta object code from reading C++ file 'scriptdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tiled/scriptdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptImageWidget::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptImageWidget",
        "image",
        "Tiled::ScriptImage*"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'image'
        QtMocHelpers::PropertyData<Tiled::ScriptImage*>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptImageWidget, qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptImageWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptImageWidget *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::ScriptImage**>(_v) = _t->image(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImage(*reinterpret_cast<Tiled::ScriptImage**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptImageWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Tiled::ScriptImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptButtonGroup::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptButtonGroup",
        "addItems",
        "",
        "values",
        "toolTips",
        "addItem",
        "QAbstractButton*",
        "value",
        "toolTip",
        "buttons",
        "QList<QAbstractButton*>",
        "checkedButton",
        "checkedIndex"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'addItems'
        QtMocHelpers::MethodData<void(const QStringList &, const QStringList &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 3 }, { QMetaType::QStringList, 4 },
        }}),
        // Method 'addItem'
        QtMocHelpers::MethodData<QAbstractButton *(const QString &, const QString &)>(5, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 },
        }}),
        // Method 'addItem'
        QtMocHelpers::MethodData<QAbstractButton *(const QString &)>(5, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 6, {{
            { QMetaType::QString, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'buttons'
        QtMocHelpers::PropertyData<QList<QAbstractButton*>>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'checkedButton'
        QtMocHelpers::PropertyData<QAbstractButton*>(11, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'checkedIndex'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptButtonGroup, qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptButtonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QButtonGroup::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptButtonGroup *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addItems((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: { QAbstractButton* _r = _t->addItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QAbstractButton**>(_a[0]) = std::move(_r); }  break;
        case 2: { QAbstractButton* _r = _t->addItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QAbstractButton**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAbstractButton*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<QAbstractButton*>*>(_v) = _t->buttons(); break;
        case 1: *reinterpret_cast<QAbstractButton**>(_v) = _t->checkedButton(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->checkedIndex(); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled17ScriptButtonGroupE_t>.strings))
        return static_cast<void*>(this);
    return QButtonGroup::qt_metacast(_clname);
}

int Tiled::ScriptButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QButtonGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Tiled12ScriptDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Tiled::ScriptDialog::qt_create_metaobjectdata<qt_meta_tag_ZN5Tiled12ScriptDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Tiled::ScriptDialog",
        "addHeading",
        "QWidget*",
        "",
        "text",
        "fillRow",
        "addLabel",
        "toolTip",
        "addSeparator",
        "labelText",
        "addTextInput",
        "defaultValue",
        "addTextEdit",
        "addNumberInput",
        "addSlider",
        "addComboBox",
        "values",
        "defaultIndex",
        "addCheckBox",
        "addButton",
        "addFilePicker",
        "addColorButton",
        "QColor",
        "addImage",
        "Tiled::ScriptImage*",
        "image",
        "addRadioButtonGroup",
        "ScriptButtonGroup*",
        "buttonToolTips",
        "clear",
        "addNewRow",
        "ScriptDialog",
        "title",
        "newRowMode",
        "Tiled::ScriptDialog::NewRowMode",
        "NewRowMode",
        "SameWidgetRows",
        "ManualRows",
        "SingleWidgetRows",
        "DialogCode",
        "Rejected",
        "Accepted"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'addHeading'
        QtMocHelpers::MethodData<QWidget *(const QString &, bool)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Method 'addHeading'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(1, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'addLabel'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &)>(6, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addLabel'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(6, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'addSeparator'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(8, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addSeparator'
        QtMocHelpers::MethodData<QWidget *()>(8, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addTextInput'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &, const QString &)>(10, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addTextInput'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &)>(10, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 },
        }}),
        // Method 'addTextInput'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(10, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addTextInput'
        QtMocHelpers::MethodData<QWidget *()>(10, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addTextEdit'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &, const QString &)>(12, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addTextEdit'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &)>(12, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 },
        }}),
        // Method 'addTextEdit'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(12, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addTextEdit'
        QtMocHelpers::MethodData<QWidget *()>(12, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addNumberInput'
        QtMocHelpers::MethodData<QWidget *(const QString &, double, const QString &)>(13, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::Double, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addNumberInput'
        QtMocHelpers::MethodData<QWidget *(const QString &, double)>(13, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::Double, 11 },
        }}),
        // Method 'addNumberInput'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(13, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addNumberInput'
        QtMocHelpers::MethodData<QWidget *()>(13, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addSlider'
        QtMocHelpers::MethodData<QWidget *(const QString &, int, const QString &)>(14, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::Int, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addSlider'
        QtMocHelpers::MethodData<QWidget *(const QString &, int)>(14, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::Int, 11 },
        }}),
        // Method 'addSlider'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(14, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addSlider'
        QtMocHelpers::MethodData<QWidget *()>(14, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addComboBox'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QStringList &, int, const QString &)>(15, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 }, { QMetaType::Int, 17 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addComboBox'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QStringList &, int)>(15, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 }, { QMetaType::Int, 17 },
        }}),
        // Method 'addComboBox'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QStringList &)>(15, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addCheckBox'
        QtMocHelpers::MethodData<QWidget *(const QString &, bool, const QString &)>(18, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addCheckBox'
        QtMocHelpers::MethodData<QWidget *(const QString &, bool)>(18, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 11 },
        }}),
        // Method 'addCheckBox'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(18, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'addCheckBox'
        QtMocHelpers::MethodData<QWidget *()>(18, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addButton'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &)>(19, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addButton'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(19, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'addButton'
        QtMocHelpers::MethodData<QWidget *()>(19, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addFilePicker'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &, const QString &)>(20, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addFilePicker'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QString &)>(20, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 11 },
        }}),
        // Method 'addFilePicker'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(20, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addFilePicker'
        QtMocHelpers::MethodData<QWidget *()>(20, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addColorButton'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QColor &, const QString &)>(21, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 22, 11 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addColorButton'
        QtMocHelpers::MethodData<QWidget *(const QString &, const QColor &)>(21, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 22, 11 },
        }}),
        // Method 'addColorButton'
        QtMocHelpers::MethodData<QWidget *(const QString &)>(21, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'addColorButton'
        QtMocHelpers::MethodData<QWidget *()>(21, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2),
        // Method 'addImage'
        QtMocHelpers::MethodData<QWidget *(const QString &, Tiled::ScriptImage *, const QString &)>(23, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 24, 25 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addImage'
        QtMocHelpers::MethodData<QWidget *(const QString &, Tiled::ScriptImage *)>(23, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 24, 25 },
        }}),
        // Method 'addRadioButtonGroup'
        QtMocHelpers::MethodData<ScriptButtonGroup *(const QString &, const QStringList &, const QString &, const QStringList &)>(26, 3, QMC::AccessPublic, 0x80000000 | 27, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 }, { QMetaType::QString, 7 }, { QMetaType::QStringList, 28 },
        }}),
        // Method 'addRadioButtonGroup'
        QtMocHelpers::MethodData<ScriptButtonGroup *(const QString &, const QStringList &, const QString &)>(26, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 27, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 }, { QMetaType::QString, 7 },
        }}),
        // Method 'addRadioButtonGroup'
        QtMocHelpers::MethodData<ScriptButtonGroup *(const QString &, const QStringList &)>(26, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 27, {{
            { QMetaType::QString, 9 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'clear'
        QtMocHelpers::MethodData<void()>(29, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'addNewRow'
        QtMocHelpers::MethodData<void()>(30, 3, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'newRowMode'
        QtMocHelpers::PropertyData<Tiled::ScriptDialog::NewRowMode>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'NewRowMode'
        QtMocHelpers::EnumData<enum NewRowMode>(35, 35, QMC::EnumFlags{}).add({
            {   36, NewRowMode::SameWidgetRows },
            {   37, NewRowMode::ManualRows },
            {   38, NewRowMode::SingleWidgetRows },
        }),
        // enum 'DialogCode'
        QtMocHelpers::EnumData<enum DialogCode>(39, 39, QMC::EnumFlags{}).add({
            {   40, DialogCode::Rejected },
            {   41, DialogCode::Accepted },
        }),
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(const QString &)>(3, QMC::AccessPublic, {{
            { QMetaType::QString, 32 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(3, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<ScriptDialog, qt_meta_tag_ZN5Tiled12ScriptDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject Tiled::ScriptDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Tiled12ScriptDialogE_t>.metaTypes,
    nullptr
} };

void Tiled::ScriptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptDialog *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { ScriptDialog *_r = new ScriptDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { ScriptDialog *_r = new ScriptDialog();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) ScriptDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 1: { new (_a[0]) ScriptDialog(); } break;
        default: break;
        }
    }
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QWidget* _r = _t->addHeading((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { QWidget* _r = _t->addHeading((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: { QWidget* _r = _t->addLabel((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: { QWidget* _r = _t->addLabel((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 4: { QWidget* _r = _t->addSeparator((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 5: { QWidget* _r = _t->addSeparator();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 6: { QWidget* _r = _t->addTextInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 7: { QWidget* _r = _t->addTextInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 8: { QWidget* _r = _t->addTextInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 9: { QWidget* _r = _t->addTextInput();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 10: { QWidget* _r = _t->addTextEdit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 11: { QWidget* _r = _t->addTextEdit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 12: { QWidget* _r = _t->addTextEdit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 13: { QWidget* _r = _t->addTextEdit();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 14: { QWidget* _r = _t->addNumberInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 15: { QWidget* _r = _t->addNumberInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 16: { QWidget* _r = _t->addNumberInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 17: { QWidget* _r = _t->addNumberInput();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 18: { QWidget* _r = _t->addSlider((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 19: { QWidget* _r = _t->addSlider((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 20: { QWidget* _r = _t->addSlider((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 21: { QWidget* _r = _t->addSlider();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 22: { QWidget* _r = _t->addComboBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 23: { QWidget* _r = _t->addComboBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 24: { QWidget* _r = _t->addComboBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 25: { QWidget* _r = _t->addCheckBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 26: { QWidget* _r = _t->addCheckBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 27: { QWidget* _r = _t->addCheckBox((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 28: { QWidget* _r = _t->addCheckBox();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 29: { QWidget* _r = _t->addButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 30: { QWidget* _r = _t->addButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 31: { QWidget* _r = _t->addButton();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 32: { QWidget* _r = _t->addFilePicker((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 33: { QWidget* _r = _t->addFilePicker((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 34: { QWidget* _r = _t->addFilePicker((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 35: { QWidget* _r = _t->addFilePicker();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 36: { QWidget* _r = _t->addColorButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 37: { QWidget* _r = _t->addColorButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 38: { QWidget* _r = _t->addColorButton((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 39: { QWidget* _r = _t->addColorButton();
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 40: { QWidget* _r = _t->addImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 41: { QWidget* _r = _t->addImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Tiled::ScriptImage*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QWidget**>(_a[0]) = std::move(_r); }  break;
        case 42: { ScriptButtonGroup* _r = _t->addRadioButtonGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[4])));
            if (_a[0]) *reinterpret_cast<ScriptButtonGroup**>(_a[0]) = std::move(_r); }  break;
        case 43: { ScriptButtonGroup* _r = _t->addRadioButtonGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<ScriptButtonGroup**>(_a[0]) = std::move(_r); }  break;
        case 44: { ScriptButtonGroup* _r = _t->addRadioButtonGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<ScriptButtonGroup**>(_a[0]) = std::move(_r); }  break;
        case 45: _t->clear(); break;
        case 46: _t->addNewRow(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Tiled::ScriptDialog::NewRowMode*>(_v) = _t->newRowMode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNewRowMode(*reinterpret_cast<Tiled::ScriptDialog::NewRowMode*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Tiled::ScriptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tiled::ScriptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Tiled12ScriptDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Tiled::ScriptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
