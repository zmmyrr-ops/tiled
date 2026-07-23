/********************************************************************************
** Form generated from reading UI file 'imagecolorpickerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGECOLORPICKERWIDGET_H
#define UI_IMAGECOLORPICKERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_ImageColorPickerWidget
{
public:
    QVBoxLayout *verticalLayout;
    Tiled::ClickableLabel *imageArea;
    QHBoxLayout *horizontalLayout;
    QLabel *preview;
    QLabel *colorName;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *ImageColorPickerWidget)
    {
        if (ImageColorPickerWidget->objectName().isEmpty())
            ImageColorPickerWidget->setObjectName("ImageColorPickerWidget");
        ImageColorPickerWidget->setWindowModality(Qt::WindowModal);
        ImageColorPickerWidget->resize(196, 137);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageColorPickerWidget->sizePolicy().hasHeightForWidth());
        ImageColorPickerWidget->setSizePolicy(sizePolicy);
        ImageColorPickerWidget->setMinimumSize(QSize(196, 128));
        ImageColorPickerWidget->setFrameShape(QFrame::StyledPanel);
        verticalLayout = new QVBoxLayout(ImageColorPickerWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        imageArea = new Tiled::ClickableLabel(ImageColorPickerWidget);
        imageArea->setObjectName("imageArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageArea->sizePolicy().hasHeightForWidth());
        imageArea->setSizePolicy(sizePolicy1);
        imageArea->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        imageArea->setMouseTracking(true);
        imageArea->setFrameShape(QFrame::StyledPanel);
        imageArea->setFrameShadow(QFrame::Sunken);
        imageArea->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        preview = new QLabel(ImageColorPickerWidget);
        preview->setObjectName("preview");
        preview->setFrameShape(QFrame::StyledPanel);
        preview->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(preview);

        colorName = new QLabel(ImageColorPickerWidget);
        colorName->setObjectName("colorName");
        colorName->setText(QString::fromUtf8("#000000"));

        horizontalLayout->addWidget(colorName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImageColorPickerWidget);

        QMetaObject::connectSlotsByName(ImageColorPickerWidget);
    } // setupUi

    void retranslateUi(QFrame *ImageColorPickerWidget)
    {
        imageArea->setText(QString());
        preview->setText(QString());
        (void)ImageColorPickerWidget;
    } // retranslateUi

};

namespace Ui {
    class ImageColorPickerWidget: public Ui_ImageColorPickerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGECOLORPICKERWIDGET_H
