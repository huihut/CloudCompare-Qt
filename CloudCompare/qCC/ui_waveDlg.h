/********************************************************************************
** Form generated from reading UI file 'waveDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEDLG_H
#define UI_WAVEDLG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *pointIndexSpinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *logScaleCheckBox;
    QFrame *waveFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WaveDialog)
    {
        if (WaveDialog->objectName().isEmpty())
            WaveDialog->setObjectName(QStringLiteral("WaveDialog"));
        WaveDialog->resize(600, 400);
        verticalLayout = new QVBoxLayout(WaveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WaveDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pointIndexSpinBox = new QSpinBox(WaveDialog);
        pointIndexSpinBox->setObjectName(QStringLiteral("pointIndexSpinBox"));

        horizontalLayout->addWidget(pointIndexSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logScaleCheckBox = new QCheckBox(WaveDialog);
        logScaleCheckBox->setObjectName(QStringLiteral("logScaleCheckBox"));

        horizontalLayout->addWidget(logScaleCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        waveFrame = new QFrame(WaveDialog);
        waveFrame->setObjectName(QStringLiteral("waveFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(waveFrame->sizePolicy().hasHeightForWidth());
        waveFrame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(waveFrame);

        buttonBox = new QDialogButtonBox(WaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WaveDialog);
    } // setupUi

    void retranslateUi(QDialog *WaveDialog)
    {
        WaveDialog->setWindowTitle(QApplication::translate("WaveDialog", "Waveform", Q_NULLPTR));
        label->setText(QApplication::translate("WaveDialog", "Point index", Q_NULLPTR));
        logScaleCheckBox->setText(QApplication::translate("WaveDialog", "log scale", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaveDialog: public Ui_WaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEDLG_H
