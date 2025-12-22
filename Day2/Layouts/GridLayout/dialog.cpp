#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Grid Layout");

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");
    pBttn6 = new QPushButton("Button 6");

    pBttn7 = new QPushButton("Button 7");
    pBttn8 = new QPushButton("Button 8");
    pBttn9 = new QPushButton("Button 9");

    pBttn1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn6->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn7->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn8->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn9->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    pLayout = new QGridLayout();

    //Row 0 - means Row 1
    //Col 0 - means Col 1
    //The below buttons are added in the first row at different columns
    pLayout->addWidget(pBttn1,0,0);
    pLayout->addWidget(pBttn2,0,1);
    pLayout->addWidget(pBttn3,0,2);

    pLayout->addWidget(pBttn4,1,0);
    pLayout->addWidget(pBttn5,1,1);
    pLayout->addWidget(pBttn6,1,2);

    pLayout->addWidget(pBttn7,2,0);
    pLayout->addWidget(pBttn8,2,1);
    pLayout->addWidget(pBttn9,2,2);

    setLayout( pLayout );
}

Dialog::~Dialog() {}
