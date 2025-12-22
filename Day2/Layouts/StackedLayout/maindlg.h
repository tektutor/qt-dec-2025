#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <qstackedlayout.h>
#include <QMessageBox>
#include <QDebug>

#include "hboxdlg.h"
#include "vboxdlg.h"
#include "boxdlg.h"
#include "griddlg.h"

class MainDlg : public QDialog
{
Q_OBJECT
private:
    QPushButton *pPrevBttn, *pNextBttn, *pExitBttn;
    QStackedLayout *pStackedLayout;
    QBoxLayout *pNavigationBttnLayout;

    HBoxDlg *pHBoxDlg;
    VBoxDlg *pVBoxDlg;
    BoxDlg *pBoxDlg;
    GridDlg *pGridDlg;

    QVBoxLayout *pMainLayout;

private slots:
    void onPrevButtonClicked();
    void onNextButtonClicked();
    void onExitButtonClicked();

public:
    MainDlg(QWidget *parent = nullptr);
    ~MainDlg();
};
#endif // MAINDLG_H
