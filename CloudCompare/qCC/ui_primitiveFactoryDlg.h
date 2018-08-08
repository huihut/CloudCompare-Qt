/********************************************************************************
** Form generated from reading UI file 'primitiveFactoryDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMITIVEFACTORYDLG_H
#define UI_PRIMITIVEFACTORYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimitiveFactoryDlg
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *planeTab;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *planeWidthDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *planeHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *boxTab;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *boxDxDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *boxDyDoubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *boxDzDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *sphereTab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDoubleSpinBox *sphereRadiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *cylTab;
    QGridLayout *gridLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *cylRadiusDoubleSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *cylHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *coneTab;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QDoubleSpinBox *coneTopRadiusDoubleSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *coneBottomRadiusDoubleSpinBox;
    QLabel *label_11;
    QDoubleSpinBox *coneHeightDoubleSpinBox;
    QGroupBox *snoutGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QDoubleSpinBox *coneXOffsetDoubleSpinBox;
    QLabel *label_13;
    QDoubleSpinBox *coneYOffsetDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *torusTab;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_5;
    QLabel *label_14;
    QDoubleSpinBox *torusInsideRadiusDoubleSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *torusOutsideRadiusDoubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *torusAngleDoubleSpinBox;
    QGroupBox *torusRectGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QDoubleSpinBox *torusRectSectionHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *dishTab;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_13;
    QLabel *label_18;
    QDoubleSpinBox *dishRadiusDoubleSpinBox;
    QLabel *label_19;
    QDoubleSpinBox *dishHeightDoubleSpinBox;
    QGroupBox *dishEllipsoidGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_39;
    QDoubleSpinBox *dishRadius2DoubleSpinBox;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_40;
    QSpinBox *precisionSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *createPushButton;
    QPushButton *closePushButton;
    QSpacerItem *verticalSpacer_14;

    void setupUi(QDialog *PrimitiveFactoryDlg)
    {
        if (PrimitiveFactoryDlg->objectName().isEmpty())
            PrimitiveFactoryDlg->setObjectName(QStringLiteral("PrimitiveFactoryDlg"));
        PrimitiveFactoryDlg->resize(615, 300);
        verticalLayout_6 = new QVBoxLayout(PrimitiveFactoryDlg);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(PrimitiveFactoryDlg);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        planeTab = new QWidget();
        planeTab->setObjectName(QStringLiteral("planeTab"));
        gridLayout = new QGridLayout(planeTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(planeTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        planeWidthDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeWidthDoubleSpinBox->setObjectName(QStringLiteral("planeWidthDoubleSpinBox"));
        planeWidthDoubleSpinBox->setDecimals(6);
        planeWidthDoubleSpinBox->setMinimum(1e-6);
        planeWidthDoubleSpinBox->setMaximum(1e+8);
        planeWidthDoubleSpinBox->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, planeWidthDoubleSpinBox);

        label_2 = new QLabel(planeTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        planeHeightDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeHeightDoubleSpinBox->setObjectName(QStringLiteral("planeHeightDoubleSpinBox"));
        planeHeightDoubleSpinBox->setDecimals(6);
        planeHeightDoubleSpinBox->setMinimum(1e-6);
        planeHeightDoubleSpinBox->setMaximum(1e+8);
        planeHeightDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, planeHeightDoubleSpinBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(333, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/primPlane.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(planeTab, icon, QString());
        boxTab = new QWidget();
        boxTab->setObjectName(QStringLiteral("boxTab"));
        gridLayout_2 = new QGridLayout(boxTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(boxTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        boxDxDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDxDoubleSpinBox->setObjectName(QStringLiteral("boxDxDoubleSpinBox"));
        boxDxDoubleSpinBox->setDecimals(6);
        boxDxDoubleSpinBox->setMinimum(1e-6);
        boxDxDoubleSpinBox->setMaximum(1e+8);
        boxDxDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, boxDxDoubleSpinBox);

        label_4 = new QLabel(boxTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        boxDyDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDyDoubleSpinBox->setObjectName(QStringLiteral("boxDyDoubleSpinBox"));
        boxDyDoubleSpinBox->setDecimals(6);
        boxDyDoubleSpinBox->setMinimum(1e-6);
        boxDyDoubleSpinBox->setMaximum(1e+8);
        boxDyDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, boxDyDoubleSpinBox);

        label_5 = new QLabel(boxTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        boxDzDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDzDoubleSpinBox->setObjectName(QStringLiteral("boxDzDoubleSpinBox"));
        boxDzDoubleSpinBox->setDecimals(6);
        boxDzDoubleSpinBox->setMinimum(1e-6);
        boxDzDoubleSpinBox->setMaximum(1e+8);
        boxDzDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, boxDzDoubleSpinBox);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(334, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/primBox.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(boxTab, icon1, QString());
        sphereTab = new QWidget();
        sphereTab->setObjectName(QStringLiteral("sphereTab"));
        gridLayout_3 = new QGridLayout(sphereTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(sphereTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        sphereRadiusDoubleSpinBox = new QDoubleSpinBox(sphereTab);
        sphereRadiusDoubleSpinBox->setObjectName(QStringLiteral("sphereRadiusDoubleSpinBox"));
        sphereRadiusDoubleSpinBox->setDecimals(6);
        sphereRadiusDoubleSpinBox->setMinimum(1e-6);
        sphereRadiusDoubleSpinBox->setMaximum(1e+8);
        sphereRadiusDoubleSpinBox->setValue(2);

        horizontalLayout->addWidget(sphereRadiusDoubleSpinBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(317, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/primSphere.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(sphereTab, icon2, QString());
        cylTab = new QWidget();
        cylTab->setObjectName(QStringLiteral("cylTab"));
        gridLayout_6 = new QGridLayout(cylTab);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_7 = new QLabel(cylTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        cylRadiusDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylRadiusDoubleSpinBox->setObjectName(QStringLiteral("cylRadiusDoubleSpinBox"));
        cylRadiusDoubleSpinBox->setDecimals(6);
        cylRadiusDoubleSpinBox->setMinimum(1e-6);
        cylRadiusDoubleSpinBox->setMaximum(1e+8);
        cylRadiusDoubleSpinBox->setValue(2);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, cylRadiusDoubleSpinBox);

        label_8 = new QLabel(cylTab);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_8);

        cylHeightDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylHeightDoubleSpinBox->setObjectName(QStringLiteral("cylHeightDoubleSpinBox"));
        cylHeightDoubleSpinBox->setDecimals(6);
        cylHeightDoubleSpinBox->setMinimum(1e-6);
        cylHeightDoubleSpinBox->setMaximum(1e+8);
        cylHeightDoubleSpinBox->setValue(5);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, cylHeightDoubleSpinBox);


        gridLayout_6->addLayout(formLayout_6, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(316, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 1, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/primCylinder.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(cylTab, icon3, QString());
        coneTab = new QWidget();
        coneTab->setObjectName(QStringLiteral("coneTab"));
        gridLayout_4 = new QGridLayout(coneTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_10 = new QLabel(coneTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        coneTopRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneTopRadiusDoubleSpinBox->setObjectName(QStringLiteral("coneTopRadiusDoubleSpinBox"));
        coneTopRadiusDoubleSpinBox->setDecimals(6);
        coneTopRadiusDoubleSpinBox->setMinimum(0);
        coneTopRadiusDoubleSpinBox->setMaximum(1e+8);
        coneTopRadiusDoubleSpinBox->setValue(0);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, coneTopRadiusDoubleSpinBox);

        label_9 = new QLabel(coneTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        coneBottomRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneBottomRadiusDoubleSpinBox->setObjectName(QStringLiteral("coneBottomRadiusDoubleSpinBox"));
        coneBottomRadiusDoubleSpinBox->setDecimals(6);
        coneBottomRadiusDoubleSpinBox->setMinimum(0);
        coneBottomRadiusDoubleSpinBox->setMaximum(1e+8);
        coneBottomRadiusDoubleSpinBox->setValue(2);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, coneBottomRadiusDoubleSpinBox);

        label_11 = new QLabel(coneTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_11);

        coneHeightDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneHeightDoubleSpinBox->setObjectName(QStringLiteral("coneHeightDoubleSpinBox"));
        coneHeightDoubleSpinBox->setDecimals(6);
        coneHeightDoubleSpinBox->setMinimum(1e-6);
        coneHeightDoubleSpinBox->setMaximum(1e+8);
        coneHeightDoubleSpinBox->setValue(3);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, coneHeightDoubleSpinBox);


        verticalLayout->addLayout(formLayout_4);

        snoutGroupBox = new QGroupBox(coneTab);
        snoutGroupBox->setObjectName(QStringLiteral("snoutGroupBox"));
        snoutGroupBox->setCheckable(true);
        snoutGroupBox->setChecked(false);
        formLayout_3 = new QFormLayout(snoutGroupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_12 = new QLabel(snoutGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        coneXOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneXOffsetDoubleSpinBox->setObjectName(QStringLiteral("coneXOffsetDoubleSpinBox"));
        coneXOffsetDoubleSpinBox->setDecimals(6);
        coneXOffsetDoubleSpinBox->setMinimum(0);
        coneXOffsetDoubleSpinBox->setMaximum(1e+8);
        coneXOffsetDoubleSpinBox->setValue(0);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, coneXOffsetDoubleSpinBox);

        label_13 = new QLabel(snoutGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        coneYOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneYOffsetDoubleSpinBox->setObjectName(QStringLiteral("coneYOffsetDoubleSpinBox"));
        coneYOffsetDoubleSpinBox->setDecimals(6);
        coneYOffsetDoubleSpinBox->setMinimum(0);
        coneYOffsetDoubleSpinBox->setMaximum(1e+8);
        coneYOffsetDoubleSpinBox->setValue(0);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, coneYOffsetDoubleSpinBox);


        verticalLayout->addWidget(snoutGroupBox);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/primCone.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(coneTab, icon4, QString());
        torusTab = new QWidget();
        torusTab->setObjectName(QStringLiteral("torusTab"));
        gridLayout_5 = new QGridLayout(torusTab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_14 = new QLabel(torusTab);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_14);

        torusInsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusInsideRadiusDoubleSpinBox->setObjectName(QStringLiteral("torusInsideRadiusDoubleSpinBox"));
        torusInsideRadiusDoubleSpinBox->setDecimals(6);
        torusInsideRadiusDoubleSpinBox->setMinimum(1e-6);
        torusInsideRadiusDoubleSpinBox->setMaximum(1e+8);
        torusInsideRadiusDoubleSpinBox->setValue(1);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, torusInsideRadiusDoubleSpinBox);

        label_15 = new QLabel(torusTab);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_15);

        torusOutsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusOutsideRadiusDoubleSpinBox->setObjectName(QStringLiteral("torusOutsideRadiusDoubleSpinBox"));
        torusOutsideRadiusDoubleSpinBox->setDecimals(6);
        torusOutsideRadiusDoubleSpinBox->setMinimum(1e-6);
        torusOutsideRadiusDoubleSpinBox->setMaximum(1e+8);
        torusOutsideRadiusDoubleSpinBox->setValue(1.5);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, torusOutsideRadiusDoubleSpinBox);

        label_16 = new QLabel(torusTab);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

        torusAngleDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusAngleDoubleSpinBox->setObjectName(QStringLiteral("torusAngleDoubleSpinBox"));
        torusAngleDoubleSpinBox->setDecimals(6);
        torusAngleDoubleSpinBox->setMinimum(1e-6);
        torusAngleDoubleSpinBox->setMaximum(360);
        torusAngleDoubleSpinBox->setValue(360);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, torusAngleDoubleSpinBox);


        verticalLayout_2->addLayout(formLayout_5);

        torusRectGroupBox = new QGroupBox(torusTab);
        torusRectGroupBox->setObjectName(QStringLiteral("torusRectGroupBox"));
        torusRectGroupBox->setCheckable(true);
        torusRectGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(torusRectGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_17 = new QLabel(torusRectGroupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_2->addWidget(label_17);

        torusRectSectionHeightDoubleSpinBox = new QDoubleSpinBox(torusRectGroupBox);
        torusRectSectionHeightDoubleSpinBox->setObjectName(QStringLiteral("torusRectSectionHeightDoubleSpinBox"));
        torusRectSectionHeightDoubleSpinBox->setDecimals(6);
        torusRectSectionHeightDoubleSpinBox->setMinimum(1e-6);
        torusRectSectionHeightDoubleSpinBox->setMaximum(1e+8);
        torusRectSectionHeightDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(torusRectSectionHeightDoubleSpinBox);


        verticalLayout_2->addWidget(torusRectGroupBox);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(267, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/primTorus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(torusTab, icon5, QString());
        dishTab = new QWidget();
        dishTab->setObjectName(QStringLiteral("dishTab"));
        gridLayout_13 = new QGridLayout(dishTab);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        label_18 = new QLabel(dishTab);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_18);

        dishRadiusDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishRadiusDoubleSpinBox->setObjectName(QStringLiteral("dishRadiusDoubleSpinBox"));
        dishRadiusDoubleSpinBox->setDecimals(6);
        dishRadiusDoubleSpinBox->setMinimum(1e-6);
        dishRadiusDoubleSpinBox->setMaximum(1e+8);
        dishRadiusDoubleSpinBox->setValue(1);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, dishRadiusDoubleSpinBox);

        label_19 = new QLabel(dishTab);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_19);

        dishHeightDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishHeightDoubleSpinBox->setObjectName(QStringLiteral("dishHeightDoubleSpinBox"));
        dishHeightDoubleSpinBox->setDecimals(6);
        dishHeightDoubleSpinBox->setMinimum(1e-6);
        dishHeightDoubleSpinBox->setMaximum(1e+8);
        dishHeightDoubleSpinBox->setValue(0.5);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, dishHeightDoubleSpinBox);


        verticalLayout_5->addLayout(formLayout_13);

        dishEllipsoidGroupBox = new QGroupBox(dishTab);
        dishEllipsoidGroupBox->setObjectName(QStringLiteral("dishEllipsoidGroupBox"));
        dishEllipsoidGroupBox->setCheckable(true);
        dishEllipsoidGroupBox->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(dishEllipsoidGroupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_39 = new QLabel(dishEllipsoidGroupBox);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_5->addWidget(label_39);

        dishRadius2DoubleSpinBox = new QDoubleSpinBox(dishEllipsoidGroupBox);
        dishRadius2DoubleSpinBox->setObjectName(QStringLiteral("dishRadius2DoubleSpinBox"));
        dishRadius2DoubleSpinBox->setDecimals(6);
        dishRadius2DoubleSpinBox->setMinimum(1e-6);
        dishRadius2DoubleSpinBox->setMaximum(1e+8);
        dishRadius2DoubleSpinBox->setValue(1);

        horizontalLayout_5->addWidget(dishRadius2DoubleSpinBox);


        verticalLayout_5->addWidget(dishEllipsoidGroupBox);


        gridLayout_13->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_13, 1, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/primDish.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(dishTab, icon6, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_40 = new QLabel(PrimitiveFactoryDlg);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_6->addWidget(label_40);

        precisionSpinBox = new QSpinBox(PrimitiveFactoryDlg);
        precisionSpinBox->setObjectName(QStringLiteral("precisionSpinBox"));
        precisionSpinBox->setMinimum(4);
        precisionSpinBox->setMaximum(65536);
        precisionSpinBox->setSingleStep(4);
        precisionSpinBox->setValue(24);

        horizontalLayout_6->addWidget(precisionSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        createPushButton = new QPushButton(PrimitiveFactoryDlg);
        createPushButton->setObjectName(QStringLiteral("createPushButton"));

        horizontalLayout_6->addWidget(createPushButton);

        closePushButton = new QPushButton(PrimitiveFactoryDlg);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_6->addWidget(closePushButton);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_14 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);


        retranslateUi(PrimitiveFactoryDlg);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PrimitiveFactoryDlg);
    } // setupUi

    void retranslateUi(QDialog *PrimitiveFactoryDlg)
    {
        PrimitiveFactoryDlg->setWindowTitle(QApplication::translate("PrimitiveFactoryDlg", "Primitive factory", Q_NULLPTR));
        label->setText(QApplication::translate("PrimitiveFactoryDlg", "dx", Q_NULLPTR));
        label_2->setText(QApplication::translate("PrimitiveFactoryDlg", "dy", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(planeTab), QApplication::translate("PrimitiveFactoryDlg", "Plane", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrimitiveFactoryDlg", "dx", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrimitiveFactoryDlg", "dy", Q_NULLPTR));
        label_5->setText(QApplication::translate("PrimitiveFactoryDlg", "dz", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(boxTab), QApplication::translate("PrimitiveFactoryDlg", "Box", Q_NULLPTR));
        label_6->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(sphereTab), QApplication::translate("PrimitiveFactoryDlg", "Sphere", Q_NULLPTR));
        label_7->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", Q_NULLPTR));
        label_8->setText(QApplication::translate("PrimitiveFactoryDlg", "height", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(cylTab), QApplication::translate("PrimitiveFactoryDlg", "Cylinder", Q_NULLPTR));
        label_10->setText(QApplication::translate("PrimitiveFactoryDlg", "top radius", Q_NULLPTR));
        label_9->setText(QApplication::translate("PrimitiveFactoryDlg", "bottom radius", Q_NULLPTR));
        label_11->setText(QApplication::translate("PrimitiveFactoryDlg", "height", Q_NULLPTR));
        snoutGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Snout mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_12->setStatusTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        label_12->setText(QApplication::translate("PrimitiveFactoryDlg", "x offset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_13->setStatusTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        label_13->setText(QApplication::translate("PrimitiveFactoryDlg", "y offset", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(coneTab), QApplication::translate("PrimitiveFactoryDlg", "Cone", Q_NULLPTR));
        label_14->setText(QApplication::translate("PrimitiveFactoryDlg", "inside radius", Q_NULLPTR));
        label_15->setText(QApplication::translate("PrimitiveFactoryDlg", "outside radius", Q_NULLPTR));
        label_16->setText(QApplication::translate("PrimitiveFactoryDlg", "angle (degrees)", Q_NULLPTR));
        torusRectGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Rectangular section", Q_NULLPTR));
        label_17->setText(QApplication::translate("PrimitiveFactoryDlg", "inside radius", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(torusTab), QApplication::translate("PrimitiveFactoryDlg", "Torus", Q_NULLPTR));
        label_18->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", Q_NULLPTR));
        label_19->setText(QApplication::translate("PrimitiveFactoryDlg", "height", Q_NULLPTR));
        dishEllipsoidGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Ellipsoid mode", Q_NULLPTR));
        label_39->setText(QApplication::translate("PrimitiveFactoryDlg", "radius 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(dishTab), QApplication::translate("PrimitiveFactoryDlg", "Dish", Q_NULLPTR));
        label_40->setText(QApplication::translate("PrimitiveFactoryDlg", "Initial precision", Q_NULLPTR));
        createPushButton->setText(QApplication::translate("PrimitiveFactoryDlg", "Create", Q_NULLPTR));
        closePushButton->setText(QApplication::translate("PrimitiveFactoryDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrimitiveFactoryDlg: public Ui_PrimitiveFactoryDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMITIVEFACTORYDLG_H
