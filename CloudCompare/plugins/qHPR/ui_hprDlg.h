/********************************************************************************
** Form generated from reading UI file 'hprDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRDLG_H
#define UI_HPRDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HPRDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *octreeLevelSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HPRDialog)
    {
        if (HPRDialog->objectName().isEmpty())
            HPRDialog->setObjectName(QStringLiteral("HPRDialog"));
        HPRDialog->resize(178, 72);
        vboxLayout = new QVBoxLayout(HPRDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(HPRDialog);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        octreeLevelSpinBox = new QSpinBox(HPRDialog);
        octreeLevelSpinBox->setObjectName(QStringLiteral("octreeLevelSpinBox"));
        octreeLevelSpinBox->setValue(7);

        hboxLayout->addWidget(octreeLevelSpinBox);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(HPRDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(HPRDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HPRDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HPRDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HPRDialog);
    } // setupUi

    void retranslateUi(QDialog *HPRDialog)
    {
        HPRDialog->setWindowTitle(QApplication::translate("HPRDialog", "HPR", Q_NULLPTR));
        label->setText(QApplication::translate("HPRDialog", "Level", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        octreeLevelSpinBox->setToolTip(QApplication::translate("HPRDialog", "Octree Level (for point cloud shape approx.)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class HPRDialog: public Ui_HPRDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRDLG_H
