/********************************************************************************
** Form generated from reading UI file 'texteditordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITORDIALOG_H
#define UI_TEXTEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TextEditorDialog
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;
    QCheckBox *monospaceFont;

    void setupUi(QDialog *TextEditorDialog)
    {
        if (TextEditorDialog->objectName().isEmpty())
            TextEditorDialog->setObjectName("TextEditorDialog");
        TextEditorDialog->resize(514, 297);
        TextEditorDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(TextEditorDialog);
        gridLayout->setObjectName("gridLayout");
        plainTextEdit = new QPlainTextEdit(TextEditorDialog);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(TextEditorDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        monospaceFont = new QCheckBox(TextEditorDialog);
        monospaceFont->setObjectName("monospaceFont");
        monospaceFont->setCheckable(true);

        gridLayout->addWidget(monospaceFont, 1, 0, 1, 1);


        retranslateUi(TextEditorDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TextEditorDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TextEditorDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TextEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *TextEditorDialog)
    {
        TextEditorDialog->setWindowTitle(QCoreApplication::translate("TextEditorDialog", "Edit Text", nullptr));
        monospaceFont->setText(QCoreApplication::translate("TextEditorDialog", "Monospace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditorDialog: public Ui_TextEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITORDIALOG_H
