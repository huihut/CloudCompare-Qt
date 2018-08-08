/********************************************************************************
** Form generated from reading UI file 'densityDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENSITYDLG_H
#define UI_DENSITYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DensityDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *preciseRadioButton;
    QFrame *preciseFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QRadioButton *approxRadioButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *knnRadioButton;
    QRadioButton *surfRadioButton;
    QRadioButton *volRadioButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DensityDialog)
    {
        if (DensityDialog->objectName().isEmpty())
            DensityDialog->setObjectName(QStringLiteral("DensityDialog"));
        DensityDialog->resize(300, 240);
        verticalLayout_2 = new QVBoxLayout(DensityDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(DensityDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        preciseRadioButton = new QRadioButton(groupBox);
        preciseRadioButton->setObjectName(QStringLiteral("preciseRadioButton"));
        preciseRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, preciseRadioButton);

        preciseFrame = new QFrame(groupBox);
        preciseFrame->setObjectName(QStringLiteral("preciseFrame"));
        preciseFrame->setFrameShape(QFrame::StyledPanel);
        preciseFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(preciseFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(preciseFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        radiusDoubleSpinBox = new QDoubleSpinBox(preciseFrame);
        radiusDoubleSpinBox->setObjectName(QStringLiteral("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout->addWidget(radiusDoubleSpinBox);


        formLayout->setWidget(0, QFormLayout::FieldRole, preciseFrame);

        approxRadioButton = new QRadioButton(groupBox);
        approxRadioButton->setObjectName(QStringLiteral("approxRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, approxRadioButton);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DensityDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        knnRadioButton = new QRadioButton(groupBox_2);
        knnRadioButton->setObjectName(QStringLiteral("knnRadioButton"));

        verticalLayout->addWidget(knnRadioButton);

        surfRadioButton = new QRadioButton(groupBox_2);
        surfRadioButton->setObjectName(QStringLiteral("surfRadioButton"));

        verticalLayout->addWidget(surfRadioButton);

        volRadioButton = new QRadioButton(groupBox_2);
        volRadioButton->setObjectName(QStringLiteral("volRadioButton"));
        volRadioButton->setChecked(true);

        verticalLayout->addWidget(volRadioButton);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DensityDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DensityDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DensityDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DensityDialog, SLOT(reject()));
        QObject::connect(preciseRadioButton, SIGNAL(toggled(bool)), preciseFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DensityDialog);
    } // setupUi

    void retranslateUi(QDialog *DensityDialog)
    {
        DensityDialog->setWindowTitle(QApplication::translate("DensityDialog", "Cloud Density", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DensityDialog", "Method", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        preciseRadioButton->setToolTip(QApplication::translate("DensityDialog", "Compute the density by determining the number of neighbors inside a sphere of given radius around each point", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        preciseRadioButton->setText(QApplication::translate("DensityDialog", "Precise", Q_NULLPTR));
        label->setText(QApplication::translate("DensityDialog", "radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radiusDoubleSpinBox->setToolTip(QApplication::translate("DensityDialog", "Neighborhood sphere radius", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        approxRadioButton->setToolTip(QApplication::translate("DensityDialog", "Estimate the density by computing the distance to the nearest neighbor (much faster but less accurate)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        approxRadioButton->setText(QApplication::translate("DensityDialog", "Approximate", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DensityDialog", "Output", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        knnRadioButton->setToolTip(QApplication::translate("DensityDialog", "Simply returns the number of neighbors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        knnRadioButton->setText(QApplication::translate("DensityDialog", "Number of neighbors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        surfRadioButton->setToolTip(QApplication::translate("DensityDialog", "Output the surface density (neighborhood is admitted to always be flat)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        surfRadioButton->setText(QApplication::translate("DensityDialog", "Surface density", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volRadioButton->setToolTip(QApplication::translate("DensityDialog", "Output the volume density (3D)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volRadioButton->setText(QApplication::translate("DensityDialog", "Volume density", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DensityDialog: public Ui_DensityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENSITYDLG_H
