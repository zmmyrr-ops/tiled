/********************************************************************************
** Form generated from reading UI file 'worldpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDPROPERTIESDIALOG_H
#define UI_WORLDPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "propertieswidget.h"

QT_BEGIN_NAMESPACE

class Ui_WorldPropertiesDialog
{
public:
    QVBoxLayout *dialogLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    Tiled::PropertiesWidget *propertiesWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WorldPropertiesDialog)
    {
        if (WorldPropertiesDialog->objectName().isEmpty())
            WorldPropertiesDialog->setObjectName("WorldPropertiesDialog");
        WorldPropertiesDialog->resize(586, 489);
        dialogLayout = new QVBoxLayout(WorldPropertiesDialog);
        dialogLayout->setObjectName("dialogLayout");
        groupBox = new QGroupBox(WorldPropertiesDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        propertiesWidget = new Tiled::PropertiesWidget(groupBox);
        propertiesWidget->setObjectName("propertiesWidget");

        verticalLayout->addWidget(propertiesWidget);


        dialogLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(WorldPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        dialogLayout->addWidget(buttonBox);


        retranslateUi(WorldPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, WorldPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, WorldPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WorldPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *WorldPropertiesDialog)
    {
        WorldPropertiesDialog->setWindowTitle(QCoreApplication::translate("WorldPropertiesDialog", "World Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WorldPropertiesDialog", "Custom Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorldPropertiesDialog: public Ui_WorldPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDPROPERTIESDIALOG_H
