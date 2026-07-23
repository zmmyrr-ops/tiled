/********************************************************************************
** Form generated from reading UI file 'newmapdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMAPDIALOG_H
#define UI_NEWMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "expressionspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_NewMapDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QComboBox *renderOrder;
    QComboBox *layerFormat;
    QLabel *renderOrderLabel;
    QLabel *layerFormatLabel;
    QComboBox *orientation;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *fixedSize;
    QGridLayout *gridLayout_2;
    Tiled::ExpressionSpinBox *mapHeight;
    QLabel *widthLabel;
    Tiled::ExpressionSpinBox *mapWidth;
    QLabel *heightLabel;
    QLabel *pixelSizeLabel;
    QSpacerItem *fixedSizeSpacer;
    QRadioButton *mapInfinite;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    Tiled::ExpressionSpinBox *tileWidth;
    QLabel *label_4;
    Tiled::ExpressionSpinBox *tileHeight;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewMapDialog)
    {
        if (NewMapDialog->objectName().isEmpty())
            NewMapDialog->setObjectName("NewMapDialog");
        NewMapDialog->resize(474, 483);
        gridLayout_3 = new QGridLayout(NewMapDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        groupBox = new QGroupBox(NewMapDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        renderOrder = new QComboBox(groupBox);
        renderOrder->setObjectName("renderOrder");

        gridLayout_4->addWidget(renderOrder, 3, 1, 1, 1);

        layerFormat = new QComboBox(groupBox);
        layerFormat->setObjectName("layerFormat");

        gridLayout_4->addWidget(layerFormat, 2, 1, 1, 1);

        renderOrderLabel = new QLabel(groupBox);
        renderOrderLabel->setObjectName("renderOrderLabel");

        gridLayout_4->addWidget(renderOrderLabel, 3, 0, 1, 1);

        layerFormatLabel = new QLabel(groupBox);
        layerFormatLabel->setObjectName("layerFormatLabel");

        gridLayout_4->addWidget(layerFormatLabel, 2, 0, 1, 1);

        orientation = new QComboBox(groupBox);
        orientation->setObjectName("orientation");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(orientation->sizePolicy().hasHeightForWidth());
        orientation->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(orientation, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_3 = new QGroupBox(NewMapDialog);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        fixedSize = new QRadioButton(groupBox_3);
        fixedSize->setObjectName("fixedSize");
        fixedSize->setChecked(true);

        verticalLayout->addWidget(fixedSize);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        mapHeight = new Tiled::ExpressionSpinBox(groupBox_3);
        mapHeight->setObjectName("mapHeight");
        mapHeight->setMinimum(1);
        mapHeight->setMaximum(99999);
        mapHeight->setValue(100);

        gridLayout_2->addWidget(mapHeight, 1, 2, 1, 1);

        widthLabel = new QLabel(groupBox_3);
        widthLabel->setObjectName("widthLabel");

        gridLayout_2->addWidget(widthLabel, 0, 1, 1, 1);

        mapWidth = new Tiled::ExpressionSpinBox(groupBox_3);
        mapWidth->setObjectName("mapWidth");
        mapWidth->setMinimum(1);
        mapWidth->setMaximum(99999);
        mapWidth->setValue(100);

        gridLayout_2->addWidget(mapWidth, 0, 2, 1, 1);

        heightLabel = new QLabel(groupBox_3);
        heightLabel->setObjectName("heightLabel");

        gridLayout_2->addWidget(heightLabel, 1, 1, 1, 1);

        pixelSizeLabel = new QLabel(groupBox_3);
        pixelSizeLabel->setObjectName("pixelSizeLabel");
        pixelSizeLabel->setText(QString::fromUtf8("3200 x 3200 pixels"));

        gridLayout_2->addWidget(pixelSizeLabel, 2, 1, 1, 2);

        fixedSizeSpacer = new QSpacerItem(30, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(fixedSizeSpacer, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        mapInfinite = new QRadioButton(groupBox_3);
        mapInfinite->setObjectName("mapInfinite");

        verticalLayout->addWidget(mapInfinite);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(NewMapDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        tileWidth = new Tiled::ExpressionSpinBox(groupBox_2);
        tileWidth->setObjectName("tileWidth");
        tileWidth->setMinimum(1);
        tileWidth->setMaximum(9999);
        tileWidth->setValue(32);

        gridLayout->addWidget(tileWidth, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        tileHeight = new Tiled::ExpressionSpinBox(groupBox_2);
        tileHeight->setObjectName("tileHeight");
        tileHeight->setMinimum(1);
        tileHeight->setMaximum(9999);
        tileHeight->setValue(32);

        gridLayout->addWidget(tileHeight, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(NewMapDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 0, 1, 2);

#if QT_CONFIG(shortcut)
        renderOrderLabel->setBuddy(renderOrder);
        layerFormatLabel->setBuddy(layerFormat);
        label_5->setBuddy(orientation);
        widthLabel->setBuddy(mapWidth);
        heightLabel->setBuddy(mapHeight);
        label_3->setBuddy(tileWidth);
        label_4->setBuddy(tileHeight);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(orientation, layerFormat);
        QWidget::setTabOrder(layerFormat, renderOrder);
        QWidget::setTabOrder(renderOrder, fixedSize);
        QWidget::setTabOrder(fixedSize, mapWidth);
        QWidget::setTabOrder(mapWidth, mapHeight);
        QWidget::setTabOrder(mapHeight, mapInfinite);
        QWidget::setTabOrder(mapInfinite, tileWidth);
        QWidget::setTabOrder(tileWidth, tileHeight);

        retranslateUi(NewMapDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewMapDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewMapDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewMapDialog);
    } // setupUi

    void retranslateUi(QDialog *NewMapDialog)
    {
        NewMapDialog->setWindowTitle(QCoreApplication::translate("NewMapDialog", "New Map", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewMapDialog", "Map", nullptr));
        renderOrderLabel->setText(QCoreApplication::translate("NewMapDialog", "Tile render order:", nullptr));
        layerFormatLabel->setText(QCoreApplication::translate("NewMapDialog", "Tile layer format:", nullptr));
        label_5->setText(QCoreApplication::translate("NewMapDialog", "Orientation:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("NewMapDialog", "Map size", nullptr));
        fixedSize->setText(QCoreApplication::translate("NewMapDialog", "Fixed", nullptr));
        mapHeight->setSuffix(QCoreApplication::translate("NewMapDialog", " tiles", nullptr));
        widthLabel->setText(QCoreApplication::translate("NewMapDialog", "Width:", nullptr));
        mapWidth->setSuffix(QCoreApplication::translate("NewMapDialog", " tiles", nullptr));
        heightLabel->setText(QCoreApplication::translate("NewMapDialog", "Height:", nullptr));
        mapInfinite->setText(QCoreApplication::translate("NewMapDialog", "Infinite", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NewMapDialog", "Tile size", nullptr));
        label_3->setText(QCoreApplication::translate("NewMapDialog", "Width:", nullptr));
        tileWidth->setSuffix(QCoreApplication::translate("NewMapDialog", " px", nullptr));
        label_4->setText(QCoreApplication::translate("NewMapDialog", "Height:", nullptr));
        tileHeight->setSuffix(QCoreApplication::translate("NewMapDialog", " px", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewMapDialog: public Ui_NewMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMAPDIALOG_H
