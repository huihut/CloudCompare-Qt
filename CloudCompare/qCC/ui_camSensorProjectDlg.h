/********************************************************************************
** Form generated from reading UI file 'camSensorProjectDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMSENSORPROJECTDLG_H
#define UI_CAMSENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CamSensorProjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *propertiesTabWidget;
    QWidget *tabOrientation;
    QGridLayout *gridLayout_2;
    QLineEdit *z1rot;
    QSpacerItem *spacerItem;
    QLineEdit *y3rot;
    QLineEdit *z3rot;
    QLineEdit *x3rot;
    QLineEdit *x1rot;
    QLineEdit *y1rot;
    QLineEdit *x2rot;
    QLineEdit *z2rot;
    QLineEdit *y2rot;
    QLineEdit *posXEdit;
    QLineEdit *posYEdit;
    QLineEdit *posZEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_2;
    QWidget *tabOther;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *focalDoubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *fovDoubleSpinBox;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QSpinBox *arrayWSpinBox;
    QLabel *label_14;
    QSpinBox *arrayHSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *pixWDoubleSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *pixHDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QDoubleSpinBox *zNearDoubleSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *zFarDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *skewDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *cxDoubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *cyDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *distInfoTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CamSensorProjectDialog)
    {
        if (CamSensorProjectDialog->objectName().isEmpty())
            CamSensorProjectDialog->setObjectName(QStringLiteral("CamSensorProjectDialog"));
        CamSensorProjectDialog->resize(450, 340);
        verticalLayout = new QVBoxLayout(CamSensorProjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        propertiesTabWidget = new QTabWidget(CamSensorProjectDialog);
        propertiesTabWidget->setObjectName(QStringLiteral("propertiesTabWidget"));
        tabOrientation = new QWidget();
        tabOrientation->setObjectName(QStringLiteral("tabOrientation"));
        gridLayout_2 = new QGridLayout(tabOrientation);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        z1rot = new QLineEdit(tabOrientation);
        z1rot->setObjectName(QStringLiteral("z1rot"));

        gridLayout_2->addWidget(z1rot, 3, 2, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem, 4, 3, 1, 1);

        y3rot = new QLineEdit(tabOrientation);
        y3rot->setObjectName(QStringLiteral("y3rot"));

        gridLayout_2->addWidget(y3rot, 2, 4, 1, 1);

        z3rot = new QLineEdit(tabOrientation);
        z3rot->setObjectName(QStringLiteral("z3rot"));

        gridLayout_2->addWidget(z3rot, 3, 4, 1, 1);

        x3rot = new QLineEdit(tabOrientation);
        x3rot->setObjectName(QStringLiteral("x3rot"));

        gridLayout_2->addWidget(x3rot, 1, 4, 1, 1);

        x1rot = new QLineEdit(tabOrientation);
        x1rot->setObjectName(QStringLiteral("x1rot"));

        gridLayout_2->addWidget(x1rot, 1, 2, 1, 1);

        y1rot = new QLineEdit(tabOrientation);
        y1rot->setObjectName(QStringLiteral("y1rot"));

        gridLayout_2->addWidget(y1rot, 2, 2, 1, 1);

        x2rot = new QLineEdit(tabOrientation);
        x2rot->setObjectName(QStringLiteral("x2rot"));

        gridLayout_2->addWidget(x2rot, 1, 3, 1, 1);

        z2rot = new QLineEdit(tabOrientation);
        z2rot->setObjectName(QStringLiteral("z2rot"));

        gridLayout_2->addWidget(z2rot, 3, 3, 1, 1);

        y2rot = new QLineEdit(tabOrientation);
        y2rot->setObjectName(QStringLiteral("y2rot"));

        gridLayout_2->addWidget(y2rot, 2, 3, 1, 1);

        posXEdit = new QLineEdit(tabOrientation);
        posXEdit->setObjectName(QStringLiteral("posXEdit"));

        gridLayout_2->addWidget(posXEdit, 1, 1, 1, 1);

        posYEdit = new QLineEdit(tabOrientation);
        posYEdit->setObjectName(QStringLiteral("posYEdit"));

        gridLayout_2->addWidget(posYEdit, 2, 1, 1, 1);

        posZEdit = new QLineEdit(tabOrientation);
        posZEdit->setObjectName(QStringLiteral("posZEdit"));

        gridLayout_2->addWidget(posZEdit, 3, 1, 1, 1);

        label_6 = new QLabel(tabOrientation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(tabOrientation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 3, 1, 1);

        label_8 = new QLabel(tabOrientation);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 4, 1, 1);

        label_2 = new QLabel(tabOrientation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        propertiesTabWidget->addTab(tabOrientation, QString());
        tabOther = new QWidget();
        tabOther->setObjectName(QStringLiteral("tabOther"));
        formLayout = new QFormLayout(tabOther);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(tabOther);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        focalDoubleSpinBox = new QDoubleSpinBox(tabOther);
        focalDoubleSpinBox->setObjectName(QStringLiteral("focalDoubleSpinBox"));
        focalDoubleSpinBox->setDecimals(6);
        focalDoubleSpinBox->setMaximum(1e+9);
        focalDoubleSpinBox->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, focalDoubleSpinBox);

        label_5 = new QLabel(tabOther);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        fovDoubleSpinBox = new QDoubleSpinBox(tabOther);
        fovDoubleSpinBox->setObjectName(QStringLiteral("fovDoubleSpinBox"));
        fovDoubleSpinBox->setMaximum(180);
        fovDoubleSpinBox->setValue(45);

        formLayout->setWidget(1, QFormLayout::FieldRole, fovDoubleSpinBox);

        label_13 = new QLabel(tabOther);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        arrayWSpinBox = new QSpinBox(tabOther);
        arrayWSpinBox->setObjectName(QStringLiteral("arrayWSpinBox"));
        arrayWSpinBox->setMaximum(65536);
        arrayWSpinBox->setSingleStep(100);
        arrayWSpinBox->setValue(800);

        horizontalLayout->addWidget(arrayWSpinBox);

        label_14 = new QLabel(tabOther);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout->addWidget(label_14);

        arrayHSpinBox = new QSpinBox(tabOther);
        arrayHSpinBox->setObjectName(QStringLiteral("arrayHSpinBox"));
        arrayHSpinBox->setMaximum(65536);
        arrayHSpinBox->setSingleStep(100);
        arrayHSpinBox->setValue(600);

        horizontalLayout->addWidget(arrayHSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(tabOther);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pixWDoubleSpinBox = new QDoubleSpinBox(tabOther);
        pixWDoubleSpinBox->setObjectName(QStringLiteral("pixWDoubleSpinBox"));
        pixWDoubleSpinBox->setDecimals(6);
        pixWDoubleSpinBox->setMaximum(1e+9);
        pixWDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(pixWDoubleSpinBox);

        label_15 = new QLabel(tabOther);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_2->addWidget(label_15);

        pixHDoubleSpinBox = new QDoubleSpinBox(tabOther);
        pixHDoubleSpinBox->setObjectName(QStringLiteral("pixHDoubleSpinBox"));
        pixHDoubleSpinBox->setDecimals(6);
        pixHDoubleSpinBox->setMaximum(1e+9);
        pixHDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(pixHDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);

        zNearDoubleSpinBox = new QDoubleSpinBox(tabOther);
        zNearDoubleSpinBox->setObjectName(QStringLiteral("zNearDoubleSpinBox"));
        zNearDoubleSpinBox->setDecimals(6);
        zNearDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(5, QFormLayout::FieldRole, zNearDoubleSpinBox);

        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        zFarDoubleSpinBox = new QDoubleSpinBox(tabOther);
        zFarDoubleSpinBox->setObjectName(QStringLiteral("zFarDoubleSpinBox"));
        zFarDoubleSpinBox->setDecimals(6);
        zFarDoubleSpinBox->setMaximum(1e+9);
        zFarDoubleSpinBox->setValue(100);

        formLayout->setWidget(6, QFormLayout::FieldRole, zFarDoubleSpinBox);

        label_4 = new QLabel(tabOther);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        skewDoubleSpinBox = new QDoubleSpinBox(tabOther);
        skewDoubleSpinBox->setObjectName(QStringLiteral("skewDoubleSpinBox"));
        skewDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(7, QFormLayout::FieldRole, skewDoubleSpinBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cxDoubleSpinBox = new QDoubleSpinBox(tabOther);
        cxDoubleSpinBox->setObjectName(QStringLiteral("cxDoubleSpinBox"));
        cxDoubleSpinBox->setDecimals(3);
        cxDoubleSpinBox->setMinimum(-100000);
        cxDoubleSpinBox->setMaximum(1e+6);
        cxDoubleSpinBox->setValue(400);

        horizontalLayout_3->addWidget(cxDoubleSpinBox);

        label_16 = new QLabel(tabOther);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        cyDoubleSpinBox = new QDoubleSpinBox(tabOther);
        cyDoubleSpinBox->setObjectName(QStringLiteral("cyDoubleSpinBox"));
        cyDoubleSpinBox->setDecimals(3);
        cyDoubleSpinBox->setMinimum(-1e+6);
        cyDoubleSpinBox->setMaximum(1e+7);
        cyDoubleSpinBox->setValue(300);

        horizontalLayout_3->addWidget(cyDoubleSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label_9 = new QLabel(tabOther);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        propertiesTabWidget->addTab(tabOther, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        distInfoTextEdit = new QTextEdit(tab);
        distInfoTextEdit->setObjectName(QStringLiteral("distInfoTextEdit"));
        distInfoTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(distInfoTextEdit);

        propertiesTabWidget->addTab(tab, QString());

        verticalLayout->addWidget(propertiesTabWidget);

        buttonBox = new QDialogButtonBox(CamSensorProjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(propertiesTabWidget, posXEdit);
        QWidget::setTabOrder(posXEdit, posYEdit);
        QWidget::setTabOrder(posYEdit, posZEdit);
        QWidget::setTabOrder(posZEdit, x1rot);
        QWidget::setTabOrder(x1rot, y1rot);
        QWidget::setTabOrder(y1rot, z1rot);
        QWidget::setTabOrder(z1rot, x2rot);
        QWidget::setTabOrder(x2rot, y2rot);
        QWidget::setTabOrder(y2rot, z2rot);
        QWidget::setTabOrder(z2rot, x3rot);
        QWidget::setTabOrder(x3rot, y3rot);
        QWidget::setTabOrder(y3rot, z3rot);
        QWidget::setTabOrder(z3rot, focalDoubleSpinBox);
        QWidget::setTabOrder(focalDoubleSpinBox, fovDoubleSpinBox);
        QWidget::setTabOrder(fovDoubleSpinBox, arrayWSpinBox);
        QWidget::setTabOrder(arrayWSpinBox, arrayHSpinBox);
        QWidget::setTabOrder(arrayHSpinBox, cxDoubleSpinBox);
        QWidget::setTabOrder(cxDoubleSpinBox, cyDoubleSpinBox);
        QWidget::setTabOrder(cyDoubleSpinBox, pixWDoubleSpinBox);
        QWidget::setTabOrder(pixWDoubleSpinBox, pixHDoubleSpinBox);
        QWidget::setTabOrder(pixHDoubleSpinBox, zNearDoubleSpinBox);
        QWidget::setTabOrder(zNearDoubleSpinBox, zFarDoubleSpinBox);
        QWidget::setTabOrder(zFarDoubleSpinBox, skewDoubleSpinBox);
        QWidget::setTabOrder(skewDoubleSpinBox, distInfoTextEdit);

        retranslateUi(CamSensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CamSensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CamSensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CamSensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *CamSensorProjectDialog)
    {
        CamSensorProjectDialog->setWindowTitle(QApplication::translate("CamSensorProjectDialog", "Sensor parameters", Q_NULLPTR));
        z1rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        y3rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        z3rot->setText(QApplication::translate("CamSensorProjectDialog", "1", Q_NULLPTR));
        x3rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        x1rot->setText(QApplication::translate("CamSensorProjectDialog", "1", Q_NULLPTR));
        y1rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        x2rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        z2rot->setText(QApplication::translate("CamSensorProjectDialog", "0", Q_NULLPTR));
        y2rot->setText(QApplication::translate("CamSensorProjectDialog", "1", Q_NULLPTR));
        posXEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", Q_NULLPTR));
        posYEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", Q_NULLPTR));
        posZEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor front direction (yaw = 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("CamSensorProjectDialog", "X (right)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor lateral direction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("CamSensorProjectDialog", "Y (up)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor vertical direction (pitch = 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("CamSensorProjectDialog", "Z (inv. view dir.)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("CamSensorProjectDialog", "Center", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QApplication::translate("CamSensorProjectDialog", "Position + Orientation", Q_NULLPTR));
        label->setText(QApplication::translate("CamSensorProjectDialog", "vert. focal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        focalDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "vertical focal (in pixels)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        focalDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix", Q_NULLPTR));
        label_5->setText(QApplication::translate("CamSensorProjectDialog", "vert. f.o.v.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fovDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Vertical field of view (degrees)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fovDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " deg.", Q_NULLPTR));
        label_13->setText(QApplication::translate("CamSensorProjectDialog", "array size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        arrayWSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD array width (pixels)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        arrayWSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix.", Q_NULLPTR));
        label_14->setText(QApplication::translate("CamSensorProjectDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        arrayHSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD array height (pixels)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        arrayHSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("CamSensorProjectDialog", "Pixel size (metric units)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("CamSensorProjectDialog", "pixel size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pixWDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD pixel width (metric units)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("CamSensorProjectDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pixHDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD pixel height (metric units)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("CamSensorProjectDialog", "zNear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zNearDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Near cutting plane (CCD pixel width (metric units - for display)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("CamSensorProjectDialog", "zFar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zFarDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Far cutting plane (CCD pixel width (metric units - for display)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("CamSensorProjectDialog", "skew", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        skewDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Skew parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cxDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Principal point X coordinate (in pixels)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cxDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix.", Q_NULLPTR));
        label_16->setText(QApplication::translate("CamSensorProjectDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cyDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Principal point Y coordinate (in pixels)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cyDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix.", Q_NULLPTR));
        label_9->setText(QApplication::translate("CamSensorProjectDialog", "principal point", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QApplication::translate("CamSensorProjectDialog", "Intrinsic params", Q_NULLPTR));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tab), QApplication::translate("CamSensorProjectDialog", "Distortion / uncertainty", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CamSensorProjectDialog: public Ui_CamSensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMSENSORPROJECTDLG_H
