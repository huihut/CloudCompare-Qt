/********************************************************************************
** Form generated from reading UI file 'sfEditDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFEDITDLG_H
#define UI_SFEDITDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SFEditDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QFrame *slidersFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minValSpinBox;
    QLabel *dispLabel;
    QDoubleSpinBox *maxValSpinBox;
    QFrame *histoFrame;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *minSatSpinBox;
    QLabel *satLabel;
    QDoubleSpinBox *maxSatSpinBox;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *nanInGreyCheckBox;
    QCheckBox *alwaysShow0CheckBox;
    QCheckBox *symmetricalScaleCheckBox;
    QCheckBox *logScaleCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SFEditDlg)
    {
        if (SFEditDlg->objectName().isEmpty())
            SFEditDlg->setObjectName(QStringLiteral("SFEditDlg"));
        SFEditDlg->resize(259, 200);
        SFEditDlg->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(SFEditDlg);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(SFEditDlg);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        slidersFrame = new QFrame(tab);
        slidersFrame->setObjectName(QStringLiteral("slidersFrame"));
        verticalLayout = new QVBoxLayout(slidersFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minValSpinBox = new QDoubleSpinBox(slidersFrame);
        minValSpinBox->setObjectName(QStringLiteral("minValSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minValSpinBox->sizePolicy().hasHeightForWidth());
        minValSpinBox->setSizePolicy(sizePolicy);
        minValSpinBox->setMinimumSize(QSize(80, 0));
        minValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(minValSpinBox);

        dispLabel = new QLabel(slidersFrame);
        dispLabel->setObjectName(QStringLiteral("dispLabel"));

        horizontalLayout->addWidget(dispLabel);

        maxValSpinBox = new QDoubleSpinBox(slidersFrame);
        maxValSpinBox->setObjectName(QStringLiteral("maxValSpinBox"));
        sizePolicy.setHeightForWidth(maxValSpinBox->sizePolicy().hasHeightForWidth());
        maxValSpinBox->setSizePolicy(sizePolicy);
        maxValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(maxValSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        histoFrame = new QFrame(slidersFrame);
        histoFrame->setObjectName(QStringLiteral("histoFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(histoFrame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minSatSpinBox = new QDoubleSpinBox(slidersFrame);
        minSatSpinBox->setObjectName(QStringLiteral("minSatSpinBox"));
        sizePolicy.setHeightForWidth(minSatSpinBox->sizePolicy().hasHeightForWidth());
        minSatSpinBox->setSizePolicy(sizePolicy);
        minSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(minSatSpinBox);

        satLabel = new QLabel(slidersFrame);
        satLabel->setObjectName(QStringLiteral("satLabel"));

        horizontalLayout_2->addWidget(satLabel);

        maxSatSpinBox = new QDoubleSpinBox(slidersFrame);
        maxSatSpinBox->setObjectName(QStringLiteral("maxSatSpinBox"));
        sizePolicy.setHeightForWidth(maxSatSpinBox->sizePolicy().hasHeightForWidth());
        maxSatSpinBox->setSizePolicy(sizePolicy);
        maxSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(maxSatSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(slidersFrame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        nanInGreyCheckBox = new QCheckBox(tab_2);
        nanInGreyCheckBox->setObjectName(QStringLiteral("nanInGreyCheckBox"));
        nanInGreyCheckBox->setChecked(true);

        verticalLayout_4->addWidget(nanInGreyCheckBox);

        alwaysShow0CheckBox = new QCheckBox(tab_2);
        alwaysShow0CheckBox->setObjectName(QStringLiteral("alwaysShow0CheckBox"));

        verticalLayout_4->addWidget(alwaysShow0CheckBox);

        symmetricalScaleCheckBox = new QCheckBox(tab_2);
        symmetricalScaleCheckBox->setObjectName(QStringLiteral("symmetricalScaleCheckBox"));

        verticalLayout_4->addWidget(symmetricalScaleCheckBox);

        logScaleCheckBox = new QCheckBox(tab_2);
        logScaleCheckBox->setObjectName(QStringLiteral("logScaleCheckBox"));

        verticalLayout_4->addWidget(logScaleCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(SFEditDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SFEditDlg);
    } // setupUi

    void retranslateUi(QWidget *SFEditDlg)
    {
        SFEditDlg->setWindowTitle(QApplication::translate("SFEditDlg", "SF Values", Q_NULLPTR));
        dispLabel->setText(QApplication::translate("SFEditDlg", "displayed", Q_NULLPTR));
        satLabel->setText(QApplication::translate("SFEditDlg", "saturation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SFEditDlg", "Display ranges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        nanInGreyCheckBox->setToolTip(QApplication::translate("SFEditDlg", "hidden otherwise...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        nanInGreyCheckBox->setText(QApplication::translate("SFEditDlg", "show NaN/out of range values in grey", Q_NULLPTR));
        alwaysShow0CheckBox->setText(QApplication::translate("SFEditDlg", "always show 0 in color scale", Q_NULLPTR));
        symmetricalScaleCheckBox->setText(QApplication::translate("SFEditDlg", "symmetrical color scale", Q_NULLPTR));
        logScaleCheckBox->setText(QApplication::translate("SFEditDlg", "log scale", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SFEditDlg", "Parameters", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SFEditDlg: public Ui_SFEditDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFEDITDLG_H
