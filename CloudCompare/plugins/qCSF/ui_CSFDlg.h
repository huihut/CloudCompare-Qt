/********************************************************************************
** Form generated from reading UI file 'CSFDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSFDLG_H
#define UI_CSFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSFDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *disclaimerTextEdit_2;
    QTabWidget *tabWidget;
    QWidget *General;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_4;
    QRadioButton *rig1;
    QLabel *label_5;
    QRadioButton *rig2;
    QLabel *label_6;
    QRadioButton *rig3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_slope;
    QCheckBox *postprocessingcheckbox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *Advanced;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *cloth_resolutionSpinBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpinBox *MaxIterationSpinBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QDoubleSpinBox *class_thresholdSpinBox;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *exportClothMeshCheckBox;
    QTextEdit *disclaimerTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CSFDialog)
    {
        if (CSFDialog->objectName().isEmpty())
            CSFDialog->setObjectName(QStringLiteral("CSFDialog"));
        CSFDialog->resize(400, 520);
        QIcon icon;
        icon.addFile(QStringLiteral("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CSFDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CSFDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        disclaimerTextEdit_2 = new QTextEdit(CSFDialog);
        disclaimerTextEdit_2->setObjectName(QStringLiteral("disclaimerTextEdit_2"));
        disclaimerTextEdit_2->setReadOnly(true);

        verticalLayout->addWidget(disclaimerTextEdit_2);

        tabWidget = new QTabWidget(CSFDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        General = new QWidget();
        General->setObjectName(QStringLiteral("General"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(General->sizePolicy().hasHeightForWidth());
        General->setSizePolicy(sizePolicy);
        General->setMouseTracking(false);
        verticalLayout_2 = new QVBoxLayout(General);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(General);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/CC/plugin/qCSF/hun.png")));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        rig1 = new QRadioButton(groupBox);
        rig1->setObjectName(QStringLiteral("rig1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rig1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/CC/plugin/qCSF/gun.png")));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        rig2 = new QRadioButton(groupBox);
        rig2->setObjectName(QStringLiteral("rig2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, rig2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/CC/plugin/qCSF/ft.png")));
        label_6->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        rig3 = new QRadioButton(groupBox);
        rig3->setObjectName(QStringLiteral("rig3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, rig3);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_slope = new QLabel(General);
        label_slope->setObjectName(QStringLiteral("label_slope"));
        label_slope->setMinimumSize(QSize(100, 0));
        label_slope->setFrameShape(QFrame::NoFrame);
        label_slope->setPixmap(QPixmap(QString::fromUtf8(":/CC/plugin/qCSF/pp.png")));
        label_slope->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_slope);

        postprocessingcheckbox = new QCheckBox(General);
        postprocessingcheckbox->setObjectName(QStringLiteral("postprocessingcheckbox"));

        horizontalLayout->addWidget(postprocessingcheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(General, QString());
        Advanced = new QWidget();
        Advanced->setObjectName(QStringLiteral("Advanced"));
        horizontalLayout_2 = new QHBoxLayout(Advanced);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(Advanced);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        cloth_resolutionSpinBox = new QDoubleSpinBox(Advanced);
        cloth_resolutionSpinBox->setObjectName(QStringLiteral("cloth_resolutionSpinBox"));
        cloth_resolutionSpinBox->setDecimals(1);
        cloth_resolutionSpinBox->setMinimum(0);
        cloth_resolutionSpinBox->setMaximum(1e+10);
        cloth_resolutionSpinBox->setSingleStep(0.1);
        cloth_resolutionSpinBox->setValue(1);

        verticalLayout_3->addWidget(cloth_resolutionSpinBox);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        label = new QLabel(Advanced);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setAutoFillBackground(false);

        verticalLayout_3->addWidget(label);

        MaxIterationSpinBox = new QSpinBox(Advanced);
        MaxIterationSpinBox->setObjectName(QStringLiteral("MaxIterationSpinBox"));
        MaxIterationSpinBox->setMinimum(10);
        MaxIterationSpinBox->setMaximum(1000);
        MaxIterationSpinBox->setValue(500);

        verticalLayout_3->addWidget(MaxIterationSpinBox);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        label_3 = new QLabel(Advanced);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        class_thresholdSpinBox = new QDoubleSpinBox(Advanced);
        class_thresholdSpinBox->setObjectName(QStringLiteral("class_thresholdSpinBox"));
        class_thresholdSpinBox->setDecimals(1);
        class_thresholdSpinBox->setMinimum(0);
        class_thresholdSpinBox->setMaximum(1e+10);
        class_thresholdSpinBox->setSingleStep(0.1);
        class_thresholdSpinBox->setValue(0.5);

        verticalLayout_3->addWidget(class_thresholdSpinBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        exportClothMeshCheckBox = new QCheckBox(Advanced);
        exportClothMeshCheckBox->setObjectName(QStringLiteral("exportClothMeshCheckBox"));

        verticalLayout_3->addWidget(exportClothMeshCheckBox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        disclaimerTextEdit = new QTextEdit(Advanced);
        disclaimerTextEdit->setObjectName(QStringLiteral("disclaimerTextEdit"));
        disclaimerTextEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(disclaimerTextEdit);

        tabWidget->addTab(Advanced, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(CSFDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 4);

        retranslateUi(CSFDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CSFDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CSFDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSFDialog);
    } // setupUi

    void retranslateUi(QDialog *CSFDialog)
    {
        CSFDialog->setWindowTitle(QApplication::translate("CSFDialog", "Cloth Simulation Filter", Q_NULLPTR));
        disclaimerTextEdit_2->setHtml(QApplication::translate("CSFDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/CC/plugin/qCSF/icon.png\" /><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">	</span><span style=\" font-size:11pt; font-weight:600;\">CSF Plugin Instruction</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">Cloth Simulation Filter (CSF)</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> is a tool to extract of ground points in discret"
                        "e return LiDAR pointclouds. The detailed theory and algorithms could be found in the following paper:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"OLE_LINK22\"></a><span style=\" font-family:'Arial,sans-serif'; font-size:8pt; color:#000000;\">Z</span><span style=\" font-family:'Arial,sans-serif'; font-size:8pt; color:#000000;\">hang W, Qi J, Wan P, Wang H, Xie D, Wang X, Yan G. An Easy-to-Use Airborne LiDAR Data Filtering Method Based on Cloth Simulation.\302\240</span><span style=\" font-family:'Arial,sans-serif'; font-size:8pt; font-style:italic; color:#000000;\">Remote Sensing</span><span style=\" font-family:'Arial,sans-serif'; font-size:8pt; color:#000000;\">. 2016; 8(6):501.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\">And please cite the paper, If you use Cloth Simulation Filter (CSF) in your work.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\">You can download the paper from </span><a href=\"https://www.researchgate.net/profile/Wuming_Zhang2)\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; text-decoration: underline; color:#0000ff; background-color:#cce8cf;\">https://www.researchgate.net/profile/Wuming_Zhang2 .</span></a></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\">You c"
                        "an also visit the homepage : </span><a href=\"http://ramm.bnu.edu.cn/researchers/wumingzhang/english/default_contributions.htm\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; text-decoration: underline; color:#0000ff; background-color:#cce8cf;\">http://ramm.bnu.edu.cn/researchers/wumingzhang/english/default_contributions.htm</span></a><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\"> for more information.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\">A mex version for programming in Matlab is at File Exchange of Mathworks website :  </span><a href=\"http://www.mathworks.com/matlabcentral/fileexchange/58139-csf--ground-filtering-of-point-cloud-based-on-cloth-simulation\"><span style=\" text-decoration: "
                        "underline; color:#0000ff;\">http://www.mathworks.com/matlabcentral/fileexchange/58139-csf--ground-filtering-of-point-cloud-based-on-cloth-simulation</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI,Tahoma'; font-size:8pt; color:#000000; background-color:#cce8cf;\"> Copyright </span><span style=\" font-family:'Arial,Helvetica,sans-serif'; font-size:8.25pt; color:#333333; background-color:#e5eaee;\">\302\251</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; background-color:#cce8cf;\">RAMM laboratory, School of Geography, Beijing Normal University</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; background-color:#cce8cf;\">(</span><a href=\"http://ramm.bnu.edu.cn/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; text-decoration: underline; color:#0000ff;\">http://ramm.bnu.edu.cn/</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; background-color:#cce8cf;\">)</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Wuming Zhang; Jianbo Qi; Peng Wan; Hongtao Wang</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">contact us: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; background-color:#cce8cf;\">2009zwm@gmail.com; wpqjbzwm@126.com</span></p></bo"
                        "dy></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CSFDialog", "Scenes", Q_NULLPTR));
        label_4->setText(QString());
        rig1->setText(QApplication::translate("CSFDialog", "Steep slope", Q_NULLPTR));
        label_5->setText(QString());
        rig2->setText(QApplication::translate("CSFDialog", "Relief", Q_NULLPTR));
        label_6->setText(QString());
        rig3->setText(QApplication::translate("CSFDialog", "Flat", Q_NULLPTR));
        postprocessingcheckbox->setText(QApplication::translate("CSFDialog", " Slope processing", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("CSFDialog", "General parameter setting", Q_NULLPTR));
        label_2->setText(QApplication::translate("CSFDialog", "Cloth resolution ", Q_NULLPTR));
        label->setText(QApplication::translate("CSFDialog", "Max iterations ", Q_NULLPTR));
        label_3->setText(QApplication::translate("CSFDialog", "Classification threshold", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportClothMeshCheckBox->setToolTip(QApplication::translate("CSFDialog", "Exports the cloth in its final state as a mesh\n"
"(WARNING: ONLY FOR DEBUG PURPOSE - THIS IS NOT A DTM)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportClothMeshCheckBox->setText(QApplication::translate("CSFDialog", "Export cloth mesh", Q_NULLPTR));
        disclaimerTextEdit->setHtml(QApplication::translate("CSFDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">Advanced Parameter Instruction</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">1.</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> Cloth resolution refers to the grid size (the unit is same as the unit of pointclouds) of cloth w"
                        "hich is used to cover the terrain. The bigger cloth resolution you have set, the coarser DTM  you will get.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">2.</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> Max iterations refers to the maximum iteration times of terrain simulation. 500 is enough for most of scenes.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">3.</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> Classification threshold refers to a threshold (the unit is same as the unit of pointclouds) to classify the pointclouds into ground and non-ground parts based on the distances between points and the simulated terrain. 0.5 is adapted to most of scenes.</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Advanced), QApplication::translate("CSFDialog", "Advanced parameter setting", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSFDialog: public Ui_CSFDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSFDLG_H
