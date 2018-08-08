/********************************************************************************
** Form generated from reading UI file 'StatisticalOutliersRemoverDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICALOUTLIERSREMOVERDLG_H
#define UI_STATISTICALOUTLIERSREMOVERDLG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatisticalOutliersRemoverDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinK;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinStd;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatisticalOutliersRemoverDlg)
    {
        if (StatisticalOutliersRemoverDlg->objectName().isEmpty())
            StatisticalOutliersRemoverDlg->setObjectName(QStringLiteral("StatisticalOutliersRemoverDlg"));
        StatisticalOutliersRemoverDlg->resize(300, 150);
        verticalLayout = new QVBoxLayout(StatisticalOutliersRemoverDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(StatisticalOutliersRemoverDlg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinK = new QSpinBox(StatisticalOutliersRemoverDlg);
        spinK->setObjectName(QStringLiteral("spinK"));
        spinK->setMinimum(0);
        spinK->setMaximum(1000);
        spinK->setValue(8);

        horizontalLayout->addWidget(spinK);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(StatisticalOutliersRemoverDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinStd = new QDoubleSpinBox(StatisticalOutliersRemoverDlg);
        spinStd->setObjectName(QStringLiteral("spinStd"));
        spinStd->setDecimals(2);
        spinStd->setValue(1);

        horizontalLayout_2->addWidget(spinStd);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(StatisticalOutliersRemoverDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(StatisticalOutliersRemoverDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StatisticalOutliersRemoverDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), StatisticalOutliersRemoverDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StatisticalOutliersRemoverDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(StatisticalOutliersRemoverDlg);
    } // setupUi

    void retranslateUi(QDialog *StatisticalOutliersRemoverDlg)
    {
        StatisticalOutliersRemoverDlg->setWindowTitle(QApplication::translate("StatisticalOutliersRemoverDlg", "Statistical Outliers Removal", Q_NULLPTR));
        label->setText(QApplication::translate("StatisticalOutliersRemoverDlg", "Number of points to use for \n"
"mean distance estimation", Q_NULLPTR));
        label_2->setText(QApplication::translate("StatisticalOutliersRemoverDlg", "Standard deviation\n"
" multiplier threshold (nSigma)", Q_NULLPTR));
        label_3->setText(QApplication::translate("StatisticalOutliersRemoverDlg", "(max distance = average distance + nSigma * std. dev.)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatisticalOutliersRemoverDlg: public Ui_StatisticalOutliersRemoverDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICALOUTLIERSREMOVERDLG_H
