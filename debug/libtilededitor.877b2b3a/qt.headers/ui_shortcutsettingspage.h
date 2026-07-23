/********************************************************************************
** Form generated from reading UI file 'shortcutsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTSETTINGSPAGE_H
#define UI_SHORTCUTSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filteredit.h"

namespace Tiled {

class Ui_ShortcutSettingsPage
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    Tiled::FilterEdit *filterEdit;
    QTreeView *shortcutsView;
    QSpacerItem *horizontalSpacer;
    QPushButton *importButton;
    QLabel *conflictsLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exportButton;
    QPushButton *resetButton;

    void setupUi(QWidget *Tiled__ShortcutSettingsPage)
    {
        if (Tiled__ShortcutSettingsPage->objectName().isEmpty())
            Tiled__ShortcutSettingsPage->setObjectName("Tiled__ShortcutSettingsPage");
        Tiled__ShortcutSettingsPage->resize(614, 361);
        gridLayout = new QGridLayout(Tiled__ShortcutSettingsPage);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(Tiled__ShortcutSettingsPage);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        filterEdit = new Tiled::FilterEdit(groupBox);
        filterEdit->setObjectName("filterEdit");

        verticalLayout->addWidget(filterEdit);

        shortcutsView = new QTreeView(groupBox);
        shortcutsView->setObjectName("shortcutsView");
        shortcutsView->setRootIsDecorated(false);
        shortcutsView->setUniformRowHeights(true);
        shortcutsView->setItemsExpandable(false);
        shortcutsView->setSortingEnabled(true);
        shortcutsView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(shortcutsView);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 6);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        importButton = new QPushButton(groupBox);
        importButton->setObjectName("importButton");

        gridLayout_2->addWidget(importButton, 1, 4, 1, 1);

        conflictsLabel = new QLabel(groupBox);
        conflictsLabel->setObjectName("conflictsLabel");

        gridLayout_2->addWidget(conflictsLabel, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        exportButton = new QPushButton(groupBox);
        exportButton->setObjectName("exportButton");

        gridLayout_2->addWidget(exportButton, 1, 5, 1, 1);

        resetButton = new QPushButton(groupBox);
        resetButton->setObjectName("resetButton");

        gridLayout_2->addWidget(resetButton, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(filterEdit, shortcutsView);
        QWidget::setTabOrder(shortcutsView, resetButton);
        QWidget::setTabOrder(resetButton, importButton);
        QWidget::setTabOrder(importButton, exportButton);

        retranslateUi(Tiled__ShortcutSettingsPage);

        QMetaObject::connectSlotsByName(Tiled__ShortcutSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *Tiled__ShortcutSettingsPage)
    {
        groupBox->setTitle(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "Keyboard Shortcuts", nullptr));
        filterEdit->setPlaceholderText(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "Filter", nullptr));
        importButton->setText(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "&Import...", nullptr));
        conflictsLabel->setText(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "<html><head/><body><p><span style=\" color:#ff0000;\">Potential conflicts!</span> <a href=\"#show-conflicts\"><span style=\" text-decoration: underline; color:#0000ff;\">Set Filter</span></a></p></body></html>", nullptr));
        exportButton->setText(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "&Export...", nullptr));
        resetButton->setText(QCoreApplication::translate("Tiled::ShortcutSettingsPage", "&Reset All", nullptr));
        (void)Tiled__ShortcutSettingsPage;
    } // retranslateUi

};

} // namespace Tiled

namespace Tiled {
namespace Ui {
    class ShortcutSettingsPage: public Ui_ShortcutSettingsPage {};
} // namespace Ui
} // namespace Tiled

#endif // UI_SHORTCUTSETTINGSPAGE_H
