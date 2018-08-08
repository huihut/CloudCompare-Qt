/********************************************************************************
** Form generated from reading UI file 'gblSensorProjectDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GBLSENSORPROJECTDLG_H
#define UI_GBLSENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GBLSensorProjectDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *rotationOrderComboBox;
    QDialogButtonBox *buttonBox;
    QTabWidget *propertiesTabWidget;
    QWidget *tabOrientation;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *x1rot;
    QLineEdit *x2rot;
    QLineEdit *x3rot;
    QLabel *label_7;
    QLineEdit *y1rot;
    QLineEdit *y2rot;
    QLineEdit *y3rot;
    QLabel *label_8;
    QLineEdit *z1rot;
    QLineEdit *z2rot;
    QLineEdit *z3rot;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QLineEdit *posXEdit;
    QLineEdit *posYEdit;
    QLineEdit *posZEdit;
    QWidget *tabSteps;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *label_9;
    QDoubleSpinBox *yawStepSpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *label_10;
    QDoubleSpinBox *pitchStepSpinBox;
    QSpacerItem *spacerItem2;
    QWidget *tabOther;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    QLabel *label_11;
    QDoubleSpinBox *uncertaintyDoubleSpinBox;
    QHBoxLayout *hboxLayout4;
    QLabel *label_12;
    QDoubleSpinBox *maxRangeDoubleSpinBox;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *GBLSensorProjectDialog)
    {
        if (GBLSensorProjectDialog->objectName().isEmpty())
            GBLSensorProjectDialog->setObjectName(QStringLiteral("GBLSensorProjectDialog"));
        GBLSensorProjectDialog->resize(400, 250);
        gridLayout = new QGridLayout(GBLSensorProjectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(GBLSensorProjectDialog);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        rotationOrderComboBox = new QComboBox(GBLSensorProjectDialog);
        rotationOrderComboBox->setObjectName(QStringLiteral("rotationOrderComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rotationOrderComboBox->sizePolicy().hasHeightForWidth());
        rotationOrderComboBox->setSizePolicy(sizePolicy);
        rotationOrderComboBox->setEditable(false);
        rotationOrderComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(rotationOrderComboBox);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GBLSensorProjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        propertiesTabWidget = new QTabWidget(GBLSensorProjectDialog);
        propertiesTabWidget->setObjectName(QStringLiteral("propertiesTabWidget"));
        tabOrientation = new QWidget();
        tabOrientation->setObjectName(QStringLiteral("tabOrientation"));
        gridLayout_2 = new QGridLayout(tabOrientation);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(tabOrientation);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        x1rot = new QLineEdit(tabOrientation);
        x1rot->setObjectName(QStringLiteral("x1rot"));

        gridLayout_2->addWidget(x1rot, 1, 1, 1, 1);

        x2rot = new QLineEdit(tabOrientation);
        x2rot->setObjectName(QStringLiteral("x2rot"));

        gridLayout_2->addWidget(x2rot, 1, 2, 1, 1);

        x3rot = new QLineEdit(tabOrientation);
        x3rot->setObjectName(QStringLiteral("x3rot"));

        gridLayout_2->addWidget(x3rot, 1, 3, 1, 1);

        label_7 = new QLabel(tabOrientation);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        y1rot = new QLineEdit(tabOrientation);
        y1rot->setObjectName(QStringLiteral("y1rot"));

        gridLayout_2->addWidget(y1rot, 2, 1, 1, 1);

        y2rot = new QLineEdit(tabOrientation);
        y2rot->setObjectName(QStringLiteral("y2rot"));

        gridLayout_2->addWidget(y2rot, 2, 2, 1, 1);

        y3rot = new QLineEdit(tabOrientation);
        y3rot->setObjectName(QStringLiteral("y3rot"));

        gridLayout_2->addWidget(y3rot, 2, 3, 1, 1);

        label_8 = new QLabel(tabOrientation);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        z1rot = new QLineEdit(tabOrientation);
        z1rot->setObjectName(QStringLiteral("z1rot"));

        gridLayout_2->addWidget(z1rot, 3, 1, 1, 1);

        z2rot = new QLineEdit(tabOrientation);
        z2rot->setObjectName(QStringLiteral("z2rot"));

        gridLayout_2->addWidget(z2rot, 3, 2, 1, 1);

        z3rot = new QLineEdit(tabOrientation);
        z3rot->setObjectName(QStringLiteral("z3rot"));

        gridLayout_2->addWidget(z3rot, 3, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem1, 4, 2, 1, 1);

        label_2 = new QLabel(tabOrientation);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        posXEdit = new QLineEdit(tabOrientation);
        posXEdit->setObjectName(QStringLiteral("posXEdit"));

        gridLayout_2->addWidget(posXEdit, 0, 1, 1, 1);

        posYEdit = new QLineEdit(tabOrientation);
        posYEdit->setObjectName(QStringLiteral("posYEdit"));

        gridLayout_2->addWidget(posYEdit, 0, 2, 1, 1);

        posZEdit = new QLineEdit(tabOrientation);
        posZEdit->setObjectName(QStringLiteral("posZEdit"));

        gridLayout_2->addWidget(posZEdit, 0, 3, 1, 1);

        propertiesTabWidget->addTab(tabOrientation, QString());
        tabSteps = new QWidget();
        tabSteps->setObjectName(QStringLiteral("tabSteps"));
        vboxLayout = new QVBoxLayout(tabSteps);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_9 = new QLabel(tabSteps);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout1->addWidget(label_9);

        yawStepSpinBox = new QDoubleSpinBox(tabSteps);
        yawStepSpinBox->setObjectName(QStringLiteral("yawStepSpinBox"));
        yawStepSpinBox->setDecimals(6);
        yawStepSpinBox->setMaximum(360);
        yawStepSpinBox->setSingleStep(1e-6);
        yawStepSpinBox->setValue(0.005);

        hboxLayout1->addWidget(yawStepSpinBox);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_10 = new QLabel(tabSteps);
        label_10->setObjectName(QStringLiteral("label_10"));

        hboxLayout2->addWidget(label_10);

        pitchStepSpinBox = new QDoubleSpinBox(tabSteps);
        pitchStepSpinBox->setObjectName(QStringLiteral("pitchStepSpinBox"));
        pitchStepSpinBox->setDecimals(6);
        pitchStepSpinBox->setMaximum(360);
        pitchStepSpinBox->setSingleStep(1e-6);
        pitchStepSpinBox->setValue(0.005);

        hboxLayout2->addWidget(pitchStepSpinBox);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        propertiesTabWidget->addTab(tabSteps, QString());
        tabOther = new QWidget();
        tabOther->setObjectName(QStringLiteral("tabOther"));
        vboxLayout1 = new QVBoxLayout(tabOther);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QStringLiteral("label_11"));

        hboxLayout3->addWidget(label_11);

        uncertaintyDoubleSpinBox = new QDoubleSpinBox(tabOther);
        uncertaintyDoubleSpinBox->setObjectName(QStringLiteral("uncertaintyDoubleSpinBox"));
        uncertaintyDoubleSpinBox->setDecimals(4);
        uncertaintyDoubleSpinBox->setSingleStep(0.01);
        uncertaintyDoubleSpinBox->setValue(0.01);

        hboxLayout3->addWidget(uncertaintyDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QStringLiteral("label_12"));

        hboxLayout4->addWidget(label_12);

        maxRangeDoubleSpinBox = new QDoubleSpinBox(tabOther);
        maxRangeDoubleSpinBox->setObjectName(QStringLiteral("maxRangeDoubleSpinBox"));
        maxRangeDoubleSpinBox->setMaximum(1e+12);
        maxRangeDoubleSpinBox->setValue(1e+12);

        hboxLayout4->addWidget(maxRangeDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout4);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);

        propertiesTabWidget->addTab(tabOther, QString());

        gridLayout->addWidget(propertiesTabWidget, 1, 0, 1, 1);


        retranslateUi(GBLSensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GBLSensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GBLSensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GBLSensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *GBLSensorProjectDialog)
    {
        GBLSensorProjectDialog->setWindowTitle(QApplication::translate("GBLSensorProjectDialog", "Sensor parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GBLSensorProjectDialog", "rotation order", Q_NULLPTR));
        rotationOrderComboBox->clear();
        rotationOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("GBLSensorProjectDialog", "yaw then pitch (default)", Q_NULLPTR)
         << QApplication::translate("GBLSensorProjectDialog", "pitch then yaw", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        rotationOrderComboBox->setToolTip(QApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor front direction (yaw = 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("GBLSensorProjectDialog", "X", Q_NULLPTR));
        x1rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", Q_NULLPTR));
        x2rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
        x3rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor lateral direction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("GBLSensorProjectDialog", "Y", Q_NULLPTR));
        y1rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
        y2rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", Q_NULLPTR));
        y3rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor vertical direction (pitch = 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("GBLSensorProjectDialog", "Z", Q_NULLPTR));
        z1rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
        z2rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", Q_NULLPTR));
        z3rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("GBLSensorProjectDialog", "C", Q_NULLPTR));
        posXEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", Q_NULLPTR));
        posYEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", Q_NULLPTR));
        posZEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QApplication::translate("GBLSensorProjectDialog", "Position + Orientation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Rotation around the vertical axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("GBLSensorProjectDialog", "Yaw (degrees)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Rotation around the lateral axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("GBLSensorProjectDialog", "Pitch (degrees)", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabSteps), QApplication::translate("GBLSensorProjectDialog", "Angular steps", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Depth buffer 'uncertainty'", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("GBLSensorProjectDialog", "Uncertainty", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Sensor max range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("GBLSensorProjectDialog", "Max. range", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QApplication::translate("GBLSensorProjectDialog", "Other", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GBLSensorProjectDialog: public Ui_GBLSensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GBLSENSORPROJECTDLG_H
