/********************************************************************************
** Form generated from reading UI file 'registrationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDLG_H
#define UI_REGISTRATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLineEdit *dataLineEdit;
    QToolButton *modelColorButton;
    QToolButton *dataColorButton;
    QLabel *label_9;
    QLineEdit *modelLineEdit;
    QPushButton *swapButton;
    QTabWidget *tabWidget;
    QWidget *tabStdParams;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QRadioButton *iterationsCriterion;
    QSpinBox *maxIterationCount;
    QRadioButton *errorCriterion;
    QLineEdit *rmsDifferenceLineEdit;
    QLabel *label_4;
    QSpinBox *overlapSpinBox;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *adjustScaleCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QFrame *threadCountFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *maxThreadCountSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tabResearchParams;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *randomSamplingLimitSpinBox;
    QLabel *label_2;
    QComboBox *rotComboBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;
    QCheckBox *pointsRemoval;
    QCheckBox *checkBoxUseDataSFAsWeights;
    QCheckBox *checkBoxUseModelSFAsWeights;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QStringLiteral("RegistrationDialog"));
        RegistrationDialog->resize(350, 400);
        verticalLayout_2 = new QVBoxLayout(RegistrationDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_5 = new QGroupBox(RegistrationDialog);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        dataLineEdit = new QLineEdit(groupBox_5);
        dataLineEdit->setObjectName(QStringLiteral("dataLineEdit"));
        dataLineEdit->setReadOnly(true);

        gridLayout->addWidget(dataLineEdit, 0, 2, 1, 1);

        modelColorButton = new QToolButton(groupBox_5);
        modelColorButton->setObjectName(QStringLiteral("modelColorButton"));
        modelColorButton->setEnabled(false);

        gridLayout->addWidget(modelColorButton, 1, 0, 1, 1);

        dataColorButton = new QToolButton(groupBox_5);
        dataColorButton->setObjectName(QStringLiteral("dataColorButton"));
        dataColorButton->setEnabled(false);

        gridLayout->addWidget(dataColorButton, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        modelLineEdit = new QLineEdit(groupBox_5);
        modelLineEdit->setObjectName(QStringLiteral("modelLineEdit"));
        modelLineEdit->setReadOnly(true);

        gridLayout->addWidget(modelLineEdit, 1, 2, 1, 1);

        swapButton = new QPushButton(groupBox_5);
        swapButton->setObjectName(QStringLiteral("swapButton"));
        swapButton->setFlat(false);

        gridLayout->addWidget(swapButton, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        tabWidget = new QTabWidget(RegistrationDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabStdParams = new QWidget();
        tabStdParams->setObjectName(QStringLiteral("tabStdParams"));
        verticalLayout_3 = new QVBoxLayout(tabStdParams);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        iterationsCriterion = new QRadioButton(tabStdParams);
        iterationsCriterion->setObjectName(QStringLiteral("iterationsCriterion"));

        formLayout->setWidget(0, QFormLayout::LabelRole, iterationsCriterion);

        maxIterationCount = new QSpinBox(tabStdParams);
        maxIterationCount->setObjectName(QStringLiteral("maxIterationCount"));
        maxIterationCount->setEnabled(false);
        maxIterationCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxIterationCount->setMinimum(1);
        maxIterationCount->setMaximum(999999);
        maxIterationCount->setValue(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, maxIterationCount);

        errorCriterion = new QRadioButton(tabStdParams);
        errorCriterion->setObjectName(QStringLiteral("errorCriterion"));
        errorCriterion->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, errorCriterion);

        rmsDifferenceLineEdit = new QLineEdit(tabStdParams);
        rmsDifferenceLineEdit->setObjectName(QStringLiteral("rmsDifferenceLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rmsDifferenceLineEdit->sizePolicy().hasHeightForWidth());
        rmsDifferenceLineEdit->setSizePolicy(sizePolicy1);
        rmsDifferenceLineEdit->setLayoutDirection(Qt::RightToLeft);
        rmsDifferenceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, rmsDifferenceLineEdit);

        label_4 = new QLabel(tabStdParams);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: blue;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        overlapSpinBox = new QSpinBox(tabStdParams);
        overlapSpinBox->setObjectName(QStringLiteral("overlapSpinBox"));
        overlapSpinBox->setStyleSheet(QStringLiteral("color: blue;"));
        overlapSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlapSpinBox->setMinimum(1);
        overlapSpinBox->setMaximum(100);
        overlapSpinBox->setSingleStep(10);
        overlapSpinBox->setValue(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, overlapSpinBox);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        adjustScaleCheckBox = new QCheckBox(tabStdParams);
        adjustScaleCheckBox->setObjectName(QStringLiteral("adjustScaleCheckBox"));

        verticalLayout_3->addWidget(adjustScaleCheckBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        threadCountFrame = new QFrame(tabStdParams);
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


        horizontalLayout_7->addWidget(threadCountFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget->addTab(tabStdParams, QString());
        overlapSpinBox->raise();
        maxIterationCount->raise();
        label_4->raise();
        rmsDifferenceLineEdit->raise();
        iterationsCriterion->raise();
        errorCriterion->raise();
        overlapSpinBox->raise();
        maxIterationCount->raise();
        label_4->raise();
        rmsDifferenceLineEdit->raise();
        iterationsCriterion->raise();
        errorCriterion->raise();
        adjustScaleCheckBox->raise();
        threadCountFrame->raise();
        tabResearchParams = new QWidget();
        tabResearchParams->setObjectName(QStringLiteral("tabResearchParams"));
        verticalLayout = new QVBoxLayout(tabResearchParams);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(tabResearchParams);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        randomSamplingLimitSpinBox = new QSpinBox(tabResearchParams);
        randomSamplingLimitSpinBox->setObjectName(QStringLiteral("randomSamplingLimitSpinBox"));
        randomSamplingLimitSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        randomSamplingLimitSpinBox->setMaximum(1000000000);
        randomSamplingLimitSpinBox->setSingleStep(10000);
        randomSamplingLimitSpinBox->setValue(50000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, randomSamplingLimitSpinBox);

        label_2 = new QLabel(tabResearchParams);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        rotComboBox = new QComboBox(tabResearchParams);
        rotComboBox->setObjectName(QStringLiteral("rotComboBox"));
        sizePolicy1.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy1);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, rotComboBox);

        label_3 = new QLabel(tabResearchParams);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        TxCheckBox = new QCheckBox(tabResearchParams);
        TxCheckBox->setObjectName(QStringLiteral("TxCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy3);
        TxCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(tabResearchParams);
        TyCheckBox->setObjectName(QStringLiteral("TyCheckBox"));
        sizePolicy3.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy3);
        TyCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(tabResearchParams);
        TzCheckBox->setObjectName(QStringLiteral("TzCheckBox"));
        sizePolicy3.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy3);
        TzCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TzCheckBox);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);


        verticalLayout->addLayout(formLayout_2);

        pointsRemoval = new QCheckBox(tabResearchParams);
        pointsRemoval->setObjectName(QStringLiteral("pointsRemoval"));

        verticalLayout->addWidget(pointsRemoval);

        checkBoxUseDataSFAsWeights = new QCheckBox(tabResearchParams);
        checkBoxUseDataSFAsWeights->setObjectName(QStringLiteral("checkBoxUseDataSFAsWeights"));

        verticalLayout->addWidget(checkBoxUseDataSFAsWeights);

        checkBoxUseModelSFAsWeights = new QCheckBox(tabResearchParams);
        checkBoxUseModelSFAsWeights->setObjectName(QStringLiteral("checkBoxUseModelSFAsWeights"));

        verticalLayout->addWidget(checkBoxUseModelSFAsWeights);

        tabWidget->addTab(tabResearchParams, QString());

        verticalLayout_2->addWidget(tabWidget);

        frame = new QFrame(RegistrationDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RegistrationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(dataLineEdit, modelLineEdit);
        QWidget::setTabOrder(modelLineEdit, swapButton);
        QWidget::setTabOrder(swapButton, buttonBox);
        QWidget::setTabOrder(buttonBox, dataColorButton);
        QWidget::setTabOrder(dataColorButton, modelColorButton);

        retranslateUi(RegistrationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegistrationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegistrationDialog, SLOT(reject()));
        QObject::connect(iterationsCriterion, SIGNAL(toggled(bool)), maxIterationCount, SLOT(setEnabled(bool)));
        QObject::connect(errorCriterion, SIGNAL(toggled(bool)), rmsDifferenceLineEdit, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QApplication::translate("RegistrationDialog", "Clouds registration", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("RegistrationDialog", "Role assignation", Q_NULLPTR));
        label_10->setText(QApplication::translate("RegistrationDialog", "Data:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dataLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "the data cloud is the entity to align with the model cloud : it will be displaced (red cloud)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        dataLineEdit->setStatusTip(QApplication::translate("RegistrationDialog", "the data cloud is the entity to align with the model cloud : it will be displaced (red cloud)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        modelColorButton->setText(QString());
        dataColorButton->setText(QString());
        label_9->setText(QApplication::translate("RegistrationDialog", "Model:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        modelLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "the model cloud is the reference : it won't move (yellow cloud)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modelLineEdit->setStatusTip(QApplication::translate("RegistrationDialog", "the model cloud is the reference : it won't move (yellow cloud)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        swapButton->setToolTip(QApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        swapButton->setStatusTip(QApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        swapButton->setText(QApplication::translate("RegistrationDialog", "swap", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        iterationsCriterion->setToolTip(QApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the computation time.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        iterationsCriterion->setStatusTip(QApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the computation time.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        iterationsCriterion->setText(QApplication::translate("RegistrationDialog", "Number of iterations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxIterationCount->setToolTip(QApplication::translate("RegistrationDialog", "Set the maximal number of step for the algorithm regsitration computation .", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        errorCriterion->setToolTip(QApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the quality of the result.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        errorCriterion->setText(QApplication::translate("RegistrationDialog", "RMS difference", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "Set the minimum RMS improvement between 2 consecutive iterations (below which the registration process will stop).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setText(QApplication::translate("RegistrationDialog", "1.0e-5", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("RegistrationDialog", "Final overlap", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        overlapSpinBox->setToolTip(QApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        overlapSpinBox->setSuffix(QApplication::translate("RegistrationDialog", "%", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        adjustScaleCheckBox->setStatusTip(QApplication::translate("RegistrationDialog", "Whether to adjust the scale of the 'data' entity", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        adjustScaleCheckBox->setText(QApplication::translate("RegistrationDialog", "Adjust scale", Q_NULLPTR));
        label_6->setText(QApplication::translate("RegistrationDialog", "max thread count", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxThreadCountSpinBox->setToolTip(QApplication::translate("RegistrationDialog", "Maximum number of threads/cores to be used\n"
"(CC or your computer might not respond for a while if you use all available cores)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxThreadCountSpinBox->setSuffix(QApplication::translate("RegistrationDialog", " / 8", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabStdParams), QApplication::translate("RegistrationDialog", "Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("RegistrationDialog", "Random sampling limit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        randomSamplingLimitSpinBox->setToolTip(QApplication::translate("RegistrationDialog", "Above this limit, clouds are randomly resampled at each iteration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("RegistrationDialog", "Rotation", Q_NULLPTR));
        rotComboBox->clear();
        rotComboBox->insertItems(0, QStringList()
         << QApplication::translate("RegistrationDialog", "XYZ", Q_NULLPTR)
         << QApplication::translate("RegistrationDialog", "X", Q_NULLPTR)
         << QApplication::translate("RegistrationDialog", "Y", Q_NULLPTR)
         << QApplication::translate("RegistrationDialog", "Z", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("RegistrationDialog", "Translation", Q_NULLPTR));
        TxCheckBox->setText(QApplication::translate("RegistrationDialog", "Tx", Q_NULLPTR));
        TyCheckBox->setText(QApplication::translate("RegistrationDialog", "Ty", Q_NULLPTR));
        TzCheckBox->setText(QApplication::translate("RegistrationDialog", "Tz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pointsRemoval->setToolTip(QApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointsRemoval->setStatusTip(QApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pointsRemoval->setText(QApplication::translate("RegistrationDialog", "Enable farthest points removal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxUseDataSFAsWeights->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxUseDataSFAsWeights->setText(QApplication::translate("RegistrationDialog", "Data: use displayed S.F. as weights", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxUseModelSFAsWeights->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxUseModelSFAsWeights->setText(QApplication::translate("RegistrationDialog", "Model: use displayed S.F. as weights (only for clouds)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabResearchParams), QApplication::translate("RegistrationDialog", "Research", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDLG_H
