/********************************************************************************
** Form generated from reading UI file 'histogramDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMDLG_H
#define UI_HISTOGRAMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistogramDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *histoFrame;
    QFrame *buttonsFrame;
    QVBoxLayout *verticalLayout;
    QToolButton *exportCSVToolButton;
    QToolButton *exportImageToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *HistogramDialog)
    {
        if (HistogramDialog->objectName().isEmpty())
            HistogramDialog->setObjectName(QStringLiteral("HistogramDialog"));
        HistogramDialog->resize(400, 300);
        HistogramDialog->setStyleSheet(QStringLiteral("QDialog { background-color: white; }"));
        horizontalLayout = new QHBoxLayout(HistogramDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 0, 0);
        histoFrame = new QFrame(HistogramDialog);
        histoFrame->setObjectName(QStringLiteral("histoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(histoFrame);

        buttonsFrame = new QFrame(HistogramDialog);
        buttonsFrame->setObjectName(QStringLiteral("buttonsFrame"));
        verticalLayout = new QVBoxLayout(buttonsFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 6, 6, 6);
        exportCSVToolButton = new QToolButton(buttonsFrame);
        exportCSVToolButton->setObjectName(QStringLiteral("exportCSVToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/smallCSVFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportCSVToolButton->setIcon(icon);

        verticalLayout->addWidget(exportCSVToolButton);

        exportImageToolButton = new QToolButton(buttonsFrame);
        exportImageToolButton->setObjectName(QStringLiteral("exportImageToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/dbImageSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportImageToolButton->setIcon(icon1);

        verticalLayout->addWidget(exportImageToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(buttonsFrame);


        retranslateUi(HistogramDialog);

        QMetaObject::connectSlotsByName(HistogramDialog);
    } // setupUi

    void retranslateUi(QDialog *HistogramDialog)
    {
        HistogramDialog->setWindowTitle(QApplication::translate("HistogramDialog", "Histogram", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportCSVToolButton->setToolTip(QApplication::translate("HistogramDialog", "Export histogram to a CSV file (can be imported into Excel ;)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        exportImageToolButton->setToolTip(QApplication::translate("HistogramDialog", "Export histogram to an image file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class HistogramDialog: public Ui_HistogramDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMDLG_H
