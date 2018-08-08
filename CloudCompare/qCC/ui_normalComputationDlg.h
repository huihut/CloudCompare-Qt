/********************************************************************************
** Form generated from reading UI file 'normalComputationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALCOMPUTATIONDLG_H
#define UI_NORMALCOMPUTATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalComputationDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *mixedSelectionLabel;
    QGroupBox *surfaceGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *localModelComboBox;
    QGroupBox *neighborsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *useScanGridRadioButton;
    QSpacerItem *horizontalSpacer;
    QFrame *gridKernelFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *gridKernelSpinBox;
    QFrame *useScanGridsFrame;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *useOctreeRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *localRadiusFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QToolButton *autoRadiusToolButton;
    QGroupBox *normalsOrientGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *scanGridsOrientRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *preferredOrientRadioButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *preferredOrientationComboBox;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mstOrientRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *mstNeighborsSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalComputationDlg)
    {
        if (NormalComputationDlg->objectName().isEmpty())
            NormalComputationDlg->setObjectName(QStringLiteral("NormalComputationDlg"));
        NormalComputationDlg->resize(400, 362);
        verticalLayout_3 = new QVBoxLayout(NormalComputationDlg);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mixedSelectionLabel = new QLabel(NormalComputationDlg);
        mixedSelectionLabel->setObjectName(QStringLiteral("mixedSelectionLabel"));
        mixedSelectionLabel->setStyleSheet(QStringLiteral("color: red;"));
        mixedSelectionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mixedSelectionLabel);

        surfaceGroupBox = new QGroupBox(NormalComputationDlg);
        surfaceGroupBox->setObjectName(QStringLiteral("surfaceGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(surfaceGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        label = new QLabel(surfaceGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        localModelComboBox = new QComboBox(surfaceGroupBox);
        localModelComboBox->setObjectName(QStringLiteral("localModelComboBox"));

        horizontalLayout_2->addWidget(localModelComboBox);


        verticalLayout_3->addWidget(surfaceGroupBox);

        neighborsGroupBox = new QGroupBox(NormalComputationDlg);
        neighborsGroupBox->setObjectName(QStringLiteral("neighborsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neighborsGroupBox->sizePolicy().hasHeightForWidth());
        neighborsGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(neighborsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        useScanGridRadioButton = new QRadioButton(neighborsGroupBox);
        useScanGridRadioButton->setObjectName(QStringLiteral("useScanGridRadioButton"));

        horizontalLayout_3->addWidget(useScanGridRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gridKernelFrame = new QFrame(neighborsGroupBox);
        gridKernelFrame->setObjectName(QStringLiteral("gridKernelFrame"));
        gridKernelFrame->setEnabled(false);
        horizontalLayout = new QHBoxLayout(gridKernelFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(gridKernelFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        gridKernelSpinBox = new QSpinBox(gridKernelFrame);
        gridKernelSpinBox->setObjectName(QStringLiteral("gridKernelSpinBox"));
        gridKernelSpinBox->setMinimum(1);
        gridKernelSpinBox->setMaximum(10);
        gridKernelSpinBox->setValue(2);

        horizontalLayout->addWidget(gridKernelSpinBox);


        horizontalLayout_3->addWidget(gridKernelFrame);


        verticalLayout_2->addLayout(horizontalLayout_3);

        useScanGridsFrame = new QFrame(neighborsGroupBox);
        useScanGridsFrame->setObjectName(QStringLiteral("useScanGridsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(useScanGridsFrame->sizePolicy().hasHeightForWidth());
        useScanGridsFrame->setSizePolicy(sizePolicy1);
        horizontalLayout_9 = new QHBoxLayout(useScanGridsFrame);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));

        verticalLayout_2->addWidget(useScanGridsFrame);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        useOctreeRadioButton = new QRadioButton(neighborsGroupBox);
        useOctreeRadioButton->setObjectName(QStringLiteral("useOctreeRadioButton"));
        useOctreeRadioButton->setChecked(true);

        horizontalLayout_10->addWidget(useOctreeRadioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        localRadiusFrame = new QFrame(neighborsGroupBox);
        localRadiusFrame->setObjectName(QStringLiteral("localRadiusFrame"));
        horizontalLayout_8 = new QHBoxLayout(localRadiusFrame);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(localRadiusFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        radiusDoubleSpinBox = new QDoubleSpinBox(localRadiusFrame);
        radiusDoubleSpinBox->setObjectName(QStringLiteral("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(1e-6);
        radiusDoubleSpinBox->setMaximum(1e+6);
        radiusDoubleSpinBox->setSingleStep(0.1);
        radiusDoubleSpinBox->setValue(1);

        horizontalLayout_8->addWidget(radiusDoubleSpinBox);

        autoRadiusToolButton = new QToolButton(localRadiusFrame);
        autoRadiusToolButton->setObjectName(QStringLiteral("autoRadiusToolButton"));

        horizontalLayout_8->addWidget(autoRadiusToolButton);


        horizontalLayout_10->addWidget(localRadiusFrame);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(neighborsGroupBox);

        normalsOrientGroupBox = new QGroupBox(NormalComputationDlg);
        normalsOrientGroupBox->setObjectName(QStringLiteral("normalsOrientGroupBox"));
        sizePolicy.setHeightForWidth(normalsOrientGroupBox->sizePolicy().hasHeightForWidth());
        normalsOrientGroupBox->setSizePolicy(sizePolicy);
        normalsOrientGroupBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(normalsOrientGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, -1, -1);
        scanGridsOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        scanGridsOrientRadioButton->setObjectName(QStringLiteral("scanGridsOrientRadioButton"));

        verticalLayout->addWidget(scanGridsOrientRadioButton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        preferredOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        preferredOrientRadioButton->setObjectName(QStringLiteral("preferredOrientRadioButton"));

        horizontalLayout_5->addWidget(preferredOrientRadioButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        preferredOrientationComboBox = new QComboBox(normalsOrientGroupBox);
        preferredOrientationComboBox->setObjectName(QStringLiteral("preferredOrientationComboBox"));
        preferredOrientationComboBox->setEnabled(false);
        preferredOrientationComboBox->setMaxVisibleItems(12);

        horizontalLayout_5->addWidget(preferredOrientationComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mstOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        mstOrientRadioButton->setObjectName(QStringLiteral("mstOrientRadioButton"));
        mstOrientRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mstOrientRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        mstNeighborsSpinBox = new QSpinBox(normalsOrientGroupBox);
        mstNeighborsSpinBox->setObjectName(QStringLiteral("mstNeighborsSpinBox"));
        mstNeighborsSpinBox->setEnabled(true);
        mstNeighborsSpinBox->setMinimum(1);

        horizontalLayout_6->addWidget(mstNeighborsSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(normalsOrientGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NormalComputationDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        buttonBox->raise();
        normalsOrientGroupBox->raise();
        mixedSelectionLabel->raise();
        surfaceGroupBox->raise();
        neighborsGroupBox->raise();

        retranslateUi(NormalComputationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalComputationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalComputationDlg, SLOT(reject()));
        QObject::connect(useScanGridRadioButton, SIGNAL(toggled(bool)), gridKernelFrame, SLOT(setEnabled(bool)));
        QObject::connect(useOctreeRadioButton, SIGNAL(toggled(bool)), localRadiusFrame, SLOT(setEnabled(bool)));
        QObject::connect(preferredOrientRadioButton, SIGNAL(toggled(bool)), preferredOrientationComboBox, SLOT(setEnabled(bool)));
        QObject::connect(mstOrientRadioButton, SIGNAL(toggled(bool)), mstNeighborsSpinBox, SLOT(setEnabled(bool)));

        localModelComboBox->setCurrentIndex(0);
        preferredOrientationComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(NormalComputationDlg);
    } // setupUi

    void retranslateUi(QDialog *NormalComputationDlg)
    {
        NormalComputationDlg->setWindowTitle(QApplication::translate("NormalComputationDlg", "Compute normals", Q_NULLPTR));
        mixedSelectionLabel->setText(QApplication::translate("NormalComputationDlg", "Mixed selection: some clouds don't have scan grid(s)", Q_NULLPTR));
        surfaceGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Surface approximation", Q_NULLPTR));
        label->setText(QApplication::translate("NormalComputationDlg", "Local surface model", Q_NULLPTR));
        localModelComboBox->clear();
        localModelComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "Plane", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "Quadric", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "Triangulation", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        localModelComboBox->setToolTip(QApplication::translate("NormalComputationDlg", "Local surface estimation model", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        neighborsGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Neighbors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        useScanGridRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Using scan grid(s) instead of the octree", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useScanGridRadioButton->setText(QApplication::translate("NormalComputationDlg", "use scan grid(s) whenever possible", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("NormalComputationDlg", "Each normal will be computed using the (2p+1)*(2p+1) neighbors in the grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("NormalComputationDlg", "kernel size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gridKernelSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Each normal will be computed using the (2p+1)*(2p+1) neighbors in the grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useOctreeRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "The octree works for any cloud", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useOctreeRadioButton->setText(QApplication::translate("NormalComputationDlg", "use octree", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("NormalComputationDlg", "radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radiusDoubleSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoRadiusToolButton->setText(QApplication::translate("NormalComputationDlg", "Auto", Q_NULLPTR));
        normalsOrientGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Orientation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        scanGridsOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Using scan grid(s) is the most robust method", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        scanGridsOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use scan grid(s) whenever possible", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        preferredOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "To give a hint on how to orient normals", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        preferredOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use preferred orientation", Q_NULLPTR));
        preferredOrientationComboBox->clear();
        preferredOrientationComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "+X", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "-X", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "+Y", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "-Y", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "+Z", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "-Z", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "+Barycenter", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "- Barycenter", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "+ (0,0,0)", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "- (0,0,0)", Q_NULLPTR)
         << QApplication::translate("NormalComputationDlg", "Use previous normal", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        mstOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Generic 3D orientation algorithm", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mstOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use Minimum Spanning Tree", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mstNeighborsSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Number of neighbors used to build the tree", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mstNeighborsSpinBox->setPrefix(QApplication::translate("NormalComputationDlg", "knn = ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NormalComputationDlg: public Ui_NormalComputationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALCOMPUTATIONDLG_H
