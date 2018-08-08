/********************************************************************************
** Form generated from reading UI file 'rasterizeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTERIZEDLG_H
#define UI_RASTERIZEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RasterizeToolDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QGroupBox *cloudInfoGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *cloudNameLabel;
    QLabel *label_3;
    QLabel *pointCountLabel;
    QPushButton *updateGridPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *gridWidthLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *gridStepDoubleSpinBox;
    QToolButton *editGridToolButton;
    QLabel *label_13;
    QComboBox *activeLayerComboBox;
    QLabel *label_7;
    QLabel *gridLayerRangeLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *dimensionComboBox;
    QHBoxLayout *layout_2;
    QLabel *label_8;
    QComboBox *heightProjectionComboBox;
    QFrame *interpolateSFFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *interpolateSFCheckBox;
    QComboBox *scalarFieldProjection;
    QCheckBox *resampleCloudCheckBox;
    QLabel *warningResampleWithAverageLabel;
    QGroupBox *emptyCellsFrame;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *fillEmptyCellsComboBox;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QTabWidget *tabWidget;
    QWidget *exportTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *generateCloudPushButton;
    QPushButton *generateMeshPushButton;
    QLabel *label_12;
    QFrame *exportCloudSFFrame;
    QFormLayout *formLayout_4;
    QCheckBox *generateCountSFcheckBox;
    QCheckBox *generateMinHeightSFcheckBox;
    QCheckBox *generateAvgHeightSFcheckBox;
    QCheckBox *generateMaxHeightSFcheckBox;
    QCheckBox *generateStdDevHeightSFcheckBox;
    QCheckBox *generateHeightRangeSFcheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *generateRasterPushButton;
    QPushButton *generateImagePushButton;
    QPushButton *generateASCIIPushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *contourTab;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_15;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *contourStartDoubleSpinBox;
    QLabel *label_10;
    QDoubleSpinBox *contourStepDoubleSpinBox;
    QLabel *label_11;
    QSpinBox *minVertexCountSpinBox;
    QLabel *label_14;
    QSpinBox *contourWidthSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *colorizeContoursCheckBox;
    QCheckBox *ignoreContourBordersCheckBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clearContoursPushButton;
    QPushButton *exportContoursPushButton;
    QPushButton *generateContoursPushButton;
    QWidget *hillshadeTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QFormLayout *formLayout_5;
    QLabel *label_17;
    QSpinBox *sunZenithSpinBox;
    QLabel *label_18;
    QSpinBox *sunAzimuthSpinBox;
    QSpacerItem *verticalSpacer_3;
    QPushButton *generateHillshadePushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *mapFrame;

    void setupUi(QDialog *RasterizeToolDialog)
    {
        if (RasterizeToolDialog->objectName().isEmpty())
            RasterizeToolDialog->setObjectName(QStringLiteral("RasterizeToolDialog"));
        RasterizeToolDialog->resize(1000, 760);
        horizontalLayout = new QHBoxLayout(RasterizeToolDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftFrame = new QFrame(RasterizeToolDialog);
        leftFrame->setObjectName(QStringLiteral("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        leftFrame->setMinimumSize(QSize(270, 0));
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cloudInfoGroupBox = new QGroupBox(leftFrame);
        cloudInfoGroupBox->setObjectName(QStringLiteral("cloudInfoGroupBox"));
        formLayout = new QFormLayout(cloudInfoGroupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(cloudInfoGroupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cloudNameLabel = new QLabel(cloudInfoGroupBox);
        cloudNameLabel->setObjectName(QStringLiteral("cloudNameLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cloudNameLabel);

        label_3 = new QLabel(cloudInfoGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        pointCountLabel = new QLabel(cloudInfoGroupBox);
        pointCountLabel->setObjectName(QStringLiteral("pointCountLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pointCountLabel);


        verticalLayout->addWidget(cloudInfoGroupBox);

        updateGridPushButton = new QPushButton(leftFrame);
        updateGridPushButton->setObjectName(QStringLiteral("updateGridPushButton"));
        updateGridPushButton->setStyleSheet(QStringLiteral("color: white; background-color:red;"));

        verticalLayout->addWidget(updateGridPushButton);

        groupBox = new QGroupBox(leftFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gridWidthLabel = new QLabel(groupBox);
        gridWidthLabel->setObjectName(QStringLiteral("gridWidthLabel"));

        gridLayout->addWidget(gridWidthLabel, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridStepDoubleSpinBox = new QDoubleSpinBox(groupBox);
        gridStepDoubleSpinBox->setObjectName(QStringLiteral("gridStepDoubleSpinBox"));
        gridStepDoubleSpinBox->setDecimals(6);
        gridStepDoubleSpinBox->setMinimum(0.001);
        gridStepDoubleSpinBox->setMaximum(1000);
        gridStepDoubleSpinBox->setSingleStep(0.001);
        gridStepDoubleSpinBox->setValue(1);

        horizontalLayout_4->addWidget(gridStepDoubleSpinBox);

        editGridToolButton = new QToolButton(groupBox);
        editGridToolButton->setObjectName(QStringLiteral("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        activeLayerComboBox = new QComboBox(groupBox);
        activeLayerComboBox->setObjectName(QStringLiteral("activeLayerComboBox"));

        gridLayout->addWidget(activeLayerComboBox, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        gridLayerRangeLabel = new QLabel(groupBox);
        gridLayerRangeLabel->setObjectName(QStringLiteral("gridLayerRangeLabel"));

        gridLayout->addWidget(gridLayerRangeLabel, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(leftFrame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        dimensionComboBox = new QComboBox(groupBox_2);
        dimensionComboBox->setObjectName(QStringLiteral("dimensionComboBox"));

        horizontalLayout_2->addWidget(dimensionComboBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        layout_2 = new QHBoxLayout();
        layout_2->setObjectName(QStringLiteral("layout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        layout_2->addWidget(label_8);

        heightProjectionComboBox = new QComboBox(groupBox_2);
        heightProjectionComboBox->setObjectName(QStringLiteral("heightProjectionComboBox"));

        layout_2->addWidget(heightProjectionComboBox);


        verticalLayout_2->addLayout(layout_2);

        interpolateSFFrame = new QFrame(groupBox_2);
        interpolateSFFrame->setObjectName(QStringLiteral("interpolateSFFrame"));
        horizontalLayout_3 = new QHBoxLayout(interpolateSFFrame);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        interpolateSFCheckBox = new QCheckBox(interpolateSFFrame);
        interpolateSFCheckBox->setObjectName(QStringLiteral("interpolateSFCheckBox"));
        interpolateSFCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(interpolateSFCheckBox);

        scalarFieldProjection = new QComboBox(interpolateSFFrame);
        scalarFieldProjection->setObjectName(QStringLiteral("scalarFieldProjection"));

        horizontalLayout_3->addWidget(scalarFieldProjection);


        verticalLayout_2->addWidget(interpolateSFFrame);

        resampleCloudCheckBox = new QCheckBox(groupBox_2);
        resampleCloudCheckBox->setObjectName(QStringLiteral("resampleCloudCheckBox"));
        resampleCloudCheckBox->setChecked(false);

        verticalLayout_2->addWidget(resampleCloudCheckBox);

        warningResampleWithAverageLabel = new QLabel(groupBox_2);
        warningResampleWithAverageLabel->setObjectName(QStringLiteral("warningResampleWithAverageLabel"));
        warningResampleWithAverageLabel->setStyleSheet(QStringLiteral("color:red;"));
        warningResampleWithAverageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(warningResampleWithAverageLabel);


        verticalLayout->addWidget(groupBox_2);

        emptyCellsFrame = new QGroupBox(leftFrame);
        emptyCellsFrame->setObjectName(QStringLiteral("emptyCellsFrame"));
        formLayout_2 = new QFormLayout(emptyCellsFrame);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_5 = new QLabel(emptyCellsFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        fillEmptyCellsComboBox = new QComboBox(emptyCellsFrame);
        fillEmptyCellsComboBox->setObjectName(QStringLiteral("fillEmptyCellsComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fillEmptyCellsComboBox);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QStringLiteral("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-1e+9);
        emptyValueDoubleSpinBox->setMaximum(1e+9);
        emptyValueDoubleSpinBox->setValue(0);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, emptyValueDoubleSpinBox);


        verticalLayout->addWidget(emptyCellsFrame);

        tabWidget = new QTabWidget(leftFrame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        exportTab = new QWidget();
        exportTab->setObjectName(QStringLiteral("exportTab"));
        verticalLayout_3 = new QVBoxLayout(exportTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        generateCloudPushButton = new QPushButton(exportTab);
        generateCloudPushButton->setObjectName(QStringLiteral("generateCloudPushButton"));

        horizontalLayout_6->addWidget(generateCloudPushButton);

        generateMeshPushButton = new QPushButton(exportTab);
        generateMeshPushButton->setObjectName(QStringLiteral("generateMeshPushButton"));

        horizontalLayout_6->addWidget(generateMeshPushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label_12 = new QLabel(exportTab);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_3->addWidget(label_12);

        exportCloudSFFrame = new QFrame(exportTab);
        exportCloudSFFrame->setObjectName(QStringLiteral("exportCloudSFFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(exportCloudSFFrame->sizePolicy().hasHeightForWidth());
        exportCloudSFFrame->setSizePolicy(sizePolicy2);
        exportCloudSFFrame->setFrameShape(QFrame::StyledPanel);
        exportCloudSFFrame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(exportCloudSFFrame);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        generateCountSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateCountSFcheckBox->setObjectName(QStringLiteral("generateCountSFcheckBox"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, generateCountSFcheckBox);

        generateMinHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateMinHeightSFcheckBox->setObjectName(QStringLiteral("generateMinHeightSFcheckBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, generateMinHeightSFcheckBox);

        generateAvgHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateAvgHeightSFcheckBox->setObjectName(QStringLiteral("generateAvgHeightSFcheckBox"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, generateAvgHeightSFcheckBox);

        generateMaxHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateMaxHeightSFcheckBox->setObjectName(QStringLiteral("generateMaxHeightSFcheckBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, generateMaxHeightSFcheckBox);

        generateStdDevHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateStdDevHeightSFcheckBox->setObjectName(QStringLiteral("generateStdDevHeightSFcheckBox"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, generateStdDevHeightSFcheckBox);

        generateHeightRangeSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateHeightRangeSFcheckBox->setObjectName(QStringLiteral("generateHeightRangeSFcheckBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, generateHeightRangeSFcheckBox);


        verticalLayout_3->addWidget(exportCloudSFFrame);

        line = new QFrame(exportTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        generateRasterPushButton = new QPushButton(exportTab);
        generateRasterPushButton->setObjectName(QStringLiteral("generateRasterPushButton"));

        horizontalLayout_8->addWidget(generateRasterPushButton);

        generateImagePushButton = new QPushButton(exportTab);
        generateImagePushButton->setObjectName(QStringLiteral("generateImagePushButton"));

        horizontalLayout_8->addWidget(generateImagePushButton);

        generateASCIIPushButton = new QPushButton(exportTab);
        generateASCIIPushButton->setObjectName(QStringLiteral("generateASCIIPushButton"));

        horizontalLayout_8->addWidget(generateASCIIPushButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(exportTab, QString());
        contourTab = new QWidget();
        contourTab->setObjectName(QStringLiteral("contourTab"));
        verticalLayout_4 = new QVBoxLayout(contourTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_15 = new QLabel(contourTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font;
        font.setItalic(true);
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color: blue;"));

        verticalLayout_4->addWidget(label_15);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_6 = new QLabel(contourTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        contourStartDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStartDoubleSpinBox->setObjectName(QStringLiteral("contourStartDoubleSpinBox"));
        contourStartDoubleSpinBox->setDecimals(6);
        contourStartDoubleSpinBox->setMinimum(-1e+9);
        contourStartDoubleSpinBox->setMaximum(1e+9);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, contourStartDoubleSpinBox);

        label_10 = new QLabel(contourTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        contourStepDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStepDoubleSpinBox->setObjectName(QStringLiteral("contourStepDoubleSpinBox"));
        contourStepDoubleSpinBox->setDecimals(6);
        contourStepDoubleSpinBox->setMinimum(1e-6);
        contourStepDoubleSpinBox->setMaximum(1e+9);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, contourStepDoubleSpinBox);

        label_11 = new QLabel(contourTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        minVertexCountSpinBox = new QSpinBox(contourTab);
        minVertexCountSpinBox->setObjectName(QStringLiteral("minVertexCountSpinBox"));
        minVertexCountSpinBox->setMinimum(3);
        minVertexCountSpinBox->setMaximum(10000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, minVertexCountSpinBox);

        label_14 = new QLabel(contourTab);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_14);

        contourWidthSpinBox = new QSpinBox(contourTab);
        contourWidthSpinBox->setObjectName(QStringLiteral("contourWidthSpinBox"));
        contourWidthSpinBox->setMinimum(1);
        contourWidthSpinBox->setMaximum(10);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, contourWidthSpinBox);


        verticalLayout_4->addLayout(formLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        colorizeContoursCheckBox = new QCheckBox(contourTab);
        colorizeContoursCheckBox->setObjectName(QStringLiteral("colorizeContoursCheckBox"));

        horizontalLayout_5->addWidget(colorizeContoursCheckBox);

        ignoreContourBordersCheckBox = new QCheckBox(contourTab);
        ignoreContourBordersCheckBox->setObjectName(QStringLiteral("ignoreContourBordersCheckBox"));
        ignoreContourBordersCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(ignoreContourBordersCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        clearContoursPushButton = new QPushButton(contourTab);
        clearContoursPushButton->setObjectName(QStringLiteral("clearContoursPushButton"));
        clearContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(clearContoursPushButton);

        exportContoursPushButton = new QPushButton(contourTab);
        exportContoursPushButton->setObjectName(QStringLiteral("exportContoursPushButton"));
        exportContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(exportContoursPushButton);

        generateContoursPushButton = new QPushButton(contourTab);
        generateContoursPushButton->setObjectName(QStringLiteral("generateContoursPushButton"));

        horizontalLayout_7->addWidget(generateContoursPushButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        tabWidget->addTab(contourTab, QString());
        hillshadeTab = new QWidget();
        hillshadeTab->setObjectName(QStringLiteral("hillshadeTab"));
        verticalLayout_5 = new QVBoxLayout(hillshadeTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_16 = new QLabel(hillshadeTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);
        label_16->setStyleSheet(QStringLiteral("color: blue;"));

        verticalLayout_5->addWidget(label_16);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_17 = new QLabel(hillshadeTab);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_17);

        sunZenithSpinBox = new QSpinBox(hillshadeTab);
        sunZenithSpinBox->setObjectName(QStringLiteral("sunZenithSpinBox"));
        sunZenithSpinBox->setMaximum(90);
        sunZenithSpinBox->setSingleStep(5);
        sunZenithSpinBox->setValue(45);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, sunZenithSpinBox);

        label_18 = new QLabel(hillshadeTab);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_18);

        sunAzimuthSpinBox = new QSpinBox(hillshadeTab);
        sunAzimuthSpinBox->setObjectName(QStringLiteral("sunAzimuthSpinBox"));
        sunAzimuthSpinBox->setMaximum(360);
        sunAzimuthSpinBox->setSingleStep(5);
        sunAzimuthSpinBox->setValue(315);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, sunAzimuthSpinBox);


        verticalLayout_5->addLayout(formLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        generateHillshadePushButton = new QPushButton(hillshadeTab);
        generateHillshadePushButton->setObjectName(QStringLiteral("generateHillshadePushButton"));

        verticalLayout_5->addWidget(generateHillshadePushButton);

        tabWidget->addTab(hillshadeTab, QString());

        verticalLayout->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(leftFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addWidget(leftFrame);

        mapFrame = new QFrame(RasterizeToolDialog);
        mapFrame->setObjectName(QStringLiteral("mapFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mapFrame->sizePolicy().hasHeightForWidth());
        mapFrame->setSizePolicy(sizePolicy3);
        mapFrame->setMinimumSize(QSize(512, 512));
        mapFrame->setFrameShape(QFrame::StyledPanel);
        mapFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(mapFrame);


        retranslateUi(RasterizeToolDialog);
        QObject::connect(interpolateSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));

        dimensionComboBox->setCurrentIndex(2);
        heightProjectionComboBox->setCurrentIndex(1);
        scalarFieldProjection->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RasterizeToolDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterizeToolDialog)
    {
        RasterizeToolDialog->setWindowTitle(QApplication::translate("RasterizeToolDialog", "Rasterize", Q_NULLPTR));
        cloudInfoGroupBox->setTitle(QApplication::translate("RasterizeToolDialog", "Cloud", Q_NULLPTR));
        label->setText(QApplication::translate("RasterizeToolDialog", "Name", Q_NULLPTR));
        cloudNameLabel->setText(QApplication::translate("RasterizeToolDialog", "Unknown", Q_NULLPTR));
        label_3->setText(QApplication::translate("RasterizeToolDialog", "Points", Q_NULLPTR));
        pointCountLabel->setText(QApplication::translate("RasterizeToolDialog", "0", Q_NULLPTR));
        updateGridPushButton->setText(QApplication::translate("RasterizeToolDialog", "Update grid", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RasterizeToolDialog", "Grid", Q_NULLPTR));
        label_4->setText(QApplication::translate("RasterizeToolDialog", "size", Q_NULLPTR));
        label_2->setText(QApplication::translate("RasterizeToolDialog", "step", Q_NULLPTR));
        gridWidthLabel->setText(QApplication::translate("RasterizeToolDialog", "640 x 480", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gridStepDoubleSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editGridToolButton->setText(QApplication::translate("RasterizeToolDialog", "Edit grid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("RasterizeToolDialog", "Active layer (or 'scalar field')", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("RasterizeToolDialog", "active layer", Q_NULLPTR));
        label_7->setText(QApplication::translate("RasterizeToolDialog", "range", Q_NULLPTR));
        gridLayerRangeLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("RasterizeToolDialog", "Projection", Q_NULLPTR));
        label_9->setText(QApplication::translate("RasterizeToolDialog", "direction", Q_NULLPTR));
        dimensionComboBox->clear();
        dimensionComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "X", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "Y", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "Z", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("RasterizeToolDialog", "cell height", Q_NULLPTR));
        heightProjectionComboBox->clear();
        heightProjectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "average height", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "maximum height", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        heightProjectionComboBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Per-cell height computation method:\n"
" - minimum = lowest point in the cell\n"
" - average = mean height of all points inside the cell\n"
" - maximum = highest point in the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        interpolateSFCheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Interpolate scalar field(s)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interpolateSFCheckBox->setText(QApplication::translate("RasterizeToolDialog", "interpolate SF(s)", Q_NULLPTR));
        scalarFieldProjection->clear();
        scalarFieldProjection->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "minimum value", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "average value", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "maximum value", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        scalarFieldProjection->setToolTip(QApplication::translate("RasterizeToolDialog", "SF interpolation method", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        resampleCloudCheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Use the nearest point of the input cloud in each cell instead of the cell center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resampleCloudCheckBox->setText(QApplication::translate("RasterizeToolDialog", "resample input cloud", Q_NULLPTR));
        warningResampleWithAverageLabel->setText(QApplication::translate("RasterizeToolDialog", "Warning: the original point's height will be\n"
"replaced by the cell's average height!", Q_NULLPTR));
        emptyCellsFrame->setTitle(QApplication::translate("RasterizeToolDialog", "Empty cells", Q_NULLPTR));
        label_5->setText(QApplication::translate("RasterizeToolDialog", "Fill with", Q_NULLPTR));
        fillEmptyCellsComboBox->clear();
        fillEmptyCellsComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "leave empty", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "average height", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "maximum height", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "user specified value", Q_NULLPTR)
         << QApplication::translate("RasterizeToolDialog", "interpolate", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        fillEmptyCellsComboBox->setToolTip(QApplication::translate("RasterizeToolDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        emptyValueDoubleSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Custom value for empty cells", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        generateCloudPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a point cloud", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateCloudPushButton->setText(QApplication::translate("RasterizeToolDialog", "Cloud", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateMeshPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a mesh", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateMeshPushButton->setText(QApplication::translate("RasterizeToolDialog", "Mesh", Q_NULLPTR));
        label_12->setText(QApplication::translate("RasterizeToolDialog", "Export per-cell statistics as SF(s):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateCountSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the grid density (= number of points inside each cell)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateCountSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "population", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateMinHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the min. height of the points inside the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateMinHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "min height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateAvgHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the average height of the points inside the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateAvgHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "average height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateMaxHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the max. height of the points inside the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateMaxHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "max height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateStdDevHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the standard deviation of the heights of the points inside the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateStdDevHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "height std. dev.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateHeightRangeSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the standard deviation of the heights of the points inside the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateHeightRangeSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "height range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateRasterPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a raster (geotiff)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateRasterPushButton->setText(QApplication::translate("RasterizeToolDialog", "Raster", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateImagePushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as an image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateImagePushButton->setText(QApplication::translate("RasterizeToolDialog", "Image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateASCIIPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a matrix (text file)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateASCIIPushButton->setText(QApplication::translate("RasterizeToolDialog", "Matrix", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(exportTab), QApplication::translate("RasterizeToolDialog", "Export", Q_NULLPTR));
        label_15->setText(QApplication::translate("RasterizeToolDialog", "The contour plot is computed on the active layer", Q_NULLPTR));
        label_6->setText(QApplication::translate("RasterizeToolDialog", "Start value", Q_NULLPTR));
        label_10->setText(QApplication::translate("RasterizeToolDialog", "Step", Q_NULLPTR));
        label_11->setText(QApplication::translate("RasterizeToolDialog", "Min. vertex count", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minVertexCountSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Min vertex count per iso-line (to ignore the smallest ones)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("RasterizeToolDialog", "Line width", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        contourWidthSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Default contour lines width", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        colorizeContoursCheckBox->setText(QApplication::translate("RasterizeToolDialog", "colorize", Q_NULLPTR));
        ignoreContourBordersCheckBox->setText(QApplication::translate("RasterizeToolDialog", "ignore borders", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clearContoursPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Remove all contour lines", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportContoursPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export contour lines to the DB tree", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Export", Q_NULLPTR));
        generateContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Generate", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(contourTab), QApplication::translate("RasterizeToolDialog", "Contour plot", Q_NULLPTR));
        label_16->setText(QApplication::translate("RasterizeToolDialog", "Hillshade is computed on the height layer", Q_NULLPTR));
        label_17->setText(QApplication::translate("RasterizeToolDialog", "Sun zenith", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sunZenithSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Zenith angle (in degrees) = 90 - altitude angle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sunZenithSpinBox->setSuffix(QApplication::translate("RasterizeToolDialog", " deg.", Q_NULLPTR));
        label_18->setText(QApplication::translate("RasterizeToolDialog", "Sun azimuth", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sunAzimuthSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Azimuth angle (in degrees)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sunAzimuthSpinBox->setSuffix(QApplication::translate("RasterizeToolDialog", " deg.", Q_NULLPTR));
        generateHillshadePushButton->setText(QApplication::translate("RasterizeToolDialog", "Generate", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(hillshadeTab), QApplication::translate("RasterizeToolDialog", "Hillshade", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RasterizeToolDialog: public Ui_RasterizeToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTERIZEDLG_H
