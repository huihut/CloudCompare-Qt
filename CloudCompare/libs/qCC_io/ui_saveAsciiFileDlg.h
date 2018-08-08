/********************************************************************************
** Form generated from reading UI file 'saveAsciiFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEASCIIFILEDLG_H
#define UI_SAVEASCIIFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AsciiSaveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *coordsPrecisionSpinBox;
    QLabel *label_2;
    QSpinBox *sfPrecisionSpinBox;
    QLabel *label_3;
    QComboBox *separatorComboBox;
    QLabel *label_4;
    QComboBox *orderComboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *columnsHeaderCheckBox;
    QCheckBox *pointCountHeaderCheckBox;
    QCheckBox *saveFloatColorsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AsciiSaveDialog)
    {
        if (AsciiSaveDialog->objectName().isEmpty())
            AsciiSaveDialog->setObjectName(QStringLiteral("AsciiSaveDialog"));
        AsciiSaveDialog->resize(320, 250);
        verticalLayout_2 = new QVBoxLayout(AsciiSaveDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(AsciiSaveDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        coordsPrecisionSpinBox = new QSpinBox(AsciiSaveDialog);
        coordsPrecisionSpinBox->setObjectName(QStringLiteral("coordsPrecisionSpinBox"));
        coordsPrecisionSpinBox->setMaximum(16);
        coordsPrecisionSpinBox->setValue(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, coordsPrecisionSpinBox);

        label_2 = new QLabel(AsciiSaveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sfPrecisionSpinBox = new QSpinBox(AsciiSaveDialog);
        sfPrecisionSpinBox->setObjectName(QStringLiteral("sfPrecisionSpinBox"));
        sfPrecisionSpinBox->setMaximum(12);
        sfPrecisionSpinBox->setValue(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, sfPrecisionSpinBox);

        label_3 = new QLabel(AsciiSaveDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        separatorComboBox = new QComboBox(AsciiSaveDialog);
        separatorComboBox->setObjectName(QStringLiteral("separatorComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, separatorComboBox);

        label_4 = new QLabel(AsciiSaveDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        orderComboBox = new QComboBox(AsciiSaveDialog);
        orderComboBox->setObjectName(QStringLiteral("orderComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, orderComboBox);


        verticalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(AsciiSaveDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        columnsHeaderCheckBox = new QCheckBox(groupBox);
        columnsHeaderCheckBox->setObjectName(QStringLiteral("columnsHeaderCheckBox"));

        verticalLayout->addWidget(columnsHeaderCheckBox);

        pointCountHeaderCheckBox = new QCheckBox(groupBox);
        pointCountHeaderCheckBox->setObjectName(QStringLiteral("pointCountHeaderCheckBox"));

        verticalLayout->addWidget(pointCountHeaderCheckBox);


        verticalLayout_2->addWidget(groupBox);

        saveFloatColorsCheckBox = new QCheckBox(AsciiSaveDialog);
        saveFloatColorsCheckBox->setObjectName(QStringLiteral("saveFloatColorsCheckBox"));

        verticalLayout_2->addWidget(saveFloatColorsCheckBox);

        buttonBox = new QDialogButtonBox(AsciiSaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AsciiSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AsciiSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AsciiSaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AsciiSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiSaveDialog)
    {
        AsciiSaveDialog->setWindowTitle(QApplication::translate("AsciiSaveDialog", "Save ASCII file", Q_NULLPTR));
        label->setText(QApplication::translate("AsciiSaveDialog", "coordinates precision", Q_NULLPTR));
        label_2->setText(QApplication::translate("AsciiSaveDialog", "scalar precision", Q_NULLPTR));
        label_3->setText(QApplication::translate("AsciiSaveDialog", "separator", Q_NULLPTR));
        separatorComboBox->clear();
        separatorComboBox->insertItems(0, QStringList()
         << QApplication::translate("AsciiSaveDialog", "space", Q_NULLPTR)
         << QApplication::translate("AsciiSaveDialog", "semicolon", Q_NULLPTR)
         << QApplication::translate("AsciiSaveDialog", "comma", Q_NULLPTR)
         << QApplication::translate("AsciiSaveDialog", "tabulation", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("AsciiSaveDialog", "order", Q_NULLPTR));
        orderComboBox->clear();
        orderComboBox->insertItems(0, QStringList()
         << QApplication::translate("AsciiSaveDialog", "[ASC] point, color, SF(s), normal", Q_NULLPTR)
         << QApplication::translate("AsciiSaveDialog", "[PTS] point, SF(s), color, normal", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("AsciiSaveDialog", "Header", Q_NULLPTR));
        columnsHeaderCheckBox->setText(QApplication::translate("AsciiSaveDialog", "columns title", Q_NULLPTR));
        pointCountHeaderCheckBox->setText(QApplication::translate("AsciiSaveDialog", "number of points (separate line)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveFloatColorsCheckBox->setToolTip(QApplication::translate("AsciiSaveDialog", "Save RGB color components as floats values between 0 and 1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveFloatColorsCheckBox->setText(QApplication::translate("AsciiSaveDialog", "Save colors as float values (0-1)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AsciiSaveDialog: public Ui_AsciiSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEASCIIFILEDLG_H
