/********************************************************************************
** Form generated from reading UI file 'SIFTExtractDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIFTEXTRACTDLG_H
#define UI_SIFTEXTRACTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SIFTExtractDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *intensityCombo;
    QLabel *label_3;
    QSpinBox *scalesPerOctave;
    QLabel *label;
    QDoubleSpinBox *minScale;
    QLabel *label_2;
    QSpinBox *nrOctaves;
    QCheckBox *useMinContrast;
    QDoubleSpinBox *minContrast;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SIFTExtractDlg)
    {
        if (SIFTExtractDlg->objectName().isEmpty())
            SIFTExtractDlg->setObjectName(QStringLiteral("SIFTExtractDlg"));
        SIFTExtractDlg->resize(285, 173);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SIFTExtractDlg->sizePolicy().hasHeightForWidth());
        SIFTExtractDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SIFTExtractDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(SIFTExtractDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        intensityCombo = new QComboBox(SIFTExtractDlg);
        intensityCombo->setObjectName(QStringLiteral("intensityCombo"));

        gridLayout->addWidget(intensityCombo, 0, 1, 1, 1);

        label_3 = new QLabel(SIFTExtractDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        scalesPerOctave = new QSpinBox(SIFTExtractDlg);
        scalesPerOctave->setObjectName(QStringLiteral("scalesPerOctave"));
        scalesPerOctave->setMaximum(50);
        scalesPerOctave->setValue(10);

        gridLayout->addWidget(scalesPerOctave, 1, 1, 1, 1);

        label = new QLabel(SIFTExtractDlg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        minScale = new QDoubleSpinBox(SIFTExtractDlg);
        minScale->setObjectName(QStringLiteral("minScale"));
        minScale->setDecimals(4);
        minScale->setMaximum(1);
        minScale->setSingleStep(0.01);
        minScale->setValue(0.02);

        gridLayout->addWidget(minScale, 2, 1, 1, 1);

        label_2 = new QLabel(SIFTExtractDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        nrOctaves = new QSpinBox(SIFTExtractDlg);
        nrOctaves->setObjectName(QStringLiteral("nrOctaves"));
        nrOctaves->setValue(5);

        gridLayout->addWidget(nrOctaves, 3, 1, 1, 1);

        useMinContrast = new QCheckBox(SIFTExtractDlg);
        useMinContrast->setObjectName(QStringLiteral("useMinContrast"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(useMinContrast->sizePolicy().hasHeightForWidth());
        useMinContrast->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(useMinContrast, 4, 0, 1, 1);

        minContrast = new QDoubleSpinBox(SIFTExtractDlg);
        minContrast->setObjectName(QStringLiteral("minContrast"));
        minContrast->setEnabled(false);
        minContrast->setMaximum(100000);
        minContrast->setSingleStep(1);
        minContrast->setValue(1);

        gridLayout->addWidget(minContrast, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(SIFTExtractDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SIFTExtractDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SIFTExtractDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SIFTExtractDlg, SLOT(reject()));
        QObject::connect(useMinContrast, SIGNAL(toggled(bool)), minContrast, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SIFTExtractDlg);
    } // setupUi

    void retranslateUi(QDialog *SIFTExtractDlg)
    {
        SIFTExtractDlg->setWindowTitle(QApplication::translate("SIFTExtractDlg", "SIFT Extraction", Q_NULLPTR));
        label_4->setText(QApplication::translate("SIFTExtractDlg", "Intensity Field", Q_NULLPTR));
        label_3->setText(QApplication::translate("SIFTExtractDlg", "Scales per Octave", Q_NULLPTR));
        label->setText(QApplication::translate("SIFTExtractDlg", "Minimum Scale", Q_NULLPTR));
        label_2->setText(QApplication::translate("SIFTExtractDlg", "Number of Octaves", Q_NULLPTR));
        useMinContrast->setText(QApplication::translate("SIFTExtractDlg", "Minimum Contrast", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SIFTExtractDlg: public Ui_SIFTExtractDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIFTEXTRACTDLG_H
