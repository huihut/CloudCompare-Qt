#include "CCPDlg.h"

#include <QDesktopWidget>

CCPDlg::CCPDlg(QWidget* parent) :
    QDialog(parent, Qt::Tool),
    Ui::CCPDlg()
{
    setupUi(this);
    this->messageShow->setText("Finished clicking Qt CloudCompare Plugin Demo!!!");

    connect(this->sureButton, SIGNAL(clicked()), this, SLOT(close()));
}
