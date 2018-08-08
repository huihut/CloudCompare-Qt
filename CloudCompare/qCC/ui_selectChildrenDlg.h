/********************************************************************************
** Form generated from reading UI file 'selectChildrenDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCHILDRENDLG_H
#define UI_SELECTCHILDRENDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectChildrenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QCheckBox *typeCheckBox;
    QCheckBox *nameCheckBox;
    QFrame *nameFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameLineEdit;
    QCheckBox *checkBoxRegex;
    QFrame *typeFrame;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *typeComboBox;
    QCheckBox *typeStrictCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectChildrenDialog)
    {
        if (SelectChildrenDialog->objectName().isEmpty())
            SelectChildrenDialog->setObjectName(QStringLiteral("SelectChildrenDialog"));
        SelectChildrenDialog->resize(500, 175);
        verticalLayout = new QVBoxLayout(SelectChildrenDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(SelectChildrenDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        typeCheckBox = new QCheckBox(groupBox);
        typeCheckBox->setObjectName(QStringLiteral("typeCheckBox"));
        typeCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, typeCheckBox);

        nameCheckBox = new QCheckBox(groupBox);
        nameCheckBox->setObjectName(QStringLiteral("nameCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nameCheckBox);

        nameFrame = new QFrame(groupBox);
        nameFrame->setObjectName(QStringLiteral("nameFrame"));
        nameFrame->setEnabled(false);
        nameFrame->setFrameShape(QFrame::StyledPanel);
        nameFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(nameFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameLineEdit = new QLineEdit(nameFrame);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);

        checkBoxRegex = new QCheckBox(nameFrame);
        checkBoxRegex->setObjectName(QStringLiteral("checkBoxRegex"));

        horizontalLayout->addWidget(checkBoxRegex);


        formLayout->setWidget(2, QFormLayout::FieldRole, nameFrame);

        typeFrame = new QFrame(groupBox);
        typeFrame->setObjectName(QStringLiteral("typeFrame"));
        typeFrame->setEnabled(true);
        typeFrame->setFrameShape(QFrame::StyledPanel);
        typeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(typeFrame);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        typeComboBox = new QComboBox(typeFrame);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typeComboBox->sizePolicy().hasHeightForWidth());
        typeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(typeComboBox);

        typeStrictCheckBox = new QCheckBox(typeFrame);
        typeStrictCheckBox->setObjectName(QStringLiteral("typeStrictCheckBox"));
        typeStrictCheckBox->setChecked(true);

        horizontalLayout_6->addWidget(typeStrictCheckBox);


        formLayout->setWidget(1, QFormLayout::FieldRole, typeFrame);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SelectChildrenDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectChildrenDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectChildrenDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectChildrenDialog, SLOT(reject()));
        QObject::connect(typeCheckBox, SIGNAL(toggled(bool)), typeFrame, SLOT(setEnabled(bool)));
        QObject::connect(nameCheckBox, SIGNAL(toggled(bool)), nameFrame, SLOT(setEnabled(bool)));
        QObject::connect(typeStrictCheckBox, SIGNAL(toggled(bool)), typeStrictCheckBox, SLOT(setOn(bool)));

        QMetaObject::connectSlotsByName(SelectChildrenDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectChildrenDialog)
    {
        SelectChildrenDialog->setWindowTitle(QApplication::translate("SelectChildrenDialog", "Select children by type and/or name", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SelectChildrenDialog", "Select children...", Q_NULLPTR));
        typeCheckBox->setText(QApplication::translate("SelectChildrenDialog", "of type", Q_NULLPTR));
        nameCheckBox->setText(QApplication::translate("SelectChildrenDialog", "with name", Q_NULLPTR));
        checkBoxRegex->setText(QApplication::translate("SelectChildrenDialog", "regex", Q_NULLPTR));
        typeStrictCheckBox->setText(QApplication::translate("SelectChildrenDialog", "strict", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectChildrenDialog: public Ui_SelectChildrenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCHILDRENDLG_H
