#include "vboxdlg.h"

VBoxDlg::VBoxDlg(QWidget *parent) : QDialog(parent) 
{


    pBttn1 = new QPushButton("Button 1",this);
    pBttn2 = new QPushButton("Button 2",this);
    pBttn3 = new QPushButton("Button 3",this);

    pLayout = new QVBoxLayout(this);

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

}

VBoxDlg::~VBoxDlg() {

	pBttn1->deleteLater();
	pBttn2->deleteLater();
	pBttn3->deleteLater();

	pLayout->deleteLater();
}
