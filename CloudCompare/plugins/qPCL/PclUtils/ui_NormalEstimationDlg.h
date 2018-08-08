/********************************************************************************
** Form generated from reading UI file 'NormalEstimationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALESTIMATIONDLG_H
#define UI_NORMALESTIMATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalEstimationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *useKnnCheckBox;
    QSpinBox *knnSpinBox;
    QCheckBox *curvatureCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *searchSurfaceCheckBox;
    QComboBox *surfaceComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalEstimationDialog)
    {
        if (NormalEstimationDialog->objectName().isEmpty())
            NormalEstimationDialog->setObjectName(QStringLiteral("NormalEstimationDialog"));
        NormalEstimationDialog->resize(252, 173);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NormalEstimationDialog->sizePolicy().hasHeightForWidth());
        NormalEstimationDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NormalEstimationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(NormalEstimationDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        radiusDoubleSpinBox = new QDoubleSpinBox(NormalEstimationDialog);
        radiusDoubleSpinBox->setObjectName(QStringLiteral("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(4);
        radiusDoubleSpinBox->setMaximum(1000);
        radiusDoubleSpinBox->setSingleStep(0.005);
        radiusDoubleSpinBox->setValue(0.01);

        horizontalLayout_3->addWidget(radiusDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        useKnnCheckBox = new QCheckBox(NormalEstimationDialog);
        useKnnCheckBox->setObjectName(QStringLiteral("useKnnCheckBox"));
        useKnnCheckBox->setEnabled(true);

        horizontalLayout->addWidget(useKnnCheckBox);

        knnSpinBox = new QSpinBox(NormalEstimationDialog);
        knnSpinBox->setObjectName(QStringLiteral("knnSpinBox"));
        knnSpinBox->setEnabled(false);
        knnSpinBox->setValue(10);

        horizontalLayout->addWidget(knnSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        curvatureCheckBox = new QCheckBox(NormalEstimationDialog);
        curvatureCheckBox->setObjectName(QStringLiteral("curvatureCheckBox"));
        curvatureCheckBox->setChecked(true);

        verticalLayout->addWidget(curvatureCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        searchSurfaceCheckBox = new QCheckBox(NormalEstimationDialog);
        searchSurfaceCheckBox->setObjectName(QStringLiteral("searchSurfaceCheckBox"));

        horizontalLayout_2->addWidget(searchSurfaceCheckBox);

        surfaceComboBox = new QComboBox(NormalEstimationDialog);
        surfaceComboBox->setObjectName(QStringLiteral("surfaceComboBox"));
        surfaceComboBox->setEnabled(false);

        horizontalLayout_2->addWidget(surfaceComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(NormalEstimationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NormalEstimationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalEstimationDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalEstimationDialog, SLOT(accept()));
        QObject::connect(useKnnCheckBox, SIGNAL(toggled(bool)), knnSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(useKnnCheckBox, SIGNAL(toggled(bool)), label, SLOT(setDisabled(bool)));
        QObject::connect(useKnnCheckBox, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(searchSurfaceCheckBox, SIGNAL(clicked(bool)), surfaceComboBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NormalEstimationDialog);
    } // setupUi

    void retranslateUi(QDialog *NormalEstimationDialog)
    {
        NormalEstimationDialog->setWindowTitle(QApplication::translate("NormalEstimationDialog", "Neighborhood Search Radius", Q_NULLPTR));
        label->setText(QApplication::translate("NormalEstimationDialog", "Search Radius", Q_NULLPTR));
        useKnnCheckBox->setText(QApplication::translate("NormalEstimationDialog", "Use Knn Search", Q_NULLPTR));
        curvatureCheckBox->setText(QApplication::translate("NormalEstimationDialog", "Overwrite Curvature", Q_NULLPTR));
        searchSurfaceCheckBox->setText(QApplication::translate("NormalEstimationDialog", "Search Surface", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NormalEstimationDialog: public Ui_NormalEstimationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALESTIMATIONDLG_H
