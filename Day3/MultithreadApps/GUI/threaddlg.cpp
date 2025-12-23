#include "threaddlg.h"

ThreadDlg::ThreadDlg(QString name) {
	this->name = name;
	pThread = new Thread(name);

	pListWidget = new QListWidget();

	pLayout = new QHBoxLayout;
	pLayout->addWidget ( pListWidget );
	setLayout ( pLayout );
}

ThreadDlg::~ThreadDlg() {}

void ThreadDlg::startThread() {
	pThread->start();
}

void ThreadDlg::stopThread() {
	pThread->terminate();
}

void ThreadDlg::onMessage(QString msg) {
	qDebug() << " Message from " << name << " " << msg;
	qDebug() << "List message count " << pListWidget->count();
	pListWidget->addItem( msg );
	qDebug() << "List message count " << pListWidget->count();
}
Thread* ThreadDlg::getThread() {
	return pThread;
}
