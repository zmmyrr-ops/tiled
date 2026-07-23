/********************************************************************************
** Form generated from reading UI file 'tileanimationeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILEANIMATIONEDITOR_H
#define UI_TILEANIMATIONEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <tilesetview.h>
#include "expressionspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TileAnimationEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Tiled::ExpressionSpinBox *frameTime;
    QPushButton *setFrameTimeButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *zoomComboBox;
    QSplitter *horizontalSplitter;
    QSplitter *verticalSplitter;
    QListView *frameList;
    QLabel *preview;
    Tiled::TilesetView *tilesetView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TileAnimationEditor)
    {
        if (TileAnimationEditor->objectName().isEmpty())
            TileAnimationEditor->setObjectName("TileAnimationEditor");
        TileAnimationEditor->resize(669, 410);
        TileAnimationEditor->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(TileAnimationEditor);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(TileAnimationEditor);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        frameTime = new Tiled::ExpressionSpinBox(TileAnimationEditor);
        frameTime->setObjectName("frameTime");
        frameTime->setMinimum(0);
        frameTime->setMaximum(10000);
        frameTime->setSingleStep(10);
        frameTime->setValue(100);

        horizontalLayout->addWidget(frameTime);

        setFrameTimeButton = new QPushButton(TileAnimationEditor);
        setFrameTimeButton->setObjectName("setFrameTimeButton");

        horizontalLayout->addWidget(setFrameTimeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        zoomComboBox = new QComboBox(TileAnimationEditor);
        zoomComboBox->setObjectName("zoomComboBox");

        horizontalLayout->addWidget(zoomComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSplitter = new QSplitter(TileAnimationEditor);
        horizontalSplitter->setObjectName("horizontalSplitter");
        horizontalSplitter->setOrientation(Qt::Orientation::Horizontal);
        horizontalSplitter->setChildrenCollapsible(false);
        verticalSplitter = new QSplitter(horizontalSplitter);
        verticalSplitter->setObjectName("verticalSplitter");
        verticalSplitter->setOrientation(Qt::Orientation::Vertical);
        frameList = new QListView(verticalSplitter);
        frameList->setObjectName("frameList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frameList->sizePolicy().hasHeightForWidth());
        frameList->setSizePolicy(sizePolicy);
        frameList->setMinimumSize(QSize(128, 0));
        frameList->setMaximumSize(QSize(16777215, 16777215));
        frameList->setAcceptDrops(true);
        frameList->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        frameList->setDragEnabled(true);
        frameList->setDragDropMode(QAbstractItemView::DragDropMode::DragDrop);
        frameList->setDefaultDropAction(Qt::DropAction::MoveAction);
        frameList->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        frameList->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        frameList->setViewMode(QListView::ViewMode::ListMode);
        verticalSplitter->addWidget(frameList);
        preview = new QLabel(verticalSplitter);
        preview->setObjectName("preview");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(0, 64));
        preview->setFrameShape(QFrame::Shape::Box);
        preview->setFrameShadow(QFrame::Shadow::Sunken);
        preview->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalSplitter->addWidget(preview);
        horizontalSplitter->addWidget(verticalSplitter);
        tilesetView = new Tiled::TilesetView(horizontalSplitter);
        tilesetView->setObjectName("tilesetView");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tilesetView->sizePolicy().hasHeightForWidth());
        tilesetView->setSizePolicy(sizePolicy2);
        tilesetView->setMinimumSize(QSize(128, 0));
        tilesetView->setDragEnabled(true);
        tilesetView->setDragDropMode(QAbstractItemView::DragDropMode::DragOnly);
        horizontalSplitter->addWidget(tilesetView);

        verticalLayout->addWidget(horizontalSplitter);

        buttonBox = new QDialogButtonBox(TileAnimationEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TileAnimationEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TileAnimationEditor, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(TileAnimationEditor);
    } // setupUi

    void retranslateUi(QDialog *TileAnimationEditor)
    {
        TileAnimationEditor->setWindowTitle(QCoreApplication::translate("TileAnimationEditor", "Tile Animation Editor", nullptr));
        label->setText(QCoreApplication::translate("TileAnimationEditor", "Frame Duration: ", nullptr));
        frameTime->setSuffix(QCoreApplication::translate("TileAnimationEditor", " ms", nullptr));
        setFrameTimeButton->setText(QCoreApplication::translate("TileAnimationEditor", "Apply", nullptr));
        preview->setText(QCoreApplication::translate("TileAnimationEditor", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TileAnimationEditor: public Ui_TileAnimationEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILEANIMATIONEDITOR_H
