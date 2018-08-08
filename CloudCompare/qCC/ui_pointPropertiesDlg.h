/********************************************************************************
** Form generated from reading UI file 'pointPropertiesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPROPERTIESDLG_H
#define UI_POINTPROPERTIESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PointPropertiesDlg
{
public:
    QHBoxLayout *hboxLayout;
    QToolButton *pointPropertiesButton;
    QToolButton *pointPointDistanceButton;
    QToolButton *pointsAngleButton;
    QToolButton *rectZoneToolButton;
    QToolButton *saveLabelButton;
    QToolButton *razButton;
    QToolButton *closeButton;

    void setupUi(QDialog *PointPropertiesDlg)
    {
        if (PointPropertiesDlg->objectName().isEmpty())
            PointPropertiesDlg->setObjectName(QStringLiteral("PointPropertiesDlg"));
        PointPropertiesDlg->resize(201, 26);
        hboxLayout = new QHBoxLayout(PointPropertiesDlg);
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        pointPropertiesButton = new QToolButton(PointPropertiesDlg);
        pointPropertiesButton->setObjectName(QStringLiteral("pointPropertiesButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/smallPointProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPropertiesButton->setIcon(icon);

        hboxLayout->addWidget(pointPropertiesButton);

        pointPointDistanceButton = new QToolButton(PointPropertiesDlg);
        pointPointDistanceButton->setObjectName(QStringLiteral("pointPointDistanceButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/smallPointDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPointDistanceButton->setIcon(icon1);

        hboxLayout->addWidget(pointPointDistanceButton);

        pointsAngleButton = new QToolButton(PointPropertiesDlg);
        pointsAngleButton->setObjectName(QStringLiteral("pointsAngleButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/smallPointsAngle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointsAngleButton->setIcon(icon2);

        hboxLayout->addWidget(pointsAngleButton);

        rectZoneToolButton = new QToolButton(PointPropertiesDlg);
        rectZoneToolButton->setObjectName(QStringLiteral("rectZoneToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectZoneToolButton->setIcon(icon3);

        hboxLayout->addWidget(rectZoneToolButton);

        saveLabelButton = new QToolButton(PointPropertiesDlg);
        saveLabelButton->setObjectName(QStringLiteral("saveLabelButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveLabelButton->setIcon(icon4);

        hboxLayout->addWidget(saveLabelButton);

        razButton = new QToolButton(PointPropertiesDlg);
        razButton->setObjectName(QStringLiteral("razButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon5);

        hboxLayout->addWidget(razButton);

        closeButton = new QToolButton(PointPropertiesDlg);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon6);

        hboxLayout->addWidget(closeButton);


        retranslateUi(PointPropertiesDlg);

        QMetaObject::connectSlotsByName(PointPropertiesDlg);
    } // setupUi

    void retranslateUi(QDialog *PointPropertiesDlg)
    {
        PointPropertiesDlg->setWindowTitle(QApplication::translate("PointPropertiesDlg", "Points Properties", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pointPropertiesButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointPropertiesButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties"));
#endif // QT_NO_STATUSTIP
        pointPropertiesButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pointPointDistanceButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointPointDistanceButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance"));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pointPointDistanceButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pointPointDistanceButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pointsAngleButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointsAngleButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pointsAngleButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rectZoneToolButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rectZoneToolButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        rectZoneToolButton->setText(QApplication::translate("PointPropertiesDlg", "2D zone", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveLabelButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveLabelButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        saveLabelButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
        razButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
        closeButton->setText(QApplication::translate("PointPropertiesDlg", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PointPropertiesDlg: public Ui_PointPropertiesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPROPERTIESDLG_H
