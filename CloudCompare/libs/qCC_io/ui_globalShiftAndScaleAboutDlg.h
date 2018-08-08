/********************************************************************************
** Form generated from reading UI file 'globalShiftAndScaleAboutDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHIFTANDSCALEABOUTDLG_H
#define UI_GLOBALSHIFTANDSCALEABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShiftAndScaleAboutDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShiftAndScaleAboutDlg)
    {
        if (GlobalShiftAndScaleAboutDlg->objectName().isEmpty())
            GlobalShiftAndScaleAboutDlg->setObjectName(QStringLiteral("GlobalShiftAndScaleAboutDlg"));
        GlobalShiftAndScaleAboutDlg->resize(500, 400);
        verticalLayout = new QVBoxLayout(GlobalShiftAndScaleAboutDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(GlobalShiftAndScaleAboutDlg);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(GlobalShiftAndScaleAboutDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GlobalShiftAndScaleAboutDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShiftAndScaleAboutDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShiftAndScaleAboutDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(GlobalShiftAndScaleAboutDlg);
    } // setupUi

    void retranslateUi(QDialog *GlobalShiftAndScaleAboutDlg)
    {
        GlobalShiftAndScaleAboutDlg->setWindowTitle(QApplication::translate("GlobalShiftAndScaleAboutDlg", "Issue with big coordinates", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("GlobalShiftAndScaleAboutDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Why CloudCompare bugs me about &quot;too big coordinates&quot;?</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">To reduce memory consumption of big clouds, CloudCompare stores their points coordinates on 32 bits (<"
                        "/span><a href=\"http://en.wikipedia.org/wiki/Single-precision_floating-point_format\"><span style=\" font-size:9pt; text-decoration: underline; color:#0000ff;\">single-precision floating-point format</span></a><span style=\" font-size:9pt;\">). In effect this roughly corresponds to a </span><span style=\" font-size:9pt; font-weight:600;\">relative</span><span style=\" font-size:9pt;\"> precision of 10</span><span style=\" font-size:9pt; vertical-align:super;\">-7</span><span style=\" font-size:9pt;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">This is generally totally acceptable for an object of a few meters wide (in which case the precision will be around a few tenths of microns). However if the coordinates are "
                        "of the order of 10</span><span style=\" font-size:9pt; vertical-align:super;\">5</span><span style=\" font-size:9pt;\"> or 10</span><span style=\" font-size:9pt; vertical-align:super;\">6</span><span style=\" font-size:9pt;\"> meters and you still expect a precision around a few microns this won't do (at all). Importing such coordinates in 32 bits format will result in a precision of several centimeters or worse!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">You'll probably also observe very strange things in 3D as OpenGL doesn't like those big coordinates either.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px; font-size:9pt; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">What can I do?</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">This &quot;big coordinates&quot; issue typically arises when an object of a few meters wide is expressed in a global geographic coordinate system. This happens also for other units (</span><span style=\" font-size:9pt; font-style:italic;\">we used meters here as an example</span><span style=\" font-size:9pt;\">).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">As the absolute position of clouds is generally not used during a comparison process (and most of the other processings) the best solution to this &quot;big coordinates&quot; issue is to temporarily shift the data to a local coordinate system.  </span><span style=\" font-size:9pt; font-weight:600;\">The inverse shift will be applied to the data at export time so that no information is lost.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Another example: your cloud still"
                        " represents a several meters wide object but its coordinates are expressed in microns (</span><span style=\" font-size:9pt; font-style:italic;\">once again meters and microns are used as an example</span><span style=\" font-size:9pt;\">). In this case you can apply a scaling factor so as to work in a more &quot;standard&quot; local coordinate system (</span><span style=\" font-size:9pt; font-style:italic;\">e.g. in centimeters or meters</span><span style=\" font-size:9pt;\">). In effect this is equivalent to changing the cloud units (temporarily). The inverse scaling factor will be applied at export time.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Shift &amp; Scale values</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">By default CloudCompare tries to guess the shift vector itself. But you can of course input your own version (especially if you work with several clouds and you want to shift them all in the same local coordinate system).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Once you input a shift vector (and/or a scale factor) you'll be able to use it again while importing other clouds (</span><span style=\" font"
                        "-size:9pt; font-style:italic;\">it will correspond to the &quot;Last input&quot; entry of the combo-box above the shift fields</span><span style=\" font-size:9pt;\">).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#0055ff;\">However this information will only be stored during the active session of CloudCompare (it will be lost once you close the program). To keep the information persistent, you can edit the </span><span style=\" font-size:9pt; font-style:italic; color:#0055ff;\">global_shift_list_template.txt</span><span style=\" font-size:9pt; color:#0055ff;\"> file next to CloudCompare's executable and follow the instructions inside. This is a good way to store persistent shift/scale information sets (kind of &q"
                        "uot;bookmarks&quot;).</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GlobalShiftAndScaleAboutDlg: public Ui_GlobalShiftAndScaleAboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHIFTANDSCALEABOUTDLG_H
