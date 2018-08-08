/********************************************************************************
** Form generated from reading UI file 'pickEntityDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKENTITYDLG_H
#define UI_PICKENTITYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PickEntityDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PickEntityDlg)
    {
        if (PickEntityDlg->objectName().isEmpty())
            PickEntityDlg->setObjectName(QStringLiteral("PickEntityDlg"));
        PickEntityDlg->resize(400, 300);
        verticalLayout = new QVBoxLayout(PickEntityDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(PickEntityDlg);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(PickEntityDlg);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PickEntityDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PickEntityDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), PickEntityDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PickEntityDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(PickEntityDlg);
    } // setupUi

    void retranslateUi(QDialog *PickEntityDlg)
    {
        PickEntityDlg->setWindowTitle(QApplication::translate("PickEntityDlg", "Select an entity", Q_NULLPTR));
        label->setText(QApplication::translate("PickEntityDlg", "Please select an entity:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickEntityDlg: public Ui_PickEntityDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKENTITYDLG_H
