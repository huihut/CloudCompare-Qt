/********************************************************************************
** Form generated from reading UI file 'colorScaleEditorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSCALEEDITORDLG_H
#define UI_COLORSCALEEDITORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorScaleEditorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *rampComboBox;
    QToolButton *exportToolButton;
    QToolButton *importToolButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QFrame *colorScaleParametersFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *scaleModeComboBox;
    QToolButton *renameToolButton;
    QToolButton *saveToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *newToolButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lockWarningLabel;
    QFrame *colorScaleEditorFrame;
    QGroupBox *selectedSliderGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *deleteSliderToolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QToolButton *colorToolButton;
    QLabel *label_2;
    QDoubleSpinBox *valueDoubleSpinBox;
    QLabel *valueLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *customLabelsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *customLabelsPlainTextEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *applyPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ColorScaleEditorDlg)
    {
        if (ColorScaleEditorDlg->objectName().isEmpty())
            ColorScaleEditorDlg->setObjectName(QStringLiteral("ColorScaleEditorDlg"));
        ColorScaleEditorDlg->resize(500, 420);
        verticalLayout = new QVBoxLayout(ColorScaleEditorDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(ColorScaleEditorDlg);
        frame->setObjectName(QStringLiteral("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        rampComboBox = new QComboBox(frame);
        rampComboBox->setObjectName(QStringLiteral("rampComboBox"));
        rampComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(rampComboBox);

        exportToolButton = new QToolButton(frame);
        exportToolButton->setObjectName(QStringLiteral("exportToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportToolButton->setIcon(icon);

        horizontalLayout->addWidget(exportToolButton);

        importToolButton = new QToolButton(frame);
        importToolButton->setObjectName(QStringLiteral("importToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/ccOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        importToolButton->setIcon(icon1);

        horizontalLayout->addWidget(importToolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(frame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        colorScaleParametersFrame = new QFrame(ColorScaleEditorDlg);
        colorScaleParametersFrame->setObjectName(QStringLiteral("colorScaleParametersFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorScaleParametersFrame->sizePolicy().hasHeightForWidth());
        colorScaleParametersFrame->setSizePolicy(sizePolicy);
        colorScaleParametersFrame->setFrameShape(QFrame::StyledPanel);
        colorScaleParametersFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(colorScaleParametersFrame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(colorScaleParametersFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        scaleModeComboBox = new QComboBox(colorScaleParametersFrame);
        scaleModeComboBox->setObjectName(QStringLiteral("scaleModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scaleModeComboBox->sizePolicy().hasHeightForWidth());
        scaleModeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(scaleModeComboBox);

        renameToolButton = new QToolButton(colorScaleParametersFrame);
        renameToolButton->setObjectName(QStringLiteral("renameToolButton"));

        horizontalLayout_3->addWidget(renameToolButton);

        saveToolButton = new QToolButton(colorScaleParametersFrame);
        saveToolButton->setObjectName(QStringLiteral("saveToolButton"));

        horizontalLayout_3->addWidget(saveToolButton);

        deleteToolButton = new QToolButton(colorScaleParametersFrame);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));

        horizontalLayout_3->addWidget(deleteToolButton);


        horizontalLayout_4->addWidget(colorScaleParametersFrame);

        copyToolButton = new QToolButton(ColorScaleEditorDlg);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));

        horizontalLayout_4->addWidget(copyToolButton);

        newToolButton = new QToolButton(ColorScaleEditorDlg);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));

        horizontalLayout_4->addWidget(newToolButton);

        horizontalSpacer_5 = new QSpacerItem(48, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        lockWarningLabel = new QLabel(ColorScaleEditorDlg);
        lockWarningLabel->setObjectName(QStringLiteral("lockWarningLabel"));
        lockWarningLabel->setStyleSheet(QStringLiteral("QLabel{ color: red; }"));
        lockWarningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lockWarningLabel);

        colorScaleEditorFrame = new QFrame(ColorScaleEditorDlg);
        colorScaleEditorFrame->setObjectName(QStringLiteral("colorScaleEditorFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(colorScaleEditorFrame->sizePolicy().hasHeightForWidth());
        colorScaleEditorFrame->setSizePolicy(sizePolicy2);
        colorScaleEditorFrame->setMinimumSize(QSize(0, 50));
        colorScaleEditorFrame->setFrameShape(QFrame::StyledPanel);
        colorScaleEditorFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(colorScaleEditorFrame);

        selectedSliderGroupBox = new QGroupBox(ColorScaleEditorDlg);
        selectedSliderGroupBox->setObjectName(QStringLiteral("selectedSliderGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectedSliderGroupBox->sizePolicy().hasHeightForWidth());
        selectedSliderGroupBox->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(selectedSliderGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        deleteSliderToolButton = new QToolButton(selectedSliderGroupBox);
        deleteSliderToolButton->setObjectName(QStringLiteral("deleteSliderToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteSliderToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(deleteSliderToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(selectedSliderGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        colorToolButton = new QToolButton(selectedSliderGroupBox);
        colorToolButton->setObjectName(QStringLiteral("colorToolButton"));

        horizontalLayout_2->addWidget(colorToolButton);

        label_2 = new QLabel(selectedSliderGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        valueDoubleSpinBox = new QDoubleSpinBox(selectedSliderGroupBox);
        valueDoubleSpinBox->setObjectName(QStringLiteral("valueDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(valueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        valueDoubleSpinBox->setSizePolicy(sizePolicy1);
        valueDoubleSpinBox->setDecimals(6);

        horizontalLayout_2->addWidget(valueDoubleSpinBox);

        valueLabel = new QLabel(selectedSliderGroupBox);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        horizontalLayout_2->addWidget(valueLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(selectedSliderGroupBox);

        customLabelsGroupBox = new QGroupBox(ColorScaleEditorDlg);
        customLabelsGroupBox->setObjectName(QStringLiteral("customLabelsGroupBox"));
        customLabelsGroupBox->setCheckable(true);
        customLabelsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(customLabelsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        customLabelsPlainTextEdit = new QPlainTextEdit(customLabelsGroupBox);
        customLabelsPlainTextEdit->setObjectName(QStringLiteral("customLabelsPlainTextEdit"));

        verticalLayout_2->addWidget(customLabelsPlainTextEdit);


        verticalLayout->addWidget(customLabelsGroupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        applyPushButton = new QPushButton(ColorScaleEditorDlg);
        applyPushButton->setObjectName(QStringLiteral("applyPushButton"));

        horizontalLayout_5->addWidget(applyPushButton);

        closePushButton = new QPushButton(ColorScaleEditorDlg);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_5->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(ColorScaleEditorDlg);

        QMetaObject::connectSlotsByName(ColorScaleEditorDlg);
    } // setupUi

    void retranslateUi(QDialog *ColorScaleEditorDlg)
    {
        ColorScaleEditorDlg->setWindowTitle(QApplication::translate("ColorScaleEditorDlg", "Color Scale Editor", Q_NULLPTR));
        label->setText(QApplication::translate("ColorScaleEditorDlg", "Current", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportToolButton->setToolTip(QApplication::translate("ColorScaleEditorDlg", "Export color scale to a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        importToolButton->setToolTip(QApplication::translate("ColorScaleEditorDlg", "Import color scale from a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("ColorScaleEditorDlg", "Mode", Q_NULLPTR));
        scaleModeComboBox->clear();
        scaleModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorScaleEditorDlg", "relative", Q_NULLPTR)
         << QApplication::translate("ColorScaleEditorDlg", "absolute", Q_NULLPTR)
        );
        renameToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Rename", Q_NULLPTR));
        saveToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Save", Q_NULLPTR));
        deleteToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Delete", Q_NULLPTR));
        copyToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Copy", Q_NULLPTR));
        newToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "New", Q_NULLPTR));
        lockWarningLabel->setText(QApplication::translate("ColorScaleEditorDlg", "(this ramp is locked - copy it before editing it)", Q_NULLPTR));
        selectedSliderGroupBox->setTitle(QApplication::translate("ColorScaleEditorDlg", "Selected slider", Q_NULLPTR));
        label_3->setText(QApplication::translate("ColorScaleEditorDlg", "Color", Q_NULLPTR));
        label_2->setText(QApplication::translate("ColorScaleEditorDlg", "Value", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("ColorScaleEditorDlg", "(32%)", Q_NULLPTR));
        customLabelsGroupBox->setTitle(QApplication::translate("ColorScaleEditorDlg", "Custom labels (one value per line)", Q_NULLPTR));
        customLabelsPlainTextEdit->setPlainText(QApplication::translate("ColorScaleEditorDlg", "(auto)", Q_NULLPTR));
        applyPushButton->setText(QApplication::translate("ColorScaleEditorDlg", "Apply", Q_NULLPTR));
        closePushButton->setText(QApplication::translate("ColorScaleEditorDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorScaleEditorDlg: public Ui_ColorScaleEditorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSCALEEDITORDLG_H
