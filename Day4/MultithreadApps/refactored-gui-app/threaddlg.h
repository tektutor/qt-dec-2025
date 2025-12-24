#ifndef __THREADDLG_H
#define __THREADDLG_H

#include <QDialog>
#include <QString>
#include <QListWidget>
#include <QHBoxLayout>
#include "thread.h"

class ThreadDlg : public QDialog {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QHBoxLayout *pLayout;
	Thread *pThread;
	QString name;

public slots:
	void onMessage(QString);
public:
	ThreadDlg(QString);
	~ThreadDlg();
	void startThread();
	void stopThread();
	Thread* getThread();

};

#endif /* __THREADDLG_H */
