/********************************************************************************
** Form generated from reading UI file 'sectionExtractionDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONDLG_H
#define UI_SECTIONEXTRACTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionDlg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolButton *polylineToolButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *importFromDBToolButton;
    QToolButton *generateOrthoSectionsToolButton;
    QToolButton *extractPointsToolButton;
    QToolButton *unfoldToolButton;
    QToolButton *exportSectionsToolButton;
    QToolButton *undoToolButton;
    QToolButton *cancelToolButton;
    QToolButton *validToolButton;
    QLabel *label;
    QComboBox *vertAxisComboBox;

    void setupUi(QDialog *SectionExtractionDlg)
    {
        if (SectionExtractionDlg->objectName().isEmpty())
            SectionExtractionDlg->setObjectName(QStringLiteral("SectionExtractionDlg"));
        SectionExtractionDlg->resize(329, 26);
        horizontalLayout_2 = new QHBoxLayout(SectionExtractionDlg);
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        polylineToolButton = new QToolButton(SectionExtractionDlg);
        polylineToolButton->setObjectName(QStringLiteral("polylineToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        polylineToolButton->setIcon(icon);
        polylineToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(polylineToolButton);

        frame = new QFrame(SectionExtractionDlg);
        frame->setObjectName(QStringLiteral("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        importFromDBToolButton = new QToolButton(frame);
        importFromDBToolButton->setObjectName(QStringLiteral("importFromDBToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/dbHObjectSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        importFromDBToolButton->setIcon(icon1);

        horizontalLayout->addWidget(importFromDBToolButton);

        generateOrthoSectionsToolButton = new QToolButton(frame);
        generateOrthoSectionsToolButton->setObjectName(QStringLiteral("generateOrthoSectionsToolButton"));
        generateOrthoSectionsToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/orthoSections.png"), QSize(), QIcon::Normal, QIcon::Off);
        generateOrthoSectionsToolButton->setIcon(icon2);

        horizontalLayout->addWidget(generateOrthoSectionsToolButton);

        extractPointsToolButton = new QToolButton(frame);
        extractPointsToolButton->setObjectName(QStringLiteral("extractPointsToolButton"));
        extractPointsToolButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/sectionExtraction.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractPointsToolButton->setIcon(icon3);

        horizontalLayout->addWidget(extractPointsToolButton);

        unfoldToolButton = new QToolButton(frame);
        unfoldToolButton->setObjectName(QStringLiteral("unfoldToolButton"));
        unfoldToolButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/unfoldSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        unfoldToolButton->setIcon(icon4);

        horizontalLayout->addWidget(unfoldToolButton);

        exportSectionsToolButton = new QToolButton(frame);
        exportSectionsToolButton->setObjectName(QStringLiteral("exportSectionsToolButton"));
        exportSectionsToolButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportSectionsToolButton->setIcon(icon5);

        horizontalLayout->addWidget(exportSectionsToolButton);

        undoToolButton = new QToolButton(frame);
        undoToolButton->setObjectName(QStringLiteral("undoToolButton"));
        undoToolButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoToolButton->setIcon(icon6);

        horizontalLayout->addWidget(undoToolButton);

        cancelToolButton = new QToolButton(frame);
        cancelToolButton->setObjectName(QStringLiteral("cancelToolButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon7);

        horizontalLayout->addWidget(cancelToolButton);

        validToolButton = new QToolButton(frame);
        validToolButton->setObjectName(QStringLiteral("validToolButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon8);

        horizontalLayout->addWidget(validToolButton);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        vertAxisComboBox = new QComboBox(frame);
        vertAxisComboBox->setObjectName(QStringLiteral("vertAxisComboBox"));

        horizontalLayout->addWidget(vertAxisComboBox);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(SectionExtractionDlg);
        QObject::connect(polylineToolButton, SIGNAL(toggled(bool)), frame, SLOT(setDisabled(bool)));

        vertAxisComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SectionExtractionDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionDlg)
    {
        SectionExtractionDlg->setWindowTitle(QApplication::translate("SectionExtractionDlg", "Section Extraction", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        polylineToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Create polyline by clicking on the screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        importFromDBToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Import one or several polylines from DB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        generateOrthoSectionsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Generate orthogonal sections along a path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        extractPointsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Extract points along active sections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unfoldToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Unfold the points along the selected polyline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        exportSectionsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Export manually defined sections to DB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        undoToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Undo last polyline(s) addition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        undoToolButton->setText(QApplication::translate("SectionExtractionDlg", "raz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        validToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Close the tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validToolButton->setStatusTip(QApplication::translate("SectionExtractionDlg", "Close the tool", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        validToolButton->setText(QApplication::translate("SectionExtractionDlg", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("SectionExtractionDlg", "Vert.", Q_NULLPTR));
        vertAxisComboBox->clear();
        vertAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("SectionExtractionDlg", "X", Q_NULLPTR)
         << QApplication::translate("SectionExtractionDlg", "Y", Q_NULLPTR)
         << QApplication::translate("SectionExtractionDlg", "Z", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class SectionExtractionDlg: public Ui_SectionExtractionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONDLG_H
