#ifndef __MAINDLG_H
#define __MAINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTabWidget>
#include <QDebug>
#include "threaddlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pNewThreadBttn, *pStartThreadBttn, *pStopThreadBttn, *pExitAppBttn;
	QTabWidget *pTabWidget;

	QBoxLayout *pBttnLayout;
	QVBoxLayout *pMainLayout;
private slots:
	void onNewThreadButtonClicked();
	void onStartThreadButtonClicked();
	void onStopThreadButtonClicked();
	void onExitButtonClicked();
public:
	MainDlg();
	~MainDlg();
};

#endif /* __MAINDLG_H */
