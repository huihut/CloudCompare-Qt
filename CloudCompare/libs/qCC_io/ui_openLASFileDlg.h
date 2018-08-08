/********************************************************************************
** Form generated from reading UI file 'openLASFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENLASFILEDLG_H
#define UI_OPENLASFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenLASFileDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *stdTab;
    QVBoxLayout *verticalLayout_5;
    QFrame *rgbFrame;
    QHBoxLayout *hboxLayout;
    QCheckBox *redCheckBox;
    QCheckBox *greenCheckBox;
    QCheckBox *blueCheckBox;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QCheckBox *classifCheckBox;
    QGroupBox *decomposeClassifGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *classifValueCheckBox;
    QCheckBox *classifSyntheticCheckBox;
    QCheckBox *classifKeypointCheckBox;
    QCheckBox *classifWithheldCheckBox;
    QCheckBox *timeCheckBox;
    QCheckBox *pointSourceIDCheckBox;
    QCheckBox *numberOfReturnsCheckBox;
    QCheckBox *returnNumberCheckBox;
    QCheckBox *scanDirFlagCheckBox;
    QCheckBox *edgeOfFlightCheckBox;
    QCheckBox *scanAngleRankCheckBox;
    QCheckBox *userDataCheckBox;
    QCheckBox *intensityCheckBox;
    QWidget *extTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *extraFieldGroupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *evlrListWidget;
    QWidget *tilingTab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *tileGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QComboBox *tileDimComboBox;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *wTileSpinBox;
    QLabel *label_6;
    QSpinBox *hTileSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *outputPathLineEdit;
    QToolButton *browseToolButton;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QWidget *infoTab;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *pointCountLineEdit;
    QLabel *label_3;
    QTextEdit *bbTextEdit;
    QCheckBox *ignoreDefaultFieldsCheckBox;
    QCheckBox *force8bitRgbCheckBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OpenLASFileDialog)
    {
        if (OpenLASFileDialog->objectName().isEmpty())
            OpenLASFileDialog->setObjectName(QStringLiteral("OpenLASFileDialog"));
        OpenLASFileDialog->resize(380, 420);
        verticalLayout_4 = new QVBoxLayout(OpenLASFileDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(OpenLASFileDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        stdTab = new QWidget();
        stdTab->setObjectName(QStringLiteral("stdTab"));
        verticalLayout_5 = new QVBoxLayout(stdTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        rgbFrame = new QFrame(stdTab);
        rgbFrame->setObjectName(QStringLiteral("rgbFrame"));
        hboxLayout = new QHBoxLayout(rgbFrame);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        redCheckBox = new QCheckBox(rgbFrame);
        redCheckBox->setObjectName(QStringLiteral("redCheckBox"));
        redCheckBox->setChecked(true);

        hboxLayout->addWidget(redCheckBox);

        greenCheckBox = new QCheckBox(rgbFrame);
        greenCheckBox->setObjectName(QStringLiteral("greenCheckBox"));
        greenCheckBox->setChecked(true);

        hboxLayout->addWidget(greenCheckBox);

        blueCheckBox = new QCheckBox(rgbFrame);
        blueCheckBox->setObjectName(QStringLiteral("blueCheckBox"));
        blueCheckBox->setChecked(true);

        hboxLayout->addWidget(blueCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);


        verticalLayout_5->addWidget(rgbFrame);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        classifCheckBox = new QCheckBox(stdTab);
        classifCheckBox->setObjectName(QStringLiteral("classifCheckBox"));
        classifCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, classifCheckBox);

        decomposeClassifGroupBox = new QGroupBox(stdTab);
        decomposeClassifGroupBox->setObjectName(QStringLiteral("decomposeClassifGroupBox"));
        decomposeClassifGroupBox->setCheckable(true);
        decomposeClassifGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(decomposeClassifGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        classifValueCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifValueCheckBox->setObjectName(QStringLiteral("classifValueCheckBox"));
        classifValueCheckBox->setChecked(true);

        verticalLayout->addWidget(classifValueCheckBox);

        classifSyntheticCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifSyntheticCheckBox->setObjectName(QStringLiteral("classifSyntheticCheckBox"));
        classifSyntheticCheckBox->setChecked(true);

        verticalLayout->addWidget(classifSyntheticCheckBox);

        classifKeypointCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifKeypointCheckBox->setObjectName(QStringLiteral("classifKeypointCheckBox"));
        classifKeypointCheckBox->setChecked(true);

        verticalLayout->addWidget(classifKeypointCheckBox);

        classifWithheldCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifWithheldCheckBox->setObjectName(QStringLiteral("classifWithheldCheckBox"));
        classifWithheldCheckBox->setChecked(true);

        verticalLayout->addWidget(classifWithheldCheckBox);


        formLayout->setWidget(0, QFormLayout::FieldRole, decomposeClassifGroupBox);

        timeCheckBox = new QCheckBox(stdTab);
        timeCheckBox->setObjectName(QStringLiteral("timeCheckBox"));
        timeCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, timeCheckBox);

        pointSourceIDCheckBox = new QCheckBox(stdTab);
        pointSourceIDCheckBox->setObjectName(QStringLiteral("pointSourceIDCheckBox"));
        pointSourceIDCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, pointSourceIDCheckBox);

        numberOfReturnsCheckBox = new QCheckBox(stdTab);
        numberOfReturnsCheckBox->setObjectName(QStringLiteral("numberOfReturnsCheckBox"));
        numberOfReturnsCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, numberOfReturnsCheckBox);

        returnNumberCheckBox = new QCheckBox(stdTab);
        returnNumberCheckBox->setObjectName(QStringLiteral("returnNumberCheckBox"));
        returnNumberCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, returnNumberCheckBox);

        scanDirFlagCheckBox = new QCheckBox(stdTab);
        scanDirFlagCheckBox->setObjectName(QStringLiteral("scanDirFlagCheckBox"));
        scanDirFlagCheckBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, scanDirFlagCheckBox);

        edgeOfFlightCheckBox = new QCheckBox(stdTab);
        edgeOfFlightCheckBox->setObjectName(QStringLiteral("edgeOfFlightCheckBox"));
        edgeOfFlightCheckBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, edgeOfFlightCheckBox);

        scanAngleRankCheckBox = new QCheckBox(stdTab);
        scanAngleRankCheckBox->setObjectName(QStringLiteral("scanAngleRankCheckBox"));
        scanAngleRankCheckBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, scanAngleRankCheckBox);

        userDataCheckBox = new QCheckBox(stdTab);
        userDataCheckBox->setObjectName(QStringLiteral("userDataCheckBox"));
        userDataCheckBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, userDataCheckBox);


        verticalLayout_5->addLayout(formLayout);

        intensityCheckBox = new QCheckBox(stdTab);
        intensityCheckBox->setObjectName(QStringLiteral("intensityCheckBox"));
        intensityCheckBox->setChecked(true);

        verticalLayout_5->addWidget(intensityCheckBox);

        tabWidget->addTab(stdTab, QString());
        extTab = new QWidget();
        extTab->setObjectName(QStringLiteral("extTab"));
        verticalLayout_6 = new QVBoxLayout(extTab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        extraFieldGroupBox = new QGroupBox(extTab);
        extraFieldGroupBox->setObjectName(QStringLiteral("extraFieldGroupBox"));
        extraFieldGroupBox->setCheckable(true);
        extraFieldGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(extraFieldGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        evlrListWidget = new QListWidget(extraFieldGroupBox);
        evlrListWidget->setObjectName(QStringLiteral("evlrListWidget"));
        evlrListWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(evlrListWidget);


        verticalLayout_6->addWidget(extraFieldGroupBox);

        tabWidget->addTab(extTab, QString());
        tilingTab = new QWidget();
        tilingTab->setObjectName(QStringLiteral("tilingTab"));
        verticalLayout_7 = new QVBoxLayout(tilingTab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tileGroupBox = new QGroupBox(tilingTab);
        tileGroupBox->setObjectName(QStringLiteral("tileGroupBox"));
        tileGroupBox->setCheckable(true);
        tileGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(tileGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_4 = new QLabel(tileGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        tileDimComboBox = new QComboBox(tileGroupBox);
        tileDimComboBox->setObjectName(QStringLiteral("tileDimComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tileDimComboBox->sizePolicy().hasHeightForWidth());
        tileDimComboBox->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, tileDimComboBox);

        label_5 = new QLabel(tileGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        wTileSpinBox = new QSpinBox(tileGroupBox);
        wTileSpinBox->setObjectName(QStringLiteral("wTileSpinBox"));
        sizePolicy.setHeightForWidth(wTileSpinBox->sizePolicy().hasHeightForWidth());
        wTileSpinBox->setSizePolicy(sizePolicy);
        wTileSpinBox->setMinimum(1);
        wTileSpinBox->setMaximum(16);
        wTileSpinBox->setValue(4);

        horizontalLayout_2->addWidget(wTileSpinBox);

        label_6 = new QLabel(tileGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_6);

        hTileSpinBox = new QSpinBox(tileGroupBox);
        hTileSpinBox->setObjectName(QStringLiteral("hTileSpinBox"));
        sizePolicy.setHeightForWidth(hTileSpinBox->sizePolicy().hasHeightForWidth());
        hTileSpinBox->setSizePolicy(sizePolicy);
        hTileSpinBox->setMinimum(1);
        hTileSpinBox->setMaximum(16);
        hTileSpinBox->setValue(4);

        horizontalLayout_2->addWidget(hTileSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_3->addLayout(formLayout_3);

        label = new QLabel(tileGroupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        outputPathLineEdit = new QLineEdit(tileGroupBox);
        outputPathLineEdit->setObjectName(QStringLiteral("outputPathLineEdit"));

        horizontalLayout->addWidget(outputPathLineEdit);

        browseToolButton = new QToolButton(tileGroupBox);
        browseToolButton->setObjectName(QStringLiteral("browseToolButton"));

        horizontalLayout->addWidget(browseToolButton);


        verticalLayout_3->addLayout(horizontalLayout);

        label_7 = new QLabel(tileGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: red;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);


        verticalLayout_7->addWidget(tileGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        tabWidget->addTab(tilingTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        formLayout_2 = new QFormLayout(infoTab);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(infoTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        pointCountLineEdit = new QLineEdit(infoTab);
        pointCountLineEdit->setObjectName(QStringLiteral("pointCountLineEdit"));
        pointCountLineEdit->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pointCountLineEdit);

        label_3 = new QLabel(infoTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        bbTextEdit = new QTextEdit(infoTab);
        bbTextEdit->setObjectName(QStringLiteral("bbTextEdit"));
        bbTextEdit->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, bbTextEdit);

        tabWidget->addTab(infoTab, QString());

        verticalLayout_4->addWidget(tabWidget);

        ignoreDefaultFieldsCheckBox = new QCheckBox(OpenLASFileDialog);
        ignoreDefaultFieldsCheckBox->setObjectName(QStringLiteral("ignoreDefaultFieldsCheckBox"));
        ignoreDefaultFieldsCheckBox->setChecked(true);

        verticalLayout_4->addWidget(ignoreDefaultFieldsCheckBox);

        force8bitRgbCheckBox = new QCheckBox(OpenLASFileDialog);
        force8bitRgbCheckBox->setObjectName(QStringLiteral("force8bitRgbCheckBox"));

        verticalLayout_4->addWidget(force8bitRgbCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        buttonFrame = new QFrame(OpenLASFileDialog);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(buttonFrame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(434, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        applyButton = new QPushButton(buttonFrame);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        applyAllButton = new QPushButton(buttonFrame);
        applyAllButton->setObjectName(QStringLiteral("applyAllButton"));

        horizontalLayout_5->addWidget(applyAllButton);

        cancelButton = new QPushButton(buttonFrame);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);


        verticalLayout_4->addWidget(buttonFrame);


        retranslateUi(OpenLASFileDialog);
        QObject::connect(classifCheckBox, SIGNAL(toggled(bool)), decomposeClassifGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(cancelButton, SIGNAL(clicked()), OpenLASFileDialog, SLOT(reject()));
        QObject::connect(applyButton, SIGNAL(clicked()), OpenLASFileDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OpenLASFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenLASFileDialog)
    {
        OpenLASFileDialog->setWindowTitle(QApplication::translate("OpenLASFileDialog", "Open LAS File", Q_NULLPTR));
        redCheckBox->setText(QApplication::translate("OpenLASFileDialog", "R", Q_NULLPTR));
        greenCheckBox->setText(QApplication::translate("OpenLASFileDialog", "G", Q_NULLPTR));
        blueCheckBox->setText(QApplication::translate("OpenLASFileDialog", "B", Q_NULLPTR));
        classifCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Classification", Q_NULLPTR));
        decomposeClassifGroupBox->setTitle(QApplication::translate("OpenLASFileDialog", "decompose", Q_NULLPTR));
        classifValueCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Value", Q_NULLPTR));
        classifSyntheticCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Synthetic flag", Q_NULLPTR));
        classifKeypointCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Key-point", Q_NULLPTR));
        classifWithheldCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Withheld", Q_NULLPTR));
        timeCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Time", Q_NULLPTR));
        pointSourceIDCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Point source ID", Q_NULLPTR));
        numberOfReturnsCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Number of returns", Q_NULLPTR));
        returnNumberCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Return number", Q_NULLPTR));
        scanDirFlagCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Scan direction flag", Q_NULLPTR));
        edgeOfFlightCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Edge of flight line", Q_NULLPTR));
        scanAngleRankCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Scan angle rank", Q_NULLPTR));
        userDataCheckBox->setText(QApplication::translate("OpenLASFileDialog", "User data", Q_NULLPTR));
        intensityCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Intensity", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(stdTab), QApplication::translate("OpenLASFileDialog", "Standard fields", Q_NULLPTR));
        extraFieldGroupBox->setTitle(QApplication::translate("OpenLASFileDialog", "Load additional field(s)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(extTab), QApplication::translate("OpenLASFileDialog", "Extended fields", Q_NULLPTR));
        tileGroupBox->setTitle(QApplication::translate("OpenLASFileDialog", "Tile input file", Q_NULLPTR));
        label_4->setText(QApplication::translate("OpenLASFileDialog", "Dimension", Q_NULLPTR));
        tileDimComboBox->clear();
        tileDimComboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenLASFileDialog", "XY", Q_NULLPTR)
         << QApplication::translate("OpenLASFileDialog", "XZ", Q_NULLPTR)
         << QApplication::translate("OpenLASFileDialog", "YZ", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("OpenLASFileDialog", "Tiles", Q_NULLPTR));
        label_6->setText(QApplication::translate("OpenLASFileDialog", "x", Q_NULLPTR));
        label->setText(QApplication::translate("OpenLASFileDialog", "Output path", Q_NULLPTR));
        browseToolButton->setText(QApplication::translate("OpenLASFileDialog", "...", Q_NULLPTR));
        label_7->setText(QApplication::translate("OpenLASFileDialog", "Warning: the cloud won't be loaded in memory.\n"
"It will be saved as multiple tiles on the disk.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tilingTab), QApplication::translate("OpenLASFileDialog", "Tiling", Q_NULLPTR));
        label_2->setText(QApplication::translate("OpenLASFileDialog", "Points", Q_NULLPTR));
        label_3->setText(QApplication::translate("OpenLASFileDialog", "Bounding-box", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QApplication::translate("OpenLASFileDialog", "Info", Q_NULLPTR));
        ignoreDefaultFieldsCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Ignore fields with default values only", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        force8bitRgbCheckBox->setToolTip(QApplication::translate("OpenLASFileDialog", "Force reading colors as 8-bit values (even if the standard is 16-bit)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        force8bitRgbCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Force 8-bit colors", Q_NULLPTR));
        applyButton->setText(QApplication::translate("OpenLASFileDialog", "Apply", Q_NULLPTR));
        applyAllButton->setText(QApplication::translate("OpenLASFileDialog", "Apply all", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OpenLASFileDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenLASFileDialog: public Ui_OpenLASFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENLASFILEDLG_H
