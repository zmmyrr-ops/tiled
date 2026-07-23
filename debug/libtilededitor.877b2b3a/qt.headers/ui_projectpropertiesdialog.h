/********************************************************************************
** Form generated from reading UI file 'projectpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTPROPERTIESDIALOG_H
#define UI_PROJECTPROPERTIESDIALOG_H

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

class Ui_ProjectPropertiesDialog
{
public:
    QVBoxLayout *dialogLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    Tiled::PropertiesWidget *propertiesWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProjectPropertiesDialog)
    {
        if (ProjectPropertiesDialog->objectName().isEmpty())
            ProjectPropertiesDialog->setObjectName("ProjectPropertiesDialog");
        ProjectPropertiesDialog->resize(586, 489);
        dialogLayout = new QVBoxLayout(ProjectPropertiesDialog);
        dialogLayout->setObjectName("dialogLayout");
        groupBox = new QGroupBox(ProjectPropertiesDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        propertiesWidget = new Tiled::PropertiesWidget(groupBox);
        propertiesWidget->setObjectName("propertiesWidget");

        verticalLayout->addWidget(propertiesWidget);


        dialogLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(ProjectPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        dialogLayout->addWidget(buttonBox);


        retranslateUi(ProjectPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ProjectPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ProjectPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ProjectPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectPropertiesDialog)
    {
        ProjectPropertiesDialog->setWindowTitle(QCoreApplication::translate("ProjectPropertiesDialog", "Project Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProjectPropertiesDialog", "Custom Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectPropertiesDialog: public Ui_ProjectPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTPROPERTIESDIALOG_H
