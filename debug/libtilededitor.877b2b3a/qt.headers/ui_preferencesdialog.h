/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbutton.h"
#include "expressionspinbox.h"
#include "shortcutsettingspage.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *saveAndLoadGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *safeSaving;
    QCheckBox *restoreSession;
    QCheckBox *reloadTilesetImages;
    QCheckBox *exportOnSave;
    QGroupBox *exportGroupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *resolveObjectTypesAndProperties;
    QCheckBox *embedTilesets;
    QCheckBox *detachTemplateInstances;
    QCheckBox *minimizeOutput;
    QGroupBox *crashReportingAndUpdates;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *displayNewsCheckBox;
    QCheckBox *displayNewVersionCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *sendCrashReports;
    QLabel *crashReportingLabel;
    QSpacerItem *verticalSpacer;
    QWidget *interfaceTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *interfaceGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    Tiled::ColorButton *gridColor;
    QCheckBox *openGL;
    QCheckBox *naturalSorting;
    QCheckBox *repeatShortcutForPreviousTool;
    QHBoxLayout *horizontalLayout_3;
    Tiled::ExpressionSpinBox *gridMajorX;
    QLabel *label_9;
    Tiled::ExpressionSpinBox *gridMajorY;
    Tiled::ColorButton *backgroundFadeColor;
    QLabel *label;
    QLabel *label_4;
    QComboBox *languageCombo;
    Tiled::ExpressionDoubleSpinBox *objectLineWidth;
    Tiled::ExpressionSpinBox *gridFine;
    QGroupBox *updatesGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QComboBox *objectSelectionBehaviorCombo;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *preciseTileObjectSelection;
    QCheckBox *wheelZoomsByDefault;
    QCheckBox *autoScrolling;
    QCheckBox *smoothScrolling;
    QCheckBox *duplicateAddsCopy;
    QSpacerItem *verticalSpacer_3;
    Tiled::ShortcutSettingsPage *keyboardTab;
    QWidget *updatesTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *themeGroupBox;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *styleCombo;
    QLabel *selectionColorLabel;
    Tiled::ColorButton *selectionColor;
    QLabel *label_5;
    Tiled::ColorButton *baseColor;
    QSpacerItem *horizontalSpacer;
    QLabel *baseColorLabel;
    QGroupBox *fontGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QFontComboBox *fontComboBox;
    Tiled::ExpressionSpinBox *fontSize;
    QSpacerItem *verticalSpacer_2;
    QWidget *pluginsTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QListView *pluginList;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *extensionsPathLabel;
    QLineEdit *extensionsPathEdit;
    QPushButton *openExtensionsPathButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName("PreferencesDialog");
        PreferencesDialog->resize(567, 706);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName("tabWidget");
        generalTab = new QWidget();
        generalTab->setObjectName("generalTab");
        verticalLayout_2 = new QVBoxLayout(generalTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        saveAndLoadGroupBox = new QGroupBox(generalTab);
        saveAndLoadGroupBox->setObjectName("saveAndLoadGroupBox");
        gridLayout = new QGridLayout(saveAndLoadGroupBox);
        gridLayout->setObjectName("gridLayout");
        safeSaving = new QCheckBox(saveAndLoadGroupBox);
        safeSaving->setObjectName("safeSaving");

        gridLayout->addWidget(safeSaving, 2, 0, 1, 1);

        restoreSession = new QCheckBox(saveAndLoadGroupBox);
        restoreSession->setObjectName("restoreSession");

        gridLayout->addWidget(restoreSession, 1, 0, 1, 1);

        reloadTilesetImages = new QCheckBox(saveAndLoadGroupBox);
        reloadTilesetImages->setObjectName("reloadTilesetImages");

        gridLayout->addWidget(reloadTilesetImages, 0, 0, 1, 2);

        exportOnSave = new QCheckBox(saveAndLoadGroupBox);
        exportOnSave->setObjectName("exportOnSave");

        gridLayout->addWidget(exportOnSave, 3, 0, 1, 1);


        verticalLayout_2->addWidget(saveAndLoadGroupBox);

        exportGroupBox = new QGroupBox(generalTab);
        exportGroupBox->setObjectName("exportGroupBox");
        gridLayout_5 = new QGridLayout(exportGroupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        resolveObjectTypesAndProperties = new QCheckBox(exportGroupBox);
        resolveObjectTypesAndProperties->setObjectName("resolveObjectTypesAndProperties");

        gridLayout_5->addWidget(resolveObjectTypesAndProperties, 2, 0, 1, 1);

        embedTilesets = new QCheckBox(exportGroupBox);
        embedTilesets->setObjectName("embedTilesets");

        gridLayout_5->addWidget(embedTilesets, 0, 0, 1, 2);

        detachTemplateInstances = new QCheckBox(exportGroupBox);
        detachTemplateInstances->setObjectName("detachTemplateInstances");

        gridLayout_5->addWidget(detachTemplateInstances, 1, 0, 1, 2);

        minimizeOutput = new QCheckBox(exportGroupBox);
        minimizeOutput->setObjectName("minimizeOutput");

        gridLayout_5->addWidget(minimizeOutput, 3, 0, 1, 1);


        verticalLayout_2->addWidget(exportGroupBox);

        crashReportingAndUpdates = new QGroupBox(generalTab);
        crashReportingAndUpdates->setObjectName("crashReportingAndUpdates");
        verticalLayout_8 = new QVBoxLayout(crashReportingAndUpdates);
        verticalLayout_8->setObjectName("verticalLayout_8");
        displayNewsCheckBox = new QCheckBox(crashReportingAndUpdates);
        displayNewsCheckBox->setObjectName("displayNewsCheckBox");

        verticalLayout_8->addWidget(displayNewsCheckBox);

        displayNewVersionCheckBox = new QCheckBox(crashReportingAndUpdates);
        displayNewVersionCheckBox->setObjectName("displayNewVersionCheckBox");

        verticalLayout_8->addWidget(displayNewVersionCheckBox);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sendCrashReports = new QCheckBox(crashReportingAndUpdates);
        sendCrashReports->setObjectName("sendCrashReports");

        horizontalLayout_2->addWidget(sendCrashReports);

        crashReportingLabel = new QLabel(crashReportingAndUpdates);
        crashReportingLabel->setObjectName("crashReportingLabel");
        crashReportingLabel->setTextFormat(Qt::TextFormat::RichText);

        horizontalLayout_2->addWidget(crashReportingLabel);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(crashReportingAndUpdates);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(generalTab, QString());
        interfaceTab = new QWidget();
        interfaceTab->setObjectName("interfaceTab");
        verticalLayout_4 = new QVBoxLayout(interfaceTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        interfaceGroupBox = new QGroupBox(interfaceTab);
        interfaceGroupBox->setObjectName("interfaceGroupBox");
        gridLayout_2 = new QGridLayout(interfaceGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_5 = new QSpacerItem(138, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 2);

        label_7 = new QLabel(interfaceGroupBox);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        label_2 = new QLabel(interfaceGroupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(interfaceGroupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_8 = new QLabel(interfaceGroupBox);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        gridColor = new Tiled::ColorButton(interfaceGroupBox);
        gridColor->setObjectName("gridColor");

        gridLayout_2->addWidget(gridColor, 1, 1, 1, 1);

        openGL = new QCheckBox(interfaceGroupBox);
        openGL->setObjectName("openGL");

        gridLayout_2->addWidget(openGL, 6, 0, 1, 2);

        naturalSorting = new QCheckBox(interfaceGroupBox);
        naturalSorting->setObjectName("naturalSorting");

        gridLayout_2->addWidget(naturalSorting, 7, 0, 1, 2);

        repeatShortcutForPreviousTool = new QCheckBox(interfaceGroupBox);
        repeatShortcutForPreviousTool->setObjectName("repeatShortcutForPreviousTool");

        gridLayout_2->addWidget(repeatShortcutForPreviousTool, 8, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridMajorX = new Tiled::ExpressionSpinBox(interfaceGroupBox);
        gridMajorX->setObjectName("gridMajorX");

        horizontalLayout_3->addWidget(gridMajorX);

        label_9 = new QLabel(interfaceGroupBox);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_9);

        gridMajorY = new Tiled::ExpressionSpinBox(interfaceGroupBox);
        gridMajorY->setObjectName("gridMajorY");

        horizontalLayout_3->addWidget(gridMajorY);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 1, 1, 2);

        backgroundFadeColor = new Tiled::ColorButton(interfaceGroupBox);
        backgroundFadeColor->setObjectName("backgroundFadeColor");

        gridLayout_2->addWidget(backgroundFadeColor, 2, 1, 1, 1);

        label = new QLabel(interfaceGroupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        label_4 = new QLabel(interfaceGroupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        languageCombo = new QComboBox(interfaceGroupBox);
        languageCombo->setObjectName("languageCombo");

        gridLayout_2->addWidget(languageCombo, 0, 1, 1, 1);

        objectLineWidth = new Tiled::ExpressionDoubleSpinBox(interfaceGroupBox);
        objectLineWidth->setObjectName("objectLineWidth");
        objectLineWidth->setDecimals(1);
        objectLineWidth->setMinimum(1.000000000000000);
        objectLineWidth->setValue(2.000000000000000);

        gridLayout_2->addWidget(objectLineWidth, 5, 1, 1, 2);

        gridFine = new Tiled::ExpressionSpinBox(interfaceGroupBox);
        gridFine->setObjectName("gridFine");
        gridFine->setMinimum(1);
        gridFine->setMaximum(128);

        gridLayout_2->addWidget(gridFine, 3, 1, 1, 2);


        verticalLayout_4->addWidget(interfaceGroupBox);

        updatesGroupBox = new QGroupBox(interfaceTab);
        updatesGroupBox->setObjectName("updatesGroupBox");
        gridLayout_3 = new QGridLayout(updatesGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        label_6 = new QLabel(updatesGroupBox);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        objectSelectionBehaviorCombo = new QComboBox(updatesGroupBox);
        objectSelectionBehaviorCombo->setObjectName("objectSelectionBehaviorCombo");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(objectSelectionBehaviorCombo->sizePolicy().hasHeightForWidth());
        objectSelectionBehaviorCombo->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(objectSelectionBehaviorCombo, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(190, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        preciseTileObjectSelection = new QCheckBox(updatesGroupBox);
        preciseTileObjectSelection->setObjectName("preciseTileObjectSelection");

        gridLayout_3->addWidget(preciseTileObjectSelection, 1, 0, 1, 3);

        wheelZoomsByDefault = new QCheckBox(updatesGroupBox);
        wheelZoomsByDefault->setObjectName("wheelZoomsByDefault");

        gridLayout_3->addWidget(wheelZoomsByDefault, 2, 0, 1, 3);

        autoScrolling = new QCheckBox(updatesGroupBox);
        autoScrolling->setObjectName("autoScrolling");

        gridLayout_3->addWidget(autoScrolling, 3, 0, 1, 3);

        smoothScrolling = new QCheckBox(updatesGroupBox);
        smoothScrolling->setObjectName("smoothScrolling");

        gridLayout_3->addWidget(smoothScrolling, 4, 0, 1, 3);

        duplicateAddsCopy = new QCheckBox(updatesGroupBox);
        duplicateAddsCopy->setObjectName("duplicateAddsCopy");

        gridLayout_3->addWidget(duplicateAddsCopy, 5, 0, 1, 3);


        verticalLayout_4->addWidget(updatesGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(interfaceTab, QString());
        keyboardTab = new Tiled::ShortcutSettingsPage();
        keyboardTab->setObjectName("keyboardTab");
        tabWidget->addTab(keyboardTab, QString());
        updatesTab = new QWidget();
        updatesTab->setObjectName("updatesTab");
        verticalLayout_3 = new QVBoxLayout(updatesTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        themeGroupBox = new QGroupBox(updatesTab);
        themeGroupBox->setObjectName("themeGroupBox");
        gridLayout_4 = new QGridLayout(themeGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        styleCombo = new QComboBox(themeGroupBox);
        styleCombo->setObjectName("styleCombo");

        gridLayout_4->addWidget(styleCombo, 0, 2, 1, 1);

        selectionColorLabel = new QLabel(themeGroupBox);
        selectionColorLabel->setObjectName("selectionColorLabel");

        gridLayout_4->addWidget(selectionColorLabel, 2, 0, 1, 2);

        selectionColor = new Tiled::ColorButton(themeGroupBox);
        selectionColor->setObjectName("selectionColor");

        gridLayout_4->addWidget(selectionColor, 2, 2, 1, 1);

        label_5 = new QLabel(themeGroupBox);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        baseColor = new Tiled::ColorButton(themeGroupBox);
        baseColor->setObjectName("baseColor");

        gridLayout_4->addWidget(baseColor, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(72, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 3, 1, 1);

        baseColorLabel = new QLabel(themeGroupBox);
        baseColorLabel->setObjectName("baseColorLabel");

        gridLayout_4->addWidget(baseColorLabel, 1, 0, 1, 2);


        verticalLayout_3->addWidget(themeGroupBox);

        fontGroupBox = new QGroupBox(updatesTab);
        fontGroupBox->setObjectName("fontGroupBox");
        fontGroupBox->setCheckable(true);
        fontGroupBox->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(fontGroupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(fontGroupBox);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_10);

        fontComboBox = new QFontComboBox(fontGroupBox);
        fontComboBox->setObjectName("fontComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(fontComboBox);

        fontSize = new Tiled::ExpressionSpinBox(fontGroupBox);
        fontSize->setObjectName("fontSize");
        fontSize->setMinimum(6);

        horizontalLayout_4->addWidget(fontSize);


        verticalLayout_3->addWidget(fontGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(updatesTab, QString());
        pluginsTab = new QWidget();
        pluginsTab->setObjectName("pluginsTab");
        verticalLayout_6 = new QVBoxLayout(pluginsTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_4 = new QGroupBox(pluginsTab);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pluginList = new QListView(groupBox_4);
        pluginList->setObjectName("pluginList");

        verticalLayout_5->addWidget(pluginList);


        verticalLayout_6->addWidget(groupBox_4);

        groupBox = new QGroupBox(pluginsTab);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        extensionsPathLabel = new QLabel(groupBox);
        extensionsPathLabel->setObjectName("extensionsPathLabel");

        horizontalLayout->addWidget(extensionsPathLabel);

        extensionsPathEdit = new QLineEdit(groupBox);
        extensionsPathEdit->setObjectName("extensionsPathEdit");
        extensionsPathEdit->setReadOnly(true);

        horizontalLayout->addWidget(extensionsPathEdit);

        openExtensionsPathButton = new QPushButton(groupBox);
        openExtensionsPathButton->setObjectName("openExtensionsPathButton");

        horizontalLayout->addWidget(openExtensionsPathButton);


        verticalLayout_6->addWidget(groupBox);

        tabWidget->addTab(pluginsTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        crashReportingLabel->setBuddy(sendCrashReports);
        label_2->setBuddy(languageCombo);
        label_3->setBuddy(gridColor);
        label->setBuddy(objectLineWidth);
        label_4->setBuddy(gridFine);
        label_6->setBuddy(objectSelectionBehaviorCombo);
        label_5->setBuddy(styleCombo);
        baseColorLabel->setBuddy(baseColor);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, reloadTilesetImages);
        QWidget::setTabOrder(reloadTilesetImages, restoreSession);
        QWidget::setTabOrder(restoreSession, safeSaving);
        QWidget::setTabOrder(safeSaving, exportOnSave);
        QWidget::setTabOrder(exportOnSave, embedTilesets);
        QWidget::setTabOrder(embedTilesets, detachTemplateInstances);
        QWidget::setTabOrder(detachTemplateInstances, resolveObjectTypesAndProperties);
        QWidget::setTabOrder(resolveObjectTypesAndProperties, minimizeOutput);
        QWidget::setTabOrder(minimizeOutput, displayNewsCheckBox);
        QWidget::setTabOrder(displayNewsCheckBox, displayNewVersionCheckBox);
        QWidget::setTabOrder(displayNewVersionCheckBox, sendCrashReports);
        QWidget::setTabOrder(sendCrashReports, languageCombo);
        QWidget::setTabOrder(languageCombo, gridColor);
        QWidget::setTabOrder(gridColor, backgroundFadeColor);
        QWidget::setTabOrder(backgroundFadeColor, gridFine);
        QWidget::setTabOrder(gridFine, gridMajorX);
        QWidget::setTabOrder(gridMajorX, gridMajorY);
        QWidget::setTabOrder(gridMajorY, objectLineWidth);
        QWidget::setTabOrder(objectLineWidth, openGL);
        QWidget::setTabOrder(openGL, naturalSorting);
        QWidget::setTabOrder(naturalSorting, objectSelectionBehaviorCombo);
        QWidget::setTabOrder(objectSelectionBehaviorCombo, preciseTileObjectSelection);
        QWidget::setTabOrder(preciseTileObjectSelection, wheelZoomsByDefault);
        QWidget::setTabOrder(wheelZoomsByDefault, autoScrolling);
        QWidget::setTabOrder(autoScrolling, smoothScrolling);
        QWidget::setTabOrder(smoothScrolling, duplicateAddsCopy);
        QWidget::setTabOrder(duplicateAddsCopy, styleCombo);
        QWidget::setTabOrder(styleCombo, baseColor);
        QWidget::setTabOrder(baseColor, selectionColor);
        QWidget::setTabOrder(selectionColor, fontGroupBox);
        QWidget::setTabOrder(fontGroupBox, fontComboBox);
        QWidget::setTabOrder(fontComboBox, fontSize);
        QWidget::setTabOrder(fontSize, pluginList);
        QWidget::setTabOrder(pluginList, extensionsPathEdit);
        QWidget::setTabOrder(extensionsPathEdit, openExtensionsPathButton);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PreferencesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        saveAndLoadGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Saving and Loading", nullptr));
#if QT_CONFIG(tooltip)
        safeSaving->setToolTip(QCoreApplication::translate("PreferencesDialog", "Turn this off if you're having trouble saving your files.", nullptr));
#endif // QT_CONFIG(tooltip)
        safeSaving->setText(QCoreApplication::translate("PreferencesDialog", "Use safe writing of files", nullptr));
        restoreSession->setText(QCoreApplication::translate("PreferencesDialog", "Restore previous session on startup", nullptr));
        reloadTilesetImages->setText(QCoreApplication::translate("PreferencesDialog", "&Reload tileset images when they change", nullptr));
        exportOnSave->setText(QCoreApplication::translate("PreferencesDialog", "Repeat last export on save", nullptr));
        exportGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Export Options", nullptr));
        resolveObjectTypesAndProperties->setText(QCoreApplication::translate("PreferencesDialog", "Resolve object types and properties", nullptr));
        embedTilesets->setText(QCoreApplication::translate("PreferencesDialog", "Embed tilesets", nullptr));
        detachTemplateInstances->setText(QCoreApplication::translate("PreferencesDialog", "Detach templates", nullptr));
#if QT_CONFIG(tooltip)
        minimizeOutput->setToolTip(QCoreApplication::translate("PreferencesDialog", "Omits unnecessary whitespace when supported by the output format", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeOutput->setText(QCoreApplication::translate("PreferencesDialog", "Minimize output", nullptr));
        crashReportingAndUpdates->setTitle(QCoreApplication::translate("PreferencesDialog", "Updates", nullptr));
        displayNewsCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Display news in status bar", nullptr));
        displayNewVersionCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Highlight new version in status bar", nullptr));
        sendCrashReports->setText(QCoreApplication::translate("PreferencesDialog", "Enable sending anonymous crash reports", nullptr));
        crashReportingLabel->setText(QCoreApplication::translate("PreferencesDialog", "(<a href=\"https://www.mapeditor.org/crash-reporting\">more information</a>)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("PreferencesDialog", "General", nullptr));
        interfaceGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Interface", nullptr));
        label_7->setText(QCoreApplication::translate("PreferencesDialog", "Major grid:", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "&Language:", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Grid color:", nullptr));
        label_8->setText(QCoreApplication::translate("PreferencesDialog", "Background fade color:", nullptr));
        openGL->setText(QCoreApplication::translate("PreferencesDialog", "Hardware &accelerated drawing (OpenGL)", nullptr));
#if QT_CONFIG(tooltip)
        naturalSorting->setToolTip(QCoreApplication::translate("PreferencesDialog", "Sort files numerically (d3, d20) instead of alphabetically (d20, d3)", nullptr));
#endif // QT_CONFIG(tooltip)
        naturalSorting->setText(QCoreApplication::translate("PreferencesDialog", "Use natural sorting in Projects view", nullptr));
#if QT_CONFIG(tooltip)
        repeatShortcutForPreviousTool->setToolTip(QCoreApplication::translate("PreferencesDialog", "Pressing the shortcut of the currently selected tool changes back to the previously selected tool, rather than keeping the current tool selected.", nullptr));
#endif // QT_CONFIG(tooltip)
        repeatShortcutForPreviousTool->setText(QCoreApplication::translate("PreferencesDialog", "Pressing a tool shortcut again toggles to the previous tool", nullptr));
        gridMajorX->setSuffix(QCoreApplication::translate("PreferencesDialog", " tiles", nullptr));
        label_9->setText(QCoreApplication::translate("PreferencesDialog", "by", nullptr));
        gridMajorY->setSuffix(QCoreApplication::translate("PreferencesDialog", " tiles", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Object line width:", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Fine grid divisions:", nullptr));
        objectLineWidth->setSuffix(QCoreApplication::translate("PreferencesDialog", " pixels", nullptr));
        updatesGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Behavior", nullptr));
        label_6->setText(QCoreApplication::translate("PreferencesDialog", "Object selection behavior:", nullptr));
        preciseTileObjectSelection->setText(QCoreApplication::translate("PreferencesDialog", "Pixel-perfect tile object selection", nullptr));
        wheelZoomsByDefault->setText(QCoreApplication::translate("PreferencesDialog", "Mouse wheel &zooms by default", nullptr));
        autoScrolling->setText(QCoreApplication::translate("PreferencesDialog", "Middle mouse button uses auto-&scrolling", nullptr));
        smoothScrolling->setText(QCoreApplication::translate("PreferencesDialog", "Use s&mooth scrolling", nullptr));
        duplicateAddsCopy->setText(QCoreApplication::translate("PreferencesDialog", "Add \"Copy\" when duplicating", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(interfaceTab), QCoreApplication::translate("PreferencesDialog", "Interface", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(keyboardTab), QCoreApplication::translate("PreferencesDialog", "Keyboard", nullptr));
        themeGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Theme", nullptr));
        selectionColorLabel->setText(QCoreApplication::translate("PreferencesDialog", "Selection color:", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "Style:", nullptr));
        baseColorLabel->setText(QCoreApplication::translate("PreferencesDialog", "Base color:", nullptr));
        fontGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Use custom interface font", nullptr));
        label_10->setText(QCoreApplication::translate("PreferencesDialog", "Font:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(updatesTab), QCoreApplication::translate("PreferencesDialog", "Theme", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PreferencesDialog", "Enabled Plugins", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Extensions", nullptr));
        extensionsPathLabel->setText(QCoreApplication::translate("PreferencesDialog", "Directory:", nullptr));
        openExtensionsPathButton->setText(QCoreApplication::translate("PreferencesDialog", "Open...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pluginsTab), QCoreApplication::translate("PreferencesDialog", "Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
