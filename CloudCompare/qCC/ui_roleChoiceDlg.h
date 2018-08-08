/********************************************************************************
** Form generated from reading UI file 'roleChoiceDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLECHOICEDLG_H
#define UI_ROLECHOICEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RoleChoiceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *firstColorButton;
    QLabel *firstlabel;
    QLineEdit *firstLineEdit;
    QToolButton *secondColorButton;
    QLabel *secondlabel;
    QLineEdit *secondLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *swapButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RoleChoiceDialog)
    {
        if (RoleChoiceDialog->objectName().isEmpty())
            RoleChoiceDialog->setObjectName(QStringLiteral("RoleChoiceDialog"));
        RoleChoiceDialog->resize(350, 120);
        verticalLayout = new QVBoxLayout(RoleChoiceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        firstColorButton = new QToolButton(RoleChoiceDialog);
        firstColorButton->setObjectName(QStringLiteral("firstColorButton"));
        firstColorButton->setEnabled(false);

        gridLayout->addWidget(firstColorButton, 0, 0, 1, 1);

        firstlabel = new QLabel(RoleChoiceDialog);
        firstlabel->setObjectName(QStringLiteral("firstlabel"));

        gridLayout->addWidget(firstlabel, 0, 1, 1, 1);

        firstLineEdit = new QLineEdit(RoleChoiceDialog);
        firstLineEdit->setObjectName(QStringLiteral("firstLineEdit"));
        firstLineEdit->setReadOnly(true);

        gridLayout->addWidget(firstLineEdit, 0, 2, 1, 1);

        secondColorButton = new QToolButton(RoleChoiceDialog);
        secondColorButton->setObjectName(QStringLiteral("secondColorButton"));
        secondColorButton->setEnabled(false);

        gridLayout->addWidget(secondColorButton, 1, 0, 1, 1);

        secondlabel = new QLabel(RoleChoiceDialog);
        secondlabel->setObjectName(QStringLiteral("secondlabel"));

        gridLayout->addWidget(secondlabel, 1, 1, 1, 1);

        secondLineEdit = new QLineEdit(RoleChoiceDialog);
        secondLineEdit->setObjectName(QStringLiteral("secondLineEdit"));
        secondLineEdit->setReadOnly(true);

        gridLayout->addWidget(secondLineEdit, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        swapButton = new QPushButton(RoleChoiceDialog);
        swapButton->setObjectName(QStringLiteral("swapButton"));

        hboxLayout->addWidget(swapButton);

        buttonBox = new QDialogButtonBox(RoleChoiceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(RoleChoiceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RoleChoiceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RoleChoiceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RoleChoiceDialog);
    } // setupUi

    void retranslateUi(QDialog *RoleChoiceDialog)
    {
        RoleChoiceDialog->setWindowTitle(QApplication::translate("RoleChoiceDialog", "Choose role", Q_NULLPTR));
        firstlabel->setText(QApplication::translate("RoleChoiceDialog", "Compared", Q_NULLPTR));
        secondlabel->setText(QApplication::translate("RoleChoiceDialog", "Reference", Q_NULLPTR));
        swapButton->setText(QApplication::translate("RoleChoiceDialog", "Swap", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoleChoiceDialog: public Ui_RoleChoiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLECHOICEDLG_H
