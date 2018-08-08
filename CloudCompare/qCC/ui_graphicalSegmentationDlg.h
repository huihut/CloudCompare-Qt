/********************************************************************************
** Form generated from reading UI file 'graphicalSegmentationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALSEGMENTATIONDLG_H
#define UI_GRAPHICALSEGMENTATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_GraphicalSegmentationDlg
{
public:
    QAction *actionSetRectangularSelection;
    QAction *actionSetPolylineSelection;
    QAction *actionUseExistingPolyline;
    QAction *actionExportSegmentationPolyline;
    QHBoxLayout *hboxLayout;
    QToolButton *pauseButton;
    QToolButton *loadSaveToolButton;
    QToolButton *selectionModelButton;
    QToolButton *inButton;
    QToolButton *outButton;
    QToolButton *razButton;
    QToolButton *validButton;
    QToolButton *validAndDeleteButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *GraphicalSegmentationDlg)
    {
        if (GraphicalSegmentationDlg->objectName().isEmpty())
            GraphicalSegmentationDlg->setObjectName(QStringLiteral("GraphicalSegmentationDlg"));
        GraphicalSegmentationDlg->resize(251, 26);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicalSegmentationDlg->sizePolicy().hasHeightForWidth());
        GraphicalSegmentationDlg->setSizePolicy(sizePolicy);
        actionSetRectangularSelection = new QAction(GraphicalSegmentationDlg);
        actionSetRectangularSelection->setObjectName(QStringLiteral("actionSetRectangularSelection"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetRectangularSelection->setIcon(icon);
        actionSetPolylineSelection = new QAction(GraphicalSegmentationDlg);
        actionSetPolylineSelection->setObjectName(QStringLiteral("actionSetPolylineSelection"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPolylineSelection->setIcon(icon1);
        actionUseExistingPolyline = new QAction(GraphicalSegmentationDlg);
        actionUseExistingPolyline->setObjectName(QStringLiteral("actionUseExistingPolyline"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUseExistingPolyline->setIcon(icon2);
        actionExportSegmentationPolyline = new QAction(GraphicalSegmentationDlg);
        actionExportSegmentationPolyline->setObjectName(QStringLiteral("actionExportSegmentationPolyline"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportSegmentationPolyline->setIcon(icon3);
        hboxLayout = new QHBoxLayout(GraphicalSegmentationDlg);
        hboxLayout->setSpacing(2);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        pauseButton = new QToolButton(GraphicalSegmentationDlg);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/smallPause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon4);
        pauseButton->setCheckable(true);
        pauseButton->setChecked(false);

        hboxLayout->addWidget(pauseButton);

        loadSaveToolButton = new QToolButton(GraphicalSegmentationDlg);
        loadSaveToolButton->setObjectName(QStringLiteral("loadSaveToolButton"));
        loadSaveToolButton->setIcon(icon2);
        loadSaveToolButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout->addWidget(loadSaveToolButton);

        selectionModelButton = new QToolButton(GraphicalSegmentationDlg);
        selectionModelButton->setObjectName(QStringLiteral("selectionModelButton"));
        selectionModelButton->setIcon(icon1);
        selectionModelButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout->addWidget(selectionModelButton);

        inButton = new QToolButton(GraphicalSegmentationDlg);
        inButton->setObjectName(QStringLiteral("inButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/smallSegmentIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        inButton->setIcon(icon5);

        hboxLayout->addWidget(inButton);

        outButton = new QToolButton(GraphicalSegmentationDlg);
        outButton->setObjectName(QStringLiteral("outButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/smallSegmentOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        outButton->setIcon(icon6);

        hboxLayout->addWidget(outButton);

        razButton = new QToolButton(GraphicalSegmentationDlg);
        razButton->setObjectName(QStringLiteral("razButton"));
        razButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon7);

        hboxLayout->addWidget(razButton);

        validButton = new QToolButton(GraphicalSegmentationDlg);
        validButton->setObjectName(QStringLiteral("validButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon8);

        hboxLayout->addWidget(validButton);

        validAndDeleteButton = new QToolButton(GraphicalSegmentationDlg);
        validAndDeleteButton->setObjectName(QStringLiteral("validAndDeleteButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        validAndDeleteButton->setIcon(icon9);

        hboxLayout->addWidget(validAndDeleteButton);

        cancelButton = new QToolButton(GraphicalSegmentationDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon10);

        hboxLayout->addWidget(cancelButton);


        retranslateUi(GraphicalSegmentationDlg);

        QMetaObject::connectSlotsByName(GraphicalSegmentationDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalSegmentationDlg)
    {
        GraphicalSegmentationDlg->setWindowTitle(QApplication::translate("GraphicalSegmentationDlg", "Segmentation", Q_NULLPTR));
        actionSetRectangularSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Rectangular selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetRectangularSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activates rectangular selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetPolylineSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Polygonal selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetPolylineSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activaites polyline selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUseExistingPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Use existing polyline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUseExistingPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Import polyline from DB for segmentation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline as new entity", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pauseButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pauseButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation  (allow rotation/panning of 3D view)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pauseButton->setText(QApplication::translate("GraphicalSegmentationDlg", "pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadSaveToolButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Load / save segmentation polyline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        loadSaveToolButton->setText(QApplication::translate("GraphicalSegmentationDlg", "load/save segmentation polyline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectionModelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Polyline selection mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        selectionModelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "polyline selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        inButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment In", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        inButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points inside)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        inButton->setText(QApplication::translate("GraphicalSegmentationDlg", "in", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        outButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment Out", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        outButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points outside)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        outButton->setText(QApplication::translate("GraphicalSegmentationDlg", "out", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        razButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        razButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        razButton->setText(QApplication::translate("GraphicalSegmentationDlg", "raz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        validButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        validButton->setText(QApplication::translate("GraphicalSegmentationDlg", "OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        validAndDeleteButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validAndDeleteButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cancelButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel segentation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        cancelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GraphicalSegmentationDlg: public Ui_GraphicalSegmentationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALSEGMENTATIONDLG_H
