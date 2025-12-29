#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <qstackedlayout.h>
#include <QMessageBox>
#include <QDebug>
#include <QPointer>

#include "hboxdlg.h"
#include "vboxdlg.h"
#include "boxdlg.h"
#include "griddlg.h"

class MainDlg : public QDialog
{
Q_OBJECT
private:
    QPointer<QPushButton> pPrevBttn, pNextBttn, pExitBttn;
    QPointer<QStackedLayout> pStackedLayout;
    QPointer<QBoxLayout> pNavigationBttnLayout;

    QPointer<HBoxDlg> pHBoxDlg;
    QPointer<VBoxDlg> pVBoxDlg;
    QPointer<BoxDlg>  pBoxDlg;
    QPointer<GridDlg> pGridDlg;

    QPointer<QVBoxLayout> pMainLayout;

private slots:
    void onPrevButtonClicked();
    void onNextButtonClicked();
    void onExitButtonClicked();

public:
    MainDlg(QWidget *parent = nullptr);
    ~MainDlg();
};
#endif // MAINDLG_H
