/********************************************************************************
** Form generated from reading UI file 'commanddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDDIALOG_H
#define UI_COMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandDialog
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *CommandDialog)
    {
        if (CommandDialog->objectName().isEmpty())
            CommandDialog->setObjectName("CommandDialog");
        CommandDialog->resize(662, 314);
        CommandDialog->setSizeGripEnabled(true);
        gridLayout_2 = new QGridLayout(CommandDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        tabWidget = new QTabWidget(CommandDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(false);

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(CommandDialog);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        QWidget::setTabOrder(tabWidget, pushButton);

        retranslateUi(CommandDialog);
        QObject::connect(pushButton, &QPushButton::clicked, CommandDialog, qOverload<>(&QDialog::close));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CommandDialog);
    } // setupUi

    void retranslateUi(QDialog *CommandDialog)
    {
        CommandDialog->setWindowTitle(QCoreApplication::translate("CommandDialog", "Edit Commands", nullptr));
        pushButton->setText(QCoreApplication::translate("CommandDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandDialog: public Ui_CommandDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDDIALOG_H
