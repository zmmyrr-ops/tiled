/********************************************************************************
** Form generated from reading UI file 'offsetmapdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFSETMAPDIALOG_H
#define UI_OFFSETMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "expressionspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_OffsetMapDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *offsetGroup;
    QGridLayout *gridLayout;
    QLabel *labelX;
    Tiled::ExpressionSpinBox *xOffset;
    QCheckBox *wrapX;
    QLabel *labelY;
    QSpacerItem *horizontalSpacer;
    Tiled::ExpressionSpinBox *yOffset;
    QCheckBox *wrapY;
    QLabel *labelLayers;
    QComboBox *layerSelection;
    QLabel *labelBounds;
    QComboBox *boundsSelection;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OffsetMapDialog)
    {
        if (OffsetMapDialog->objectName().isEmpty())
            OffsetMapDialog->setObjectName("OffsetMapDialog");
        OffsetMapDialog->setEnabled(true);
        OffsetMapDialog->resize(282, 244);
        OffsetMapDialog->setAutoFillBackground(false);
        verticalLayout_5 = new QVBoxLayout(OffsetMapDialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        offsetGroup = new QGroupBox(OffsetMapDialog);
        offsetGroup->setObjectName("offsetGroup");
        gridLayout = new QGridLayout(offsetGroup);
        gridLayout->setObjectName("gridLayout");
        labelX = new QLabel(offsetGroup);
        labelX->setObjectName("labelX");

        gridLayout->addWidget(labelX, 2, 0, 1, 1);

        xOffset = new Tiled::ExpressionSpinBox(offsetGroup);
        xOffset->setObjectName("xOffset");
        xOffset->setEnabled(true);
        xOffset->setMinimum(-999);
        xOffset->setMaximum(999);
        xOffset->setValue(0);

        gridLayout->addWidget(xOffset, 2, 2, 1, 1);

        wrapX = new QCheckBox(offsetGroup);
        wrapX->setObjectName("wrapX");

        gridLayout->addWidget(wrapX, 2, 3, 1, 1);

        labelY = new QLabel(offsetGroup);
        labelY->setObjectName("labelY");

        gridLayout->addWidget(labelY, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        yOffset = new Tiled::ExpressionSpinBox(offsetGroup);
        yOffset->setObjectName("yOffset");
        yOffset->setMinimum(-999);
        yOffset->setMaximum(999);
        yOffset->setValue(0);

        gridLayout->addWidget(yOffset, 4, 2, 1, 1);

        wrapY = new QCheckBox(offsetGroup);
        wrapY->setObjectName("wrapY");

        gridLayout->addWidget(wrapY, 4, 3, 1, 1);

        labelLayers = new QLabel(offsetGroup);
        labelLayers->setObjectName("labelLayers");

        gridLayout->addWidget(labelLayers, 5, 0, 1, 1);

        layerSelection = new QComboBox(offsetGroup);
        layerSelection->addItem(QString());
        layerSelection->addItem(QString());
        layerSelection->addItem(QString());
        layerSelection->setObjectName("layerSelection");

        gridLayout->addWidget(layerSelection, 5, 2, 1, 2);

        labelBounds = new QLabel(offsetGroup);
        labelBounds->setObjectName("labelBounds");

        gridLayout->addWidget(labelBounds, 6, 0, 1, 1);

        boundsSelection = new QComboBox(offsetGroup);
        boundsSelection->addItem(QString());
        boundsSelection->addItem(QString());
        boundsSelection->setObjectName("boundsSelection");

        gridLayout->addWidget(boundsSelection, 6, 2, 1, 2);


        verticalLayout_5->addWidget(offsetGroup);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_5->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OffsetMapDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(OffsetMapDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OffsetMapDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OffsetMapDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OffsetMapDialog);
    } // setupUi

    void retranslateUi(QDialog *OffsetMapDialog)
    {
        OffsetMapDialog->setWindowTitle(QCoreApplication::translate("OffsetMapDialog", "Offset Map", nullptr));
        offsetGroup->setTitle(QCoreApplication::translate("OffsetMapDialog", "Offset Contents of Map", nullptr));
        labelX->setText(QCoreApplication::translate("OffsetMapDialog", "X:", nullptr));
        xOffset->setSuffix(QCoreApplication::translate("OffsetMapDialog", " tiles", nullptr));
        wrapX->setText(QCoreApplication::translate("OffsetMapDialog", "Wrap", nullptr));
        labelY->setText(QCoreApplication::translate("OffsetMapDialog", "Y:", nullptr));
        yOffset->setSuffix(QCoreApplication::translate("OffsetMapDialog", " tiles", nullptr));
        wrapY->setText(QCoreApplication::translate("OffsetMapDialog", "Wrap", nullptr));
        labelLayers->setText(QCoreApplication::translate("OffsetMapDialog", "Layers:", nullptr));
        layerSelection->setItemText(0, QCoreApplication::translate("OffsetMapDialog", "All Visible Layers", nullptr));
        layerSelection->setItemText(1, QCoreApplication::translate("OffsetMapDialog", "All Layers", nullptr));
        layerSelection->setItemText(2, QCoreApplication::translate("OffsetMapDialog", "Selected Layers", nullptr));

        labelBounds->setText(QCoreApplication::translate("OffsetMapDialog", "Bounds:", nullptr));
        boundsSelection->setItemText(0, QCoreApplication::translate("OffsetMapDialog", "Whole Map", nullptr));
        boundsSelection->setItemText(1, QCoreApplication::translate("OffsetMapDialog", "Current Selection", nullptr));

    } // retranslateUi

};

namespace Ui {
    class OffsetMapDialog: public Ui_OffsetMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFSETMAPDIALOG_H
