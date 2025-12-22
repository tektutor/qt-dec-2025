#ifndef BOXDLG_H
#define BOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

class BoxDlg : public QDialog
{
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QBoxLayout *pLayout;
public:
    BoxDlg();
};

#endif // BOXDLG_H
