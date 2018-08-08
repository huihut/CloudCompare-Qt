/********************************************************************************
** Form generated from reading UI file 'renderToFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERTOFILEDIALOG_H
#define UI_RENDERTOFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenderToFileDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *filenameLineEdit;
    QToolButton *chooseFileButton;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *zoomDoubleSpinBox;
    QLabel *label_3;
    QLabel *finalSizeLabel;
    QSpacerItem *spacerItem;
    QCheckBox *dontScaleFeaturesCheckBox;
    QCheckBox *renderOverlayItemsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenderToFileDialog)
    {
        if (RenderToFileDialog->objectName().isEmpty())
            RenderToFileDialog->setObjectName(QStringLiteral("RenderToFileDialog"));
        RenderToFileDialog->resize(350, 143);
        vboxLayout = new QVBoxLayout(RenderToFileDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(RenderToFileDialog);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        filenameLineEdit = new QLineEdit(RenderToFileDialog);
        filenameLineEdit->setObjectName(QStringLiteral("filenameLineEdit"));

        hboxLayout->addWidget(filenameLineEdit);

        chooseFileButton = new QToolButton(RenderToFileDialog);
        chooseFileButton->setObjectName(QStringLiteral("chooseFileButton"));

        hboxLayout->addWidget(chooseFileButton);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_2 = new QLabel(RenderToFileDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

        zoomDoubleSpinBox = new QDoubleSpinBox(RenderToFileDialog);
        zoomDoubleSpinBox->setObjectName(QStringLiteral("zoomDoubleSpinBox"));
        zoomDoubleSpinBox->setMinimum(1);
        zoomDoubleSpinBox->setMaximum(100);

        hboxLayout1->addWidget(zoomDoubleSpinBox);

        label_3 = new QLabel(RenderToFileDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout1->addWidget(label_3);

        finalSizeLabel = new QLabel(RenderToFileDialog);
        finalSizeLabel->setObjectName(QStringLiteral("finalSizeLabel"));

        hboxLayout1->addWidget(finalSizeLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout1);

        dontScaleFeaturesCheckBox = new QCheckBox(RenderToFileDialog);
        dontScaleFeaturesCheckBox->setObjectName(QStringLiteral("dontScaleFeaturesCheckBox"));

        vboxLayout->addWidget(dontScaleFeaturesCheckBox);

        renderOverlayItemsCheckBox = new QCheckBox(RenderToFileDialog);
        renderOverlayItemsCheckBox->setObjectName(QStringLiteral("renderOverlayItemsCheckBox"));

        vboxLayout->addWidget(renderOverlayItemsCheckBox);

        buttonBox = new QDialogButtonBox(RenderToFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(RenderToFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenderToFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenderToFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenderToFileDialog);
    } // setupUi

    void retranslateUi(QDialog *RenderToFileDialog)
    {
        RenderToFileDialog->setWindowTitle(QApplication::translate("RenderToFileDialog", "Render to file", Q_NULLPTR));
        label->setText(QApplication::translate("RenderToFileDialog", "Filename", Q_NULLPTR));
        chooseFileButton->setText(QApplication::translate("RenderToFileDialog", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("RenderToFileDialog", "Zoom", Q_NULLPTR));
        label_3->setText(QApplication::translate("RenderToFileDialog", "Result:", Q_NULLPTR));
        finalSizeLabel->setText(QApplication::translate("RenderToFileDialog", "(? x ?)", Q_NULLPTR));
        dontScaleFeaturesCheckBox->setText(QApplication::translate("RenderToFileDialog", "Don't scale features (e.g. points size, lines thickness, text, etc.)", Q_NULLPTR));
        renderOverlayItemsCheckBox->setText(QApplication::translate("RenderToFileDialog", "Render overlay items (scale, trihedron, etc.)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RenderToFileDialog: public Ui_RenderToFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERTOFILEDIALOG_H
