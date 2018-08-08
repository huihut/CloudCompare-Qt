/********************************************************************************
** Form generated from reading UI file 'heightGridGenerationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEIGHTGRIDGENERATIONDLG_H
#define UI_HEIGHTGRIDGENERATIONDLG_H

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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeightGridGenerationDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *gridStep;
    QToolButton *editGridToolButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_2;
    QLabel *label;
    QComboBox *typeOfProjectionComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *dimensionComboBox;
    QFrame *interpolateSFFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *interpolateSFCheckBox;
    QComboBox *scalarFieldProjection;
    QGroupBox *emptyCellsFrame;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *fillEmptyCells;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *generateCloudGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *generateCountSFcheckBox;
    QCheckBox *resampleOriginalCloudCheckBox;
    QCheckBox *generateRasterCheckBox;
    QCheckBox *generateImageCheckBox;
    QCheckBox *generateASCIICheckBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HeightGridGenerationDialog)
    {
        if (HeightGridGenerationDialog->objectName().isEmpty())
            HeightGridGenerationDialog->setObjectName(QStringLiteral("HeightGridGenerationDialog"));
        HeightGridGenerationDialog->resize(350, 487);
        HeightGridGenerationDialog->setAcceptDrops(true);
        HeightGridGenerationDialog->setSizeGripEnabled(false);
        verticalLayout_3 = new QVBoxLayout(HeightGridGenerationDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(HeightGridGenerationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        gridStep = new QDoubleSpinBox(groupBox);
        gridStep->setObjectName(QStringLiteral("gridStep"));
        gridStep->setDecimals(3);
        gridStep->setMinimum(0.001);
        gridStep->setMaximum(1000);
        gridStep->setSingleStep(0.001);
        gridStep->setValue(1);

        horizontalLayout_4->addWidget(gridStep);

        editGridToolButton = new QToolButton(groupBox);
        editGridToolButton->setObjectName(QStringLiteral("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(HeightGridGenerationDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        layout_2 = new QHBoxLayout();
        layout_2->setObjectName(QStringLiteral("layout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        layout_2->addWidget(label);

        typeOfProjectionComboBox = new QComboBox(groupBox_2);
        typeOfProjectionComboBox->setObjectName(QStringLiteral("typeOfProjectionComboBox"));

        layout_2->addWidget(typeOfProjectionComboBox);


        verticalLayout->addLayout(layout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        dimensionComboBox = new QComboBox(groupBox_2);
        dimensionComboBox->setObjectName(QStringLiteral("dimensionComboBox"));

        horizontalLayout_2->addWidget(dimensionComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

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


        verticalLayout->addWidget(interpolateSFFrame);


        verticalLayout_3->addWidget(groupBox_2);

        emptyCellsFrame = new QGroupBox(HeightGridGenerationDialog);
        emptyCellsFrame->setObjectName(QStringLiteral("emptyCellsFrame"));
        formLayout = new QFormLayout(emptyCellsFrame);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(emptyCellsFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        fillEmptyCells = new QComboBox(emptyCellsFrame);
        fillEmptyCells->setObjectName(QStringLiteral("fillEmptyCells"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fillEmptyCells);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QStringLiteral("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-1e+9);
        emptyValueDoubleSpinBox->setMaximum(1e+9);
        emptyValueDoubleSpinBox->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, emptyValueDoubleSpinBox);


        verticalLayout_3->addWidget(emptyCellsFrame);

        groupBox_3 = new QGroupBox(HeightGridGenerationDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        generateCloudGroupBox = new QGroupBox(groupBox_3);
        generateCloudGroupBox->setObjectName(QStringLiteral("generateCloudGroupBox"));
        generateCloudGroupBox->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(generateCloudGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        generateCountSFcheckBox = new QCheckBox(generateCloudGroupBox);
        generateCountSFcheckBox->setObjectName(QStringLiteral("generateCountSFcheckBox"));

        verticalLayout_4->addWidget(generateCountSFcheckBox);

        resampleOriginalCloudCheckBox = new QCheckBox(generateCloudGroupBox);
        resampleOriginalCloudCheckBox->setObjectName(QStringLiteral("resampleOriginalCloudCheckBox"));
        resampleOriginalCloudCheckBox->setChecked(false);

        verticalLayout_4->addWidget(resampleOriginalCloudCheckBox);


        verticalLayout_2->addWidget(generateCloudGroupBox);

        generateRasterCheckBox = new QCheckBox(groupBox_3);
        generateRasterCheckBox->setObjectName(QStringLiteral("generateRasterCheckBox"));

        verticalLayout_2->addWidget(generateRasterCheckBox);

        generateImageCheckBox = new QCheckBox(groupBox_3);
        generateImageCheckBox->setObjectName(QStringLiteral("generateImageCheckBox"));

        verticalLayout_2->addWidget(generateImageCheckBox);

        generateASCIICheckBox = new QCheckBox(groupBox_3);
        generateASCIICheckBox->setObjectName(QStringLiteral("generateASCIICheckBox"));
        generateASCIICheckBox->setChecked(false);

        verticalLayout_2->addWidget(generateASCIICheckBox);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(HeightGridGenerationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(HeightGridGenerationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HeightGridGenerationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HeightGridGenerationDialog, SLOT(reject()));
        QObject::connect(interpolateSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));

        typeOfProjectionComboBox->setCurrentIndex(1);
        dimensionComboBox->setCurrentIndex(2);
        scalarFieldProjection->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HeightGridGenerationDialog);
    } // setupUi

    void retranslateUi(QDialog *HeightGridGenerationDialog)
    {
        HeightGridGenerationDialog->setWindowTitle(QApplication::translate("HeightGridGenerationDialog", "Height grid generation", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("HeightGridGenerationDialog", "Grid", Q_NULLPTR));
        label_2->setText(QApplication::translate("HeightGridGenerationDialog", "step", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gridStep->setToolTip(QApplication::translate("HeightGridGenerationDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editGridToolButton->setText(QApplication::translate("HeightGridGenerationDialog", "Edit grid", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("HeightGridGenerationDialog", "Projection", Q_NULLPTR));
        label->setText(QApplication::translate("HeightGridGenerationDialog", "type", Q_NULLPTR));
        typeOfProjectionComboBox->clear();
        typeOfProjectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "average height", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "maximum height", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        typeOfProjectionComboBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("HeightGridGenerationDialog", "direction", Q_NULLPTR));
        dimensionComboBox->clear();
        dimensionComboBox->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "X", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "Y", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "Z", Q_NULLPTR)
        );
        interpolateSFCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "interpolate scalar field(s)", Q_NULLPTR));
        scalarFieldProjection->clear();
        scalarFieldProjection->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "minimum value", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "average value", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "maximum value", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        scalarFieldProjection->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emptyCellsFrame->setTitle(QApplication::translate("HeightGridGenerationDialog", "Empty cells", Q_NULLPTR));
        label_3->setText(QApplication::translate("HeightGridGenerationDialog", "Fill with", Q_NULLPTR));
        fillEmptyCells->clear();
        fillEmptyCells->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "leave empty", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "minimum height", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "average height", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "maximum height", Q_NULLPTR)
         << QApplication::translate("HeightGridGenerationDialog", "user specified value", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        fillEmptyCells->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("HeightGridGenerationDialog", "Generate", Q_NULLPTR));
        generateCloudGroupBox->setTitle(QApplication::translate("HeightGridGenerationDialog", "Grid as a point cloud", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateCountSFcheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "Adds a scalar field with the grid density (= number of points falling in each cell)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateCountSFcheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "save per-cell count as SF", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resampleOriginalCloudCheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "Keeps the nearest point in each cell instead of the cell center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resampleOriginalCloudCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "resample original cloud", Q_NULLPTR));
        generateRasterCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "Grid as a raster (geotiff)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateImageCheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "image is automatically generated in the application directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateImageCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "Grid as an image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        generateASCIICheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "file is automatically generated in the application directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        generateASCIICheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "Grid as a matrix (text file)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HeightGridGenerationDialog: public Ui_HeightGridGenerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEIGHTGRIDGENERATIONDLG_H
