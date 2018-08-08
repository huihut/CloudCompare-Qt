/********************************************************************************
** Form generated from reading UI file 'askOneIntValueDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKONEINTVALUEDLG_H
#define UI_ASKONEINTVALUEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskOneIntValueDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *valueLabel;
    QSpinBox *valueSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskOneIntValueDialog)
    {
        if (AskOneIntValueDialog->objectName().isEmpty())
            AskOneIntValueDialog->setObjectName(QStringLiteral("AskOneIntValueDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskOneIntValueDialog->sizePolicy().hasHeightForWidth());
        AskOneIntValueDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskOneIntValueDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        valueLabel = new QLabel(AskOneIntValueDialog);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        hboxLayout->addWidget(valueLabel);

        valueSpinBox = new QSpinBox(AskOneIntValueDialog);
        valueSpinBox->setObjectName(QStringLiteral("valueSpinBox"));

        hboxLayout->addWidget(valueSpinBox);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskOneIntValueDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskOneIntValueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskOneIntValueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskOneIntValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskOneIntValueDialog);
    } // setupUi

    void retranslateUi(QDialog *AskOneIntValueDialog)
    {
        AskOneIntValueDialog->setWindowTitle(QApplication::translate("AskOneIntValueDialog", "Set Value", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("AskOneIntValueDialog", "Value", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AskOneIntValueDialog: public Ui_AskOneIntValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKONEINTVALUEDLG_H
