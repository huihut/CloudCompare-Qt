/********************************************************************************
** Form generated from reading UI file 'labelingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELINGDLG_H
#define UI_LABELINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <ccOctreeSpinBox.h>

QT_BEGIN_NAMESPACE

class Ui_LabelingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    ccOctreeSpinBox *octreeLevelSpinBox;
    QLabel *label_2;
    QSpinBox *minPtsSpinBox;
    QCheckBox *randomColorsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LabelingDialog)
    {
        if (LabelingDialog->objectName().isEmpty())
            LabelingDialog->setObjectName(QStringLiteral("LabelingDialog"));
        LabelingDialog->resize(330, 160);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelingDialog->sizePolicy().hasHeightForWidth());
        LabelingDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LabelingDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(LabelingDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        octreeLevelSpinBox = new ccOctreeSpinBox(LabelingDialog);
        octreeLevelSpinBox->setObjectName(QStringLiteral("octreeLevelSpinBox"));
        octreeLevelSpinBox->setMinimumSize(QSize(0, 25));
        octreeLevelSpinBox->setMinimum(1);
        octreeLevelSpinBox->setMaximum(10);
        octreeLevelSpinBox->setValue(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, octreeLevelSpinBox);

        label_2 = new QLabel(LabelingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        minPtsSpinBox = new QSpinBox(LabelingDialog);
        minPtsSpinBox->setObjectName(QStringLiteral("minPtsSpinBox"));
        minPtsSpinBox->setMinimumSize(QSize(0, 25));
        minPtsSpinBox->setMinimum(0);
        minPtsSpinBox->setMaximum(1000000);
        minPtsSpinBox->setSingleStep(10);
        minPtsSpinBox->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, minPtsSpinBox);


        verticalLayout->addLayout(formLayout);

        randomColorsCheckBox = new QCheckBox(LabelingDialog);
        randomColorsCheckBox->setObjectName(QStringLiteral("randomColorsCheckBox"));

        verticalLayout->addWidget(randomColorsCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LabelingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LabelingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LabelingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LabelingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LabelingDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelingDialog)
    {
        LabelingDialog->setWindowTitle(QApplication::translate("LabelingDialog", "Connected Components", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("LabelingDialog", "Grid subdivision level: the greater, the finest", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("LabelingDialog", "Octree Level", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("LabelingDialog", "Minimum number of points per component", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("LabelingDialog", "Min. points per component", Q_NULLPTR));
        randomColorsCheckBox->setText(QApplication::translate("LabelingDialog", "random colors (warning: overwrites existing ones)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LabelingDialog: public Ui_LabelingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELINGDLG_H
