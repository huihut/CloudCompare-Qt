/********************************************************************************
** Form generated from reading UI file 'sensorComputeDistancesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOMPUTEDISTANCESDLG_H
#define UI_SENSORCOMPUTEDISTANCESDLG_H

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

class Ui_sensorComputeDistancesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkSquaredDistance;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sensorComputeDistancesDlg)
    {
        if (sensorComputeDistancesDlg->objectName().isEmpty())
            sensorComputeDistancesDlg->setObjectName(QStringLiteral("sensorComputeDistancesDlg"));
        sensorComputeDistancesDlg->resize(178, 67);
        verticalLayout = new QVBoxLayout(sensorComputeDistancesDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkSquaredDistance = new QCheckBox(sensorComputeDistancesDlg);
        checkSquaredDistance->setObjectName(QStringLiteral("checkSquaredDistance"));

        verticalLayout->addWidget(checkSquaredDistance);

        buttonBox = new QDialogButtonBox(sensorComputeDistancesDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sensorComputeDistancesDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), sensorComputeDistancesDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sensorComputeDistancesDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(sensorComputeDistancesDlg);
    } // setupUi

    void retranslateUi(QDialog *sensorComputeDistancesDlg)
    {
        sensorComputeDistancesDlg->setWindowTitle(QApplication::translate("sensorComputeDistancesDlg", "Sensor range computation", Q_NULLPTR));
        checkSquaredDistance->setText(QApplication::translate("sensorComputeDistancesDlg", "Squared distances", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sensorComputeDistancesDlg: public Ui_sensorComputeDistancesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOMPUTEDISTANCESDLG_H
