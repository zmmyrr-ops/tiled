/********************************************************************************
** Form generated from reading UI file 'objectrefdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTREFDIALOG_H
#define UI_OBJECTREFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "filteredit.h"

QT_BEGIN_NAMESPACE

class Ui_ObjectRefDialog
{
public:
    QVBoxLayout *verticalLayout;
    Tiled::FilterEdit *lineEdit;
    QVBoxLayout *treeViewPlaceholder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ObjectRefDialog)
    {
        if (ObjectRefDialog->objectName().isEmpty())
            ObjectRefDialog->setObjectName("ObjectRefDialog");
        ObjectRefDialog->resize(524, 316);
        ObjectRefDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ObjectRefDialog);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new Tiled::FilterEdit(ObjectRefDialog);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        treeViewPlaceholder = new QVBoxLayout();
        treeViewPlaceholder->setObjectName("treeViewPlaceholder");

        verticalLayout->addLayout(treeViewPlaceholder);

        buttonBox = new QDialogButtonBox(ObjectRefDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ObjectRefDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ObjectRefDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ObjectRefDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ObjectRefDialog);
    } // setupUi

    void retranslateUi(QDialog *ObjectRefDialog)
    {
        ObjectRefDialog->setWindowTitle(QCoreApplication::translate("ObjectRefDialog", "Edit Object Reference", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ObjectRefDialog", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectRefDialog: public Ui_ObjectRefDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTREFDIALOG_H
