/********************************************************************************
** Form generated from reading UI file 'clippingBoxRepeatDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXREPEATDLG_H
#define UI_CLIPPINGBOXREPEATDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClippingBoxRepeatDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *repeatDimGroupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *xRepeatCheckBox;
    QCheckBox *yRepeatCheckBox;
    QCheckBox *zRepeatCheckBox;
    QGroupBox *extractContoursGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *maxEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassCheckBox;
    QCheckBox *projectOnBestFitCheckBox;
    QCheckBox *splitContourCheckBox;
    QCheckBox *debugModeCheckBox;
    QGroupBox *otherOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *gapDoubleSpinBox;
    QCheckBox *randomColorCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClippingBoxRepeatDlg)
    {
        if (ClippingBoxRepeatDlg->objectName().isEmpty())
            ClippingBoxRepeatDlg->setObjectName(QStringLiteral("ClippingBoxRepeatDlg"));
        ClippingBoxRepeatDlg->resize(314, 340);
        verticalLayout = new QVBoxLayout(ClippingBoxRepeatDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        repeatDimGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        repeatDimGroupBox->setObjectName(QStringLiteral("repeatDimGroupBox"));
        horizontalLayout = new QHBoxLayout(repeatDimGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        xRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        xRepeatCheckBox->setObjectName(QStringLiteral("xRepeatCheckBox"));
        xRepeatCheckBox->setStyleSheet(QLatin1String("background-color: red;\n"
"color: white;"));

        horizontalLayout->addWidget(xRepeatCheckBox);

        yRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        yRepeatCheckBox->setObjectName(QStringLiteral("yRepeatCheckBox"));
        yRepeatCheckBox->setStyleSheet(QLatin1String("background-color: green;\n"
"color: white;"));

        horizontalLayout->addWidget(yRepeatCheckBox);

        zRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        zRepeatCheckBox->setObjectName(QStringLiteral("zRepeatCheckBox"));
        zRepeatCheckBox->setStyleSheet(QLatin1String("background-color: blue;\n"
"color: white;"));
        zRepeatCheckBox->setChecked(true);

        horizontalLayout->addWidget(zRepeatCheckBox);


        verticalLayout->addWidget(repeatDimGroupBox);

        extractContoursGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        extractContoursGroupBox->setObjectName(QStringLiteral("extractContoursGroupBox"));
        extractContoursGroupBox->setCheckable(true);
        extractContoursGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(extractContoursGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(extractContoursGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        maxEdgeLengthDoubleSpinBox = new QDoubleSpinBox(extractContoursGroupBox);
        maxEdgeLengthDoubleSpinBox->setObjectName(QStringLiteral("maxEdgeLengthDoubleSpinBox"));
        maxEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEdgeLengthDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout_3->addWidget(maxEdgeLengthDoubleSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        multiPassCheckBox = new QCheckBox(extractContoursGroupBox);
        multiPassCheckBox->setObjectName(QStringLiteral("multiPassCheckBox"));

        verticalLayout_3->addWidget(multiPassCheckBox);

        projectOnBestFitCheckBox = new QCheckBox(extractContoursGroupBox);
        projectOnBestFitCheckBox->setObjectName(QStringLiteral("projectOnBestFitCheckBox"));

        verticalLayout_3->addWidget(projectOnBestFitCheckBox);

        splitContourCheckBox = new QCheckBox(extractContoursGroupBox);
        splitContourCheckBox->setObjectName(QStringLiteral("splitContourCheckBox"));

        verticalLayout_3->addWidget(splitContourCheckBox);

        debugModeCheckBox = new QCheckBox(extractContoursGroupBox);
        debugModeCheckBox->setObjectName(QStringLiteral("debugModeCheckBox"));

        verticalLayout_3->addWidget(debugModeCheckBox);


        verticalLayout->addWidget(extractContoursGroupBox);

        otherOptionsGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        otherOptionsGroupBox->setObjectName(QStringLiteral("otherOptionsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(otherOptionsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(otherOptionsGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        gapDoubleSpinBox = new QDoubleSpinBox(otherOptionsGroupBox);
        gapDoubleSpinBox->setObjectName(QStringLiteral("gapDoubleSpinBox"));
        gapDoubleSpinBox->setDecimals(6);
        gapDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout_2->addWidget(gapDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        randomColorCheckBox = new QCheckBox(otherOptionsGroupBox);
        randomColorCheckBox->setObjectName(QStringLiteral("randomColorCheckBox"));

        verticalLayout_2->addWidget(randomColorCheckBox);


        verticalLayout->addWidget(otherOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ClippingBoxRepeatDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClippingBoxRepeatDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClippingBoxRepeatDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClippingBoxRepeatDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClippingBoxRepeatDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxRepeatDlg)
    {
        ClippingBoxRepeatDlg->setWindowTitle(QApplication::translate("ClippingBoxRepeatDlg", "Repeat", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        repeatDimGroupBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "The segmentation process will be repeated along the following dimensions (+/-)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        repeatDimGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Repeat dimensions", Q_NULLPTR));
        xRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "X", Q_NULLPTR));
        yRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "Y", Q_NULLPTR));
        zRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        extractContoursGroupBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Check that option if you wish to extract contour(s) form each slice", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        extractContoursGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Extract contour(s)", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClippingBoxRepeatDlg", "Max edge length", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxEdgeLengthDoubleSpinBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Max edge length (if 0, generates a unique and closed contour = convex hull)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        multiPassCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Multi-pass process where longer edges may be temporarily created to obtain a better fit... or a worst one ;)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        multiPassCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "multi-pass", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        projectOnBestFitCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Before extracting the contour, points can be projected along the repeat dimension (if only one is defined) or on the best fit plane", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        projectOnBestFitCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "project slice(s) points on their best fit plane", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        splitContourCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "split the generated contour(s) in smaller parts to avoid creating edges longer than the specified max edge length.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        splitContourCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "split contour(s) on longer edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        debugModeCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        debugModeCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "visual debug mode", Q_NULLPTR));
        otherOptionsGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Other options", Q_NULLPTR));
        label->setText(QApplication::translate("ClippingBoxRepeatDlg", "Gap", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gapDoubleSpinBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Gap between the slices", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        randomColorCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "If checked, a random color will be assigned to each slice (warning: will overwrite any existing color!)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        randomColorCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "random colors per slice (will overwrite existing color!)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClippingBoxRepeatDlg: public Ui_ClippingBoxRepeatDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXREPEATDLG_H
