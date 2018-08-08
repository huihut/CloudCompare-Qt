/********************************************************************************
** Form generated from reading UI file 'sectionExtractionSubDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONSUBDLG_H
#define UI_SECTIONEXTRACTIONSUBDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionSubDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *activeSectionsLabel;
    QLabel *label;
    QDoubleSpinBox *thicknessDoubleSpinBox;
    QGroupBox *extractCloudsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGroupBox *extractContoursGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *contourTypeComboBox;
    QLabel *label_2;
    QDoubleSpinBox *maxEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassCheckBox;
    QCheckBox *splitContourCheckBox;
    QCheckBox *debugModeCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SectionExtractionSubDlg)
    {
        if (SectionExtractionSubDlg->objectName().isEmpty())
            SectionExtractionSubDlg->setObjectName(QStringLiteral("SectionExtractionSubDlg"));
        SectionExtractionSubDlg->resize(300, 320);
        verticalLayout = new QVBoxLayout(SectionExtractionSubDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(SectionExtractionSubDlg);
        frame->setObjectName(QStringLiteral("frame"));
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        activeSectionsLabel = new QLabel(frame);
        activeSectionsLabel->setObjectName(QStringLiteral("activeSectionsLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, activeSectionsLabel);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        thicknessDoubleSpinBox = new QDoubleSpinBox(frame);
        thicknessDoubleSpinBox->setObjectName(QStringLiteral("thicknessDoubleSpinBox"));
        thicknessDoubleSpinBox->setDecimals(6);
        thicknessDoubleSpinBox->setMaximum(1e+9);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, thicknessDoubleSpinBox);


        verticalLayout->addWidget(frame);

        extractCloudsGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractCloudsGroupBox->setObjectName(QStringLiteral("extractCloudsGroupBox"));
        extractCloudsGroupBox->setCheckable(true);
        extractCloudsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(extractCloudsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(extractCloudsGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(extractCloudsGroupBox);

        extractContoursGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractContoursGroupBox->setObjectName(QStringLiteral("extractContoursGroupBox"));
        extractContoursGroupBox->setCheckable(true);
        extractContoursGroupBox->setChecked(true);
        verticalLayout_3 = new QVBoxLayout(extractContoursGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(extractContoursGroupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        formLayout = new QFormLayout(frame_2);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        contourTypeComboBox = new QComboBox(frame_2);
        contourTypeComboBox->setObjectName(QStringLiteral("contourTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, contourTypeComboBox);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxEdgeLengthDoubleSpinBox = new QDoubleSpinBox(frame_2);
        maxEdgeLengthDoubleSpinBox->setObjectName(QStringLiteral("maxEdgeLengthDoubleSpinBox"));
        maxEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEdgeLengthDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxEdgeLengthDoubleSpinBox);


        verticalLayout_3->addWidget(frame_2);

        multiPassCheckBox = new QCheckBox(extractContoursGroupBox);
        multiPassCheckBox->setObjectName(QStringLiteral("multiPassCheckBox"));

        verticalLayout_3->addWidget(multiPassCheckBox);

        splitContourCheckBox = new QCheckBox(extractContoursGroupBox);
        splitContourCheckBox->setObjectName(QStringLiteral("splitContourCheckBox"));

        verticalLayout_3->addWidget(splitContourCheckBox);

        debugModeCheckBox = new QCheckBox(extractContoursGroupBox);
        debugModeCheckBox->setObjectName(QStringLiteral("debugModeCheckBox"));

        verticalLayout_3->addWidget(debugModeCheckBox);


        verticalLayout->addWidget(extractContoursGroupBox);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SectionExtractionSubDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SectionExtractionSubDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SectionExtractionSubDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SectionExtractionSubDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(SectionExtractionSubDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionSubDlg)
    {
        SectionExtractionSubDlg->setWindowTitle(QApplication::translate("SectionExtractionSubDlg", "Extract Sections", Q_NULLPTR));
        label_5->setText(QApplication::translate("SectionExtractionSubDlg", "Active section(s)", Q_NULLPTR));
        activeSectionsLabel->setText(QApplication::translate("SectionExtractionSubDlg", "0", Q_NULLPTR));
        label->setText(QApplication::translate("SectionExtractionSubDlg", "Sections thickness", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        thicknessDoubleSpinBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Thickness of each section (depends on the cloud density)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        extractCloudsGroupBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "To extract each section as a point cloud", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        extractCloudsGroupBox->setTitle(QApplication::translate("SectionExtractionSubDlg", "Extract section cloud(s)", Q_NULLPTR));
        label_4->setText(QApplication::translate("SectionExtractionSubDlg", "No parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        extractContoursGroupBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "To extract the contour of each section as a polyline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        extractContoursGroupBox->setTitle(QApplication::translate("SectionExtractionSubDlg", "Extract section profile(s)", Q_NULLPTR));
        label_3->setText(QApplication::translate("SectionExtractionSubDlg", "type", Q_NULLPTR));
        contourTypeComboBox->clear();
        contourTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SectionExtractionSubDlg", "Lower", Q_NULLPTR)
         << QApplication::translate("SectionExtractionSubDlg", "Upper", Q_NULLPTR)
         << QApplication::translate("SectionExtractionSubDlg", "Both", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        contourTypeComboBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Section type (lower or upper part, or both)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SectionExtractionSubDlg", "max edge length", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxEdgeLengthDoubleSpinBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Max output polyline edge length (the smaller, the closer to the points the contour will be).\n"
"Warning: if 0, generates the convex hull.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        multiPassCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Multi-pass process where longer edges may be temporarily created to obtain a better fit... or a worst one ;)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        multiPassCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "multi-pass", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        splitContourCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "split the generated profile(s) in smaller parts to avoid creating too long edges (10 times the specified max edge length).\n"
"Warning: may not be compatible with Mascaret export.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        splitContourCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "split profile on longer edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        debugModeCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        debugModeCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "visual debug mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SectionExtractionSubDlg: public Ui_SectionExtractionSubDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONSUBDLG_H
