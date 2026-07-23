/********************************************************************************
** Form generated from reading UI file 'newtilesetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTILESETDIALOG_H
#define UI_NEWTILESETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "colorbutton.h"
#include "expressionspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_NewTilesetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *tilesetGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *nameLabel;
    QLineEdit *name;
    QLabel *typeLabel;
    QComboBox *tilesetType;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *embedded;
    QGroupBox *imageGroupBox;
    QGridLayout *gridLayout;
    QPushButton *browseButton;
    QLabel *sourceLabel;
    QCheckBox *useTransparentColor;
    Tiled::ColorButton *colorButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    Tiled::ExpressionSpinBox *tileHeight;
    QLabel *tileHeightLabel;
    QSpacerItem *horizontalSpacer;
    Tiled::ExpressionSpinBox *tileWidth;
    QLabel *marginLabel;
    Tiled::ExpressionSpinBox *margin;
    Tiled::ExpressionSpinBox *spacing;
    QLabel *tileWidthLabel;
    QLabel *spacingLabel;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *image;
    QToolButton *dropperButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewTilesetDialog)
    {
        if (NewTilesetDialog->objectName().isEmpty())
            NewTilesetDialog->setObjectName("NewTilesetDialog");
        NewTilesetDialog->resize(534, 450);
        verticalLayout = new QVBoxLayout(NewTilesetDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        tilesetGroupBox = new QGroupBox(NewTilesetDialog);
        tilesetGroupBox->setObjectName("tilesetGroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tilesetGroupBox->sizePolicy().hasHeightForWidth());
        tilesetGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(tilesetGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        nameLabel = new QLabel(tilesetGroupBox);
        nameLabel->setObjectName("nameLabel");

        gridLayout_2->addWidget(nameLabel, 0, 0, 1, 1);

        name = new QLineEdit(tilesetGroupBox);
        name->setObjectName("name");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(name, 0, 1, 1, 3);

        typeLabel = new QLabel(tilesetGroupBox);
        typeLabel->setObjectName("typeLabel");

        gridLayout_2->addWidget(typeLabel, 1, 0, 1, 1);

        tilesetType = new QComboBox(tilesetGroupBox);
        tilesetType->addItem(QString());
        tilesetType->addItem(QString());
        tilesetType->setObjectName("tilesetType");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tilesetType->sizePolicy().hasHeightForWidth());
        tilesetType->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(tilesetType, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        embedded = new QCheckBox(tilesetGroupBox);
        embedded->setObjectName("embedded");

        gridLayout_2->addWidget(embedded, 1, 3, 1, 1);


        verticalLayout->addWidget(tilesetGroupBox);

        imageGroupBox = new QGroupBox(NewTilesetDialog);
        imageGroupBox->setObjectName("imageGroupBox");
        sizePolicy.setHeightForWidth(imageGroupBox->sizePolicy().hasHeightForWidth());
        imageGroupBox->setSizePolicy(sizePolicy);
        imageGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(imageGroupBox);
        gridLayout->setObjectName("gridLayout");
        browseButton = new QPushButton(imageGroupBox);
        browseButton->setObjectName("browseButton");

        gridLayout->addWidget(browseButton, 0, 5, 1, 1);

        sourceLabel = new QLabel(imageGroupBox);
        sourceLabel->setObjectName("sourceLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sourceLabel->sizePolicy().hasHeightForWidth());
        sourceLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(sourceLabel, 0, 0, 1, 1);

        useTransparentColor = new QCheckBox(imageGroupBox);
        useTransparentColor->setObjectName("useTransparentColor");

        gridLayout->addWidget(useTransparentColor, 1, 0, 1, 2);

        colorButton = new Tiled::ColorButton(imageGroupBox);
        colorButton->setObjectName("colorButton");
        colorButton->setEnabled(false);

        gridLayout->addWidget(colorButton, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 13, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        tileHeight = new Tiled::ExpressionSpinBox(imageGroupBox);
        tileHeight->setObjectName("tileHeight");
        tileHeight->setMinimum(1);
        tileHeight->setMaximum(9999);
        tileHeight->setValue(32);

        gridLayout_3->addWidget(tileHeight, 1, 1, 1, 1);

        tileHeightLabel = new QLabel(imageGroupBox);
        tileHeightLabel->setObjectName("tileHeightLabel");

        gridLayout_3->addWidget(tileHeightLabel, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        tileWidth = new Tiled::ExpressionSpinBox(imageGroupBox);
        tileWidth->setObjectName("tileWidth");
        tileWidth->setEnabled(true);
        tileWidth->setMinimum(1);
        tileWidth->setMaximum(9999);
        tileWidth->setValue(32);

        gridLayout_3->addWidget(tileWidth, 0, 1, 1, 1);

        marginLabel = new QLabel(imageGroupBox);
        marginLabel->setObjectName("marginLabel");

        gridLayout_3->addWidget(marginLabel, 0, 3, 1, 1);

        margin = new Tiled::ExpressionSpinBox(imageGroupBox);
        margin->setObjectName("margin");
        margin->setMinimum(0);
        margin->setMaximum(9999);
        margin->setValue(0);

        gridLayout_3->addWidget(margin, 0, 4, 1, 1);

        spacing = new Tiled::ExpressionSpinBox(imageGroupBox);
        spacing->setObjectName("spacing");
        spacing->setMinimum(0);
        spacing->setMaximum(9999);
        spacing->setValue(0);

        gridLayout_3->addWidget(spacing, 1, 4, 1, 1);

        tileWidthLabel = new QLabel(imageGroupBox);
        tileWidthLabel->setObjectName("tileWidthLabel");

        gridLayout_3->addWidget(tileWidthLabel, 0, 0, 1, 1);

        spacingLabel = new QLabel(imageGroupBox);
        spacingLabel->setObjectName("spacingLabel");

        gridLayout_3->addWidget(spacingLabel, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 5, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 6);

        image = new QLineEdit(imageGroupBox);
        image->setObjectName("image");

        gridLayout->addWidget(image, 0, 1, 1, 4);

        dropperButton = new QToolButton(imageGroupBox);
        dropperButton->setObjectName("dropperButton");
        dropperButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16x16/stock-tool-color-picker-16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dropperButton->setIcon(icon);

        gridLayout->addWidget(dropperButton, 1, 3, 1, 1);


        verticalLayout->addWidget(imageGroupBox);

        buttonBox = new QDialogButtonBox(NewTilesetDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(name);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(name, tilesetType);
        QWidget::setTabOrder(tilesetType, embedded);
        QWidget::setTabOrder(embedded, image);
        QWidget::setTabOrder(image, browseButton);
        QWidget::setTabOrder(browseButton, useTransparentColor);
        QWidget::setTabOrder(useTransparentColor, colorButton);
        QWidget::setTabOrder(colorButton, dropperButton);
        QWidget::setTabOrder(dropperButton, tileWidth);
        QWidget::setTabOrder(tileWidth, tileHeight);
        QWidget::setTabOrder(tileHeight, margin);
        QWidget::setTabOrder(margin, spacing);

        retranslateUi(NewTilesetDialog);
        QObject::connect(useTransparentColor, SIGNAL(toggled(bool)), colorButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NewTilesetDialog);
    } // setupUi

    void retranslateUi(QDialog *NewTilesetDialog)
    {
        NewTilesetDialog->setWindowTitle(QCoreApplication::translate("NewTilesetDialog", "New Tileset", nullptr));
        tilesetGroupBox->setTitle(QCoreApplication::translate("NewTilesetDialog", "Tileset", nullptr));
        nameLabel->setText(QCoreApplication::translate("NewTilesetDialog", "&Name:", nullptr));
        typeLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Type:", nullptr));
        tilesetType->setItemText(0, QCoreApplication::translate("NewTilesetDialog", "Based on Tileset Image", nullptr));
        tilesetType->setItemText(1, QCoreApplication::translate("NewTilesetDialog", "Collection of Images", nullptr));

        embedded->setText(QCoreApplication::translate("NewTilesetDialog", "Embed in map", nullptr));
        imageGroupBox->setTitle(QCoreApplication::translate("NewTilesetDialog", "Image", nullptr));
        browseButton->setText(QCoreApplication::translate("NewTilesetDialog", "&Browse...", nullptr));
        sourceLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Source:", nullptr));
        useTransparentColor->setText(QCoreApplication::translate("NewTilesetDialog", "Use transparent color:", nullptr));
        tileHeight->setSuffix(QCoreApplication::translate("NewTilesetDialog", " px", nullptr));
        tileHeightLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Tile height:", nullptr));
        tileWidth->setSuffix(QCoreApplication::translate("NewTilesetDialog", " px", nullptr));
#if QT_CONFIG(tooltip)
        marginLabel->setToolTip(QCoreApplication::translate("NewTilesetDialog", "The space at the edges of the tileset.", nullptr));
#endif // QT_CONFIG(tooltip)
        marginLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Margin:", nullptr));
        margin->setSuffix(QCoreApplication::translate("NewTilesetDialog", " px", nullptr));
        spacing->setSuffix(QCoreApplication::translate("NewTilesetDialog", " px", nullptr));
        tileWidthLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Tile width:", nullptr));
#if QT_CONFIG(tooltip)
        spacingLabel->setToolTip(QCoreApplication::translate("NewTilesetDialog", "The space between the tiles.", nullptr));
#endif // QT_CONFIG(tooltip)
        spacingLabel->setText(QCoreApplication::translate("NewTilesetDialog", "Spacing:", nullptr));
#if QT_CONFIG(tooltip)
        dropperButton->setToolTip(QCoreApplication::translate("NewTilesetDialog", "Pick color from image", nullptr));
#endif // QT_CONFIG(tooltip)
        dropperButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewTilesetDialog: public Ui_NewTilesetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTILESETDIALOG_H
