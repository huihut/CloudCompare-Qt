#ifndef CCSAFDLG_H
#define CCSAFDLG_H

#include "ui_SAFDlg.h"
#include <QDialog>

namespace Ui {
class ccSAFDlg;
}

class ccSAFDlg : public QDialog, public Ui::ccSAFDlg
{
    Q_OBJECT

public:
    explicit ccSAFDlg(QWidget *parent = 0);

protected slots:

    //! Saves (temporarily) the dialog paramters on acceptation
    void saveSettings();
};

#endif // CCSAFDLG_H
