/********************************************************************************
** Form generated from reading UI file 'askOneStringDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKONESTRINGDLG_H
#define UI_ASKONESTRINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskOneStringDlg
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *valueLabel;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskOneStringDlg)
    {
        if (AskOneStringDlg->objectName().isEmpty())
            AskOneStringDlg->setObjectName(QStringLiteral("AskOneStringDlg"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskOneStringDlg->sizePolicy().hasHeightForWidth());
        AskOneStringDlg->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskOneStringDlg);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        valueLabel = new QLabel(AskOneStringDlg);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        hboxLayout->addWidget(valueLabel);

        lineEdit = new QLineEdit(AskOneStringDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        hboxLayout->addWidget(lineEdit);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskOneStringDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskOneStringDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskOneStringDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskOneStringDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskOneStringDlg);
    } // setupUi

    void retranslateUi(QDialog *AskOneStringDlg)
    {
        AskOneStringDlg->setWindowTitle(QApplication::translate("AskOneStringDlg", "Set Name", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("AskOneStringDlg", "Label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AskOneStringDlg: public Ui_AskOneStringDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKONESTRINGDLG_H
