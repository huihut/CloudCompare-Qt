/********************************************************************************
** Form generated from reading UI file 'noiseFilterDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISEFILTERDLG_H
#define UI_NOISEFILTERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NoiseFilterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QRadioButton *knnRadioButton;
    QRadioButton *radiusRadioButton;
    QSpinBox *knnSpinBox;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QRadioButton *relativeRadioButton;
    QRadioButton *absErrorRadioButton;
    QDoubleSpinBox *nSigmaDoubleSpinBox;
    QDoubleSpinBox *absErrorDoubleSpinBox;
    QCheckBox *removeIsolatedPointsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NoiseFilterDialog)
    {
        if (NoiseFilterDialog->objectName().isEmpty())
            NoiseFilterDialog->setObjectName(QStringLiteral("NoiseFilterDialog"));
        NoiseFilterDialog->resize(302, 228);
        verticalLayout = new QVBoxLayout(NoiseFilterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(NoiseFilterDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        knnRadioButton = new QRadioButton(groupBox);
        knnRadioButton->setObjectName(QStringLiteral("knnRadioButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, knnRadioButton);

        radiusRadioButton = new QRadioButton(groupBox);
        radiusRadioButton->setObjectName(QStringLiteral("radiusRadioButton"));
        radiusRadioButton->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, radiusRadioButton);

        knnSpinBox = new QSpinBox(groupBox);
        knnSpinBox->setObjectName(QStringLiteral("knnSpinBox"));
        knnSpinBox->setEnabled(false);
        knnSpinBox->setMinimum(3);
        knnSpinBox->setMaximum(1000000000);
        knnSpinBox->setValue(8);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, knnSpinBox);

        radiusDoubleSpinBox = new QDoubleSpinBox(groupBox);
        radiusDoubleSpinBox->setObjectName(QStringLiteral("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1e+9);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, radiusDoubleSpinBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NoiseFilterDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        relativeRadioButton = new QRadioButton(groupBox_2);
        relativeRadioButton->setObjectName(QStringLiteral("relativeRadioButton"));
        relativeRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, relativeRadioButton);

        absErrorRadioButton = new QRadioButton(groupBox_2);
        absErrorRadioButton->setObjectName(QStringLiteral("absErrorRadioButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, absErrorRadioButton);

        nSigmaDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        nSigmaDoubleSpinBox->setObjectName(QStringLiteral("nSigmaDoubleSpinBox"));
        nSigmaDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::LabelRole, nSigmaDoubleSpinBox);

        absErrorDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        absErrorDoubleSpinBox->setObjectName(QStringLiteral("absErrorDoubleSpinBox"));
        absErrorDoubleSpinBox->setEnabled(false);
        absErrorDoubleSpinBox->setDecimals(6);
        absErrorDoubleSpinBox->setMaximum(1e+9);
        absErrorDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, absErrorDoubleSpinBox);


        verticalLayout->addWidget(groupBox_2);

        removeIsolatedPointsCheckBox = new QCheckBox(NoiseFilterDialog);
        removeIsolatedPointsCheckBox->setObjectName(QStringLiteral("removeIsolatedPointsCheckBox"));

        verticalLayout->addWidget(removeIsolatedPointsCheckBox);

        buttonBox = new QDialogButtonBox(NoiseFilterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NoiseFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NoiseFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NoiseFilterDialog, SLOT(reject()));
        QObject::connect(knnRadioButton, SIGNAL(toggled(bool)), knnSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(radiusRadioButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(relativeRadioButton, SIGNAL(toggled(bool)), nSigmaDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(absErrorRadioButton, SIGNAL(toggled(bool)), absErrorDoubleSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NoiseFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *NoiseFilterDialog)
    {
        NoiseFilterDialog->setWindowTitle(QApplication::translate("NoiseFilterDialog", "Filter noise", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("NoiseFilterDialog", "Neighbors", Q_NULLPTR));
        knnRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Points (kNN)", Q_NULLPTR));
        radiusRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Radius (Sphere)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("NoiseFilterDialog", "Max error", Q_NULLPTR));
        relativeRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Relative", Q_NULLPTR));
        absErrorRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Absolute", Q_NULLPTR));
        removeIsolatedPointsCheckBox->setText(QApplication::translate("NoiseFilterDialog", "Remove isolated points", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NoiseFilterDialog: public Ui_NoiseFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISEFILTERDLG_H
