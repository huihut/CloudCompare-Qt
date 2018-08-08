/********************************************************************************
** Form generated from reading UI file 'globalShiftAndScaleDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHIFTANDSCALEDLG_H
#define UI_GLOBALSHIFTANDSCALEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShiftAndScaleDlg
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *titleFrame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *messageLabel;
    QToolButton *moreInfoToolButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *infoLabel;
    QFrame *mainFrame;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *bigCubeFrame;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QFrame *originalPointFrame;
    QVBoxLayout *verticalLayout_9;
    QLabel *xOriginLabel;
    QLabel *yOriginLabel;
    QLabel *zOriginLabel;
    QSpacerItem *verticalSpacer_6;
    QLabel *diagOriginLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QFrame *shiftFrame;
    QGridLayout *gridLayout;
    QDoubleSpinBox *scaleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *shiftX;
    QLabel *label1;
    QLabel *label_5;
    QLabel *label1_2;
    QDoubleSpinBox *shiftY;
    QDoubleSpinBox *shiftZ;
    QFrame *hLine2Frame;
    QFrame *hLine3Frame;
    QComboBox *loadComboBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QFrame *smallCubeFrame;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QFrame *destPointFrame;
    QVBoxLayout *verticalLayout_10;
    QLabel *xDestLabel;
    QLabel *yDestLabel;
    QLabel *zDestLabel;
    QSpacerItem *verticalSpacer_7;
    QLabel *diagDestLabel;
    QSpacerItem *verticalSpacer_5;
    QLabel *warningLabel;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *keepGlobalPosCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShiftAndScaleDlg)
    {
        if (GlobalShiftAndScaleDlg->objectName().isEmpty())
            GlobalShiftAndScaleDlg->setObjectName(QStringLiteral("GlobalShiftAndScaleDlg"));
        GlobalShiftAndScaleDlg->resize(643, 389);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GlobalShiftAndScaleDlg->sizePolicy().hasHeightForWidth());
        GlobalShiftAndScaleDlg->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(GlobalShiftAndScaleDlg);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        titleFrame = new QFrame(GlobalShiftAndScaleDlg);
        titleFrame->setObjectName(QStringLiteral("titleFrame"));
        titleFrame->setFrameShape(QFrame::StyledPanel);
        titleFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(titleFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(titleFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        messageLabel = new QLabel(frame_2);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        messageLabel->setFont(font);
        messageLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(messageLabel);

        moreInfoToolButton = new QToolButton(frame_2);
        moreInfoToolButton->setObjectName(QStringLiteral("moreInfoToolButton"));

        horizontalLayout_3->addWidget(moreInfoToolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(frame_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_4 = new QLabel(titleFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_5->addWidget(titleFrame);

        infoLabel = new QLabel(GlobalShiftAndScaleDlg);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        QFont font2;
        font2.setItalic(true);
        infoLabel->setFont(font2);
        infoLabel->setStyleSheet(QStringLiteral("color: blue;"));
        infoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(infoLabel);

        mainFrame = new QFrame(GlobalShiftAndScaleDlg);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(mainFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 9, 0, 9);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        bigCubeFrame = new QFrame(mainFrame);
        bigCubeFrame->setObjectName(QStringLiteral("bigCubeFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bigCubeFrame->sizePolicy().hasHeightForWidth());
        bigCubeFrame->setSizePolicy(sizePolicy2);
        bigCubeFrame->setMinimumSize(QSize(200, 200));
        bigCubeFrame->setStyleSheet(QStringLiteral("background-color:rgb(187,224,227);"));
        bigCubeFrame->setFrameShape(QFrame::Box);
        bigCubeFrame->setFrameShadow(QFrame::Plain);
        bigCubeFrame->setLineWidth(1);
        verticalLayout_7 = new QVBoxLayout(bigCubeFrame);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label = new QLabel(bigCubeFrame);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label);

        originalPointFrame = new QFrame(bigCubeFrame);
        originalPointFrame->setObjectName(QStringLiteral("originalPointFrame"));
        originalPointFrame->setFrameShape(QFrame::StyledPanel);
        originalPointFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(originalPointFrame);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        xOriginLabel = new QLabel(originalPointFrame);
        xOriginLabel->setObjectName(QStringLiteral("xOriginLabel"));
        xOriginLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(xOriginLabel);

        yOriginLabel = new QLabel(originalPointFrame);
        yOriginLabel->setObjectName(QStringLiteral("yOriginLabel"));
        yOriginLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(yOriginLabel);

        zOriginLabel = new QLabel(originalPointFrame);
        zOriginLabel->setObjectName(QStringLiteral("zOriginLabel"));
        zOriginLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(zOriginLabel);


        verticalLayout_7->addWidget(originalPointFrame);

        verticalSpacer_6 = new QSpacerItem(20, 92, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        diagOriginLabel = new QLabel(bigCubeFrame);
        diagOriginLabel->setObjectName(QStringLiteral("diagOriginLabel"));
        diagOriginLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(diagOriginLabel);


        verticalLayout_3->addWidget(bigCubeFrame);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        shiftFrame = new QFrame(mainFrame);
        shiftFrame->setObjectName(QStringLiteral("shiftFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(shiftFrame->sizePolicy().hasHeightForWidth());
        shiftFrame->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(shiftFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scaleSpinBox = new QDoubleSpinBox(shiftFrame);
        scaleSpinBox->setObjectName(QStringLiteral("scaleSpinBox"));
        scaleSpinBox->setMaximumSize(QSize(150, 16777215));
        scaleSpinBox->setDecimals(8);
        scaleSpinBox->setMinimum(1e-6);
        scaleSpinBox->setMaximum(1e+6);
        scaleSpinBox->setSingleStep(0.1);
        scaleSpinBox->setValue(1);

        gridLayout->addWidget(scaleSpinBox, 5, 4, 1, 1);

        label_3 = new QLabel(shiftFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 2, 1, 1);

        shiftX = new QDoubleSpinBox(shiftFrame);
        shiftX->setObjectName(QStringLiteral("shiftX"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(shiftX->sizePolicy().hasHeightForWidth());
        shiftX->setSizePolicy(sizePolicy4);
        shiftX->setMaximumSize(QSize(150, 16777215));
        shiftX->setMinimum(-1e+12);
        shiftX->setMaximum(1e+12);

        gridLayout->addWidget(shiftX, 2, 4, 1, 1);

        label1 = new QLabel(shiftFrame);
        label1->setObjectName(QStringLiteral("label1"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(label1, 2, 3, 1, 1);

        label_5 = new QLabel(shiftFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label1_2 = new QLabel(shiftFrame);
        label1_2->setObjectName(QStringLiteral("label1_2"));
        sizePolicy5.setHeightForWidth(label1_2->sizePolicy().hasHeightForWidth());
        label1_2->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(label1_2, 5, 3, 1, 1);

        shiftY = new QDoubleSpinBox(shiftFrame);
        shiftY->setObjectName(QStringLiteral("shiftY"));
        sizePolicy4.setHeightForWidth(shiftY->sizePolicy().hasHeightForWidth());
        shiftY->setSizePolicy(sizePolicy4);
        shiftY->setMaximumSize(QSize(150, 16777215));
        shiftY->setMinimum(-1e+12);
        shiftY->setMaximum(1e+12);

        gridLayout->addWidget(shiftY, 3, 4, 1, 1);

        shiftZ = new QDoubleSpinBox(shiftFrame);
        shiftZ->setObjectName(QStringLiteral("shiftZ"));
        sizePolicy4.setHeightForWidth(shiftZ->sizePolicy().hasHeightForWidth());
        shiftZ->setSizePolicy(sizePolicy4);
        shiftZ->setMaximumSize(QSize(150, 16777215));
        shiftZ->setMinimum(-1e+12);
        shiftZ->setMaximum(1e+12);

        gridLayout->addWidget(shiftZ, 4, 4, 1, 1);

        hLine2Frame = new QFrame(shiftFrame);
        hLine2Frame->setObjectName(QStringLiteral("hLine2Frame"));
        sizePolicy4.setHeightForWidth(hLine2Frame->sizePolicy().hasHeightForWidth());
        hLine2Frame->setSizePolicy(sizePolicy4);
        hLine2Frame->setMinimumSize(QSize(20, 2));
        hLine2Frame->setMaximumSize(QSize(16777215, 2));
        hLine2Frame->setFrameShape(QFrame::Box);
        hLine2Frame->setFrameShadow(QFrame::Plain);
        hLine2Frame->setLineWidth(2);

        gridLayout->addWidget(hLine2Frame, 2, 1, 1, 1);

        hLine3Frame = new QFrame(shiftFrame);
        hLine3Frame->setObjectName(QStringLiteral("hLine3Frame"));
        sizePolicy.setHeightForWidth(hLine3Frame->sizePolicy().hasHeightForWidth());
        hLine3Frame->setSizePolicy(sizePolicy);
        hLine3Frame->setMinimumSize(QSize(20, 2));
        hLine3Frame->setMaximumSize(QSize(16777215, 2));
        hLine3Frame->setFrameShape(QFrame::Box);
        hLine3Frame->setFrameShadow(QFrame::Plain);
        hLine3Frame->setLineWidth(2);

        gridLayout->addWidget(hLine3Frame, 5, 5, 1, 1);

        loadComboBox = new QComboBox(shiftFrame);
        loadComboBox->setObjectName(QStringLiteral("loadComboBox"));

        gridLayout->addWidget(loadComboBox, 0, 4, 1, 1);


        verticalLayout_2->addWidget(shiftFrame);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        smallCubeFrame = new QFrame(mainFrame);
        smallCubeFrame->setObjectName(QStringLiteral("smallCubeFrame"));
        sizePolicy2.setHeightForWidth(smallCubeFrame->sizePolicy().hasHeightForWidth());
        smallCubeFrame->setSizePolicy(sizePolicy2);
        smallCubeFrame->setMinimumSize(QSize(150, 150));
        smallCubeFrame->setMaximumSize(QSize(150, 150));
        smallCubeFrame->setStyleSheet(QStringLiteral("background-color:rgb(187,224,227);"));
        smallCubeFrame->setFrameShape(QFrame::Box);
        smallCubeFrame->setFrameShadow(QFrame::Plain);
        smallCubeFrame->setLineWidth(1);
        verticalLayout_8 = new QVBoxLayout(smallCubeFrame);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_2 = new QLabel(smallCubeFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_2);

        destPointFrame = new QFrame(smallCubeFrame);
        destPointFrame->setObjectName(QStringLiteral("destPointFrame"));
        destPointFrame->setFrameShape(QFrame::StyledPanel);
        destPointFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(destPointFrame);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        xDestLabel = new QLabel(destPointFrame);
        xDestLabel->setObjectName(QStringLiteral("xDestLabel"));
        xDestLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(xDestLabel);

        yDestLabel = new QLabel(destPointFrame);
        yDestLabel->setObjectName(QStringLiteral("yDestLabel"));
        yDestLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(yDestLabel);

        zDestLabel = new QLabel(destPointFrame);
        zDestLabel->setObjectName(QStringLiteral("zDestLabel"));
        zDestLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(zDestLabel);


        verticalLayout_8->addWidget(destPointFrame);

        verticalSpacer_7 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        diagDestLabel = new QLabel(smallCubeFrame);
        diagDestLabel->setObjectName(QStringLiteral("diagDestLabel"));
        diagDestLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(diagDestLabel);


        verticalLayout_4->addWidget(smallCubeFrame);

        verticalSpacer_5 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(mainFrame);

        warningLabel = new QLabel(GlobalShiftAndScaleDlg);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setStyleSheet(QStringLiteral("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(warningLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        frame = new QFrame(GlobalShiftAndScaleDlg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        keepGlobalPosCheckBox = new QCheckBox(frame);
        keepGlobalPosCheckBox->setObjectName(QStringLiteral("keepGlobalPosCheckBox"));

        horizontalLayout_2->addWidget(keepGlobalPosCheckBox);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::Yes|QDialogButtonBox::YesToAll);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_5->addWidget(frame);


        retranslateUi(GlobalShiftAndScaleDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShiftAndScaleDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShiftAndScaleDlg, SLOT(reject()));

        loadComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GlobalShiftAndScaleDlg);
    } // setupUi

    void retranslateUi(QDialog *GlobalShiftAndScaleDlg)
    {
        GlobalShiftAndScaleDlg->setWindowTitle(QApplication::translate("GlobalShiftAndScaleDlg", "Global shift/scale", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Coordinates are too big (original precision may be lost)!", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        moreInfoToolButton->setToolTip(QApplication::translate("GlobalShiftAndScaleDlg", "More information about this issue", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        moreInfoToolButton->setText(QApplication::translate("GlobalShiftAndScaleDlg", "?", Q_NULLPTR));
        label_4->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Do you wish to translate/rescale the entity?", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "shift/scale information is stored and used to restore the original coordinates at export time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bigCubeFrame->setToolTip(QApplication::translate("GlobalShiftAndScaleDlg", "This version corresponds to the input (or output) file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Point in original\n"
"coordinate system (on disk)", Q_NULLPTR));
        xOriginLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "x = 3213132123.3215", Q_NULLPTR));
        yOriginLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "y = 3213213143.34", Q_NULLPTR));
        zOriginLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "z = 3.87", Q_NULLPTR));
        diagOriginLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "diagonal = 3213132123.3215", Q_NULLPTR));
        label_3->setText(QApplication::translate("GlobalShiftAndScaleDlg", "x", Q_NULLPTR));
        label1->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Shift", Q_NULLPTR));
        label_5->setText(QApplication::translate("GlobalShiftAndScaleDlg", "+", Q_NULLPTR));
        label1_2->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Scale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadComboBox->setToolTip(QApplication::translate("GlobalShiftAndScaleDlg", "You can add default items to this list by placing a text file named <span style=\" font-weight:600;\">global_shift_list.txt</span> next to the application executable file. On each line you should define 5 items seperated by semicolon characters: name ; ShiftX ; ShiftY ; ShiftZ ; scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        smallCubeFrame->setToolTip(QApplication::translate("GlobalShiftAndScaleDlg", "This version is the one CloudCompare will work with. Mind the digits!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Point in local\n"
"coordinate system", Q_NULLPTR));
        xDestLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "x = 123.3215", Q_NULLPTR));
        yDestLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "y = 143.34", Q_NULLPTR));
        zDestLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "z = 3.87", Q_NULLPTR));
        diagDestLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "diagonal = 321313", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Warning: previously used shift and/or scale don't seem adapted to this entity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keepGlobalPosCheckBox->setToolTip(QApplication::translate("GlobalShiftAndScaleDlg", "The local coordinates will be changed so as to keep the global coordinates the same", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        keepGlobalPosCheckBox->setText(QApplication::translate("GlobalShiftAndScaleDlg", "Keep original position fixed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GlobalShiftAndScaleDlg: public Ui_GlobalShiftAndScaleDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHIFTANDSCALEDLG_H
