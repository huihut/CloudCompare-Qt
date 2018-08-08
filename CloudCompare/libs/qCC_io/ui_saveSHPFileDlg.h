/********************************************************************************
** Form generated from reading UI file 'saveSHPFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVESHPFILEDLG_H
#define UI_SAVESHPFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveSHPFileDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *dimComboBox;
    QCheckBox *save3DPolyAs2DCheckBox;
    QCheckBox *save3DPolyHeightInDBFCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveSHPFileDlg)
    {
        if (SaveSHPFileDlg->objectName().isEmpty())
            SaveSHPFileDlg->setObjectName(QStringLiteral("SaveSHPFileDlg"));
        SaveSHPFileDlg->resize(295, 154);
        verticalLayout_2 = new QVBoxLayout(SaveSHPFileDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(SaveSHPFileDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dimComboBox = new QComboBox(groupBox);
        dimComboBox->setObjectName(QStringLiteral("dimComboBox"));
        dimComboBox->setMaxVisibleItems(3);

        horizontalLayout->addWidget(dimComboBox);


        verticalLayout->addLayout(horizontalLayout);

        save3DPolyAs2DCheckBox = new QCheckBox(groupBox);
        save3DPolyAs2DCheckBox->setObjectName(QStringLiteral("save3DPolyAs2DCheckBox"));

        verticalLayout->addWidget(save3DPolyAs2DCheckBox);

        save3DPolyHeightInDBFCheckBox = new QCheckBox(groupBox);
        save3DPolyHeightInDBFCheckBox->setObjectName(QStringLiteral("save3DPolyHeightInDBFCheckBox"));

        verticalLayout->addWidget(save3DPolyHeightInDBFCheckBox);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SaveSHPFileDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SaveSHPFileDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveSHPFileDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveSHPFileDlg, SLOT(reject()));

        dimComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SaveSHPFileDlg);
    } // setupUi

    void retranslateUi(QDialog *SaveSHPFileDlg)
    {
        SaveSHPFileDlg->setWindowTitle(QApplication::translate("SaveSHPFileDlg", "Save SHP file", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SaveSHPFileDlg", "3D polylines", Q_NULLPTR));
        label->setText(QApplication::translate("SaveSHPFileDlg", "Vertical dimension", Q_NULLPTR));
        dimComboBox->clear();
        dimComboBox->insertItems(0, QStringList()
         << QApplication::translate("SaveSHPFileDlg", "X", Q_NULLPTR)
         << QApplication::translate("SaveSHPFileDlg", "Y", Q_NULLPTR)
         << QApplication::translate("SaveSHPFileDlg", "Z", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        save3DPolyAs2DCheckBox->setToolTip(QApplication::translate("SaveSHPFileDlg", "Save the 3D polylines as 2D ones (make sure to set the right 'vertical dimension')", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        save3DPolyAs2DCheckBox->setText(QApplication::translate("SaveSHPFileDlg", "save as 2D polylines", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        save3DPolyHeightInDBFCheckBox->setToolTip(QApplication::translate("SaveSHPFileDlg", "The height of each polyline (considered as constant!) will be saved as a field in the associated DBF file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        save3DPolyHeightInDBFCheckBox->setText(QApplication::translate("SaveSHPFileDlg", "save (constant) height of polylines as a DBF field", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaveSHPFileDlg: public Ui_SaveSHPFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVESHPFILEDLG_H
