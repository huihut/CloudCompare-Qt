/********************************************************************************
** Form generated from reading UI file 'contourExtractorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTOUREXTRACTORDLG_H
#define UI_CONTOUREXTRACTORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ContourExtractorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *viewFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *messageLabel;
    QCheckBox *autoCheckBox;
    QPushButton *nextPushButton;
    QPushButton *skipPushButton;

    void setupUi(QDialog *ContourExtractorDlg)
    {
        if (ContourExtractorDlg->objectName().isEmpty())
            ContourExtractorDlg->setObjectName(QStringLiteral("ContourExtractorDlg"));
        ContourExtractorDlg->resize(836, 682);
        verticalLayout = new QVBoxLayout(ContourExtractorDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewFrame = new QFrame(ContourExtractorDlg);
        viewFrame->setObjectName(QStringLiteral("viewFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewFrame->sizePolicy().hasHeightForWidth());
        viewFrame->setSizePolicy(sizePolicy);
        viewFrame->setMinimumSize(QSize(512, 512));
        viewFrame->setFrameShape(QFrame::StyledPanel);
        viewFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(viewFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ContourExtractorDlg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        messageLabel = new QLabel(ContourExtractorDlg);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(messageLabel);

        autoCheckBox = new QCheckBox(ContourExtractorDlg);
        autoCheckBox->setObjectName(QStringLiteral("autoCheckBox"));

        horizontalLayout->addWidget(autoCheckBox);

        nextPushButton = new QPushButton(ContourExtractorDlg);
        nextPushButton->setObjectName(QStringLiteral("nextPushButton"));

        horizontalLayout->addWidget(nextPushButton);

        skipPushButton = new QPushButton(ContourExtractorDlg);
        skipPushButton->setObjectName(QStringLiteral("skipPushButton"));

        horizontalLayout->addWidget(skipPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ContourExtractorDlg);

        QMetaObject::connectSlotsByName(ContourExtractorDlg);
    } // setupUi

    void retranslateUi(QDialog *ContourExtractorDlg)
    {
        ContourExtractorDlg->setWindowTitle(QApplication::translate("ContourExtractorDlg", "Contour Extractor Visual Debug", Q_NULLPTR));
        label->setText(QApplication::translate("ContourExtractorDlg", "Message", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("ContourExtractorDlg", "no message", Q_NULLPTR));
        autoCheckBox->setText(QApplication::translate("ContourExtractorDlg", "auto", Q_NULLPTR));
        nextPushButton->setText(QApplication::translate("ContourExtractorDlg", "Next", Q_NULLPTR));
        skipPushButton->setText(QApplication::translate("ContourExtractorDlg", "Skip", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContourExtractorDlg: public Ui_ContourExtractorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTOUREXTRACTORDLG_H
