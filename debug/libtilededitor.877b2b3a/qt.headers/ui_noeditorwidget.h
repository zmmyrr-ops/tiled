/********************************************************************************
** Form generated from reading UI file 'noeditorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOEDITORWIDGET_H
#define UI_NOEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoEditorWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *title;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *recentProjectsButton;
    QToolButton *newProjectButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *openFileButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *newMapButton;
    QToolButton *newTilesetButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *logo;

    void setupUi(QWidget *NoEditorWidget)
    {
        if (NoEditorWidget->objectName().isEmpty())
            NoEditorWidget->setObjectName("NoEditorWidget");
        NoEditorWidget->resize(885, 454);
        gridLayout = new QGridLayout(NoEditorWidget);
        gridLayout->setObjectName("gridLayout");
        versionLabel = new QLabel(NoEditorWidget);
        versionLabel->setObjectName("versionLabel");
        versionLabel->setText(QString::fromUtf8("%1 %2"));
        versionLabel->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(versionLabel, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(126, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        title = new QLabel(NoEditorWidget);
        title->setObjectName("title");
        title->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(title, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        recentProjectsButton = new QToolButton(NoEditorWidget);
        recentProjectsButton->setObjectName("recentProjectsButton");
        recentProjectsButton->setPopupMode(QToolButton::InstantPopup);
        recentProjectsButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_2->addWidget(recentProjectsButton);

        newProjectButton = new QToolButton(NoEditorWidget);
        newProjectButton->setObjectName("newProjectButton");
        newProjectButton->setText(QString::fromUtf8("New Project..."));
        newProjectButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_2->addWidget(newProjectButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        openFileButton = new QToolButton(NoEditorWidget);
        openFileButton->setObjectName("openFileButton");
        openFileButton->setText(QString::fromUtf8("Open File..."));
        openFileButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_4->addWidget(openFileButton);

        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newMapButton = new QToolButton(NoEditorWidget);
        newMapButton->setObjectName("newMapButton");
        newMapButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(newMapButton);

        newTilesetButton = new QToolButton(NoEditorWidget);
        newTilesetButton->setObjectName("newTilesetButton");
        newTilesetButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(newTilesetButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 115, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        logo = new QLabel(NoEditorWidget);
        logo->setObjectName("logo");
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);


        gridLayout->addLayout(verticalLayout, 1, 3, 2, 1);


        retranslateUi(NoEditorWidget);

        QMetaObject::connectSlotsByName(NoEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *NoEditorWidget)
    {
        title->setText(QCoreApplication::translate("NoEditorWidget", "<font size=\"+2\">No Open Files</font>", nullptr));
        recentProjectsButton->setText(QCoreApplication::translate("NoEditorWidget", "Recent Projects", nullptr));
        newMapButton->setText(QCoreApplication::translate("NoEditorWidget", "New Map...", nullptr));
        newTilesetButton->setText(QCoreApplication::translate("NoEditorWidget", "New Tileset...", nullptr));
        logo->setText(QString());
        (void)NoEditorWidget;
    } // retranslateUi

};

namespace Ui {
    class NoEditorWidget: public Ui_NoEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOEDITORWIDGET_H
