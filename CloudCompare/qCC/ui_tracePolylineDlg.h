/********************************************************************************
** Form generated from reading UI file 'tracePolylineDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEPOLYLINEDLG_H
#define UI_TRACEPOLYLINEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TracePolyLineDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *widthSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpinBox *snapSizeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpinBox *oversampleSpinBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *saveToolButton;
    QToolButton *resetToolButton;
    QToolButton *validButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *TracePolyLineDlg)
    {
        if (TracePolyLineDlg->objectName().isEmpty())
            TracePolyLineDlg->setObjectName(QStringLiteral("TracePolyLineDlg"));
        TracePolyLineDlg->resize(406, 26);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TracePolyLineDlg->sizePolicy().hasHeightForWidth());
        TracePolyLineDlg->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(TracePolyLineDlg);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(TracePolyLineDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        widthSpinBox = new QSpinBox(TracePolyLineDlg);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(10);
        widthSpinBox->setValue(1);

        horizontalLayout->addWidget(widthSpinBox);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(TracePolyLineDlg);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        snapSizeSpinBox = new QSpinBox(TracePolyLineDlg);
        snapSizeSpinBox->setObjectName(QStringLiteral("snapSizeSpinBox"));
        snapSizeSpinBox->setMinimum(1);
        snapSizeSpinBox->setMaximum(100);

        horizontalLayout->addWidget(snapSizeSpinBox);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(TracePolyLineDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        oversampleSpinBox = new QSpinBox(TracePolyLineDlg);
        oversampleSpinBox->setObjectName(QStringLiteral("oversampleSpinBox"));
        oversampleSpinBox->setMinimum(1);
        oversampleSpinBox->setMaximum(100);

        horizontalLayout->addWidget(oversampleSpinBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveToolButton = new QToolButton(TracePolyLineDlg);
        saveToolButton->setObjectName(QStringLiteral("saveToolButton"));
        saveToolButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/dbContainerSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveToolButton->setIcon(icon);

        horizontalLayout->addWidget(saveToolButton);

        resetToolButton = new QToolButton(TracePolyLineDlg);
        resetToolButton->setObjectName(QStringLiteral("resetToolButton"));
        resetToolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetToolButton->setIcon(icon1);

        horizontalLayout->addWidget(resetToolButton);

        validButton = new QToolButton(TracePolyLineDlg);
        validButton->setObjectName(QStringLiteral("validButton"));
        validButton->setEnabled(false);
        sizePolicy.setHeightForWidth(validButton->sizePolicy().hasHeightForWidth());
        validButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon2);

        horizontalLayout->addWidget(validButton);

        cancelButton = new QToolButton(TracePolyLineDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(TracePolyLineDlg);

        QMetaObject::connectSlotsByName(TracePolyLineDlg);
    } // setupUi

    void retranslateUi(QDialog *TracePolyLineDlg)
    {
        TracePolyLineDlg->setWindowTitle(QApplication::translate("TracePolyLineDlg", "Segmentation", Q_NULLPTR));
        label_3->setText(QApplication::translate("TracePolyLineDlg", "Width", Q_NULLPTR));
        label->setText(QApplication::translate("TracePolyLineDlg", "Snap size", Q_NULLPTR));
        label_2->setText(QApplication::translate("TracePolyLineDlg", "Oversample", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveToolButton->setToolTip(QApplication::translate("TracePolyLineDlg", "Export current polyline to the main DB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        resetToolButton->setToolTip(QApplication::translate("TracePolyLineDlg", "Reset current polyline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        validButton->setToolTip(QApplication::translate("TracePolyLineDlg", "Confirm polyline creation and exit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        validButton->setText(QApplication::translate("TracePolyLineDlg", "OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("TracePolyLineDlg", "Cancel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cancelButton->setText(QApplication::translate("TracePolyLineDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TracePolyLineDlg: public Ui_TracePolyLineDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEPOLYLINEDLG_H
