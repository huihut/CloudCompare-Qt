/********************************************************************************
** Form generated from reading UI file 'askTwoDoubleValuesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKTWODOUBLEVALUESDLG_H
#define UI_ASKTWODOUBLEVALUESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskTwoDoubleValuesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBox1;
    QSpacerItem *spacerItem;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBox2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskTwoDoubleValuesDialog)
    {
        if (AskTwoDoubleValuesDialog->objectName().isEmpty())
            AskTwoDoubleValuesDialog->setObjectName(QStringLiteral("AskTwoDoubleValuesDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskTwoDoubleValuesDialog->sizePolicy().hasHeightForWidth());
        AskTwoDoubleValuesDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskTwoDoubleValuesDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label1 = new QLabel(AskTwoDoubleValuesDialog);
        label1->setObjectName(QStringLiteral("label1"));

        hboxLayout->addWidget(label1);

        doubleSpinBox1 = new QDoubleSpinBox(AskTwoDoubleValuesDialog);
        doubleSpinBox1->setObjectName(QStringLiteral("doubleSpinBox1"));

        hboxLayout->addWidget(doubleSpinBox1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label2 = new QLabel(AskTwoDoubleValuesDialog);
        label2->setObjectName(QStringLiteral("label2"));

        hboxLayout->addWidget(label2);

        doubleSpinBox2 = new QDoubleSpinBox(AskTwoDoubleValuesDialog);
        doubleSpinBox2->setObjectName(QStringLiteral("doubleSpinBox2"));

        hboxLayout->addWidget(doubleSpinBox2);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskTwoDoubleValuesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskTwoDoubleValuesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskTwoDoubleValuesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskTwoDoubleValuesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskTwoDoubleValuesDialog);
    } // setupUi

    void retranslateUi(QDialog *AskTwoDoubleValuesDialog)
    {
        AskTwoDoubleValuesDialog->setWindowTitle(QApplication::translate("AskTwoDoubleValuesDialog", "Set Two Values", Q_NULLPTR));
        label1->setText(QApplication::translate("AskTwoDoubleValuesDialog", "Value 1", Q_NULLPTR));
        label2->setText(QApplication::translate("AskTwoDoubleValuesDialog", "Value 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AskTwoDoubleValuesDialog: public Ui_AskTwoDoubleValuesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKTWODOUBLEVALUESDLG_H
