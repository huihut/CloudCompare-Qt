/********************************************************************************
** Form generated from reading UI file 'globalShiftSettingsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHIFTSETTINGSDLG_H
#define UI_GLOBALSHIFTSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShiftSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *maxAbsCoordSpinBox;
    QLabel *label_2;
    QSpinBox *maxAbsDiagSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShiftSettingsDialog)
    {
        if (GlobalShiftSettingsDialog->objectName().isEmpty())
            GlobalShiftSettingsDialog->setObjectName(QStringLiteral("GlobalShiftSettingsDialog"));
        GlobalShiftSettingsDialog->resize(370, 280);
        verticalLayout = new QVBoxLayout(GlobalShiftSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(GlobalShiftSettingsDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setStyleSheet(QStringLiteral("color: grey; font-style: italic;"));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(plainTextEdit);

        label_3 = new QLabel(GlobalShiftSettingsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(GlobalShiftSettingsDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        maxAbsCoordSpinBox = new QSpinBox(GlobalShiftSettingsDialog);
        maxAbsCoordSpinBox->setObjectName(QStringLiteral("maxAbsCoordSpinBox"));
        maxAbsCoordSpinBox->setMinimum(2);
        maxAbsCoordSpinBox->setMaximum(12);
        maxAbsCoordSpinBox->setValue(4);

        formLayout->setWidget(0, QFormLayout::FieldRole, maxAbsCoordSpinBox);

        label_2 = new QLabel(GlobalShiftSettingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxAbsDiagSpinBox = new QSpinBox(GlobalShiftSettingsDialog);
        maxAbsDiagSpinBox->setObjectName(QStringLiteral("maxAbsDiagSpinBox"));
        maxAbsDiagSpinBox->setMinimum(2);
        maxAbsDiagSpinBox->setMaximum(12);
        maxAbsDiagSpinBox->setValue(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxAbsDiagSpinBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(GlobalShiftSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GlobalShiftSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShiftSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShiftSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GlobalShiftSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GlobalShiftSettingsDialog)
    {
        GlobalShiftSettingsDialog->setWindowTitle(QApplication::translate("GlobalShiftSettingsDialog", "Global Shift settings", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("GlobalShiftSettingsDialog", "The Global Shift & Scale mechanism aims at reducing the loss of precision when working with big coordinates.\n"
"\n"
"As CloudCompare and most graphic cards work with 32 bits floating point values, their resolution and the computation precision is limited. The bigger the numbers the less resolute they are.\n"
"\n"
"Here below you can set the limits above which the 'Global Shift & Scale' mechanism will be triggered.\n"
"\n"
"Note: the diagonal is not tested at loading time.", Q_NULLPTR));
        label_3->setText(QApplication::translate("GlobalShiftSettingsDialog", "Global Shift & Scale triggering limits:", Q_NULLPTR));
        label->setText(QApplication::translate("GlobalShiftSettingsDialog", "Max absolute coordinate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxAbsCoordSpinBox->setToolTip(QApplication::translate("GlobalShiftSettingsDialog", "CloudCompare will suggest to apply a Global Shift to the loaded entities if their coordinates are above this limit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxAbsCoordSpinBox->setSuffix(QString());
        maxAbsCoordSpinBox->setPrefix(QApplication::translate("GlobalShiftSettingsDialog", "10^", Q_NULLPTR));
        label_2->setText(QApplication::translate("GlobalShiftSettingsDialog", "Max entity diagonal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxAbsDiagSpinBox->setToolTip(QApplication::translate("GlobalShiftSettingsDialog", "CloudCompare will suggest to apply a Global Scale to the loaded entities if their bounding-box diagonal is above this limit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxAbsDiagSpinBox->setSuffix(QString());
        maxAbsDiagSpinBox->setPrefix(QApplication::translate("GlobalShiftSettingsDialog", "10^", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GlobalShiftSettingsDialog: public Ui_GlobalShiftSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHIFTSETTINGSDLG_H
