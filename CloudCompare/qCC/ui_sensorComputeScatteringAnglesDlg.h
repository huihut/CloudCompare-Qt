/********************************************************************************
** Form generated from reading UI file 'sensorComputeScatteringAnglesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOMPUTESCATTERINGANGLESDLG_H
#define UI_SENSORCOMPUTESCATTERINGANGLESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_sensorComputeScatteringAnglesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *anglesToDegCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sensorComputeScatteringAnglesDlg)
    {
        if (sensorComputeScatteringAnglesDlg->objectName().isEmpty())
            sensorComputeScatteringAnglesDlg->setObjectName(QStringLiteral("sensorComputeScatteringAnglesDlg"));
        sensorComputeScatteringAnglesDlg->resize(178, 67);
        verticalLayout = new QVBoxLayout(sensorComputeScatteringAnglesDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        anglesToDegCheckbox = new QCheckBox(sensorComputeScatteringAnglesDlg);
        anglesToDegCheckbox->setObjectName(QStringLiteral("anglesToDegCheckbox"));

        verticalLayout->addWidget(anglesToDegCheckbox);

        buttonBox = new QDialogButtonBox(sensorComputeScatteringAnglesDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sensorComputeScatteringAnglesDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), sensorComputeScatteringAnglesDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sensorComputeScatteringAnglesDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(sensorComputeScatteringAnglesDlg);
    } // setupUi

    void retranslateUi(QDialog *sensorComputeScatteringAnglesDlg)
    {
        sensorComputeScatteringAnglesDlg->setWindowTitle(QApplication::translate("sensorComputeScatteringAnglesDlg", "Compute scattering angles", Q_NULLPTR));
        anglesToDegCheckbox->setText(QApplication::translate("sensorComputeScatteringAnglesDlg", "Convert angles to degree", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sensorComputeScatteringAnglesDlg: public Ui_sensorComputeScatteringAnglesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOMPUTESCATTERINGANGLESDLG_H
