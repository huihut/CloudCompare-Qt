/********************************************************************************
** Form generated from reading UI file 'sfArithmeticsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFARITHMETICSDLG_H
#define UI_SFARITHMETICSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SFArithmeticsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *comboLabel;
    QComboBox *sf1ComboBox;
    QLabel *comboLabel_3;
    QComboBox *operationComboBox;
    QLabel *comboLabel_2;
    QComboBox *sf2ComboBox;
    QDoubleSpinBox *constantDoubleSpinBox;
    QCheckBox *updateSF1CheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SFArithmeticsDlg)
    {
        if (SFArithmeticsDlg->objectName().isEmpty())
            SFArithmeticsDlg->setObjectName(QStringLiteral("SFArithmeticsDlg"));
        SFArithmeticsDlg->resize(300, 180);
        verticalLayout = new QVBoxLayout(SFArithmeticsDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        comboLabel = new QLabel(SFArithmeticsDlg);
        comboLabel->setObjectName(QStringLiteral("comboLabel"));
        comboLabel->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, comboLabel);

        sf1ComboBox = new QComboBox(SFArithmeticsDlg);
        sf1ComboBox->setObjectName(QStringLiteral("sf1ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sf1ComboBox->sizePolicy().hasHeightForWidth());
        sf1ComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, sf1ComboBox);

        comboLabel_3 = new QLabel(SFArithmeticsDlg);
        comboLabel_3->setObjectName(QStringLiteral("comboLabel_3"));
        comboLabel_3->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, comboLabel_3);

        operationComboBox = new QComboBox(SFArithmeticsDlg);
        operationComboBox->setObjectName(QStringLiteral("operationComboBox"));
        operationComboBox->setMaxVisibleItems(20);

        formLayout->setWidget(1, QFormLayout::FieldRole, operationComboBox);

        comboLabel_2 = new QLabel(SFArithmeticsDlg);
        comboLabel_2->setObjectName(QStringLiteral("comboLabel_2"));
        comboLabel_2->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(2, QFormLayout::LabelRole, comboLabel_2);

        sf2ComboBox = new QComboBox(SFArithmeticsDlg);
        sf2ComboBox->setObjectName(QStringLiteral("sf2ComboBox"));
        sizePolicy.setHeightForWidth(sf2ComboBox->sizePolicy().hasHeightForWidth());
        sf2ComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, sf2ComboBox);

        constantDoubleSpinBox = new QDoubleSpinBox(SFArithmeticsDlg);
        constantDoubleSpinBox->setObjectName(QStringLiteral("constantDoubleSpinBox"));
        constantDoubleSpinBox->setEnabled(false);
        constantDoubleSpinBox->setDecimals(6);
        constantDoubleSpinBox->setMinimum(-1e+6);
        constantDoubleSpinBox->setMaximum(1e+6);
        constantDoubleSpinBox->setValue(1);

        formLayout->setWidget(3, QFormLayout::FieldRole, constantDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        updateSF1CheckBox = new QCheckBox(SFArithmeticsDlg);
        updateSF1CheckBox->setObjectName(QStringLiteral("updateSF1CheckBox"));

        verticalLayout->addWidget(updateSF1CheckBox);

        buttonBox = new QDialogButtonBox(SFArithmeticsDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SFArithmeticsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SFArithmeticsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SFArithmeticsDlg, SLOT(reject()));

        operationComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SFArithmeticsDlg);
    } // setupUi

    void retranslateUi(QDialog *SFArithmeticsDlg)
    {
        SFArithmeticsDlg->setWindowTitle(QApplication::translate("SFArithmeticsDlg", "Scalar fields arithmetics", Q_NULLPTR));
        comboLabel->setText(QApplication::translate("SFArithmeticsDlg", "SF 1", Q_NULLPTR));
        comboLabel_3->setText(QApplication::translate("SFArithmeticsDlg", "operation", Q_NULLPTR));
        operationComboBox->clear();
        operationComboBox->insertItems(0, QStringList()
         << QApplication::translate("SFArithmeticsDlg", "plus", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "minus", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "multiply", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "divided by", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "square root", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "power of 2", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "power of 3", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "exp", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "log", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "log10", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "cos", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "sin", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "tan", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "acos", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "asin", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "atan", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "integer part", Q_NULLPTR)
         << QApplication::translate("SFArithmeticsDlg", "inverse (1/x)", Q_NULLPTR)
        );
        comboLabel_2->setText(QApplication::translate("SFArithmeticsDlg", "SF 2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        updateSF1CheckBox->setToolTip(QApplication::translate("SFArithmeticsDlg", "Update the first scalar field directly (instead of creating a new SF)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updateSF1CheckBox->setText(QApplication::translate("SFArithmeticsDlg", "Update SF1 directly", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SFArithmeticsDlg: public Ui_SFArithmeticsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFARITHMETICSDLG_H
