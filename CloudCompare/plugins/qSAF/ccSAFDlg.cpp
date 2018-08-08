#include "ccSAFDlg.h"

static double threshold_1 = 20;
static double threshold_2 = 70;

ccSAFDlg::ccSAFDlg(QWidget *parent) : QDialog(parent), Ui::ccSAFDlg()
{
    setupUi(this);

    connect(buttonBox, SIGNAL(accepted()), this, SLOT(saveSettings()));

    doubleSpinBox_1->setValue(threshold_1);
    doubleSpinBox_2->setValue(threshold_2);
}

void ccSAFDlg::saveSettings()
{
    threshold_1 = doubleSpinBox_1->value();
    threshold_2 = doubleSpinBox_2->value();
}
