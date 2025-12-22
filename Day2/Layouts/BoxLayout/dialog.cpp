#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pBttn1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    pLayout = new QBoxLayout(QBoxLayout::BottomToTop);

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout( pLayout );
}

Dialog::~Dialog() {}
