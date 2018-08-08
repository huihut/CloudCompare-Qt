#ifndef CC_P_DLG_HEADER
#define CC_P_DLG_HEADER

#include "ui_ccpdlg.h"

class CCPDlg : public QDialog, public Ui::CCPDlg
{
public:
    explicit CCPDlg(QWidget *parent = 0);
};

#endif // CCPDLG_H
