/********************************************************************************
** Form generated from reading UI file 'orthoSectionGenerationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTHOSECTIONGENERATIONDLG_H
#define UI_ORTHOSECTIONGENERATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrthoSectionGenerationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pathLengthLineEdit;
    QLabel *label_4;
    QLineEdit *sectionCountLineEdit;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *stepDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *widthDoubleSpinBox;
    QCheckBox *autoSaveAndRemoveCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrthoSectionGenerationDlg)
    {
        if (OrthoSectionGenerationDlg->objectName().isEmpty())
            OrthoSectionGenerationDlg->setObjectName(QStringLiteral("OrthoSectionGenerationDlg"));
        OrthoSectionGenerationDlg->resize(350, 152);
        verticalLayout = new QVBoxLayout(OrthoSectionGenerationDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(OrthoSectionGenerationDlg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pathLengthLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        pathLengthLineEdit->setObjectName(QStringLiteral("pathLengthLineEdit"));
        pathLengthLineEdit->setEnabled(false);
        pathLengthLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(pathLengthLineEdit);

        label_4 = new QLabel(OrthoSectionGenerationDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        sectionCountLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        sectionCountLineEdit->setObjectName(QStringLiteral("sectionCountLineEdit"));
        sectionCountLineEdit->setEnabled(false);
        sectionCountLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(sectionCountLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(OrthoSectionGenerationDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        stepDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        stepDoubleSpinBox->setObjectName(QStringLiteral("stepDoubleSpinBox"));
        stepDoubleSpinBox->setDecimals(6);
        stepDoubleSpinBox->setMinimum(0);
        stepDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(0, QFormLayout::FieldRole, stepDoubleSpinBox);

        label_3 = new QLabel(OrthoSectionGenerationDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        widthDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        widthDoubleSpinBox->setObjectName(QStringLiteral("widthDoubleSpinBox"));
        widthDoubleSpinBox->setDecimals(6);
        widthDoubleSpinBox->setMinimum(1e-6);
        widthDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(1, QFormLayout::FieldRole, widthDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        autoSaveAndRemoveCheckBox = new QCheckBox(OrthoSectionGenerationDlg);
        autoSaveAndRemoveCheckBox->setObjectName(QStringLiteral("autoSaveAndRemoveCheckBox"));
        autoSaveAndRemoveCheckBox->setChecked(true);

        verticalLayout->addWidget(autoSaveAndRemoveCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OrthoSectionGenerationDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OrthoSectionGenerationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrthoSectionGenerationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrthoSectionGenerationDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrthoSectionGenerationDlg);
    } // setupUi

    void retranslateUi(QDialog *OrthoSectionGenerationDlg)
    {
        OrthoSectionGenerationDlg->setWindowTitle(QApplication::translate("OrthoSectionGenerationDlg", "Orthogonal sections generation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Selected path length", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OrthoSectionGenerationDlg", "path length", Q_NULLPTR));
        label_4->setText(QApplication::translate("OrthoSectionGenerationDlg", "sections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sectionCountLineEdit->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Number of sections that will be generated (depends on the 'step' parameter)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OrthoSectionGenerationDlg", "step", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stepDoubleSpinBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Section generation step", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OrthoSectionGenerationDlg", "width", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        widthDoubleSpinBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Total width of each orthogonal section (centered on the path line)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        autoSaveAndRemoveCheckBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Automatically save then remove the generatrix polyline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoSaveAndRemoveCheckBox->setText(QApplication::translate("OrthoSectionGenerationDlg", "auto save and remove generatrix", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OrthoSectionGenerationDlg: public Ui_OrthoSectionGenerationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTHOSECTIONGENERATIONDLG_H
