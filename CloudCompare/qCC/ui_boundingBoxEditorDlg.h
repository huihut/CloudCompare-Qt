/********************************************************************************
** Form generated from reading UI file 'boundingBoxEditorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNDINGBOXEDITORDLG_H
#define UI_BOUNDINGBOXEDITORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BoundingBoxEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *pointTypeComboBox;
    QComboBox *widthComboBox;
    QLabel *xLabel;
    QDoubleSpinBox *xDoubleSpinBox;
    QDoubleSpinBox *dxDoubleSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *yDoubleSpinBox;
    QDoubleSpinBox *dyDoubleSpinBox;
    QLabel *zLabel;
    QDoubleSpinBox *zDoubleSpinBox;
    QDoubleSpinBox *dzDoubleSpinBox;
    QLabel *warningLabel;
    QGroupBox *oriGroupBox;
    QGridLayout *gridLayout_2;
    QFrame *xOriFrame;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *xOriXDoubleSpinBox;
    QDoubleSpinBox *xOriYDoubleSpinBox;
    QDoubleSpinBox *xOriZDoubleSpinBox;
    QFrame *yOriFrame;
    QVBoxLayout *verticalLayout_4;
    QDoubleSpinBox *yOriXDoubleSpinBox;
    QDoubleSpinBox *yOriYDoubleSpinBox;
    QDoubleSpinBox *yOriZDoubleSpinBox;
    QFrame *zOriFrame;
    QVBoxLayout *verticalLayout_5;
    QDoubleSpinBox *zOriXDoubleSpinBox;
    QDoubleSpinBox *zOriYDoubleSpinBox;
    QDoubleSpinBox *zOriZDoubleSpinBox;
    QCheckBox *oriZCheckBox;
    QCheckBox *oriYCheckBox;
    QCheckBox *oriXCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *keepSquareCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *defaultPushButton;
    QPushButton *lastPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *BoundingBoxEditorDialog)
    {
        if (BoundingBoxEditorDialog->objectName().isEmpty())
            BoundingBoxEditorDialog->setObjectName(QStringLiteral("BoundingBoxEditorDialog"));
        BoundingBoxEditorDialog->resize(600, 400);
        verticalLayout = new QVBoxLayout(BoundingBoxEditorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pointTypeComboBox = new QComboBox(BoundingBoxEditorDialog);
        pointTypeComboBox->setObjectName(QStringLiteral("pointTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pointTypeComboBox->sizePolicy().hasHeightForWidth());
        pointTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pointTypeComboBox, 0, 1, 1, 1);

        widthComboBox = new QComboBox(BoundingBoxEditorDialog);
        widthComboBox->setObjectName(QStringLiteral("widthComboBox"));
        sizePolicy.setHeightForWidth(widthComboBox->sizePolicy().hasHeightForWidth());
        widthComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widthComboBox, 0, 2, 1, 1);

        xLabel = new QLabel(BoundingBoxEditorDialog);
        xLabel->setObjectName(QStringLiteral("xLabel"));

        gridLayout->addWidget(xLabel, 1, 0, 1, 1);

        xDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        xDoubleSpinBox->setObjectName(QStringLiteral("xDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xDoubleSpinBox->setSizePolicy(sizePolicy);
        xDoubleSpinBox->setDecimals(8);
        xDoubleSpinBox->setMinimum(-1e+9);
        xDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(xDoubleSpinBox, 1, 1, 1, 1);

        dxDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dxDoubleSpinBox->setObjectName(QStringLiteral("dxDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dxDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dxDoubleSpinBox->setSizePolicy(sizePolicy);
        dxDoubleSpinBox->setDecimals(8);
        dxDoubleSpinBox->setMinimum(0);
        dxDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(dxDoubleSpinBox, 1, 2, 1, 1);

        yLabel = new QLabel(BoundingBoxEditorDialog);
        yLabel->setObjectName(QStringLiteral("yLabel"));

        gridLayout->addWidget(yLabel, 2, 0, 1, 1);

        yDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        yDoubleSpinBox->setObjectName(QStringLiteral("yDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yDoubleSpinBox->setSizePolicy(sizePolicy);
        yDoubleSpinBox->setDecimals(8);
        yDoubleSpinBox->setMinimum(-1e+9);
        yDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(yDoubleSpinBox, 2, 1, 1, 1);

        dyDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dyDoubleSpinBox->setObjectName(QStringLiteral("dyDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dyDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dyDoubleSpinBox->setSizePolicy(sizePolicy);
        dyDoubleSpinBox->setDecimals(8);
        dyDoubleSpinBox->setMinimum(0);
        dyDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(dyDoubleSpinBox, 2, 2, 1, 1);

        zLabel = new QLabel(BoundingBoxEditorDialog);
        zLabel->setObjectName(QStringLiteral("zLabel"));

        gridLayout->addWidget(zLabel, 3, 0, 1, 1);

        zDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        zDoubleSpinBox->setObjectName(QStringLiteral("zDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zDoubleSpinBox->setSizePolicy(sizePolicy);
        zDoubleSpinBox->setDecimals(8);
        zDoubleSpinBox->setMinimum(-1e+9);
        zDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(zDoubleSpinBox, 3, 1, 1, 1);

        dzDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dzDoubleSpinBox->setObjectName(QStringLiteral("dzDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dzDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dzDoubleSpinBox->setSizePolicy(sizePolicy);
        dzDoubleSpinBox->setDecimals(8);
        dzDoubleSpinBox->setMinimum(0);
        dzDoubleSpinBox->setMaximum(1e+9);

        gridLayout->addWidget(dzDoubleSpinBox, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        warningLabel = new QLabel(BoundingBoxEditorDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(warningLabel->sizePolicy().hasHeightForWidth());
        warningLabel->setSizePolicy(sizePolicy1);
        warningLabel->setStyleSheet(QStringLiteral("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        oriGroupBox = new QGroupBox(BoundingBoxEditorDialog);
        oriGroupBox->setObjectName(QStringLiteral("oriGroupBox"));
        sizePolicy1.setHeightForWidth(oriGroupBox->sizePolicy().hasHeightForWidth());
        oriGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(oriGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        xOriFrame = new QFrame(oriGroupBox);
        xOriFrame->setObjectName(QStringLiteral("xOriFrame"));
        sizePolicy1.setHeightForWidth(xOriFrame->sizePolicy().hasHeightForWidth());
        xOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(xOriFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        xOriXDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriXDoubleSpinBox->setObjectName(QStringLiteral("xOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriXDoubleSpinBox->setDecimals(8);
        xOriXDoubleSpinBox->setMinimum(-1e+9);
        xOriXDoubleSpinBox->setMaximum(1e+9);
        xOriXDoubleSpinBox->setValue(1);

        verticalLayout_2->addWidget(xOriXDoubleSpinBox);

        xOriYDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriYDoubleSpinBox->setObjectName(QStringLiteral("xOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriYDoubleSpinBox->setDecimals(8);
        xOriYDoubleSpinBox->setMinimum(-1e+9);
        xOriYDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_2->addWidget(xOriYDoubleSpinBox);

        xOriZDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriZDoubleSpinBox->setObjectName(QStringLiteral("xOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriZDoubleSpinBox->setDecimals(8);
        xOriZDoubleSpinBox->setMinimum(-1e+9);
        xOriZDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_2->addWidget(xOriZDoubleSpinBox);


        gridLayout_2->addWidget(xOriFrame, 1, 0, 1, 1);

        yOriFrame = new QFrame(oriGroupBox);
        yOriFrame->setObjectName(QStringLiteral("yOriFrame"));
        sizePolicy1.setHeightForWidth(yOriFrame->sizePolicy().hasHeightForWidth());
        yOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(yOriFrame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        yOriXDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriXDoubleSpinBox->setObjectName(QStringLiteral("yOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriXDoubleSpinBox->setDecimals(8);
        yOriXDoubleSpinBox->setMinimum(-1e+9);
        yOriXDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_4->addWidget(yOriXDoubleSpinBox);

        yOriYDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriYDoubleSpinBox->setObjectName(QStringLiteral("yOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriYDoubleSpinBox->setDecimals(8);
        yOriYDoubleSpinBox->setMinimum(-1e+9);
        yOriYDoubleSpinBox->setMaximum(1e+9);
        yOriYDoubleSpinBox->setValue(1);

        verticalLayout_4->addWidget(yOriYDoubleSpinBox);

        yOriZDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriZDoubleSpinBox->setObjectName(QStringLiteral("yOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriZDoubleSpinBox->setDecimals(8);
        yOriZDoubleSpinBox->setMinimum(-1e+9);
        yOriZDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_4->addWidget(yOriZDoubleSpinBox);


        gridLayout_2->addWidget(yOriFrame, 1, 1, 1, 1);

        zOriFrame = new QFrame(oriGroupBox);
        zOriFrame->setObjectName(QStringLiteral("zOriFrame"));
        zOriFrame->setEnabled(false);
        sizePolicy1.setHeightForWidth(zOriFrame->sizePolicy().hasHeightForWidth());
        zOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(zOriFrame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        zOriXDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriXDoubleSpinBox->setObjectName(QStringLiteral("zOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriXDoubleSpinBox->setDecimals(8);
        zOriXDoubleSpinBox->setMinimum(-1e+9);
        zOriXDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_5->addWidget(zOriXDoubleSpinBox);

        zOriYDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriYDoubleSpinBox->setObjectName(QStringLiteral("zOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriYDoubleSpinBox->setDecimals(8);
        zOriYDoubleSpinBox->setMinimum(-1e+9);
        zOriYDoubleSpinBox->setMaximum(1e+9);

        verticalLayout_5->addWidget(zOriYDoubleSpinBox);

        zOriZDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriZDoubleSpinBox->setObjectName(QStringLiteral("zOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriZDoubleSpinBox->setDecimals(8);
        zOriZDoubleSpinBox->setMinimum(-1e+9);
        zOriZDoubleSpinBox->setMaximum(1e+9);
        zOriZDoubleSpinBox->setValue(1);

        verticalLayout_5->addWidget(zOriZDoubleSpinBox);


        gridLayout_2->addWidget(zOriFrame, 1, 2, 1, 1);

        oriZCheckBox = new QCheckBox(oriGroupBox);
        oriZCheckBox->setObjectName(QStringLiteral("oriZCheckBox"));
        oriZCheckBox->setChecked(true);
        oriZCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriZCheckBox, 0, 2, 1, 1);

        oriYCheckBox = new QCheckBox(oriGroupBox);
        oriYCheckBox->setObjectName(QStringLiteral("oriYCheckBox"));
        oriYCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriYCheckBox, 0, 1, 1, 1);

        oriXCheckBox = new QCheckBox(oriGroupBox);
        oriXCheckBox->setObjectName(QStringLiteral("oriXCheckBox"));
        oriXCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriXCheckBox, 0, 0, 1, 1);


        verticalLayout->addWidget(oriGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        keepSquareCheckBox = new QCheckBox(BoundingBoxEditorDialog);
        keepSquareCheckBox->setObjectName(QStringLiteral("keepSquareCheckBox"));

        horizontalLayout->addWidget(keepSquareCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        defaultPushButton = new QPushButton(BoundingBoxEditorDialog);
        defaultPushButton->setObjectName(QStringLiteral("defaultPushButton"));

        horizontalLayout->addWidget(defaultPushButton);

        lastPushButton = new QPushButton(BoundingBoxEditorDialog);
        lastPushButton->setObjectName(QStringLiteral("lastPushButton"));

        horizontalLayout->addWidget(lastPushButton);

        okPushButton = new QPushButton(BoundingBoxEditorDialog);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(BoundingBoxEditorDialog);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BoundingBoxEditorDialog);
        QObject::connect(oriZCheckBox, SIGNAL(toggled(bool)), zOriFrame, SLOT(setDisabled(bool)));
        QObject::connect(oriYCheckBox, SIGNAL(toggled(bool)), yOriFrame, SLOT(setDisabled(bool)));
        QObject::connect(oriXCheckBox, SIGNAL(toggled(bool)), xOriFrame, SLOT(setDisabled(bool)));

        pointTypeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BoundingBoxEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *BoundingBoxEditorDialog)
    {
        BoundingBoxEditorDialog->setWindowTitle(QApplication::translate("BoundingBoxEditorDialog", "Bounding Box Editor", Q_NULLPTR));
        pointTypeComboBox->clear();
        pointTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("BoundingBoxEditorDialog", "Min corner", Q_NULLPTR)
         << QApplication::translate("BoundingBoxEditorDialog", "Center", Q_NULLPTR)
         << QApplication::translate("BoundingBoxEditorDialog", "Max corner", Q_NULLPTR)
        );
        widthComboBox->clear();
        widthComboBox->insertItems(0, QStringList()
         << QApplication::translate("BoundingBoxEditorDialog", "Width", Q_NULLPTR)
        );
        xLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "X", Q_NULLPTR));
        yLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Y", Q_NULLPTR));
        zLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Z", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Warning, this box doesn't include the cloud bounding-box!", Q_NULLPTR));
        oriGroupBox->setTitle(QApplication::translate("BoundingBoxEditorDialog", "Orientation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        oriZCheckBox->setToolTip(QApplication::translate("BoundingBoxEditorDialog", "automatically compute Z if checked", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        oriZCheckBox->setText(QApplication::translate("BoundingBoxEditorDialog", "Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        oriYCheckBox->setToolTip(QApplication::translate("BoundingBoxEditorDialog", "automatically compute Y if checked", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        oriYCheckBox->setText(QApplication::translate("BoundingBoxEditorDialog", "Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        oriXCheckBox->setToolTip(QApplication::translate("BoundingBoxEditorDialog", "automatically compute X if checked", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        oriXCheckBox->setText(QApplication::translate("BoundingBoxEditorDialog", "X", Q_NULLPTR));
        keepSquareCheckBox->setText(QApplication::translate("BoundingBoxEditorDialog", "keep square", Q_NULLPTR));
        defaultPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Default", Q_NULLPTR));
        lastPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Last", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "OK", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BoundingBoxEditorDialog: public Ui_BoundingBoxEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNDINGBOXEDITORDLG_H
