/********************************************************************************
** Form generated from reading UI file 'SAFDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFDLG_H
#define UI_SAFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ccSAFDlg
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_1;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;

    void setupUi(QDialog *ccSAFDlg)
    {
        if (ccSAFDlg->objectName().isEmpty())
            ccSAFDlg->setObjectName(QStringLiteral("ccSAFDlg"));
        ccSAFDlg->resize(316, 203);
        buttonBox = new QDialogButtonBox(ccSAFDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 150, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ccSAFDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 111, 16));
        label_2 = new QLabel(ccSAFDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 291, 20));
        label_3 = new QLabel(ccSAFDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 100, 41, 16));
        doubleSpinBox_1 = new QDoubleSpinBox(ccSAFDlg);
        doubleSpinBox_1->setObjectName(QStringLiteral("doubleSpinBox_1"));
        doubleSpinBox_1->setGeometry(QRect(80, 100, 81, 21));
        doubleSpinBox_1->setMaximum(90);
        doubleSpinBox_1->setValue(20);
        doubleSpinBox_2 = new QDoubleSpinBox(ccSAFDlg);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(190, 100, 71, 21));
        doubleSpinBox_2->setMaximum(90);
        doubleSpinBox_2->setValue(70);
        label_5 = new QLabel(ccSAFDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 100, 16, 16));

        retranslateUi(ccSAFDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ccSAFDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ccSAFDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ccSAFDlg);
    } // setupUi

    void retranslateUi(QDialog *ccSAFDlg)
    {
        ccSAFDlg->setWindowTitle(QApplication::translate("ccSAFDlg", "Scan Angle Filter", Q_NULLPTR));
        label->setText(QApplication::translate("ccSAFDlg", "Scan Angle Filter", Q_NULLPTR));
        label_2->setText(QApplication::translate("ccSAFDlg", "Filter the scanning angle in a range of points", Q_NULLPTR));
        label_3->setText(QApplication::translate("ccSAFDlg", "From", Q_NULLPTR));
        label_5->setText(QApplication::translate("ccSAFDlg", "to", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ccSAFDlg: public Ui_ccSAFDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFDLG_H
