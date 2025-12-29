#ifndef GRIDDLG_H
#define GRIDDLG_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QPointer>

class GridDlg : public QDialog
{
private:
    QPointer<QPushButton> pBttn1, pBttn2, pBttn3;
    QPointer<QPushButton> pBttn4, pBttn5, pBttn6;
    QPointer<QPushButton> pBttn7, pBttn8, pBttn9;

    QPointer<QGridLayout> pLayout;

public:
    GridDlg(QWidget *parent = nullptr);
};

#endif // GRIDDLG_H
