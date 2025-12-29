#include "boxdlg.h"

BoxDlg::BoxDlg(QWidget *parent) 
	: QDialog(parent) 
{

    pBttn1 = new QPushButton("Button 1",this);
    pBttn2 = new QPushButton("Button 2",this);
    pBttn3 = new QPushButton("Button 3",this);

    pLayout = new QBoxLayout(QBoxLayout::RightToLeft, this);


    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

}

BoxDlg::~BoxDlg() {

	pBttn1->deleteLater();
	pBttn2->deleteLater();
	pBttn3->deleteLater();
	pLayout->deleteLater();
}
