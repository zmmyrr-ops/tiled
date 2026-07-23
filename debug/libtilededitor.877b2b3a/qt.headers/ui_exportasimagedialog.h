/********************************************************************************
** Form generated from reading UI file 'exportasimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTASIMAGEDIALOG_H
#define UI_EXPORTASIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportAsImageDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileNameEdit;
    QPushButton *browseButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *visibleLayersOnly;
    QCheckBox *currentZoomLevel;
    QCheckBox *drawTileGrid;
    QCheckBox *drawObjectLabels;
    QCheckBox *includeBackgroundColor;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportAsImageDialog)
    {
        if (ExportAsImageDialog->objectName().isEmpty())
            ExportAsImageDialog->setObjectName("ExportAsImageDialog");
        ExportAsImageDialog->resize(337, 402);
        verticalLayout_2 = new QVBoxLayout(ExportAsImageDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(ExportAsImageDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fileNameEdit = new QLineEdit(groupBox);
        fileNameEdit->setObjectName("fileNameEdit");

        horizontalLayout->addWidget(fileNameEdit);

        browseButton = new QPushButton(groupBox);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ExportAsImageDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        visibleLayersOnly = new QCheckBox(groupBox_2);
        visibleLayersOnly->setObjectName("visibleLayersOnly");
        visibleLayersOnly->setChecked(true);

        verticalLayout->addWidget(visibleLayersOnly);

        currentZoomLevel = new QCheckBox(groupBox_2);
        currentZoomLevel->setObjectName("currentZoomLevel");
        currentZoomLevel->setChecked(true);

        verticalLayout->addWidget(currentZoomLevel);

        drawTileGrid = new QCheckBox(groupBox_2);
        drawTileGrid->setObjectName("drawTileGrid");

        verticalLayout->addWidget(drawTileGrid);

        drawObjectLabels = new QCheckBox(groupBox_2);
        drawObjectLabels->setObjectName("drawObjectLabels");

        verticalLayout->addWidget(drawObjectLabels);

        includeBackgroundColor = new QCheckBox(groupBox_2);
        includeBackgroundColor->setObjectName("includeBackgroundColor");

        verticalLayout->addWidget(includeBackgroundColor);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportAsImageDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(fileNameEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExportAsImageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportAsImageDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportAsImageDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportAsImageDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportAsImageDialog)
    {
        ExportAsImageDialog->setWindowTitle(QCoreApplication::translate("ExportAsImageDialog", "Export As Image", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExportAsImageDialog", "Location", nullptr));
        label->setText(QCoreApplication::translate("ExportAsImageDialog", "Name:", nullptr));
        browseButton->setText(QCoreApplication::translate("ExportAsImageDialog", "&Browse...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExportAsImageDialog", "Settings", nullptr));
        visibleLayersOnly->setText(QCoreApplication::translate("ExportAsImageDialog", "Only include &visible layers", nullptr));
        currentZoomLevel->setText(QCoreApplication::translate("ExportAsImageDialog", "Use current &zoom level", nullptr));
        drawTileGrid->setText(QCoreApplication::translate("ExportAsImageDialog", "&Draw tile grid", nullptr));
        drawObjectLabels->setText(QCoreApplication::translate("ExportAsImageDialog", "Draw object &names", nullptr));
        includeBackgroundColor->setText(QCoreApplication::translate("ExportAsImageDialog", "&Include background color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportAsImageDialog: public Ui_ExportAsImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTASIMAGEDIALOG_H
