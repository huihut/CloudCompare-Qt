/********************************************************************************
** Form generated from reading UI file 'sorFilterDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORFILTERDLG_H
#define UI_SORFILTERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SorFilterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *knnSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *nSigmaDoubleSpinBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SorFilterDialog)
    {
        if (SorFilterDialog->objectName().isEmpty())
            SorFilterDialog->setObjectName(QStringLiteral("SorFilterDialog"));
        SorFilterDialog->resize(300, 150);
        verticalLayout = new QVBoxLayout(SorFilterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(SorFilterDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        knnSpinBox = new QSpinBox(SorFilterDialog);
        knnSpinBox->setObjectName(QStringLiteral("knnSpinBox"));
        knnSpinBox->setMinimum(1);
        knnSpinBox->setMaximum(1000000);
        knnSpinBox->setValue(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, knnSpinBox);

        label_4 = new QLabel(SorFilterDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        nSigmaDoubleSpinBox = new QDoubleSpinBox(SorFilterDialog);
        nSigmaDoubleSpinBox->setObjectName(QStringLiteral("nSigmaDoubleSpinBox"));
        nSigmaDoubleSpinBox->setMaximum(10);
        nSigmaDoubleSpinBox->setSingleStep(0.5);
        nSigmaDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, nSigmaDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        label_2 = new QLabel(SorFilterDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SorFilterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SorFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SorFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SorFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SorFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *SorFilterDialog)
    {
        SorFilterDialog->setWindowTitle(QApplication::translate("SorFilterDialog", "Statistical Outlier Removal", Q_NULLPTR));
        label->setText(QApplication::translate("SorFilterDialog", "Number of points to use for\n"
"mean distance estimation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        knnSpinBox->setToolTip(QApplication::translate("SorFilterDialog", "Number of neighbors (used to compute the average distance of each point to its neighbors)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SorFilterDialog", "Standard deviation\n"
"multiplier threshold (nSigma)", Q_NULLPTR));
        label_2->setText(QApplication::translate("SorFilterDialog", "(max distance = average distance + nSigma * std. dev.)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SorFilterDialog: public Ui_SorFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORFILTERDLG_H
