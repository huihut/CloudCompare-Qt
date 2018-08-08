/********************************************************************************
** Form generated from reading UI file 'colorLevelsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORLEVELSDLG_H
#define UI_COLORLEVELSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_ColorLevelsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QComboBox *channelComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *minInputSpinBox;
    QSpinBox *maxInputSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *histoFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *outputLevelsCheckBox;
    QFrame *outputLevelsFrame;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *minOutputSpinBox;
    QSpinBox *maxOutputSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorLevelsDialog)
    {
        if (ColorLevelsDialog->objectName().isEmpty())
            ColorLevelsDialog->setObjectName(QStringLiteral("ColorLevelsDialog"));
        ColorLevelsDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ColorLevelsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(ColorLevelsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        channelComboBox = new QComboBox(ColorLevelsDialog);
        channelComboBox->setObjectName(QStringLiteral("channelComboBox"));

        horizontalLayout_2->addWidget(channelComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(ColorLevelsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        minInputSpinBox = new QSpinBox(ColorLevelsDialog);
        minInputSpinBox->setObjectName(QStringLiteral("minInputSpinBox"));
        minInputSpinBox->setMinimum(-16777216);
        minInputSpinBox->setMaximum(16777216);

        horizontalLayout->addWidget(minInputSpinBox);

        maxInputSpinBox = new QSpinBox(ColorLevelsDialog);
        maxInputSpinBox->setObjectName(QStringLiteral("maxInputSpinBox"));
        maxInputSpinBox->setMinimum(-16777216);
        maxInputSpinBox->setMaximum(16777216);
        maxInputSpinBox->setValue(255);

        horizontalLayout->addWidget(maxInputSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        histoFrame = new QFrame(ColorLevelsDialog);
        histoFrame->setObjectName(QStringLiteral("histoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy);
        histoFrame->setFrameShape(QFrame::StyledPanel);
        histoFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(histoFrame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        outputLevelsCheckBox = new QCheckBox(ColorLevelsDialog);
        outputLevelsCheckBox->setObjectName(QStringLiteral("outputLevelsCheckBox"));

        horizontalLayout_3->addWidget(outputLevelsCheckBox);

        outputLevelsFrame = new QFrame(ColorLevelsDialog);
        outputLevelsFrame->setObjectName(QStringLiteral("outputLevelsFrame"));
        outputLevelsFrame->setEnabled(false);
        horizontalLayout_4 = new QHBoxLayout(outputLevelsFrame);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        minOutputSpinBox = new QSpinBox(outputLevelsFrame);
        minOutputSpinBox->setObjectName(QStringLiteral("minOutputSpinBox"));
        minOutputSpinBox->setMinimum(-16777216);
        minOutputSpinBox->setMaximum(16777216);

        horizontalLayout_4->addWidget(minOutputSpinBox);

        maxOutputSpinBox = new QSpinBox(outputLevelsFrame);
        maxOutputSpinBox->setObjectName(QStringLiteral("maxOutputSpinBox"));
        maxOutputSpinBox->setMinimum(-16777216);
        maxOutputSpinBox->setMaximum(16777216);
        maxOutputSpinBox->setValue(255);

        horizontalLayout_4->addWidget(maxOutputSpinBox);


        horizontalLayout_3->addWidget(outputLevelsFrame);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(ColorLevelsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorLevelsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorLevelsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorLevelsDialog, SLOT(reject()));
        QObject::connect(outputLevelsCheckBox, SIGNAL(toggled(bool)), outputLevelsFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ColorLevelsDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorLevelsDialog)
    {
        ColorLevelsDialog->setWindowTitle(QApplication::translate("ColorLevelsDialog", "Change Color Levels", Q_NULLPTR));
        label->setText(QApplication::translate("ColorLevelsDialog", "Channel(s)", Q_NULLPTR));
        channelComboBox->clear();
        channelComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorLevelsDialog", "RGB", Q_NULLPTR)
         << QApplication::translate("ColorLevelsDialog", "Red", Q_NULLPTR)
         << QApplication::translate("ColorLevelsDialog", "Green", Q_NULLPTR)
         << QApplication::translate("ColorLevelsDialog", "Blue", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("ColorLevelsDialog", "Input levels", Q_NULLPTR));
        outputLevelsCheckBox->setText(QApplication::translate("ColorLevelsDialog", "Output levels", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorLevelsDialog: public Ui_ColorLevelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORLEVELSDLG_H
