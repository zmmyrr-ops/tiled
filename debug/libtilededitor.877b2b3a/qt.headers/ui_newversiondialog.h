/********************************************************************************
** Form generated from reading UI file 'newversiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWVERSIONDIALOG_H
#define UI_NEWVERSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

namespace Tiled {

class Ui_NewVersionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *downloadButton;
    QPushButton *releaseNotesButton;
    QLabel *logo;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QLabel *label;

    void setupUi(QDialog *Tiled__NewVersionDialog)
    {
        if (Tiled__NewVersionDialog->objectName().isEmpty())
            Tiled__NewVersionDialog->setObjectName("Tiled__NewVersionDialog");
        Tiled__NewVersionDialog->resize(866, 311);
        gridLayout = new QGridLayout(Tiled__NewVersionDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer_3);

        downloadButton = new QPushButton(Tiled__NewVersionDialog);
        downloadButton->setObjectName("downloadButton");

        buttonLayout->addWidget(downloadButton);

        releaseNotesButton = new QPushButton(Tiled__NewVersionDialog);
        releaseNotesButton->setObjectName("releaseNotesButton");

        buttonLayout->addWidget(releaseNotesButton);


        gridLayout->addLayout(buttonLayout, 2, 0, 1, 3);

        logo = new QLabel(Tiled__NewVersionDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/about-tiled-logo.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(logo, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        line = new QFrame(Tiled__NewVersionDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 1);

        label = new QLabel(Tiled__NewVersionDialog);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 2, 2, 1);


        retranslateUi(Tiled__NewVersionDialog);

        releaseNotesButton->setDefault(true);


        QMetaObject::connectSlotsByName(Tiled__NewVersionDialog);
    } // setupUi

    void retranslateUi(QDialog *Tiled__NewVersionDialog)
    {
        Tiled__NewVersionDialog->setWindowTitle(QCoreApplication::translate("Tiled::NewVersionDialog", "Update Available", nullptr));
        downloadButton->setText(QCoreApplication::translate("Tiled::NewVersionDialog", "Download \342\206\227", nullptr));
        releaseNotesButton->setText(QCoreApplication::translate("Tiled::NewVersionDialog", "Release Notes \342\206\227", nullptr));
        logo->setText(QString());
        label->setText(QCoreApplication::translate("Tiled::NewVersionDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Tiled 1.2.5</span> is available!<br/><br/>Current version is Tiled 1.2.3.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace Tiled

namespace Tiled {
namespace Ui {
    class NewVersionDialog: public Ui_NewVersionDialog {};
} // namespace Ui
} // namespace Tiled

#endif // UI_NEWVERSIONDIALOG_H
