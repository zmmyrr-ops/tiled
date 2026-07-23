/********************************************************************************
** Form generated from reading UI file 'propertytypeseditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYTYPESEDITOR_H
#define UI_PROPERTYTYPESEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertyTypesEditor
{
public:
    QVBoxLayout *layout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *propertyTypesLayout;
    QTreeView *propertyTypesView;

    void setupUi(QDialog *PropertyTypesEditor)
    {
        if (PropertyTypesEditor->objectName().isEmpty())
            PropertyTypesEditor->setObjectName("PropertyTypesEditor");
        PropertyTypesEditor->resize(852, 506);
        PropertyTypesEditor->setSizeGripEnabled(true);
        layout = new QVBoxLayout(PropertyTypesEditor);
        layout->setSpacing(0);
        layout->setObjectName("layout");
        groupBox = new QGroupBox(PropertyTypesEditor);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        propertyTypesLayout = new QVBoxLayout();
        propertyTypesLayout->setSpacing(0);
        propertyTypesLayout->setObjectName("propertyTypesLayout");
        propertyTypesView = new QTreeView(groupBox);
        propertyTypesView->setObjectName("propertyTypesView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(propertyTypesView->sizePolicy().hasHeightForWidth());
        propertyTypesView->setSizePolicy(sizePolicy);
        propertyTypesView->setSelectionBehavior(QAbstractItemView::SelectRows);
        propertyTypesView->setRootIsDecorated(false);
        propertyTypesView->setUniformRowHeights(true);
        propertyTypesView->setHeaderHidden(true);

        propertyTypesLayout->addWidget(propertyTypesView);


        horizontalLayout->addLayout(propertyTypesLayout);


        layout->addWidget(groupBox);


        retranslateUi(PropertyTypesEditor);

        QMetaObject::connectSlotsByName(PropertyTypesEditor);
    } // setupUi

    void retranslateUi(QDialog *PropertyTypesEditor)
    {
        PropertyTypesEditor->setWindowTitle(QCoreApplication::translate("PropertyTypesEditor", "Custom Types Editor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PropertyTypesEditor", "Custom Types", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyTypesEditor: public Ui_PropertyTypesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYTYPESEDITOR_H
