/********************************************************************************
** Form generated from reading UI file 'comparisonDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISONDLG_H
#define UI_COMPARISONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComparisonDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *compName;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *refName;
    QGroupBox *preciseGroupBox;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *preciseResultsTabWidget;
    QWidget *generalParamsTab;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *octreeLevelComboBox;
    QCheckBox *maxDistCheckBox;
    QDoubleSpinBox *maxSearchDistSpinBox;
    QCheckBox *signedDistCheckBox;
    QCheckBox *flipNormalsCheckBox;
    QCheckBox *split3DCheckBox;
    QCheckBox *filterVisibilityCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *multiThreadedCheckBox;
    QSpacerItem *horizontalSpacer;
    QFrame *threadCountFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *maxThreadCountSpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *localModelingTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QComboBox *localModelComboBox;
    QFrame *localModelParamsFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *lmKNNRadioButton;
    QSpinBox *lmKNNSpinBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *lmRadiusRadioButton;
    QDoubleSpinBox *lmRadiusDoubleSpinBox;
    QCheckBox *lmOptimizeCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *approxTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *approxResultsInnerFrame;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QTableWidget *approxStats;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem;
    QToolButton *histoButton;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem1;
    QPushButton *computeButton;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QStringLiteral("ComparisonDialog"));
        ComparisonDialog->resize(420, 380);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/Old/images/old_cc/old_cc.gif"), QSize(), QIcon::Normal, QIcon::Off);
        ComparisonDialog->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(ComparisonDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(ComparisonDialog);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        compName = new QLineEdit(ComparisonDialog);
        compName->setObjectName(QStringLiteral("compName"));
        compName->setReadOnly(true);

        hboxLayout->addWidget(compName);


        verticalLayout_5->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_2 = new QLabel(ComparisonDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

        refName = new QLineEdit(ComparisonDialog);
        refName->setObjectName(QStringLiteral("refName"));
        refName->setReadOnly(true);

        hboxLayout1->addWidget(refName);


        verticalLayout_5->addLayout(hboxLayout1);

        preciseGroupBox = new QGroupBox(ComparisonDialog);
        preciseGroupBox->setObjectName(QStringLiteral("preciseGroupBox"));
        verticalLayout_6 = new QVBoxLayout(preciseGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        preciseResultsTabWidget = new QTabWidget(preciseGroupBox);
        preciseResultsTabWidget->setObjectName(QStringLiteral("preciseResultsTabWidget"));
        generalParamsTab = new QWidget();
        generalParamsTab->setObjectName(QStringLiteral("generalParamsTab"));
        verticalLayout_7 = new QVBoxLayout(generalParamsTab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(generalParamsTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        octreeLevelComboBox = new QComboBox(generalParamsTab);
        octreeLevelComboBox->setObjectName(QStringLiteral("octreeLevelComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, octreeLevelComboBox);

        maxDistCheckBox = new QCheckBox(generalParamsTab);
        maxDistCheckBox->setObjectName(QStringLiteral("maxDistCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maxDistCheckBox);

        maxSearchDistSpinBox = new QDoubleSpinBox(generalParamsTab);
        maxSearchDistSpinBox->setObjectName(QStringLiteral("maxSearchDistSpinBox"));
        maxSearchDistSpinBox->setEnabled(false);
        maxSearchDistSpinBox->setDecimals(6);
        maxSearchDistSpinBox->setMaximum(1e+9);
        maxSearchDistSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxSearchDistSpinBox);

        signedDistCheckBox = new QCheckBox(generalParamsTab);
        signedDistCheckBox->setObjectName(QStringLiteral("signedDistCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, signedDistCheckBox);

        flipNormalsCheckBox = new QCheckBox(generalParamsTab);
        flipNormalsCheckBox->setObjectName(QStringLiteral("flipNormalsCheckBox"));
        flipNormalsCheckBox->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, flipNormalsCheckBox);


        verticalLayout_7->addLayout(formLayout);

        split3DCheckBox = new QCheckBox(generalParamsTab);
        split3DCheckBox->setObjectName(QStringLiteral("split3DCheckBox"));

        verticalLayout_7->addWidget(split3DCheckBox);

        filterVisibilityCheckBox = new QCheckBox(generalParamsTab);
        filterVisibilityCheckBox->setObjectName(QStringLiteral("filterVisibilityCheckBox"));

        verticalLayout_7->addWidget(filterVisibilityCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        multiThreadedCheckBox = new QCheckBox(generalParamsTab);
        multiThreadedCheckBox->setObjectName(QStringLiteral("multiThreadedCheckBox"));
        multiThreadedCheckBox->setChecked(true);

        horizontalLayout->addWidget(multiThreadedCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        threadCountFrame = new QFrame(generalParamsTab);
        threadCountFrame->setObjectName(QStringLiteral("threadCountFrame"));
        threadCountFrame->setFrameShape(QFrame::StyledPanel);
        threadCountFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(threadCountFrame);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(threadCountFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        maxThreadCountSpinBox = new QSpinBox(threadCountFrame);
        maxThreadCountSpinBox->setObjectName(QStringLiteral("maxThreadCountSpinBox"));

        horizontalLayout_8->addWidget(maxThreadCountSpinBox);


        horizontalLayout->addWidget(threadCountFrame);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        preciseResultsTabWidget->addTab(generalParamsTab, QString());
        localModelingTab = new QWidget();
        localModelingTab->setObjectName(QStringLiteral("localModelingTab"));
        verticalLayout_3 = new QVBoxLayout(localModelingTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_3 = new QLabel(localModelingTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout2->addWidget(label_3);

        localModelComboBox = new QComboBox(localModelingTab);
        localModelComboBox->setObjectName(QStringLiteral("localModelComboBox"));

        hboxLayout2->addWidget(localModelComboBox);


        verticalLayout_3->addLayout(hboxLayout2);

        localModelParamsFrame = new QFrame(localModelingTab);
        localModelParamsFrame->setObjectName(QStringLiteral("localModelParamsFrame"));
        localModelParamsFrame->setEnabled(false);
        verticalLayout_4 = new QVBoxLayout(localModelParamsFrame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lmKNNRadioButton = new QRadioButton(localModelParamsFrame);
        lmKNNRadioButton->setObjectName(QStringLiteral("lmKNNRadioButton"));
        lmKNNRadioButton->setChecked(true);

        verticalLayout_2->addWidget(lmKNNRadioButton);

        lmKNNSpinBox = new QSpinBox(localModelParamsFrame);
        lmKNNSpinBox->setObjectName(QStringLiteral("lmKNNSpinBox"));
        lmKNNSpinBox->setMinimum(3);
        lmKNNSpinBox->setValue(6);

        verticalLayout_2->addWidget(lmKNNSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lmRadiusRadioButton = new QRadioButton(localModelParamsFrame);
        lmRadiusRadioButton->setObjectName(QStringLiteral("lmRadiusRadioButton"));

        verticalLayout->addWidget(lmRadiusRadioButton);

        lmRadiusDoubleSpinBox = new QDoubleSpinBox(localModelParamsFrame);
        lmRadiusDoubleSpinBox->setObjectName(QStringLiteral("lmRadiusDoubleSpinBox"));
        lmRadiusDoubleSpinBox->setEnabled(false);
        lmRadiusDoubleSpinBox->setDecimals(6);
        lmRadiusDoubleSpinBox->setMaximum(1e+9);

        verticalLayout->addWidget(lmRadiusDoubleSpinBox);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        lmOptimizeCheckBox = new QCheckBox(localModelParamsFrame);
        lmOptimizeCheckBox->setObjectName(QStringLiteral("lmOptimizeCheckBox"));

        verticalLayout_4->addWidget(lmOptimizeCheckBox);


        verticalLayout_3->addWidget(localModelParamsFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        preciseResultsTabWidget->addTab(localModelingTab, QString());
        approxTab = new QWidget();
        approxTab->setObjectName(QStringLiteral("approxTab"));
        verticalLayout_9 = new QVBoxLayout(approxTab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        approxResultsInnerFrame = new QFrame(approxTab);
        approxResultsInnerFrame->setObjectName(QStringLiteral("approxResultsInnerFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(approxResultsInnerFrame->sizePolicy().hasHeightForWidth());
        approxResultsInnerFrame->setSizePolicy(sizePolicy);
        approxResultsInnerFrame->setFrameShape(QFrame::StyledPanel);
        approxResultsInnerFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(approxResultsInnerFrame);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(approxResultsInnerFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: red;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);

        approxStats = new QTableWidget(approxResultsInnerFrame);
        approxStats->setObjectName(QStringLiteral("approxStats"));
        approxStats->setMaximumSize(QSize(16777215, 150));

        verticalLayout_8->addWidget(approxStats);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        histoButton = new QToolButton(approxResultsInnerFrame);
        histoButton->setObjectName(QStringLiteral("histoButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/ccHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        histoButton->setIcon(icon1);

        hboxLayout3->addWidget(histoButton);


        verticalLayout_8->addLayout(hboxLayout3);


        verticalLayout_9->addWidget(approxResultsInnerFrame);

        preciseResultsTabWidget->addTab(approxTab, QString());

        verticalLayout_6->addWidget(preciseResultsTabWidget);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        computeButton = new QPushButton(preciseGroupBox);
        computeButton->setObjectName(QStringLiteral("computeButton"));
        computeButton->setStyleSheet(QStringLiteral("background-color:red; color: white;"));

        hboxLayout4->addWidget(computeButton);


        verticalLayout_6->addLayout(hboxLayout4);


        verticalLayout_5->addWidget(preciseGroupBox);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        okButton = new QPushButton(ComparisonDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setEnabled(false);

        hboxLayout5->addWidget(okButton);

        cancelButton = new QPushButton(ComparisonDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout5->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout5);


        retranslateUi(ComparisonDialog);
        QObject::connect(maxDistCheckBox, SIGNAL(toggled(bool)), maxSearchDistSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmKNNSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmRadiusDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(signedDistCheckBox, SIGNAL(toggled(bool)), flipNormalsCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(multiThreadedCheckBox, SIGNAL(toggled(bool)), threadCountFrame, SLOT(setEnabled(bool)));

        preciseResultsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QApplication::translate("ComparisonDialog", "Distance computation", Q_NULLPTR));
        label->setText(QApplication::translate("ComparisonDialog", "Compared", Q_NULLPTR));
        label_2->setText(QApplication::translate("ComparisonDialog", "Reference", Q_NULLPTR));
        preciseGroupBox->setTitle(QApplication::translate("ComparisonDialog", "Precise results", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("ComparisonDialog", "Level of subdivision used for computing the distances", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ComparisonDialog", "Octree level", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxDistCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxDistCheckBox->setText(QApplication::translate("ComparisonDialog", "max. distance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxSearchDistSpinBox->setToolTip(QApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        signedDistCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        signedDistCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        signedDistCheckBox->setText(QApplication::translate("ComparisonDialog", "signed distances", Q_NULLPTR));
        flipNormalsCheckBox->setText(QApplication::translate("ComparisonDialog", "flip normals", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        split3DCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        split3DCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        split3DCheckBox->setText(QApplication::translate("ComparisonDialog", "split X,Y and Z components", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterVisibilityCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Use the sensor associated to the reference cloud to ignore the points in the compared cloud\n"
"that could not have been seen (hidden/out of range/out of field of view).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        filterVisibilityCheckBox->setText(QApplication::translate("ComparisonDialog", "use reference sensor to filter hidden points", Q_NULLPTR));
        multiThreadedCheckBox->setText(QApplication::translate("ComparisonDialog", "multi-threaded", Q_NULLPTR));
        label_6->setText(QApplication::translate("ComparisonDialog", "max thread count", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxThreadCountSpinBox->setToolTip(QApplication::translate("ComparisonDialog", "Maximum number of threads/cores to be used\n"
"(CC or your computer might not respond for a while if you use all available cores)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxThreadCountSpinBox->setSuffix(QApplication::translate("ComparisonDialog", " / 8", Q_NULLPTR));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(generalParamsTab), QApplication::translate("ComparisonDialog", "General parameters", Q_NULLPTR));
        label_3->setText(QApplication::translate("ComparisonDialog", "Local model", Q_NULLPTR));
        lmKNNRadioButton->setText(QApplication::translate("ComparisonDialog", "Points (kNN)", Q_NULLPTR));
        lmRadiusRadioButton->setText(QApplication::translate("ComparisonDialog", "Radius (Sphere)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lmOptimizeCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "faster but more ... approximate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lmOptimizeCheckBox->setText(QApplication::translate("ComparisonDialog", "use the same model for nearby points", Q_NULLPTR));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(localModelingTab), QApplication::translate("ComparisonDialog", "Local modeling", Q_NULLPTR));
        label_4->setText(QApplication::translate("ComparisonDialog", "Warning: approximate results are only provided\n"
"to help you set the general parameters", Q_NULLPTR));
        histoButton->setText(QApplication::translate("ComparisonDialog", "...", Q_NULLPTR));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(approxTab), QApplication::translate("ComparisonDialog", "Approx. results", Q_NULLPTR));
        computeButton->setText(QApplication::translate("ComparisonDialog", "Compute", Q_NULLPTR));
        okButton->setText(QApplication::translate("ComparisonDialog", "Ok", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ComparisonDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComparisonDialog: public Ui_ComparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDLG_H
