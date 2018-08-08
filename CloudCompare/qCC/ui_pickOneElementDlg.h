/********************************************************************************
** Form generated from reading UI file 'pickOneElementDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKONEELEMENTDLG_H
#define UI_PICKONEELEMENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PickOneElementDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *comboLabel;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PickOneElementDialog)
    {
        if (PickOneElementDialog->objectName().isEmpty())
            PickOneElementDialog->setObjectName(QStringLiteral("PickOneElementDialog"));
        PickOneElementDialog->resize(200, 80);
        PickOneElementDialog->setMinimumSize(QSize(200, 80));
        PickOneElementDialog->setMaximumSize(QSize(200, 80));
        vboxLayout = new QVBoxLayout(PickOneElementDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        comboLabel = new QLabel(PickOneElementDialog);
        comboLabel->setObjectName(QStringLiteral("comboLabel"));

        hboxLayout->addWidget(comboLabel);

        comboBox = new QComboBox(PickOneElementDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        hboxLayout->addWidget(comboBox);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(PickOneElementDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(PickOneElementDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PickOneElementDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PickOneElementDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PickOneElementDialog);
    } // setupUi

    void retranslateUi(QDialog *PickOneElementDialog)
    {
        PickOneElementDialog->setWindowTitle(QApplication::translate("PickOneElementDialog", "Choose parameter", Q_NULLPTR));
        comboLabel->setText(QApplication::translate("PickOneElementDialog", "Elements", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickOneElementDialog: public Ui_PickOneElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKONEELEMENTDLG_H
