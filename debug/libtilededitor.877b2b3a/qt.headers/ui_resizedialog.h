/********************************************************************************
** Form generated from reading UI file 'resizedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEDIALOG_H
#define UI_RESIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "expressionspinbox.h"
#include "resizehelper.h"

QT_BEGIN_NAMESPACE

class Ui_ResizeDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *_6;
    Tiled::ExpressionSpinBox *widthSpinBox;
    QLabel *label_3;
    QLabel *label_4;
    Tiled::ExpressionSpinBox *heightSpinBox;
    QGroupBox *groupBox_2;
    QGridLayout *_4;
    QLabel *label_2;
    Tiled::ExpressionSpinBox *offsetXSpinBox;
    QLabel *label;
    Tiled::ExpressionSpinBox *offsetYSpinBox;
    QFrame *frame;
    QVBoxLayout *_5;
    Tiled::ResizeHelper *resizeHelper;
    QCheckBox *removeObjectsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ResizeDialog)
    {
        if (ResizeDialog->objectName().isEmpty())
            ResizeDialog->setObjectName("ResizeDialog");
        ResizeDialog->resize(370, 382);
        gridLayout = new QGridLayout(ResizeDialog);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(ResizeDialog);
        groupBox->setObjectName("groupBox");
        _6 = new QGridLayout(groupBox);
        _6->setObjectName("_6");
        widthSpinBox = new Tiled::ExpressionSpinBox(groupBox);
        widthSpinBox->setObjectName("widthSpinBox");
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(99999);

        _6->addWidget(widthSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        _6->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        _6->addWidget(label_4, 1, 0, 1, 1);

        heightSpinBox = new Tiled::ExpressionSpinBox(groupBox);
        heightSpinBox->setObjectName("heightSpinBox");
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(99999);

        _6->addWidget(heightSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ResizeDialog);
        groupBox_2->setObjectName("groupBox_2");
        _4 = new QGridLayout(groupBox_2);
        _4->setObjectName("_4");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        _4->addWidget(label_2, 0, 0, 1, 1);

        offsetXSpinBox = new Tiled::ExpressionSpinBox(groupBox_2);
        offsetXSpinBox->setObjectName("offsetXSpinBox");
        offsetXSpinBox->setMinimum(-99999);
        offsetXSpinBox->setMaximum(99999);

        _4->addWidget(offsetXSpinBox, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        _4->addWidget(label, 1, 0, 1, 1);

        offsetYSpinBox = new Tiled::ExpressionSpinBox(groupBox_2);
        offsetYSpinBox->setObjectName("offsetYSpinBox");
        offsetYSpinBox->setMinimum(-99999);
        offsetYSpinBox->setMaximum(99999);

        _4->addWidget(offsetYSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        frame = new QFrame(ResizeDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        _5 = new QVBoxLayout(frame);
        _5->setObjectName("_5");
        resizeHelper = new Tiled::ResizeHelper(frame);
        resizeHelper->setObjectName("resizeHelper");

        _5->addWidget(resizeHelper);


        gridLayout->addWidget(frame, 1, 0, 1, 2);

        removeObjectsCheckBox = new QCheckBox(ResizeDialog);
        removeObjectsCheckBox->setObjectName("removeObjectsCheckBox");
        removeObjectsCheckBox->setChecked(true);

        gridLayout->addWidget(removeObjectsCheckBox, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ResizeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(widthSpinBox);
        label_4->setBuddy(heightSpinBox);
        label_2->setBuddy(offsetXSpinBox);
        label->setBuddy(offsetYSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(widthSpinBox, heightSpinBox);
        QWidget::setTabOrder(heightSpinBox, offsetXSpinBox);
        QWidget::setTabOrder(offsetXSpinBox, offsetYSpinBox);
        QWidget::setTabOrder(offsetYSpinBox, buttonBox);

        retranslateUi(ResizeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ResizeDialog, qOverload<>(&QDialog::reject));
        QObject::connect(offsetXSpinBox, SIGNAL(valueChanged(int)), resizeHelper, SLOT(setOffsetX(int)));
        QObject::connect(offsetYSpinBox, SIGNAL(valueChanged(int)), resizeHelper, SLOT(setOffsetY(int)));
        QObject::connect(widthSpinBox, SIGNAL(valueChanged(int)), resizeHelper, SLOT(setNewWidth(int)));
        QObject::connect(heightSpinBox, SIGNAL(valueChanged(int)), resizeHelper, SLOT(setNewHeight(int)));
        QObject::connect(resizeHelper, SIGNAL(offsetXChanged(int)), offsetXSpinBox, SLOT(setValue(int)));
        QObject::connect(resizeHelper, SIGNAL(offsetYChanged(int)), offsetYSpinBox, SLOT(setValue(int)));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ResizeDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(ResizeDialog);
    } // setupUi

    void retranslateUi(QDialog *ResizeDialog)
    {
        ResizeDialog->setWindowTitle(QCoreApplication::translate("ResizeDialog", "Resize", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ResizeDialog", "Size", nullptr));
        widthSpinBox->setSuffix(QCoreApplication::translate("ResizeDialog", " tiles", nullptr));
        label_3->setText(QCoreApplication::translate("ResizeDialog", "Width:", nullptr));
        label_4->setText(QCoreApplication::translate("ResizeDialog", "Height:", nullptr));
        heightSpinBox->setSuffix(QCoreApplication::translate("ResizeDialog", " tiles", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ResizeDialog", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("ResizeDialog", "X:", nullptr));
        offsetXSpinBox->setSuffix(QCoreApplication::translate("ResizeDialog", " tiles", nullptr));
        label->setText(QCoreApplication::translate("ResizeDialog", "Y:", nullptr));
        offsetYSpinBox->setSuffix(QCoreApplication::translate("ResizeDialog", " tiles", nullptr));
        removeObjectsCheckBox->setText(QCoreApplication::translate("ResizeDialog", "Remove objects outside of the map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResizeDialog: public Ui_ResizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEDIALOG_H
