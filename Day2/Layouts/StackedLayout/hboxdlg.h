#ifndef HBOXDLG_H
#define HBOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

class HBoxDlg : public QDialog
{
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QHBoxLayout *pLayout;
public:
    HBoxDlg();
};

#endif // HBOXDLG_H
