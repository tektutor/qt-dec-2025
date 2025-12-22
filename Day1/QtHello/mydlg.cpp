#include "mydlg.h"

MyDlg::MyDlg() {
	pHelloBttn = new QPushButton("Hello");
	pExitBttn = new QPushButton("Exit");
	
	pLayout = new QVBoxLayout();

	pLayout->addWidget( pHelloBttn );
	pLayout->addWidget( pExitBttn );

	setLayout( pLayout );

	connect (
		pHelloBttn,
		SIGNAL( clicked() ),
		this,
		SLOT ( onHelloButtonClicked() )
	);

	connect (
		pExitBttn,
		SIGNAL( clicked() ),
		this,
		SLOT ( onExitButtonClicked() )
	);
}

void MyDlg::onHelloButtonClicked() {
	qDebug() << "Hello Button clicked ...";
}

void MyDlg::onExitButtonClicked() {
	qDebug() << "Exit Button clicked ...";
}
