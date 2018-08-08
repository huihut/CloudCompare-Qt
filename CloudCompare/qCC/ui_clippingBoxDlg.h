/********************************************************************************
** Form generated from reading UI file 'clippingBoxDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXDLG_H
#define UI_CLIPPINGBOXDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
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

class Ui_ClippingBoxDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *showBoxToolButton;
    QToolButton *showInteractorsToolButton;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *restoreToolButton;
    QToolButton *resetButton;
    QToolButton *closeButton;
    QGroupBox *thicknessGroupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *thickXDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *thickYDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *thickZDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *editBoxToolButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *contourGroupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *extractContourToolButton;
    QToolButton *removeLastContourToolButton;
    QGroupBox *slicesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *exportButton;
    QToolButton *exportMultButton;
    QSpacerItem *horizontalSpacer_6;
    QFrame *viewButtonsFrame;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *viewLeftToolButton;
    QToolButton *viewRightToolButton;
    QToolButton *viewFrontToolButton;
    QToolButton *viewBackToolButton;
    QToolButton *viewDownToolButton;
    QToolButton *viewUpToolButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *minusXShiftToolButton;
    QToolButton *plusXShiftToolButton;
    QToolButton *minusYShiftToolButton;
    QToolButton *plusYShiftToolButton;
    QToolButton *minusZShiftToolButton;
    QToolButton *plusZShiftToolButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ClippingBoxDlg)
    {
        if (ClippingBoxDlg->objectName().isEmpty())
            ClippingBoxDlg->setObjectName(QStringLiteral("ClippingBoxDlg"));
        ClippingBoxDlg->resize(220, 322);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClippingBoxDlg->sizePolicy().hasHeightForWidth());
        ClippingBoxDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ClippingBoxDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showBoxToolButton = new QToolButton(ClippingBoxDlg);
        showBoxToolButton->setObjectName(QStringLiteral("showBoxToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/square.png"), QSize(), QIcon::Normal, QIcon::Off);
        showBoxToolButton->setIcon(icon);
        showBoxToolButton->setCheckable(true);
        showBoxToolButton->setChecked(true);
        showBoxToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(showBoxToolButton);

        showInteractorsToolButton = new QToolButton(ClippingBoxDlg);
        showInteractorsToolButton->setObjectName(QStringLiteral("showInteractorsToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/interactors.png"), QSize(), QIcon::Normal, QIcon::Off);
        showInteractorsToolButton->setIcon(icon1);
        showInteractorsToolButton->setCheckable(true);
        showInteractorsToolButton->setChecked(true);
        showInteractorsToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(showInteractorsToolButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        restoreToolButton = new QToolButton(ClippingBoxDlg);
        restoreToolButton->setObjectName(QStringLiteral("restoreToolButton"));
        restoreToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        restoreToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(restoreToolButton);

        resetButton = new QToolButton(ClippingBoxDlg);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setMinimumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon3);

        horizontalLayout_2->addWidget(resetButton);

        closeButton = new QToolButton(ClippingBoxDlg);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon4);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        thicknessGroupBox = new QGroupBox(ClippingBoxDlg);
        thicknessGroupBox->setObjectName(QStringLiteral("thicknessGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thicknessGroupBox->sizePolicy().hasHeightForWidth());
        thicknessGroupBox->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(thicknessGroupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(thicknessGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        thickXDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickXDoubleSpinBox->setObjectName(QStringLiteral("thickXDoubleSpinBox"));
        thickXDoubleSpinBox->setDecimals(8);
        thickXDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(0, QFormLayout::FieldRole, thickXDoubleSpinBox);

        label_3 = new QLabel(thicknessGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        thickYDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickYDoubleSpinBox->setObjectName(QStringLiteral("thickYDoubleSpinBox"));
        thickYDoubleSpinBox->setDecimals(8);
        thickYDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(1, QFormLayout::FieldRole, thickYDoubleSpinBox);

        label_4 = new QLabel(thicknessGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        thickZDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickZDoubleSpinBox->setObjectName(QStringLiteral("thickZDoubleSpinBox"));
        thickZDoubleSpinBox->setDecimals(8);
        thickZDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(2, QFormLayout::FieldRole, thickZDoubleSpinBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        editBoxToolButton = new QToolButton(thicknessGroupBox);
        editBoxToolButton->setObjectName(QStringLiteral("editBoxToolButton"));

        horizontalLayout_6->addWidget(editBoxToolButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_6);


        verticalLayout->addWidget(thicknessGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        contourGroupBox = new QGroupBox(ClippingBoxDlg);
        contourGroupBox->setObjectName(QStringLiteral("contourGroupBox"));
        horizontalLayout = new QHBoxLayout(contourGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        extractContourToolButton = new QToolButton(contourGroupBox);
        extractContourToolButton->setObjectName(QStringLiteral("extractContourToolButton"));
        extractContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractContourToolButton->setIcon(icon5);

        horizontalLayout->addWidget(extractContourToolButton);

        removeLastContourToolButton = new QToolButton(contourGroupBox);
        removeLastContourToolButton->setObjectName(QStringLiteral("removeLastContourToolButton"));
        removeLastContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/smallRevert.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeLastContourToolButton->setIcon(icon6);

        horizontalLayout->addWidget(removeLastContourToolButton);


        horizontalLayout_3->addWidget(contourGroupBox);

        slicesGroupBox = new QGroupBox(ClippingBoxDlg);
        slicesGroupBox->setObjectName(QStringLiteral("slicesGroupBox"));
        horizontalLayout_5 = new QHBoxLayout(slicesGroupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        exportButton = new QToolButton(slicesGroupBox);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setMinimumSize(QSize(25, 25));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/ccClippingBoxSingleExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon7);

        horizontalLayout_5->addWidget(exportButton);

        exportMultButton = new QToolButton(slicesGroupBox);
        exportMultButton->setObjectName(QStringLiteral("exportMultButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/ccClippingBoxMultExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportMultButton->setIcon(icon8);

        horizontalLayout_5->addWidget(exportMultButton);


        horizontalLayout_3->addWidget(slicesGroupBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        viewButtonsFrame = new QFrame(ClippingBoxDlg);
        viewButtonsFrame->setObjectName(QStringLiteral("viewButtonsFrame"));
        sizePolicy1.setHeightForWidth(viewButtonsFrame->sizePolicy().hasHeightForWidth());
        viewButtonsFrame->setSizePolicy(sizePolicy1);
        viewButtonsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(viewButtonsFrame);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        viewLeftToolButton = new QToolButton(viewButtonsFrame);
        viewLeftToolButton->setObjectName(QStringLiteral("viewLeftToolButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLeftToolButton->setIcon(icon9);

        horizontalLayout_8->addWidget(viewLeftToolButton);

        viewRightToolButton = new QToolButton(viewButtonsFrame);
        viewRightToolButton->setObjectName(QStringLiteral("viewRightToolButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRightToolButton->setIcon(icon10);

        horizontalLayout_8->addWidget(viewRightToolButton);

        viewFrontToolButton = new QToolButton(viewButtonsFrame);
        viewFrontToolButton->setObjectName(QStringLiteral("viewFrontToolButton"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFrontToolButton->setIcon(icon11);

        horizontalLayout_8->addWidget(viewFrontToolButton);

        viewBackToolButton = new QToolButton(viewButtonsFrame);
        viewBackToolButton->setObjectName(QStringLiteral("viewBackToolButton"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBackToolButton->setIcon(icon12);

        horizontalLayout_8->addWidget(viewBackToolButton);

        viewDownToolButton = new QToolButton(viewButtonsFrame);
        viewDownToolButton->setObjectName(QStringLiteral("viewDownToolButton"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDownToolButton->setIcon(icon13);

        horizontalLayout_8->addWidget(viewDownToolButton);

        viewUpToolButton = new QToolButton(viewButtonsFrame);
        viewUpToolButton->setObjectName(QStringLiteral("viewUpToolButton"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewUpToolButton->setIcon(icon14);

        horizontalLayout_8->addWidget(viewUpToolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(viewButtonsFrame);

        groupBox = new QGroupBox(ClippingBoxDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        minusXShiftToolButton = new QToolButton(groupBox);
        minusXShiftToolButton->setObjectName(QStringLiteral("minusXShiftToolButton"));
        sizePolicy.setHeightForWidth(minusXShiftToolButton->sizePolicy().hasHeightForWidth());
        minusXShiftToolButton->setSizePolicy(sizePolicy);
        minusXShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusXShiftToolButton);

        plusXShiftToolButton = new QToolButton(groupBox);
        plusXShiftToolButton->setObjectName(QStringLiteral("plusXShiftToolButton"));
        sizePolicy.setHeightForWidth(plusXShiftToolButton->sizePolicy().hasHeightForWidth());
        plusXShiftToolButton->setSizePolicy(sizePolicy);
        plusXShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusXShiftToolButton);

        minusYShiftToolButton = new QToolButton(groupBox);
        minusYShiftToolButton->setObjectName(QStringLiteral("minusYShiftToolButton"));
        sizePolicy.setHeightForWidth(minusYShiftToolButton->sizePolicy().hasHeightForWidth());
        minusYShiftToolButton->setSizePolicy(sizePolicy);
        minusYShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusYShiftToolButton);

        plusYShiftToolButton = new QToolButton(groupBox);
        plusYShiftToolButton->setObjectName(QStringLiteral("plusYShiftToolButton"));
        sizePolicy.setHeightForWidth(plusYShiftToolButton->sizePolicy().hasHeightForWidth());
        plusYShiftToolButton->setSizePolicy(sizePolicy);
        plusYShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusYShiftToolButton);

        minusZShiftToolButton = new QToolButton(groupBox);
        minusZShiftToolButton->setObjectName(QStringLiteral("minusZShiftToolButton"));
        sizePolicy.setHeightForWidth(minusZShiftToolButton->sizePolicy().hasHeightForWidth());
        minusZShiftToolButton->setSizePolicy(sizePolicy);
        minusZShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusZShiftToolButton);

        plusZShiftToolButton = new QToolButton(groupBox);
        plusZShiftToolButton->setObjectName(QStringLiteral("plusZShiftToolButton"));
        sizePolicy.setHeightForWidth(plusZShiftToolButton->sizePolicy().hasHeightForWidth());
        plusZShiftToolButton->setSizePolicy(sizePolicy);
        plusZShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusZShiftToolButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClippingBoxDlg);

        QMetaObject::connectSlotsByName(ClippingBoxDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxDlg)
    {
        ClippingBoxDlg->setWindowTitle(QApplication::translate("ClippingBoxDlg", "Clipping Box", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showBoxToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Show/hide bounding box", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showInteractorsToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Show/hide interactors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        restoreToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Restore the last clipping box used with this cloud", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Reset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        resetButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Reset", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Close", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        closeButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Close", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        thicknessGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Box thickness", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClippingBoxDlg", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClippingBoxDlg", "Y", Q_NULLPTR));
        label_4->setText(QApplication::translate("ClippingBoxDlg", "Z", Q_NULLPTR));
        editBoxToolButton->setText(QApplication::translate("ClippingBoxDlg", "advanced", Q_NULLPTR));
        contourGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Contour", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        extractContourToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        extractContourToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        removeLastContourToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Removes last extracted contour", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        removeLastContourToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Removes last extracted contour", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        slicesGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Slices", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        exportButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        exportMultButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Export multiple slices by repeating the process along one or several dimensions (+ contour extraction)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        viewLeftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'left' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewLeftToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'left' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewRightToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'right' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewRightToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'right' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewFrontToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'front' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewFrontToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'front' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewBackToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'back' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewBackToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'back' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewDownToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'down' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewDownToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'down' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewUpToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'up' view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewUpToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'up' view", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        groupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Shift box", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minusXShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minusXShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plusXShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        plusXShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minusYShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minusYShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plusYShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        plusYShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minusZShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minusZShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plusZShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        plusZShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+Z", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClippingBoxDlg: public Ui_ClippingBoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXDLG_H
