/********************************************************************************
** Form generated from reading UI file 'commandsedit.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDSEDIT_H
#define UI_COMMANDSEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "commanddialog.h"

QT_BEGIN_NAMESPACE

class Ui_CommandsEdit
{
public:
    QHBoxLayout *horizontalLayout;
    Tiled::CommandTreeView *treeView;
    QGridLayout *gridLayout;
    QLineEdit *argumentsEdit;
    QLabel *label_2;
    QLineEdit *executableEdit;
    QPushButton *exBrowseButton;
    QLabel *label;
    QKeySequenceEdit *keySequenceEdit;
    QPushButton *clearButton;
    QCheckBox *saveBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *workingDirectoryEdit;
    QPushButton *wdBrowseButton;
    QCheckBox *outputBox;

    void setupUi(QWidget *CommandsEdit)
    {
        if (CommandsEdit->objectName().isEmpty())
            CommandsEdit->setObjectName("CommandsEdit");
        CommandsEdit->resize(734, 291);
        horizontalLayout = new QHBoxLayout(CommandsEdit);
        horizontalLayout->setObjectName("horizontalLayout");
        treeView = new Tiled::CommandTreeView(CommandsEdit);
        treeView->setObjectName("treeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setDragDropMode(QAbstractItemView::DragDrop);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(treeView);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        argumentsEdit = new QLineEdit(CommandsEdit);
        argumentsEdit->setObjectName("argumentsEdit");

        gridLayout->addWidget(argumentsEdit, 1, 1, 1, 2);

        label_2 = new QLabel(CommandsEdit);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        executableEdit = new QLineEdit(CommandsEdit);
        executableEdit->setObjectName("executableEdit");

        gridLayout->addWidget(executableEdit, 0, 1, 1, 1);

        exBrowseButton = new QPushButton(CommandsEdit);
        exBrowseButton->setObjectName("exBrowseButton");

        gridLayout->addWidget(exBrowseButton, 0, 2, 1, 1);

        label = new QLabel(CommandsEdit);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        keySequenceEdit = new QKeySequenceEdit(CommandsEdit);
        keySequenceEdit->setObjectName("keySequenceEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(keySequenceEdit->sizePolicy().hasHeightForWidth());
        keySequenceEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(keySequenceEdit, 3, 1, 1, 1);

        clearButton = new QPushButton(CommandsEdit);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 3, 2, 1, 1);

        saveBox = new QCheckBox(CommandsEdit);
        saveBox->setObjectName("saveBox");

        gridLayout->addWidget(saveBox, 5, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 3);

        label_3 = new QLabel(CommandsEdit);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(CommandsEdit);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        workingDirectoryEdit = new QLineEdit(CommandsEdit);
        workingDirectoryEdit->setObjectName("workingDirectoryEdit");

        gridLayout->addWidget(workingDirectoryEdit, 2, 1, 1, 1);

        wdBrowseButton = new QPushButton(CommandsEdit);
        wdBrowseButton->setObjectName("wdBrowseButton");

        gridLayout->addWidget(wdBrowseButton, 2, 2, 1, 1);

        outputBox = new QCheckBox(CommandsEdit);
        outputBox->setObjectName("outputBox");

        gridLayout->addWidget(outputBox, 4, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(treeView, executableEdit);
        QWidget::setTabOrder(executableEdit, exBrowseButton);
        QWidget::setTabOrder(exBrowseButton, argumentsEdit);
        QWidget::setTabOrder(argumentsEdit, workingDirectoryEdit);
        QWidget::setTabOrder(workingDirectoryEdit, wdBrowseButton);
        QWidget::setTabOrder(wdBrowseButton, keySequenceEdit);
        QWidget::setTabOrder(keySequenceEdit, clearButton);
        QWidget::setTabOrder(clearButton, outputBox);
        QWidget::setTabOrder(outputBox, saveBox);

        retranslateUi(CommandsEdit);
        QObject::connect(clearButton, &QPushButton::clicked, keySequenceEdit, qOverload<>(&QKeySequenceEdit::clear));

        QMetaObject::connectSlotsByName(CommandsEdit);
    } // setupUi

    void retranslateUi(QWidget *CommandsEdit)
    {
        label_2->setText(QCoreApplication::translate("CommandsEdit", "Executable:", nullptr));
        executableEdit->setInputMask(QString());
        exBrowseButton->setText(QCoreApplication::translate("CommandsEdit", "Browse...", nullptr));
        label->setText(QCoreApplication::translate("CommandsEdit", "Shortcut:", nullptr));
        clearButton->setText(QCoreApplication::translate("CommandsEdit", "Clear", nullptr));
        saveBox->setText(QCoreApplication::translate("CommandsEdit", "&Save before executing", nullptr));
        label_3->setText(QCoreApplication::translate("CommandsEdit", "Arguments:", nullptr));
        label_4->setText(QCoreApplication::translate("CommandsEdit", "Working Directory:", nullptr));
        wdBrowseButton->setText(QCoreApplication::translate("CommandsEdit", "Browse...", nullptr));
        outputBox->setText(QCoreApplication::translate("CommandsEdit", "Show output in Console view", nullptr));
        (void)CommandsEdit;
    } // retranslateUi

};

namespace Ui {
    class CommandsEdit: public Ui_CommandsEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDSEDIT_H
