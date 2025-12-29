#ifndef BOXDLG_H
#define BOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QPointer>

class BoxDlg : public QDialog
{
private:
    QPointer<QPushButton> pBttn1, pBttn2, pBttn3;
    QPointer<QBoxLayout> pLayout;
public:
    BoxDlg(QWidget *parent = nullptr);
    ~BoxDlg();
};

#endif // BOXDLG_H
