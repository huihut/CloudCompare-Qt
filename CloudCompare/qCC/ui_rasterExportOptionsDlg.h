/********************************************************************************
** Form generated from reading UI file 'rasterExportOptionsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTEREXPORTOPTIONSDLG_H
#define UI_RASTEREXPORTOPTIONSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RasterExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *dimensionsLabel;
    QSpacerItem *horizontalSpacer;
    QCheckBox *exportRGBCheckBox;
    QCheckBox *exportHeightsCheckBox;
    QCheckBox *exportActiveLayerCheckBox;
    QCheckBox *exportAllSFCheckBox;
    QCheckBox *exportDensityCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RasterExportOptionsDialog)
    {
        if (RasterExportOptionsDialog->objectName().isEmpty())
            RasterExportOptionsDialog->setObjectName(QStringLiteral("RasterExportOptionsDialog"));
        RasterExportOptionsDialog->resize(270, 219);
        verticalLayout = new QVBoxLayout(RasterExportOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(RasterExportOptionsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dimensionsLabel = new QLabel(RasterExportOptionsDialog);
        dimensionsLabel->setObjectName(QStringLiteral("dimensionsLabel"));

        horizontalLayout->addWidget(dimensionsLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        exportRGBCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportRGBCheckBox->setObjectName(QStringLiteral("exportRGBCheckBox"));

        verticalLayout->addWidget(exportRGBCheckBox);

        exportHeightsCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportHeightsCheckBox->setObjectName(QStringLiteral("exportHeightsCheckBox"));
        exportHeightsCheckBox->setChecked(true);

        verticalLayout->addWidget(exportHeightsCheckBox);

        exportActiveLayerCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportActiveLayerCheckBox->setObjectName(QStringLiteral("exportActiveLayerCheckBox"));

        verticalLayout->addWidget(exportActiveLayerCheckBox);

        exportAllSFCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportAllSFCheckBox->setObjectName(QStringLiteral("exportAllSFCheckBox"));

        verticalLayout->addWidget(exportAllSFCheckBox);

        exportDensityCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportDensityCheckBox->setObjectName(QStringLiteral("exportDensityCheckBox"));

        verticalLayout->addWidget(exportDensityCheckBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RasterExportOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RasterExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RasterExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RasterExportOptionsDialog, SLOT(reject()));
        QObject::connect(exportAllSFCheckBox, SIGNAL(toggled(bool)), exportActiveLayerCheckBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(RasterExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterExportOptionsDialog)
    {
        RasterExportOptionsDialog->setWindowTitle(QApplication::translate("RasterExportOptionsDialog", "Raster export options", Q_NULLPTR));
        label->setText(QApplication::translate("RasterExportOptionsDialog", "Raster dimensions:", Q_NULLPTR));
        dimensionsLabel->setText(QApplication::translate("RasterExportOptionsDialog", "0 x 0", Q_NULLPTR));
        exportRGBCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export RGB colors", Q_NULLPTR));
        exportHeightsCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export heights", Q_NULLPTR));
        exportActiveLayerCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export active layer", Q_NULLPTR));
        exportAllSFCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export all scalar fields", Q_NULLPTR));
        exportDensityCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export density (population per cell)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RasterExportOptionsDialog: public Ui_RasterExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTEREXPORTOPTIONSDLG_H
