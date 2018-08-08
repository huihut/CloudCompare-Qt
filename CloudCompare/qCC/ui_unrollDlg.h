/********************************************************************************
** Form generated from reading UI file 'unrollDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNROLLDLG_H
#define UI_UNROLLDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnrollDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *comboBoxUnrollShapeType;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *comboBoxAxisDimension;
    QLabel *labelAngle;
    QDoubleSpinBox *doubleSpinBoxAngle;
    QLabel *radiusLabel;
    QDoubleSpinBox *doubleSpinBoxRadius;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBoxAxisPosition;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBoxAxisX;
    QSpacerItem *spacerItem2;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBoxAxisY;
    QSpacerItem *spacerItem3;
    QLabel *label3;
    QDoubleSpinBox *doubleSpinBoxAxisZ;
    QHBoxLayout *hboxLayout3;
    QCheckBox *checkBoxAuto;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UnrollDialog)
    {
        if (UnrollDialog->objectName().isEmpty())
            UnrollDialog->setObjectName(QStringLiteral("UnrollDialog"));
        UnrollDialog->resize(507, 186);
        vboxLayout = new QVBoxLayout(UnrollDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_3 = new QLabel(UnrollDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout->addWidget(label_3);

        comboBoxUnrollShapeType = new QComboBox(UnrollDialog);
        comboBoxUnrollShapeType->setObjectName(QStringLiteral("comboBoxUnrollShapeType"));

        hboxLayout->addWidget(comboBoxUnrollShapeType);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label = new QLabel(UnrollDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(label);

        comboBoxAxisDimension = new QComboBox(UnrollDialog);
        comboBoxAxisDimension->setObjectName(QStringLiteral("comboBoxAxisDimension"));

        hboxLayout1->addWidget(comboBoxAxisDimension);

        labelAngle = new QLabel(UnrollDialog);
        labelAngle->setObjectName(QStringLiteral("labelAngle"));

        hboxLayout1->addWidget(labelAngle);

        doubleSpinBoxAngle = new QDoubleSpinBox(UnrollDialog);
        doubleSpinBoxAngle->setObjectName(QStringLiteral("doubleSpinBoxAngle"));
        doubleSpinBoxAngle->setDecimals(2);
        doubleSpinBoxAngle->setMaximum(180);
        doubleSpinBoxAngle->setValue(15);

        hboxLayout1->addWidget(doubleSpinBoxAngle);

        radiusLabel = new QLabel(UnrollDialog);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));
        radiusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(radiusLabel);

        doubleSpinBoxRadius = new QDoubleSpinBox(UnrollDialog);
        doubleSpinBoxRadius->setObjectName(QStringLiteral("doubleSpinBoxRadius"));
        doubleSpinBoxRadius->setDecimals(6);
        doubleSpinBoxRadius->setMaximum(1e+9);
        doubleSpinBoxRadius->setValue(100);

        hboxLayout1->addWidget(doubleSpinBoxRadius);

        spacerItem1 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout1);

        groupBoxAxisPosition = new QGroupBox(UnrollDialog);
        groupBoxAxisPosition->setObjectName(QStringLiteral("groupBoxAxisPosition"));
        vboxLayout1 = new QVBoxLayout(groupBoxAxisPosition);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label1 = new QLabel(groupBoxAxisPosition);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label1);

        doubleSpinBoxAxisX = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisX->setObjectName(QStringLiteral("doubleSpinBoxAxisX"));
        doubleSpinBoxAxisX->setEnabled(true);
        doubleSpinBoxAxisX->setDecimals(6);
        doubleSpinBoxAxisX->setMinimum(-1e+9);
        doubleSpinBoxAxisX->setMaximum(1e+9);

        hboxLayout2->addWidget(doubleSpinBoxAxisX);

        spacerItem2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        label2 = new QLabel(groupBoxAxisPosition);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label2);

        doubleSpinBoxAxisY = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisY->setObjectName(QStringLiteral("doubleSpinBoxAxisY"));
        doubleSpinBoxAxisY->setEnabled(true);
        doubleSpinBoxAxisY->setDecimals(6);
        doubleSpinBoxAxisY->setMinimum(-1e+9);
        doubleSpinBoxAxisY->setMaximum(1e+9);

        hboxLayout2->addWidget(doubleSpinBoxAxisY);

        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        label3 = new QLabel(groupBoxAxisPosition);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label3);

        doubleSpinBoxAxisZ = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisZ->setObjectName(QStringLiteral("doubleSpinBoxAxisZ"));
        doubleSpinBoxAxisZ->setEnabled(true);
        doubleSpinBoxAxisZ->setDecimals(6);
        doubleSpinBoxAxisZ->setMinimum(-1e+9);
        doubleSpinBoxAxisZ->setMaximum(1e+9);

        hboxLayout2->addWidget(doubleSpinBoxAxisZ);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        checkBoxAuto = new QCheckBox(groupBoxAxisPosition);
        checkBoxAuto->setObjectName(QStringLiteral("checkBoxAuto"));
        checkBoxAuto->setEnabled(true);
        checkBoxAuto->setChecked(false);

        hboxLayout3->addWidget(checkBoxAuto);

        spacerItem4 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);


        vboxLayout1->addLayout(hboxLayout3);


        vboxLayout->addWidget(groupBoxAxisPosition);

        buttonBox = new QDialogButtonBox(UnrollDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(UnrollDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UnrollDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UnrollDialog, SLOT(reject()));

        comboBoxAxisDimension->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UnrollDialog);
    } // setupUi

    void retranslateUi(QDialog *UnrollDialog)
    {
        UnrollDialog->setWindowTitle(QApplication::translate("UnrollDialog", "Unroll", Q_NULLPTR));
        label_3->setText(QApplication::translate("UnrollDialog", "Type", Q_NULLPTR));
        comboBoxUnrollShapeType->clear();
        comboBoxUnrollShapeType->insertItems(0, QStringList()
         << QApplication::translate("UnrollDialog", "Cylinder", Q_NULLPTR)
         << QApplication::translate("UnrollDialog", "Cone", Q_NULLPTR)
        );
        label->setText(QApplication::translate("UnrollDialog", "Axis", Q_NULLPTR));
        comboBoxAxisDimension->clear();
        comboBoxAxisDimension->insertItems(0, QStringList()
         << QApplication::translate("UnrollDialog", "X", Q_NULLPTR)
         << QApplication::translate("UnrollDialog", "Y", Q_NULLPTR)
         << QApplication::translate("UnrollDialog", "Z", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        labelAngle->setToolTip(QApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelAngle->setText(QApplication::translate("UnrollDialog", "Half angle (degrees)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxAngle->setToolTip(QApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinBoxAngle->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        radiusLabel->setToolTip(QApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radiusLabel->setText(QApplication::translate("UnrollDialog", "Radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxRadius->setToolTip(QApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBoxAxisPosition->setTitle(QApplication::translate("UnrollDialog", "Axis position", Q_NULLPTR));
        label1->setText(QApplication::translate("UnrollDialog", "X", Q_NULLPTR));
        label2->setText(QApplication::translate("UnrollDialog", "Y", Q_NULLPTR));
        label3->setText(QApplication::translate("UnrollDialog", "Z", Q_NULLPTR));
        checkBoxAuto->setText(QApplication::translate("UnrollDialog", "Auto (gravity center)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UnrollDialog: public Ui_UnrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNROLLDLG_H
