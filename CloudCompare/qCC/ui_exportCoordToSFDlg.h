/********************************************************************************
** Form generated from reading UI file 'exportCoordToSFDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCOORDTOSFDLG_H
#define UI_EXPORTCOORDTOSFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportCoordToSFDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *xCheckBox;
    QCheckBox *yCheckBox;
    QCheckBox *zCheckBox;
    QLabel *warningLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCoordToSFDlg)
    {
        if (ExportCoordToSFDlg->objectName().isEmpty())
            ExportCoordToSFDlg->setObjectName(QStringLiteral("ExportCoordToSFDlg"));
        ExportCoordToSFDlg->resize(450, 101);
        verticalLayout = new QVBoxLayout(ExportCoordToSFDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(ExportCoordToSFDlg);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        xCheckBox = new QCheckBox(frame);
        xCheckBox->setObjectName(QStringLiteral("xCheckBox"));

        horizontalLayout->addWidget(xCheckBox);

        yCheckBox = new QCheckBox(frame);
        yCheckBox->setObjectName(QStringLiteral("yCheckBox"));

        horizontalLayout->addWidget(yCheckBox);

        zCheckBox = new QCheckBox(frame);
        zCheckBox->setObjectName(QStringLiteral("zCheckBox"));
        zCheckBox->setChecked(true);

        horizontalLayout->addWidget(zCheckBox);


        verticalLayout->addWidget(frame);

        warningLabel = new QLabel(ExportCoordToSFDlg);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        QFont font;
        font.setItalic(true);
        warningLabel->setFont(font);
        warningLabel->setStyleSheet(QStringLiteral("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        buttonBox = new QDialogButtonBox(ExportCoordToSFDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportCoordToSFDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCoordToSFDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCoordToSFDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportCoordToSFDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportCoordToSFDlg)
    {
        ExportCoordToSFDlg->setWindowTitle(QApplication::translate("ExportCoordToSFDlg", "Export coordinates to SF", Q_NULLPTR));
        label->setText(QApplication::translate("ExportCoordToSFDlg", "Export", Q_NULLPTR));
        xCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "X", Q_NULLPTR));
        yCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "Y", Q_NULLPTR));
        zCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "Z", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("ExportCoordToSFDlg", "Warning, already existing SF(s) with same name will be overwritten", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportCoordToSFDlg: public Ui_ExportCoordToSFDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCOORDTOSFDLG_H
