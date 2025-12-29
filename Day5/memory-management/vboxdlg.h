#ifndef VBOXDLG_H
#define VBOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QPointer>

class VBoxDlg : public QDialog
{
private:
    QPointer<QPushButton> pBttn1, pBttn2, pBttn3;
    QPointer<QVBoxLayout> pLayout;
public:
    VBoxDlg(QWidget *parent = nullptr);
    ~VBoxDlg();
};

#endif // VBOXDLG_H
