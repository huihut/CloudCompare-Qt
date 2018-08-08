/********************************************************************************
** Form generated from reading UI file 'distanceMapDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTANCEMAPDLG_H
#define UI_DISTANCEMAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DistanceMapDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *stepsSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QDoubleSpinBox *marginDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *rangeCheckBox;
    QFrame *rangeFrame;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minDistDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxDistDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DistanceMapDialog)
    {
        if (DistanceMapDialog->objectName().isEmpty())
            DistanceMapDialog->setObjectName(QStringLiteral("DistanceMapDialog"));
        DistanceMapDialog->resize(380, 110);
        verticalLayout = new QVBoxLayout(DistanceMapDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(DistanceMapDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        stepsSpinBox = new QSpinBox(DistanceMapDialog);
        stepsSpinBox->setObjectName(QStringLiteral("stepsSpinBox"));
        stepsSpinBox->setMinimum(8);
        stepsSpinBox->setMaximum(2048);
        stepsSpinBox->setSingleStep(8);
        stepsSpinBox->setValue(128);

        horizontalLayout_2->addWidget(stepsSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(DistanceMapDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        marginDoubleSpinBox = new QDoubleSpinBox(DistanceMapDialog);
        marginDoubleSpinBox->setObjectName(QStringLiteral("marginDoubleSpinBox"));
        marginDoubleSpinBox->setDecimals(3);
        marginDoubleSpinBox->setMaximum(1e+6);

        horizontalLayout_2->addWidget(marginDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rangeCheckBox = new QCheckBox(DistanceMapDialog);
        rangeCheckBox->setObjectName(QStringLiteral("rangeCheckBox"));

        horizontalLayout_3->addWidget(rangeCheckBox);

        rangeFrame = new QFrame(DistanceMapDialog);
        rangeFrame->setObjectName(QStringLiteral("rangeFrame"));
        rangeFrame->setEnabled(false);
        horizontalLayout = new QHBoxLayout(rangeFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        minDistDoubleSpinBox = new QDoubleSpinBox(rangeFrame);
        minDistDoubleSpinBox->setObjectName(QStringLiteral("minDistDoubleSpinBox"));
        minDistDoubleSpinBox->setDecimals(6);
        minDistDoubleSpinBox->setMinimum(0);
        minDistDoubleSpinBox->setMaximum(1e+9);
        minDistDoubleSpinBox->setValue(0);

        horizontalLayout->addWidget(minDistDoubleSpinBox);

        label_2 = new QLabel(rangeFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        maxDistDoubleSpinBox = new QDoubleSpinBox(rangeFrame);
        maxDistDoubleSpinBox->setObjectName(QStringLiteral("maxDistDoubleSpinBox"));
        maxDistDoubleSpinBox->setDecimals(6);
        maxDistDoubleSpinBox->setMinimum(0);
        maxDistDoubleSpinBox->setMaximum(1e+9);
        maxDistDoubleSpinBox->setValue(0);

        horizontalLayout->addWidget(maxDistDoubleSpinBox);


        horizontalLayout_3->addWidget(rangeFrame);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DistanceMapDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DistanceMapDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DistanceMapDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DistanceMapDialog, SLOT(reject()));
        QObject::connect(rangeCheckBox, SIGNAL(toggled(bool)), rangeFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DistanceMapDialog);
    } // setupUi

    void retranslateUi(QDialog *DistanceMapDialog)
    {
        DistanceMapDialog->setWindowTitle(QApplication::translate("DistanceMapDialog", "Distance Map", Q_NULLPTR));
        label->setText(QApplication::translate("DistanceMapDialog", "Steps", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stepsSpinBox->setToolTip(QApplication::translate("DistanceMapDialog", "Map steps (in each direction).\n"
"The bigger the more accurate the map will be\n"
"(but the more points will be created)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("DistanceMapDialog", "Outer margin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        marginDoubleSpinBox->setToolTip(QApplication::translate("DistanceMapDialog", "Margin added around the cloud bounding-box", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rangeCheckBox->setToolTip(QApplication::translate("DistanceMapDialog", "reduce result to the specified range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rangeCheckBox->setText(QApplication::translate("DistanceMapDialog", "Range", Q_NULLPTR));
        label_2->setText(QApplication::translate("DistanceMapDialog", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DistanceMapDialog: public Ui_DistanceMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTANCEMAPDLG_H
