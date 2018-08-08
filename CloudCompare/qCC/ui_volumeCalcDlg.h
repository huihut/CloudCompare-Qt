/********************************************************************************
** Form generated from reading UI file 'volumeCalcDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMECALCDLG_H
#define UI_VOLUMECALCDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VolumeCalcDialog
{
public:
    QFormLayout *formLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groundGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QComboBox *groundComboBox;
    QComboBox *fillGroundEmptyCellsComboBox;
    QLabel *label_10;
    QDoubleSpinBox *groundEmptyValueDoubleSpinBox;
    QFrame *swapButtonFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *swapToolButton;
    QGroupBox *ceilGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *ceilComboBox;
    QLabel *label_6;
    QComboBox *fillCeilEmptyCellsComboBox;
    QDoubleSpinBox *ceilEmptyValueDoubleSpinBox;
    QGroupBox *gridGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *gridParamsFrame;
    QFormLayout *formLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *gridStepDoubleSpinBox;
    QToolButton *editGridToolButton;
    QLabel *label_4;
    QLabel *gridWidthLabel;
    QLabel *label_9;
    QComboBox *projDimComboBox;
    QLabel *label_8;
    QComboBox *heightProjectionComboBox;
    QPushButton *updatePushButton;
    QGroupBox *resultGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *spareseWarningLabel;
    QPlainTextEdit *reportPlainTextEdit;
    QPushButton *clipboardPushButton;
    QPushButton *exportGridPushButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *precisionSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *mapFrame;

    void setupUi(QDialog *VolumeCalcDialog)
    {
        if (VolumeCalcDialog->objectName().isEmpty())
            VolumeCalcDialog->setObjectName(QStringLiteral("VolumeCalcDialog"));
        VolumeCalcDialog->resize(1000, 663);
        formLayout = new QFormLayout(VolumeCalcDialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        leftFrame = new QFrame(VolumeCalcDialog);
        leftFrame->setObjectName(QStringLiteral("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(leftFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groundGroupBox = new QGroupBox(leftFrame);
        groundGroupBox->setObjectName(QStringLiteral("groundGroupBox"));
        formLayout_2 = new QFormLayout(groundGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_7 = new QLabel(groundGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        groundComboBox = new QComboBox(groundGroupBox);
        groundComboBox->setObjectName(QStringLiteral("groundComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, groundComboBox);

        fillGroundEmptyCellsComboBox = new QComboBox(groundGroupBox);
        fillGroundEmptyCellsComboBox->setObjectName(QStringLiteral("fillGroundEmptyCellsComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, fillGroundEmptyCellsComboBox);

        label_10 = new QLabel(groundGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        groundEmptyValueDoubleSpinBox = new QDoubleSpinBox(groundGroupBox);
        groundEmptyValueDoubleSpinBox->setObjectName(QStringLiteral("groundEmptyValueDoubleSpinBox"));
        groundEmptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groundEmptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        groundEmptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        groundEmptyValueDoubleSpinBox->setDecimals(6);
        groundEmptyValueDoubleSpinBox->setMinimum(-1e+9);
        groundEmptyValueDoubleSpinBox->setMaximum(1e+9);
        groundEmptyValueDoubleSpinBox->setValue(0);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, groundEmptyValueDoubleSpinBox);


        verticalLayout_2->addWidget(groundGroupBox);

        swapButtonFrame = new QFrame(leftFrame);
        swapButtonFrame->setObjectName(QStringLiteral("swapButtonFrame"));
        swapButtonFrame->setFrameShape(QFrame::StyledPanel);
        swapButtonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(swapButtonFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        swapToolButton = new QToolButton(swapButtonFrame);
        swapToolButton->setObjectName(QStringLiteral("swapToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/ccSwapUpDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        swapToolButton->setIcon(icon);
        swapToolButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(swapToolButton);


        verticalLayout_2->addWidget(swapButtonFrame);

        ceilGroupBox = new QGroupBox(leftFrame);
        ceilGroupBox->setObjectName(QStringLiteral("ceilGroupBox"));
        formLayout_3 = new QFormLayout(ceilGroupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(ceilGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        ceilComboBox = new QComboBox(ceilGroupBox);
        ceilComboBox->setObjectName(QStringLiteral("ceilComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ceilComboBox);

        label_6 = new QLabel(ceilGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        fillCeilEmptyCellsComboBox = new QComboBox(ceilGroupBox);
        fillCeilEmptyCellsComboBox->setObjectName(QStringLiteral("fillCeilEmptyCellsComboBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, fillCeilEmptyCellsComboBox);

        ceilEmptyValueDoubleSpinBox = new QDoubleSpinBox(ceilGroupBox);
        ceilEmptyValueDoubleSpinBox->setObjectName(QStringLiteral("ceilEmptyValueDoubleSpinBox"));
        ceilEmptyValueDoubleSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(ceilEmptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ceilEmptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        ceilEmptyValueDoubleSpinBox->setDecimals(6);
        ceilEmptyValueDoubleSpinBox->setMinimum(-1e+9);
        ceilEmptyValueDoubleSpinBox->setMaximum(1e+9);
        ceilEmptyValueDoubleSpinBox->setValue(0);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, ceilEmptyValueDoubleSpinBox);


        verticalLayout_2->addWidget(ceilGroupBox);

        gridGroupBox = new QGroupBox(leftFrame);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        verticalLayout_3 = new QVBoxLayout(gridGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridParamsFrame = new QFrame(gridGroupBox);
        gridParamsFrame->setObjectName(QStringLiteral("gridParamsFrame"));
        gridParamsFrame->setFrameShape(QFrame::StyledPanel);
        gridParamsFrame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(gridParamsFrame);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridParamsFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridStepDoubleSpinBox = new QDoubleSpinBox(gridParamsFrame);
        gridStepDoubleSpinBox->setObjectName(QStringLiteral("gridStepDoubleSpinBox"));
        gridStepDoubleSpinBox->setDecimals(6);
        gridStepDoubleSpinBox->setMinimum(0.001);
        gridStepDoubleSpinBox->setMaximum(1000);
        gridStepDoubleSpinBox->setSingleStep(0.001);
        gridStepDoubleSpinBox->setValue(1);

        horizontalLayout_4->addWidget(gridStepDoubleSpinBox);

        editGridToolButton = new QToolButton(gridParamsFrame);
        editGridToolButton->setObjectName(QStringLiteral("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_4 = new QLabel(gridParamsFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_4);

        gridWidthLabel = new QLabel(gridParamsFrame);
        gridWidthLabel->setObjectName(QStringLiteral("gridWidthLabel"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, gridWidthLabel);

        label_9 = new QLabel(gridParamsFrame);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_9);

        projDimComboBox = new QComboBox(gridParamsFrame);
        projDimComboBox->setObjectName(QStringLiteral("projDimComboBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, projDimComboBox);

        label_8 = new QLabel(gridParamsFrame);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_8);

        heightProjectionComboBox = new QComboBox(gridParamsFrame);
        heightProjectionComboBox->setObjectName(QStringLiteral("heightProjectionComboBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, heightProjectionComboBox);


        verticalLayout_3->addWidget(gridParamsFrame);

        updatePushButton = new QPushButton(gridGroupBox);
        updatePushButton->setObjectName(QStringLiteral("updatePushButton"));
        updatePushButton->setStyleSheet(QStringLiteral("color: white; background-color:red;"));

        verticalLayout_3->addWidget(updatePushButton);


        verticalLayout_2->addWidget(gridGroupBox);

        resultGroupBox = new QGroupBox(leftFrame);
        resultGroupBox->setObjectName(QStringLiteral("resultGroupBox"));
        verticalLayout = new QVBoxLayout(resultGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        spareseWarningLabel = new QLabel(resultGroupBox);
        spareseWarningLabel->setObjectName(QStringLiteral("spareseWarningLabel"));
        spareseWarningLabel->setStyleSheet(QStringLiteral("color:red;"));
        spareseWarningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(spareseWarningLabel);

        reportPlainTextEdit = new QPlainTextEdit(resultGroupBox);
        reportPlainTextEdit->setObjectName(QStringLiteral("reportPlainTextEdit"));
        reportPlainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(reportPlainTextEdit);

        clipboardPushButton = new QPushButton(resultGroupBox);
        clipboardPushButton->setObjectName(QStringLiteral("clipboardPushButton"));
        clipboardPushButton->setEnabled(false);

        verticalLayout->addWidget(clipboardPushButton);

        exportGridPushButton = new QPushButton(resultGroupBox);
        exportGridPushButton->setObjectName(QStringLiteral("exportGridPushButton"));
        exportGridPushButton->setEnabled(false);

        verticalLayout->addWidget(exportGridPushButton);

        frame = new QFrame(resultGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        precisionSpinBox = new QSpinBox(frame);
        precisionSpinBox->setObjectName(QStringLiteral("precisionSpinBox"));
        precisionSpinBox->setMaximum(12);
        precisionSpinBox->setValue(3);

        horizontalLayout_2->addWidget(precisionSpinBox);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addWidget(resultGroupBox);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(leftFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        formLayout->setWidget(0, QFormLayout::LabelRole, leftFrame);

        mapFrame = new QFrame(VolumeCalcDialog);
        mapFrame->setObjectName(QStringLiteral("mapFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mapFrame->sizePolicy().hasHeightForWidth());
        mapFrame->setSizePolicy(sizePolicy2);
        mapFrame->setMinimumSize(QSize(256, 256));
        mapFrame->setFrameShape(QFrame::StyledPanel);
        mapFrame->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(0, QFormLayout::FieldRole, mapFrame);


        retranslateUi(VolumeCalcDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VolumeCalcDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VolumeCalcDialog, SLOT(reject()));

        projDimComboBox->setCurrentIndex(2);
        heightProjectionComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(VolumeCalcDialog);
    } // setupUi

    void retranslateUi(QDialog *VolumeCalcDialog)
    {
        VolumeCalcDialog->setWindowTitle(QApplication::translate("VolumeCalcDialog", "Volume calculation", Q_NULLPTR));
        groundGroupBox->setTitle(QApplication::translate("VolumeCalcDialog", "Ground / Before", Q_NULLPTR));
        label_7->setText(QApplication::translate("VolumeCalcDialog", "Source", Q_NULLPTR));
        fillGroundEmptyCellsComboBox->clear();
        fillGroundEmptyCellsComboBox->insertItems(0, QStringList()
         << QApplication::translate("VolumeCalcDialog", "leave empty", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "average height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "maximum height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "user specified value", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "interpolate", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        fillGroundEmptyCellsComboBox->setToolTip(QApplication::translate("VolumeCalcDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("VolumeCalcDialog", "Empty cells", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groundEmptyValueDoubleSpinBox->setToolTip(QApplication::translate("VolumeCalcDialog", "Custom value for empty cells", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        swapToolButton->setToolTip(QApplication::translate("VolumeCalcDialog", "Swap", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        swapToolButton->setText(QApplication::translate("VolumeCalcDialog", "swap", Q_NULLPTR));
        ceilGroupBox->setTitle(QApplication::translate("VolumeCalcDialog", "Ceil / After", Q_NULLPTR));
        label_3->setText(QApplication::translate("VolumeCalcDialog", "Source", Q_NULLPTR));
        label_6->setText(QApplication::translate("VolumeCalcDialog", "Empty cells", Q_NULLPTR));
        fillCeilEmptyCellsComboBox->clear();
        fillCeilEmptyCellsComboBox->insertItems(0, QStringList()
         << QApplication::translate("VolumeCalcDialog", "leave empty", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "average height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "maximum height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "user specified value", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "interpolate", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        fillCeilEmptyCellsComboBox->setToolTip(QApplication::translate("VolumeCalcDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ceilEmptyValueDoubleSpinBox->setToolTip(QApplication::translate("VolumeCalcDialog", "Custom value for empty cells", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gridGroupBox->setTitle(QApplication::translate("VolumeCalcDialog", "Grid", Q_NULLPTR));
        label_2->setText(QApplication::translate("VolumeCalcDialog", "step", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gridStepDoubleSpinBox->setToolTip(QApplication::translate("VolumeCalcDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editGridToolButton->setText(QApplication::translate("VolumeCalcDialog", "Edit grid", Q_NULLPTR));
        label_4->setText(QApplication::translate("VolumeCalcDialog", "size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gridWidthLabel->setToolTip(QApplication::translate("VolumeCalcDialog", "Grid size corresponding to the current step / boundaries", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gridWidthLabel->setText(QApplication::translate("VolumeCalcDialog", "640 x 480", Q_NULLPTR));
        label_9->setText(QApplication::translate("VolumeCalcDialog", "projection dir.", Q_NULLPTR));
        projDimComboBox->clear();
        projDimComboBox->insertItems(0, QStringList()
         << QApplication::translate("VolumeCalcDialog", "X", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "Y", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "Z", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        projDimComboBox->setToolTip(QApplication::translate("VolumeCalcDialog", "Projection direction (X, Y or Z)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("VolumeCalcDialog", "cell height", Q_NULLPTR));
        heightProjectionComboBox->clear();
        heightProjectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("VolumeCalcDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "average height", Q_NULLPTR)
         << QApplication::translate("VolumeCalcDialog", "maximum height", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        heightProjectionComboBox->setToolTip(QApplication::translate("VolumeCalcDialog", "Per-cell height computation method:\n"
" - minimum = lowest point in the cell\n"
" - average = mean height of all points inside the cell\n"
" - maximum = highest point in the cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        updatePushButton->setToolTip(QApplication::translate("VolumeCalcDialog", "Update the grid / display / measurements", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updatePushButton->setText(QApplication::translate("VolumeCalcDialog", "Update", Q_NULLPTR));
        resultGroupBox->setTitle(QApplication::translate("VolumeCalcDialog", "Results", Q_NULLPTR));
        spareseWarningLabel->setText(QApplication::translate("VolumeCalcDialog", "At least one of the cloud is sparse!\n"
"You should fill the empty cells...", Q_NULLPTR));
        clipboardPushButton->setText(QApplication::translate("VolumeCalcDialog", "Copy to clipboard", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportGridPushButton->setToolTip(QApplication::translate("VolumeCalcDialog", "Export the grid as a point cloud\n"
"(warning, the points heights will be the difference of altitude!)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportGridPushButton->setText(QApplication::translate("VolumeCalcDialog", "Export grid as a cloud", Q_NULLPTR));
        label->setText(QApplication::translate("VolumeCalcDialog", "Num. precision", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        precisionSpinBox->setToolTip(QApplication::translate("VolumeCalcDialog", "Numerical precision (output measurements, etc.)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class VolumeCalcDialog: public Ui_VolumeCalcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMECALCDLG_H
