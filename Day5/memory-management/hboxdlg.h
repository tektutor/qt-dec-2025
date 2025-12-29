#ifndef HBOXDLG_H
#define HBOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QPointer>

class HBoxDlg : public QDialog
{
private:
    QPointer<QPushButton> pBttn1, pBttn2, pBttn3;
    QPointer<QHBoxLayout> pLayout;
public:
    HBoxDlg(QWidget *parent = nullptr);
    ~HBoxDlg();
};

#endif // HBOXDLG_H
