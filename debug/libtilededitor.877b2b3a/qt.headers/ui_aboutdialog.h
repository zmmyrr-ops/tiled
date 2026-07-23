/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include "newversionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *logoLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *buttonLayout;
    Tiled::NewVersionButton *newVersionButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *donateButton;
    QPushButton *okButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(452, 476);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        logoLayout = new QHBoxLayout();
        logoLayout->setObjectName("logoLayout");
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        logoLayout->addItem(horizontalSpacer);

        logo = new QLabel(AboutDialog);
        logo->setObjectName("logo");
        logo->setMinimumSize(QSize(400, 200));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/about-tiled-logo.png")));
        logo->setAlignment(Qt::AlignCenter);

        logoLayout->addWidget(logo);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        logoLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(logoLayout);

        textBrowser = new QTextBrowser(AboutDialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(textBrowser);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        newVersionButton = new Tiled::NewVersionButton(AboutDialog);
        newVersionButton->setObjectName("newVersionButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newVersionButton->sizePolicy().hasHeightForWidth());
        newVersionButton->setSizePolicy(sizePolicy);

        buttonLayout->addWidget(newVersionButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer_3);

        donateButton = new QPushButton(AboutDialog);
        donateButton->setObjectName("donateButton");

        buttonLayout->addWidget(donateButton);

        okButton = new QPushButton(AboutDialog);
        okButton->setObjectName("okButton");

        buttonLayout->addWidget(okButton);


        verticalLayout_3->addLayout(buttonLayout);


        retranslateUi(AboutDialog);
        QObject::connect(okButton, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::close));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Tiled", nullptr));
        logo->setText(QString());
        donateButton->setText(QCoreApplication::translate("AboutDialog", "Donate \342\206\227", nullptr));
        okButton->setText(QCoreApplication::translate("AboutDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
