#include "griddlg.h"

GridDlg::GridDlg(QWidget *parent) 
	: QDialog(parent) 
{

    //Row 1
    pBttn1 = new QPushButton("Button 1",this);
    pBttn2 = new QPushButton("Button 2",this);
    pBttn3 = new QPushButton("Button 3",this);

    //Row 2
    pBttn4 = new QPushButton("Button 4",this);
    pBttn5 = new QPushButton("Button 5",this);
    pBttn6 = new QPushButton("Button 6",this);

    //Row 3
    pBttn7 = new QPushButton("Button 7",this);
    pBttn8 = new QPushButton("Button 8",this);
    pBttn9 = new QPushButton("Button 9",this);

    pLayout = new QGridLayout(this);

    //Row 1
    pLayout->addWidget(pBttn1, 0, 0);  // First row, First col
    pLayout->addWidget(pBttn2, 0, 1);  // First row, Second col
    pLayout->addWidget(pBttn3, 0, 2);  // First row, Third col

    //Row 2
    pLayout->addWidget(pBttn4, 1, 0);  // First row, First col
    pLayout->addWidget(pBttn5, 1, 1);  // First row, Second col
    pLayout->addWidget(pBttn6, 1, 2);  // First row, Third col

    //Row 3
    pLayout->addWidget(pBttn7, 2, 0);  // First row, First col
    pLayout->addWidget(pBttn8, 2, 1);  // First row, Second col
    pLayout->addWidget(pBttn9, 2, 2);  // First row, Third col

    setLayout( pLayout );
}
