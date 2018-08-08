/********************************************************************************
** Form generated from reading UI file 'computeOctreeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTEOCTREEDLG_H
#define UI_COMPUTEOCTREEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComputeOctreeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headerLabel;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *defaultRadioButton;
    QRadioButton *cellSizeRadioButton;
    QDoubleSpinBox *cellSizeDoubleSpinBox;
    QRadioButton *customBBRadioButton;
    QToolButton *customBBToolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ComputeOctreeDialog)
    {
        if (ComputeOctreeDialog->objectName().isEmpty())
            ComputeOctreeDialog->setObjectName(QStringLiteral("ComputeOctreeDialog"));
        ComputeOctreeDialog->resize(300, 180);
        verticalLayout = new QVBoxLayout(ComputeOctreeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        headerLabel = new QLabel(ComputeOctreeDialog);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));

        verticalLayout->addWidget(headerLabel);

        groupBox = new QGroupBox(ComputeOctreeDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        defaultRadioButton = new QRadioButton(groupBox);
        defaultRadioButton->setObjectName(QStringLiteral("defaultRadioButton"));
        defaultRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, defaultRadioButton);

        cellSizeRadioButton = new QRadioButton(groupBox);
        cellSizeRadioButton->setObjectName(QStringLiteral("cellSizeRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cellSizeRadioButton);

        cellSizeDoubleSpinBox = new QDoubleSpinBox(groupBox);
        cellSizeDoubleSpinBox->setObjectName(QStringLiteral("cellSizeDoubleSpinBox"));
        cellSizeDoubleSpinBox->setEnabled(false);
        cellSizeDoubleSpinBox->setDecimals(6);
        cellSizeDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(1, QFormLayout::FieldRole, cellSizeDoubleSpinBox);

        customBBRadioButton = new QRadioButton(groupBox);
        customBBRadioButton->setObjectName(QStringLiteral("customBBRadioButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, customBBRadioButton);

        customBBToolButton = new QToolButton(groupBox);
        customBBToolButton->setObjectName(QStringLiteral("customBBToolButton"));
        customBBToolButton->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, customBBToolButton);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ComputeOctreeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ComputeOctreeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComputeOctreeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComputeOctreeDialog, SLOT(reject()));
        QObject::connect(cellSizeRadioButton, SIGNAL(toggled(bool)), cellSizeDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(customBBRadioButton, SIGNAL(toggled(bool)), customBBToolButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ComputeOctreeDialog);
    } // setupUi

    void retranslateUi(QDialog *ComputeOctreeDialog)
    {
        ComputeOctreeDialog->setWindowTitle(QApplication::translate("ComputeOctreeDialog", "Compute Octree", Q_NULLPTR));
        headerLabel->setText(QApplication::translate("ComputeOctreeDialog", "Max subdivision level: ??", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ComputeOctreeDialog", "Octree box", Q_NULLPTR));
        defaultRadioButton->setText(QApplication::translate("ComputeOctreeDialog", "Default", Q_NULLPTR));
        cellSizeRadioButton->setText(QApplication::translate("ComputeOctreeDialog", "Cell size at max level", Q_NULLPTR));
        customBBRadioButton->setText(QApplication::translate("ComputeOctreeDialog", "Custom bounding box", Q_NULLPTR));
        customBBToolButton->setText(QApplication::translate("ComputeOctreeDialog", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComputeOctreeDialog: public Ui_ComputeOctreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTEOCTREEDLG_H
