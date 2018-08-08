/********************************************************************************
** Form generated from reading UI file 'openAsciiFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENASCIIFILEDLG_H
#define UI_OPENASCIIFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AsciiOpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditFileName;
    QLabel *label;
    QLabel *headerLabel;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditSeparator;
    QLabel *asciiCodeLabel;
    QHBoxLayout *hboxLayout;
    QToolButton *toolButtonShortcutESP;
    QToolButton *toolButtonShortcutTAB;
    QToolButton *toolButtonShortcutComma;
    QToolButton *toolButtonShortcutDotcomma;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBoxSkipLines;
    QLabel *commentLinesSkippedLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *extractSFNamesFrom1stLineCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *maxCloudSizeDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AsciiOpenDialog)
    {
        if (AsciiOpenDialog->objectName().isEmpty())
            AsciiOpenDialog->setObjectName(QStringLiteral("AsciiOpenDialog"));
        AsciiOpenDialog->resize(700, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AsciiOpenDialog->sizePolicy().hasHeightForWidth());
        AsciiOpenDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AsciiOpenDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(AsciiOpenDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditFileName = new QLineEdit(AsciiOpenDialog);
        lineEditFileName->setObjectName(QStringLiteral("lineEditFileName"));
        sizePolicy.setHeightForWidth(lineEditFileName->sizePolicy().hasHeightForWidth());
        lineEditFileName->setSizePolicy(sizePolicy);
        lineEditFileName->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditFileName);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(AsciiOpenDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        headerLabel = new QLabel(AsciiOpenDialog);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setStyleSheet(QStringLiteral("color: grey;"));

        verticalLayout->addWidget(headerLabel);

        tableWidget = new QTableWidget(AsciiOpenDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(0);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(AsciiOpenDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditSeparator = new QLineEdit(AsciiOpenDialog);
        lineEditSeparator->setObjectName(QStringLiteral("lineEditSeparator"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditSeparator->sizePolicy().hasHeightForWidth());
        lineEditSeparator->setSizePolicy(sizePolicy1);
        lineEditSeparator->setMaximumSize(QSize(30, 16777215));
        lineEditSeparator->setMaxLength(1);

        horizontalLayout->addWidget(lineEditSeparator);

        asciiCodeLabel = new QLabel(AsciiOpenDialog);
        asciiCodeLabel->setObjectName(QStringLiteral("asciiCodeLabel"));

        horizontalLayout->addWidget(asciiCodeLabel);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        toolButtonShortcutESP = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutESP->setObjectName(QStringLiteral("toolButtonShortcutESP"));

        hboxLayout->addWidget(toolButtonShortcutESP);

        toolButtonShortcutTAB = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutTAB->setObjectName(QStringLiteral("toolButtonShortcutTAB"));

        hboxLayout->addWidget(toolButtonShortcutTAB);

        toolButtonShortcutComma = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutComma->setObjectName(QStringLiteral("toolButtonShortcutComma"));

        hboxLayout->addWidget(toolButtonShortcutComma);

        toolButtonShortcutDotcomma = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutDotcomma->setObjectName(QStringLiteral("toolButtonShortcutDotcomma"));

        hboxLayout->addWidget(toolButtonShortcutDotcomma);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(hboxLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(AsciiOpenDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBoxSkipLines = new QSpinBox(AsciiOpenDialog);
        spinBoxSkipLines->setObjectName(QStringLiteral("spinBoxSkipLines"));
        spinBoxSkipLines->setMaximum(999);

        horizontalLayout_3->addWidget(spinBoxSkipLines);

        commentLinesSkippedLabel = new QLabel(AsciiOpenDialog);
        commentLinesSkippedLabel->setObjectName(QStringLiteral("commentLinesSkippedLabel"));

        horizontalLayout_3->addWidget(commentLinesSkippedLabel);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        extractSFNamesFrom1stLineCheckBox = new QCheckBox(AsciiOpenDialog);
        extractSFNamesFrom1stLineCheckBox->setObjectName(QStringLiteral("extractSFNamesFrom1stLineCheckBox"));
        extractSFNamesFrom1stLineCheckBox->setEnabled(false);

        horizontalLayout_3->addWidget(extractSFNamesFrom1stLineCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonFrame = new QFrame(AsciiOpenDialog);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(buttonFrame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(buttonFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        maxCloudSizeDoubleSpinBox = new QDoubleSpinBox(buttonFrame);
        maxCloudSizeDoubleSpinBox->setObjectName(QStringLiteral("maxCloudSizeDoubleSpinBox"));
        maxCloudSizeDoubleSpinBox->setDecimals(2);
        maxCloudSizeDoubleSpinBox->setMinimum(0.01);
        maxCloudSizeDoubleSpinBox->setMaximum(1e+6);
        maxCloudSizeDoubleSpinBox->setValue(128);

        horizontalLayout_5->addWidget(maxCloudSizeDoubleSpinBox);

        horizontalSpacer_5 = new QSpacerItem(157, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        applyButton = new QPushButton(buttonFrame);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        applyAllButton = new QPushButton(buttonFrame);
        applyAllButton->setObjectName(QStringLiteral("applyAllButton"));

        horizontalLayout_5->addWidget(applyAllButton);

        cancelButton = new QPushButton(buttonFrame);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);


        verticalLayout->addWidget(buttonFrame);


        retranslateUi(AsciiOpenDialog);

        QMetaObject::connectSlotsByName(AsciiOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiOpenDialog)
    {
        AsciiOpenDialog->setWindowTitle(QApplication::translate("AsciiOpenDialog", "Open Ascii File", Q_NULLPTR));
        label_3->setText(QApplication::translate("AsciiOpenDialog", "Filename:", Q_NULLPTR));
        label->setText(QApplication::translate("AsciiOpenDialog", "Here are the first lines of this file. Choose each column attribution (one cloud at a time):", Q_NULLPTR));
        headerLabel->setText(QApplication::translate("AsciiOpenDialog", "Header:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AsciiOpenDialog", "Separator", Q_NULLPTR));
        asciiCodeLabel->setText(QApplication::translate("AsciiOpenDialog", "(ASCII code:%i)", Q_NULLPTR));
        toolButtonShortcutESP->setText(QApplication::translate("AsciiOpenDialog", "ESP", Q_NULLPTR));
        toolButtonShortcutTAB->setText(QApplication::translate("AsciiOpenDialog", "TAB", Q_NULLPTR));
        toolButtonShortcutComma->setText(QApplication::translate("AsciiOpenDialog", ",", Q_NULLPTR));
        toolButtonShortcutDotcomma->setText(QApplication::translate("AsciiOpenDialog", ";", Q_NULLPTR));
        label_4->setText(QApplication::translate("AsciiOpenDialog", "Skip lines", Q_NULLPTR));
        commentLinesSkippedLabel->setText(QApplication::translate("AsciiOpenDialog", "+ comment/header lines skipped: 0", Q_NULLPTR));
        extractSFNamesFrom1stLineCheckBox->setText(QApplication::translate("AsciiOpenDialog", "extract scalar field names from first line", Q_NULLPTR));
        label_5->setText(QApplication::translate("AsciiOpenDialog", "Max number of points per cloud", Q_NULLPTR));
        maxCloudSizeDoubleSpinBox->setSuffix(QApplication::translate("AsciiOpenDialog", " Million", Q_NULLPTR));
        applyButton->setText(QApplication::translate("AsciiOpenDialog", "Apply", Q_NULLPTR));
        applyAllButton->setText(QApplication::translate("AsciiOpenDialog", "Apply all", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("AsciiOpenDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AsciiOpenDialog: public Ui_AsciiOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENASCIIFILEDLG_H
