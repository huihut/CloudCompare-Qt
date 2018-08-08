/********************************************************************************
** Form generated from reading UI file 'filterByValueDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERBYVALUEDLG_H
#define UI_FILTERBYVALUEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterByValueDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *minDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exportPushButton;
    QPushButton *splitPushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FilterByValueDialog)
    {
        if (FilterByValueDialog->objectName().isEmpty())
            FilterByValueDialog->setObjectName(QStringLiteral("FilterByValueDialog"));
        FilterByValueDialog->resize(350, 77);
        verticalLayout = new QVBoxLayout(FilterByValueDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FilterByValueDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        minDoubleSpinBox = new QDoubleSpinBox(FilterByValueDialog);
        minDoubleSpinBox->setObjectName(QStringLiteral("minDoubleSpinBox"));
        minDoubleSpinBox->setDecimals(8);
        minDoubleSpinBox->setMinimum(-1e+9);
        minDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout->addWidget(minDoubleSpinBox);

        label_2 = new QLabel(FilterByValueDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        maxDoubleSpinBox = new QDoubleSpinBox(FilterByValueDialog);
        maxDoubleSpinBox->setObjectName(QStringLiteral("maxDoubleSpinBox"));
        maxDoubleSpinBox->setDecimals(8);
        maxDoubleSpinBox->setMinimum(-1e+9);
        maxDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout->addWidget(maxDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        exportPushButton = new QPushButton(FilterByValueDialog);
        exportPushButton->setObjectName(QStringLiteral("exportPushButton"));

        horizontalLayout_2->addWidget(exportPushButton);

        splitPushButton = new QPushButton(FilterByValueDialog);
        splitPushButton->setObjectName(QStringLiteral("splitPushButton"));

        horizontalLayout_2->addWidget(splitPushButton);

        cancelPushButton = new QPushButton(FilterByValueDialog);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_2->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FilterByValueDialog);
        QObject::connect(cancelPushButton, SIGNAL(clicked()), FilterByValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterByValueDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterByValueDialog)
    {
        FilterByValueDialog->setWindowTitle(QApplication::translate("FilterByValueDialog", "Filter by value", Q_NULLPTR));
        label->setText(QApplication::translate("FilterByValueDialog", "Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minDoubleSpinBox->setToolTip(QApplication::translate("FilterByValueDialog", "Min range value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("FilterByValueDialog", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxDoubleSpinBox->setToolTip(QApplication::translate("FilterByValueDialog", "Max range value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        exportPushButton->setToolTip(QApplication::translate("FilterByValueDialog", "Exports the points falling inside the specified range.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportPushButton->setText(QApplication::translate("FilterByValueDialog", "Export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        splitPushButton->setToolTip(QApplication::translate("FilterByValueDialog", "Creates two clouds: one with the points falling inside the specified range,\n"
"the other with the points falling outside.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        splitPushButton->setText(QApplication::translate("FilterByValueDialog", "Split", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("FilterByValueDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FilterByValueDialog: public Ui_FilterByValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERBYVALUEDLG_H
