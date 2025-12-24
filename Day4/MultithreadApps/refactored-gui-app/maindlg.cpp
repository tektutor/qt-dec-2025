#include "maindlg.h"

MainDlg::MainDlg() {
	setWindowTitle ("GUI Multithreaded Application");

	pNewThreadBttn = new QPushButton("New Thread");
	pStartThreadBttn = new QPushButton("Start Thread");
	pStopThreadBttn = new QPushButton("Stop Thread");
	pExitAppBttn = new QPushButton("Exit App");

	pBttnLayout = new QBoxLayout(QBoxLayout::LeftToRight);
	
	pBttnLayout->addStretch();
	pBttnLayout->addWidget ( pNewThreadBttn );
	pBttnLayout->addWidget ( pStartThreadBttn );
	pBttnLayout->addWidget ( pStopThreadBttn );
	pBttnLayout->addWidget ( pExitAppBttn );

	pMainLayout = new QVBoxLayout;
	pTabWidget  = new QTabWidget;

	pMainLayout->addWidget ( pTabWidget );
	pMainLayout->addLayout ( pBttnLayout );

	setLayout ( pMainLayout );

	connect ( pNewThreadBttn, SIGNAL (clicked()), this, SLOT( onNewThreadButtonClicked() ) );
	connect ( pStartThreadBttn, SIGNAL (clicked()), this, SLOT( onStartThreadButtonClicked() ) );
	connect ( pStopThreadBttn, SIGNAL (clicked()), this, SLOT( onStopThreadButtonClicked() ) );
	connect ( pExitAppBttn, SIGNAL (clicked()), this, SLOT( onExitButtonClicked() ) );
}

void MainDlg::onNewThreadButtonClicked() {
	qDebug() << "New Thread Button clicked ...";

	QString strCaption = "Thread ";
	int tabCount = pTabWidget->count();
	QString strTempNum;
	strTempNum.setNum( ++tabCount );
	strCaption.append( strTempNum );

	ThreadDlg *pDlg = new ThreadDlg(strCaption);

	connect (pDlg->getThread(), SIGNAL( message(QString) ), pDlg, SLOT(onMessage(QString) ));  

	pTabWidget->addTab ( pDlg, strCaption );
}

void MainDlg::onStartThreadButtonClicked() {
	qDebug() << "Start Thread Button clicked ...";
	ThreadDlg *pThreadDlg = dynamic_cast<ThreadDlg*>(pTabWidget->currentWidget());
	pThreadDlg->startThread();
}

void MainDlg::onStopThreadButtonClicked() {
	qDebug() << "Stop Thread Button clicked ...";
	ThreadDlg *pThreadDlg = dynamic_cast<ThreadDlg*>(pTabWidget->currentWidget());
	pThreadDlg->stopThread();

}

void MainDlg::onExitButtonClicked() {
	qDebug() << "Exit App Button clicked ...";

	QDialog::close();
}

MainDlg::~MainDlg() {

}
