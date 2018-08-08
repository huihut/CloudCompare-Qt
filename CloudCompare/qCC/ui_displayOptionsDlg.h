/********************************************************************************
** Form generated from reading UI file 'displayOptionsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYOPTIONSDLG_H
#define UI_DISPLAYOPTIONSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayOptionsDlg
{
public:
    QVBoxLayout *verticalLayout_5;
    QToolBox *toolBox;
    QWidget *pageColorAndMatOptions;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *sunLightGroup;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *ambientColorButton;
    QLabel *label_3;
    QHBoxLayout *hboxLayout1;
    QToolButton *specularColorButton;
    QLabel *label_4;
    QHBoxLayout *hboxLayout2;
    QToolButton *diffuseColorButton;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *sunLightGroup_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout3;
    QToolButton *meshFrontColorButton;
    QLabel *label_6;
    QHBoxLayout *hboxLayout4;
    QToolButton *meshBackColorButton;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *meshSpecularColorButton;
    QLabel *label_12;
    QHBoxLayout *hboxLayout5;
    QToolButton *pointsColorButton;
    QLabel *label_8;
    QGroupBox *othersGroup;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout6;
    QToolButton *bkgColorButton;
    QLabel *label_2;
    QHBoxLayout *hboxLayout7;
    QToolButton *bbColorButton;
    QLabel *label_9;
    QHBoxLayout *hboxLayout8;
    QToolButton *textColorButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *enableGradientCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *pageSFOptions;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *colorScaleShowHistogramCheckBox;
    QCheckBox *useColorScaleShaderCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QSpinBox *colorRampWidthSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageLabelsOptions;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QSpinBox *labelOpacitySpinBox;
    QLabel *label_16;
    QSpinBox *labelFontSizeSpinBox;
    QLabel *label_20;
    QToolButton *labelBkgColorButton;
    QLabel *label_15;
    QSpinBox *labelMarkerSizeSpinBox;
    QLabel *label_18;
    QToolButton *labelMarkerColorButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageOtherOptions;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QSpinBox *defaultFontSizeSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QSpinBox *numberPrecisionSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QDoubleSpinBox *zoomSpeedDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *decimateCloudBox;
    QDoubleSpinBox *maxCloudSizeDoubleSpinBox;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *decimateMeshBox;
    QDoubleSpinBox *maxMeshSizeDoubleSpinBox;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *useVBOCheckBox;
    QCheckBox *showCrossCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QComboBox *autoComputeOctreeComboBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *applyButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DisplayOptionsDlg)
    {
        if (DisplayOptionsDlg->objectName().isEmpty())
            DisplayOptionsDlg->setObjectName(QStringLiteral("DisplayOptionsDlg"));
        DisplayOptionsDlg->resize(450, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayOptionsDlg->sizePolicy().hasHeightForWidth());
        DisplayOptionsDlg->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/Old/images/old_cc/cc_lightParamsIcon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        DisplayOptionsDlg->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(DisplayOptionsDlg);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        toolBox = new QToolBox(DisplayOptionsDlg);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        pageColorAndMatOptions = new QWidget();
        pageColorAndMatOptions->setObjectName(QStringLiteral("pageColorAndMatOptions"));
        pageColorAndMatOptions->setGeometry(QRect(0, 0, 432, 263));
        verticalLayout_6 = new QVBoxLayout(pageColorAndMatOptions);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame = new QFrame(pageColorAndMatOptions);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        sunLightGroup = new QGroupBox(frame);
        sunLightGroup->setObjectName(QStringLiteral("sunLightGroup"));
        vboxLayout = new QVBoxLayout(sunLightGroup);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        ambientColorButton = new QToolButton(sunLightGroup);
        ambientColorButton->setObjectName(QStringLiteral("ambientColorButton"));

        hboxLayout->addWidget(ambientColorButton);

        label_3 = new QLabel(sunLightGroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout->addWidget(label_3);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        specularColorButton = new QToolButton(sunLightGroup);
        specularColorButton->setObjectName(QStringLiteral("specularColorButton"));

        hboxLayout1->addWidget(specularColorButton);

        label_4 = new QLabel(sunLightGroup);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout1->addWidget(label_4);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        diffuseColorButton = new QToolButton(sunLightGroup);
        diffuseColorButton->setObjectName(QStringLiteral("diffuseColorButton"));

        hboxLayout2->addWidget(diffuseColorButton);

        label_5 = new QLabel(sunLightGroup);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout2->addWidget(label_5);


        vboxLayout->addLayout(hboxLayout2);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_5);


        horizontalLayout_6->addWidget(sunLightGroup);

        sunLightGroup_2 = new QGroupBox(frame);
        sunLightGroup_2->setObjectName(QStringLiteral("sunLightGroup_2"));
        verticalLayout_4 = new QVBoxLayout(sunLightGroup_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        meshFrontColorButton = new QToolButton(sunLightGroup_2);
        meshFrontColorButton->setObjectName(QStringLiteral("meshFrontColorButton"));

        hboxLayout3->addWidget(meshFrontColorButton);

        label_6 = new QLabel(sunLightGroup_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout3->addWidget(label_6);


        verticalLayout_4->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        meshBackColorButton = new QToolButton(sunLightGroup_2);
        meshBackColorButton->setObjectName(QStringLiteral("meshBackColorButton"));

        hboxLayout4->addWidget(meshBackColorButton);

        label_7 = new QLabel(sunLightGroup_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        hboxLayout4->addWidget(label_7);


        verticalLayout_4->addLayout(hboxLayout4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        meshSpecularColorButton = new QToolButton(sunLightGroup_2);
        meshSpecularColorButton->setObjectName(QStringLiteral("meshSpecularColorButton"));

        horizontalLayout_2->addWidget(meshSpecularColorButton);

        label_12 = new QLabel(sunLightGroup_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);


        verticalLayout_4->addLayout(horizontalLayout_2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        pointsColorButton = new QToolButton(sunLightGroup_2);
        pointsColorButton->setObjectName(QStringLiteral("pointsColorButton"));

        hboxLayout5->addWidget(pointsColorButton);

        label_8 = new QLabel(sunLightGroup_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        hboxLayout5->addWidget(label_8);


        verticalLayout_4->addLayout(hboxLayout5);


        horizontalLayout_6->addWidget(sunLightGroup_2);

        othersGroup = new QGroupBox(frame);
        othersGroup->setObjectName(QStringLiteral("othersGroup"));
        vboxLayout1 = new QVBoxLayout(othersGroup);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        bkgColorButton = new QToolButton(othersGroup);
        bkgColorButton->setObjectName(QStringLiteral("bkgColorButton"));
        bkgColorButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout6->addWidget(bkgColorButton);

        label_2 = new QLabel(othersGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout6->addWidget(label_2);


        vboxLayout1->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        bbColorButton = new QToolButton(othersGroup);
        bbColorButton->setObjectName(QStringLiteral("bbColorButton"));
        bbColorButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout7->addWidget(bbColorButton);

        label_9 = new QLabel(othersGroup);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout7->addWidget(label_9);


        vboxLayout1->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        textColorButton = new QToolButton(othersGroup);
        textColorButton->setObjectName(QStringLiteral("textColorButton"));

        hboxLayout8->addWidget(textColorButton);

        label = new QLabel(othersGroup);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout8->addWidget(label);


        vboxLayout1->addLayout(hboxLayout8);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacer_6);


        horizontalLayout_6->addWidget(othersGroup);


        verticalLayout_6->addWidget(frame);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        enableGradientCheckBox = new QCheckBox(pageColorAndMatOptions);
        enableGradientCheckBox->setObjectName(QStringLiteral("enableGradientCheckBox"));
        enableGradientCheckBox->setChecked(true);

        horizontalLayout_7->addWidget(enableGradientCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        toolBox->addItem(pageColorAndMatOptions, QStringLiteral("Colors and Materials"));
        pageSFOptions = new QWidget();
        pageSFOptions->setObjectName(QStringLiteral("pageSFOptions"));
        pageSFOptions->setGeometry(QRect(0, 0, 432, 263));
        verticalLayout_7 = new QVBoxLayout(pageSFOptions);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        colorScaleShowHistogramCheckBox = new QCheckBox(pageSFOptions);
        colorScaleShowHistogramCheckBox->setObjectName(QStringLiteral("colorScaleShowHistogramCheckBox"));
        colorScaleShowHistogramCheckBox->setChecked(true);

        verticalLayout_7->addWidget(colorScaleShowHistogramCheckBox);

        useColorScaleShaderCheckBox = new QCheckBox(pageSFOptions);
        useColorScaleShaderCheckBox->setObjectName(QStringLiteral("useColorScaleShaderCheckBox"));

        verticalLayout_7->addWidget(useColorScaleShaderCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(pageSFOptions);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        colorRampWidthSpinBox = new QSpinBox(pageSFOptions);
        colorRampWidthSpinBox->setObjectName(QStringLiteral("colorRampWidthSpinBox"));
        colorRampWidthSpinBox->setMinimum(10);
        colorRampWidthSpinBox->setMaximum(200);
        colorRampWidthSpinBox->setValue(50);

        horizontalLayout->addWidget(colorRampWidthSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        toolBox->addItem(pageSFOptions, QStringLiteral("Color scale (scalar field)"));
        pageLabelsOptions = new QWidget();
        pageLabelsOptions->setObjectName(QStringLiteral("pageLabelsOptions"));
        pageLabelsOptions->setGeometry(QRect(0, 0, 432, 263));
        verticalLayout = new QVBoxLayout(pageLabelsOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(pageLabelsOptions);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        labelOpacitySpinBox = new QSpinBox(frame_2);
        labelOpacitySpinBox->setObjectName(QStringLiteral("labelOpacitySpinBox"));
        labelOpacitySpinBox->setMaximum(100);
        labelOpacitySpinBox->setValue(75);

        gridLayout->addWidget(labelOpacitySpinBox, 0, 1, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        labelFontSizeSpinBox = new QSpinBox(frame_2);
        labelFontSizeSpinBox->setObjectName(QStringLiteral("labelFontSizeSpinBox"));
        labelFontSizeSpinBox->setMinimum(6);
        labelFontSizeSpinBox->setMaximum(96);
        labelFontSizeSpinBox->setValue(8);

        gridLayout->addWidget(labelFontSizeSpinBox, 1, 1, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 1, 2, 1, 1);

        labelBkgColorButton = new QToolButton(frame_2);
        labelBkgColorButton->setObjectName(QStringLiteral("labelBkgColorButton"));

        gridLayout->addWidget(labelBkgColorButton, 1, 3, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        labelMarkerSizeSpinBox = new QSpinBox(frame_2);
        labelMarkerSizeSpinBox->setObjectName(QStringLiteral("labelMarkerSizeSpinBox"));
        labelMarkerSizeSpinBox->setMinimum(1);
        labelMarkerSizeSpinBox->setValue(4);

        gridLayout->addWidget(labelMarkerSizeSpinBox, 2, 1, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 2, 2, 1, 1);

        labelMarkerColorButton = new QToolButton(frame_2);
        labelMarkerColorButton->setObjectName(QStringLiteral("labelMarkerColorButton"));

        gridLayout->addWidget(labelMarkerColorButton, 2, 3, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalSpacer_4 = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        toolBox->addItem(pageLabelsOptions, QStringLiteral("Labels"));
        pageOtherOptions = new QWidget();
        pageOtherOptions->setObjectName(QStringLiteral("pageOtherOptions"));
        pageOtherOptions->setGeometry(QRect(0, 0, 432, 263));
        verticalLayout_8 = new QVBoxLayout(pageOtherOptions);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_11 = new QLabel(pageOtherOptions);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);

        defaultFontSizeSpinBox = new QSpinBox(pageOtherOptions);
        defaultFontSizeSpinBox->setObjectName(QStringLiteral("defaultFontSizeSpinBox"));
        defaultFontSizeSpinBox->setMinimum(6);
        defaultFontSizeSpinBox->setMaximum(96);
        defaultFontSizeSpinBox->setValue(12);

        horizontalLayout_4->addWidget(defaultFontSizeSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_14 = new QLabel(pageOtherOptions);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_3->addWidget(label_14);

        numberPrecisionSpinBox = new QSpinBox(pageOtherOptions);
        numberPrecisionSpinBox->setObjectName(QStringLiteral("numberPrecisionSpinBox"));
        numberPrecisionSpinBox->setValue(6);

        horizontalLayout_3->addWidget(numberPrecisionSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_17 = new QLabel(pageOtherOptions);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        zoomSpeedDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        zoomSpeedDoubleSpinBox->setObjectName(QStringLiteral("zoomSpeedDoubleSpinBox"));
        zoomSpeedDoubleSpinBox->setDecimals(3);
        zoomSpeedDoubleSpinBox->setMaximum(1000);
        zoomSpeedDoubleSpinBox->setSingleStep(0.01);
        zoomSpeedDoubleSpinBox->setValue(1);

        horizontalLayout_5->addWidget(zoomSpeedDoubleSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        decimateCloudBox = new QCheckBox(pageOtherOptions);
        decimateCloudBox->setObjectName(QStringLiteral("decimateCloudBox"));
        decimateCloudBox->setChecked(true);

        horizontalLayout_9->addWidget(decimateCloudBox);

        maxCloudSizeDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        maxCloudSizeDoubleSpinBox->setObjectName(QStringLiteral("maxCloudSizeDoubleSpinBox"));
        maxCloudSizeDoubleSpinBox->setDecimals(1);
        maxCloudSizeDoubleSpinBox->setMinimum(0.1);
        maxCloudSizeDoubleSpinBox->setMaximum(10000);
        maxCloudSizeDoubleSpinBox->setValue(10);

        horizontalLayout_9->addWidget(maxCloudSizeDoubleSpinBox);

        label_21 = new QLabel(pageOtherOptions);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_9->addWidget(label_21);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        decimateMeshBox = new QCheckBox(pageOtherOptions);
        decimateMeshBox->setObjectName(QStringLiteral("decimateMeshBox"));
        decimateMeshBox->setChecked(true);

        horizontalLayout_8->addWidget(decimateMeshBox);

        maxMeshSizeDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        maxMeshSizeDoubleSpinBox->setObjectName(QStringLiteral("maxMeshSizeDoubleSpinBox"));
        maxMeshSizeDoubleSpinBox->setDecimals(1);
        maxMeshSizeDoubleSpinBox->setMinimum(0.1);
        maxMeshSizeDoubleSpinBox->setMaximum(10000);
        maxMeshSizeDoubleSpinBox->setSingleStep(0.5);
        maxMeshSizeDoubleSpinBox->setValue(2.5);

        horizontalLayout_8->addWidget(maxMeshSizeDoubleSpinBox);

        label_19 = new QLabel(pageOtherOptions);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_8->addWidget(label_19);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_8->addLayout(horizontalLayout_8);

        useVBOCheckBox = new QCheckBox(pageOtherOptions);
        useVBOCheckBox->setObjectName(QStringLiteral("useVBOCheckBox"));
        useVBOCheckBox->setChecked(true);

        verticalLayout_8->addWidget(useVBOCheckBox);

        showCrossCheckBox = new QCheckBox(pageOtherOptions);
        showCrossCheckBox->setObjectName(QStringLiteral("showCrossCheckBox"));
        showCrossCheckBox->setChecked(true);

        verticalLayout_8->addWidget(showCrossCheckBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_22 = new QLabel(pageOtherOptions);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_10->addWidget(label_22);

        autoComputeOctreeComboBox = new QComboBox(pageOtherOptions);
        autoComputeOctreeComboBox->setObjectName(QStringLiteral("autoComputeOctreeComboBox"));

        horizontalLayout_10->addWidget(autoComputeOctreeComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_8->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        toolBox->addItem(pageOtherOptions, QStringLiteral("Other options"));

        verticalLayout_5->addWidget(toolBox);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem);

        okButton = new QPushButton(DisplayOptionsDlg);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout9->addWidget(okButton);

        applyButton = new QPushButton(DisplayOptionsDlg);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        hboxLayout9->addWidget(applyButton);

        resetButton = new QPushButton(DisplayOptionsDlg);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        hboxLayout9->addWidget(resetButton);

        cancelButton = new QPushButton(DisplayOptionsDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout9->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout9);


        retranslateUi(DisplayOptionsDlg);
        QObject::connect(decimateCloudBox, SIGNAL(toggled(bool)), maxCloudSizeDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(decimateMeshBox, SIGNAL(toggled(bool)), maxMeshSizeDoubleSpinBox, SLOT(setEnabled(bool)));

        toolBox->setCurrentIndex(3);
        autoComputeOctreeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DisplayOptionsDlg);
    } // setupUi

    void retranslateUi(QDialog *DisplayOptionsDlg)
    {
        DisplayOptionsDlg->setWindowTitle(QApplication::translate("DisplayOptionsDlg", "Display options", Q_NULLPTR));
        sunLightGroup->setTitle(QApplication::translate("DisplayOptionsDlg", "Light", Q_NULLPTR));
        ambientColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("DisplayOptionsDlg", "Ambient", Q_NULLPTR));
        specularColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_4->setText(QApplication::translate("DisplayOptionsDlg", "Specular", Q_NULLPTR));
        diffuseColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_5->setText(QApplication::translate("DisplayOptionsDlg", "Diffuse", Q_NULLPTR));
        sunLightGroup_2->setTitle(QApplication::translate("DisplayOptionsDlg", "Default Materials", Q_NULLPTR));
        meshFrontColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_6->setText(QApplication::translate("DisplayOptionsDlg", "Mesh Front", Q_NULLPTR));
        meshBackColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_7->setText(QApplication::translate("DisplayOptionsDlg", "Mesh Back", Q_NULLPTR));
        meshSpecularColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_12->setText(QApplication::translate("DisplayOptionsDlg", "Mesh specular", Q_NULLPTR));
        pointsColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_8->setText(QApplication::translate("DisplayOptionsDlg", "Points", Q_NULLPTR));
        othersGroup->setTitle(QApplication::translate("DisplayOptionsDlg", "Colors", Q_NULLPTR));
        bkgColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("DisplayOptionsDlg", "Background", Q_NULLPTR));
        bbColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_9->setText(QApplication::translate("DisplayOptionsDlg", "Bounding-box", Q_NULLPTR));
        textColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label->setText(QApplication::translate("DisplayOptionsDlg", "Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableGradientCheckBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "Gradient goes from 'background' color to inverse of 'Points' color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        enableGradientCheckBox->setStatusTip(QApplication::translate("DisplayOptionsDlg", "Gradient goes from 'background' color to inverse of 'Points' color", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        enableGradientCheckBox->setText(QApplication::translate("DisplayOptionsDlg", "display gradient background", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageColorAndMatOptions), QApplication::translate("DisplayOptionsDlg", "Colors and Materials", Q_NULLPTR));
        colorScaleShowHistogramCheckBox->setText(QApplication::translate("DisplayOptionsDlg", "Show histogram next to color ramp", Q_NULLPTR));
        useColorScaleShaderCheckBox->setText(QApplication::translate("DisplayOptionsDlg", "Enable shader for faster display (ATI cards: use at your own risk ;)", Q_NULLPTR));
        label_10->setText(QApplication::translate("DisplayOptionsDlg", "Ramp width", Q_NULLPTR));
        colorRampWidthSpinBox->setSuffix(QApplication::translate("DisplayOptionsDlg", " pixels", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageSFOptions), QApplication::translate("DisplayOptionsDlg", "Color scale (scalar field)", Q_NULLPTR));
        label_13->setText(QApplication::translate("DisplayOptionsDlg", "Label opacity", Q_NULLPTR));
        labelOpacitySpinBox->setSuffix(QApplication::translate("DisplayOptionsDlg", "%", Q_NULLPTR));
        label_16->setText(QApplication::translate("DisplayOptionsDlg", "Label font size", Q_NULLPTR));
        label_20->setText(QApplication::translate("DisplayOptionsDlg", "background color", Q_NULLPTR));
        labelBkgColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        label_15->setText(QApplication::translate("DisplayOptionsDlg", "Labels marker size", Q_NULLPTR));
        label_18->setText(QApplication::translate("DisplayOptionsDlg", "marker color", Q_NULLPTR));
        labelMarkerColorButton->setText(QApplication::translate("DisplayOptionsDlg", "...", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageLabelsOptions), QApplication::translate("DisplayOptionsDlg", "Labels", Q_NULLPTR));
        label_11->setText(QApplication::translate("DisplayOptionsDlg", "Default font size", Q_NULLPTR));
        label_14->setText(QApplication::translate("DisplayOptionsDlg", "Displayed numbers precision", Q_NULLPTR));
        label_17->setText(QApplication::translate("DisplayOptionsDlg", "Perspective zooming speed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoomSpeedDoubleSpinBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "Zoom/walk speed in perspective mode (default = 1.0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        decimateCloudBox->setStatusTip(QApplication::translate("DisplayOptionsDlg", "Automatically decimate big point clouds when moved", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        decimateCloudBox->setWhatsThis(QApplication::translate("DisplayOptionsDlg", "Automatically decimate big point clouds when moved", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        decimateCloudBox->setText(QApplication::translate("DisplayOptionsDlg", "Decimate clouds over", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxCloudSizeDoubleSpinBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "Minimum number of points to activate decimation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxCloudSizeDoubleSpinBox->setPrefix(QApplication::translate("DisplayOptionsDlg", "> ", Q_NULLPTR));
        maxCloudSizeDoubleSpinBox->setSuffix(QApplication::translate("DisplayOptionsDlg", " M.", Q_NULLPTR));
        label_21->setText(QApplication::translate("DisplayOptionsDlg", "points when moved", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        decimateMeshBox->setStatusTip(QApplication::translate("DisplayOptionsDlg", "Automatically decimate big meshes when moved", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        decimateMeshBox->setWhatsThis(QApplication::translate("DisplayOptionsDlg", "Automatically decimate big meshes when moved", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        decimateMeshBox->setText(QApplication::translate("DisplayOptionsDlg", "Decimate meshes over", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxMeshSizeDoubleSpinBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "Minimum number of triangles to activate decimation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxMeshSizeDoubleSpinBox->setPrefix(QApplication::translate("DisplayOptionsDlg", "> ", Q_NULLPTR));
        maxMeshSizeDoubleSpinBox->setSuffix(QApplication::translate("DisplayOptionsDlg", " M.", Q_NULLPTR));
        label_19->setText(QApplication::translate("DisplayOptionsDlg", "triangles when moved", Q_NULLPTR));
        useVBOCheckBox->setText(QApplication::translate("DisplayOptionsDlg", "Try to load clouds on GPU for faster display", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showCrossCheckBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "A cross is displayed in the middle of the screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        showCrossCheckBox->setStatusTip(QApplication::translate("DisplayOptionsDlg", "A cross is displayed in the middle of the screen", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        showCrossCheckBox->setText(QApplication::translate("DisplayOptionsDlg", "Show middle screen cross", Q_NULLPTR));
        label_22->setText(QApplication::translate("DisplayOptionsDlg", "Auto-compute octree for picking", Q_NULLPTR));
        autoComputeOctreeComboBox->clear();
        autoComputeOctreeComboBox->insertItems(0, QStringList()
         << QApplication::translate("DisplayOptionsDlg", "Always", Q_NULLPTR)
         << QApplication::translate("DisplayOptionsDlg", "Ask each time", Q_NULLPTR)
         << QApplication::translate("DisplayOptionsDlg", "Never", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        autoComputeOctreeComboBox->setToolTip(QApplication::translate("DisplayOptionsDlg", "Octree computation can be long but the picking is then much faster", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBox->setItemText(toolBox->indexOf(pageOtherOptions), QApplication::translate("DisplayOptionsDlg", "Other options", Q_NULLPTR));
        okButton->setText(QApplication::translate("DisplayOptionsDlg", "Ok", Q_NULLPTR));
        applyButton->setText(QApplication::translate("DisplayOptionsDlg", "Apply", Q_NULLPTR));
        resetButton->setText(QApplication::translate("DisplayOptionsDlg", "Reset", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("DisplayOptionsDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DisplayOptionsDlg: public Ui_DisplayOptionsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYOPTIONSDLG_H
