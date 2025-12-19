#include "mydlg.h"

MyDlg::MyDlg() {
	pHelloBttn = new QPushButton("Hello");
	pExitBttn = new QPushButton("Exit");
	
	pLayout = new QVBoxLayout();

	pLayout->addWidget( pHelloBttn );
	pLayout->addWidget( pExitBttn );

	setLayout( pLayout );
}
