/********************************************************************************
** Form generated from reading UI file 'MLSDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MLSDIALOG_H
#define UI_MLSDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MLSDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *common_parameters_frame;
    QFormLayout *common_parameters;
    QLabel *search_radius_label;
    QDoubleSpinBox *search_radius;
    QCheckBox *compute_normals;
    QCheckBox *use_polynomial;
    QLabel *polynomial_order_label;
    QSpinBox *polynomial_order;
    QLabel *squared_gaussian_parameter_label;
    QDoubleSpinBox *squared_gaussian_parameter;
    QLabel *upsampling_method_label;
    QComboBox *upsampling_method;
    QGroupBox *sample_local_plane_method;
    QGridLayout *gridLayout;
    QLabel *upsampling_radius_label;
    QDoubleSpinBox *upsampling_radius;
    QLabel *upsampling_step_size_label;
    QDoubleSpinBox *upsampling_step_size;
    QGroupBox *random_uniform_density_method;
    QHBoxLayout *horizontalLayout;
    QLabel *step_point_density_label;
    QSpinBox *step_point_density;
    QGroupBox *voxel_grid_dilation_method;
    QGridLayout *gridLayout_2;
    QLabel *dilation_voxel_grid_label;
    QDoubleSpinBox *dilation_voxel_size;
    QLabel *dilation_iterations_label;
    QSpinBox *dilation_iterations;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *MLSDialog)
    {
        if (MLSDialog->objectName().isEmpty())
            MLSDialog->setObjectName(QStringLiteral("MLSDialog"));
        MLSDialog->resize(400, 441);
        verticalLayout = new QVBoxLayout(MLSDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        common_parameters_frame = new QFrame(MLSDialog);
        common_parameters_frame->setObjectName(QStringLiteral("common_parameters_frame"));
        common_parameters = new QFormLayout(common_parameters_frame);
        common_parameters->setObjectName(QStringLiteral("common_parameters"));
        common_parameters->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        search_radius_label = new QLabel(common_parameters_frame);
        search_radius_label->setObjectName(QStringLiteral("search_radius_label"));

        common_parameters->setWidget(0, QFormLayout::LabelRole, search_radius_label);

        search_radius = new QDoubleSpinBox(common_parameters_frame);
        search_radius->setObjectName(QStringLiteral("search_radius"));
        search_radius->setDecimals(4);
        search_radius->setMaximum(1000);
        search_radius->setSingleStep(0.005);
        search_radius->setValue(0.01);

        common_parameters->setWidget(0, QFormLayout::FieldRole, search_radius);

        compute_normals = new QCheckBox(common_parameters_frame);
        compute_normals->setObjectName(QStringLiteral("compute_normals"));
        compute_normals->setChecked(true);

        common_parameters->setWidget(1, QFormLayout::LabelRole, compute_normals);

        use_polynomial = new QCheckBox(common_parameters_frame);
        use_polynomial->setObjectName(QStringLiteral("use_polynomial"));
        use_polynomial->setEnabled(true);
        use_polynomial->setChecked(true);

        common_parameters->setWidget(2, QFormLayout::LabelRole, use_polynomial);

        polynomial_order_label = new QLabel(common_parameters_frame);
        polynomial_order_label->setObjectName(QStringLiteral("polynomial_order_label"));

        common_parameters->setWidget(3, QFormLayout::LabelRole, polynomial_order_label);

        polynomial_order = new QSpinBox(common_parameters_frame);
        polynomial_order->setObjectName(QStringLiteral("polynomial_order"));
        polynomial_order->setEnabled(true);
        polynomial_order->setValue(2);

        common_parameters->setWidget(3, QFormLayout::FieldRole, polynomial_order);

        squared_gaussian_parameter_label = new QLabel(common_parameters_frame);
        squared_gaussian_parameter_label->setObjectName(QStringLiteral("squared_gaussian_parameter_label"));

        common_parameters->setWidget(4, QFormLayout::LabelRole, squared_gaussian_parameter_label);

        squared_gaussian_parameter = new QDoubleSpinBox(common_parameters_frame);
        squared_gaussian_parameter->setObjectName(QStringLiteral("squared_gaussian_parameter"));
        squared_gaussian_parameter->setDecimals(6);
        squared_gaussian_parameter->setMaximum(1000);
        squared_gaussian_parameter->setSingleStep(0.005);
        squared_gaussian_parameter->setValue(0.0001);

        common_parameters->setWidget(4, QFormLayout::FieldRole, squared_gaussian_parameter);

        upsampling_method_label = new QLabel(common_parameters_frame);
        upsampling_method_label->setObjectName(QStringLiteral("upsampling_method_label"));

        common_parameters->setWidget(5, QFormLayout::LabelRole, upsampling_method_label);

        upsampling_method = new QComboBox(common_parameters_frame);
        upsampling_method->setObjectName(QStringLiteral("upsampling_method"));
        upsampling_method->setEnabled(true);

        common_parameters->setWidget(5, QFormLayout::FieldRole, upsampling_method);


        verticalLayout->addWidget(common_parameters_frame);

        sample_local_plane_method = new QGroupBox(MLSDialog);
        sample_local_plane_method->setObjectName(QStringLiteral("sample_local_plane_method"));
        sample_local_plane_method->setEnabled(true);
        gridLayout = new QGridLayout(sample_local_plane_method);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        upsampling_radius_label = new QLabel(sample_local_plane_method);
        upsampling_radius_label->setObjectName(QStringLiteral("upsampling_radius_label"));
        upsampling_radius_label->setEnabled(true);

        gridLayout->addWidget(upsampling_radius_label, 0, 0, 1, 1);

        upsampling_radius = new QDoubleSpinBox(sample_local_plane_method);
        upsampling_radius->setObjectName(QStringLiteral("upsampling_radius"));
        upsampling_radius->setEnabled(true);
        upsampling_radius->setDecimals(4);
        upsampling_radius->setMaximum(1000);
        upsampling_radius->setSingleStep(0.005);
        upsampling_radius->setValue(0.01);

        gridLayout->addWidget(upsampling_radius, 0, 1, 1, 1);

        upsampling_step_size_label = new QLabel(sample_local_plane_method);
        upsampling_step_size_label->setObjectName(QStringLiteral("upsampling_step_size_label"));
        upsampling_step_size_label->setEnabled(true);

        gridLayout->addWidget(upsampling_step_size_label, 1, 0, 1, 1);

        upsampling_step_size = new QDoubleSpinBox(sample_local_plane_method);
        upsampling_step_size->setObjectName(QStringLiteral("upsampling_step_size"));
        upsampling_step_size->setEnabled(true);
        upsampling_step_size->setDecimals(4);
        upsampling_step_size->setMaximum(1000);
        upsampling_step_size->setSingleStep(0.005);
        upsampling_step_size->setValue(0.01);

        gridLayout->addWidget(upsampling_step_size, 1, 1, 1, 1);


        verticalLayout->addWidget(sample_local_plane_method);

        random_uniform_density_method = new QGroupBox(MLSDialog);
        random_uniform_density_method->setObjectName(QStringLiteral("random_uniform_density_method"));
        horizontalLayout = new QHBoxLayout(random_uniform_density_method);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        step_point_density_label = new QLabel(random_uniform_density_method);
        step_point_density_label->setObjectName(QStringLiteral("step_point_density_label"));
        step_point_density_label->setEnabled(true);

        horizontalLayout->addWidget(step_point_density_label);

        step_point_density = new QSpinBox(random_uniform_density_method);
        step_point_density->setObjectName(QStringLiteral("step_point_density"));
        step_point_density->setEnabled(true);
        step_point_density->setMaximum(1000);
        step_point_density->setValue(4);

        horizontalLayout->addWidget(step_point_density);


        verticalLayout->addWidget(random_uniform_density_method);

        voxel_grid_dilation_method = new QGroupBox(MLSDialog);
        voxel_grid_dilation_method->setObjectName(QStringLiteral("voxel_grid_dilation_method"));
        gridLayout_2 = new QGridLayout(voxel_grid_dilation_method);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dilation_voxel_grid_label = new QLabel(voxel_grid_dilation_method);
        dilation_voxel_grid_label->setObjectName(QStringLiteral("dilation_voxel_grid_label"));
        dilation_voxel_grid_label->setEnabled(true);

        gridLayout_2->addWidget(dilation_voxel_grid_label, 0, 0, 1, 1);

        dilation_voxel_size = new QDoubleSpinBox(voxel_grid_dilation_method);
        dilation_voxel_size->setObjectName(QStringLiteral("dilation_voxel_size"));
        dilation_voxel_size->setEnabled(true);
        dilation_voxel_size->setDecimals(3);
        dilation_voxel_size->setSingleStep(0.01);
        dilation_voxel_size->setValue(0.01);

        gridLayout_2->addWidget(dilation_voxel_size, 0, 1, 1, 1);

        dilation_iterations_label = new QLabel(voxel_grid_dilation_method);
        dilation_iterations_label->setObjectName(QStringLiteral("dilation_iterations_label"));
        dilation_iterations_label->setEnabled(true);

        gridLayout_2->addWidget(dilation_iterations_label, 1, 0, 1, 1);

        dilation_iterations = new QSpinBox(voxel_grid_dilation_method);
        dilation_iterations->setObjectName(QStringLiteral("dilation_iterations"));
        dilation_iterations->setEnabled(true);
        dilation_iterations->setValue(4);

        gridLayout_2->addWidget(dilation_iterations, 1, 1, 1, 1);


        verticalLayout->addWidget(voxel_grid_dilation_method);

        buttonBox_2 = new QDialogButtonBox(MLSDialog);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox_2);


        retranslateUi(MLSDialog);
        QObject::connect(buttonBox_2, SIGNAL(rejected()), MLSDialog, SLOT(reject()));
        QObject::connect(buttonBox_2, SIGNAL(accepted()), MLSDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(MLSDialog);
    } // setupUi

    void retranslateUi(QDialog *MLSDialog)
    {
        MLSDialog->setWindowTitle(QApplication::translate("MLSDialog", "Moving Least Squares Smoothing and Reconstruction", Q_NULLPTR));
        search_radius_label->setText(QApplication::translate("MLSDialog", "Search Radius", Q_NULLPTR));
        compute_normals->setText(QApplication::translate("MLSDialog", "Compute Normals", Q_NULLPTR));
        use_polynomial->setText(QApplication::translate("MLSDialog", "Use Polynomial \n"
"(instead of tangent)", Q_NULLPTR));
        polynomial_order_label->setText(QApplication::translate("MLSDialog", "Polynomial Order", Q_NULLPTR));
        squared_gaussian_parameter_label->setText(QApplication::translate("MLSDialog", "Squared Gaussian \n"
"Parameter", Q_NULLPTR));
        upsampling_method_label->setText(QApplication::translate("MLSDialog", "Upsampling Method", Q_NULLPTR));
        sample_local_plane_method->setTitle(QApplication::translate("MLSDialog", "Sample Local Plane", Q_NULLPTR));
        upsampling_radius_label->setText(QApplication::translate("MLSDialog", "Upsampling Radius", Q_NULLPTR));
        upsampling_step_size_label->setText(QApplication::translate("MLSDialog", "Upsampling Step Size", Q_NULLPTR));
        random_uniform_density_method->setTitle(QApplication::translate("MLSDialog", "Random Uniform Density", Q_NULLPTR));
        step_point_density_label->setText(QApplication::translate("MLSDialog", "Step Point Density", Q_NULLPTR));
        voxel_grid_dilation_method->setTitle(QApplication::translate("MLSDialog", "Voxel Grid Dilation", Q_NULLPTR));
        dilation_voxel_grid_label->setText(QApplication::translate("MLSDialog", "Dilation Voxel Size", Q_NULLPTR));
        dilation_iterations_label->setText(QApplication::translate("MLSDialog", "Dilation Iterations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MLSDialog: public Ui_MLSDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MLSDIALOG_H
