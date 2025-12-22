#include "maindlg.h"

MainDlg::MainDlg(QWidget *parent)
    : QDialog(parent)
{

    pHBoxDlg = new HBoxDlg;
    pVBoxDlg = new VBoxDlg;
    pBoxDlg = new BoxDlg;
    pGridDlg = new GridDlg;

    pStackedLayout = new QStackedLayout;

    pStackedLayout->addWidget( pHBoxDlg ); //Index 0
    pStackedLayout->addWidget(pVBoxDlg);   //Index 1
    pStackedLayout->addWidget(pBoxDlg);    //Index 2
    pStackedLayout->addWidget(pGridDlg);   //Index 3

    pNavigationBttnLayout = new QBoxLayout(QBoxLayout::LeftToRight);

    pPrevBttn = new QPushButton("Prev");
    pNextBttn = new QPushButton("Next");
    pExitBttn = new QPushButton("Exit");

    pNavigationBttnLayout->addStretch();
    pNavigationBttnLayout->addWidget(pPrevBttn);
    pNavigationBttnLayout->addWidget(pNextBttn);
    pNavigationBttnLayout->addWidget(pExitBttn);

    pMainLayout = new QVBoxLayout;

    pMainLayout->addLayout(pStackedLayout);
    pMainLayout->addLayout(pNavigationBttnLayout);

    setLayout(pMainLayout);

    connect(
        pPrevBttn,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onPrevButtonClicked())
    );

    connect(
        pNextBttn,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onNextButtonClicked())
    );

    connect(
        pExitBttn,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onExitButtonClicked())
    );

    pStackedLayout->setCurrentIndex(3);

}


//Slot - nothing but event handler functions
void MainDlg::onPrevButtonClicked() {

    qDebug() << "Prev Button clicked ...";

    //this index tells us which HBoxDlg, VBoxDlg, BoxDlg or GridDlg is currently visible
    //0 - HBox Dlg
    //1 - VBox Dlg
    //2 - Box Dlg
    //3 - Grid Dlg
    int index = pStackedLayout->currentIndex();

    if ( 0 != index )
        pStackedLayout->setCurrentIndex(--index);
}

void MainDlg::onNextButtonClicked() {
    qDebug() << "Next Button clicked ...";

    //this index tells us which HBoxDlg, VBoxDlg, BoxDlg or GridDlg is currently visible
    //0 - HBox Dlg
    //1 - VBox Dlg
    //2 - Box Dlg
    //3 - Grid Dlg
    int index = pStackedLayout->currentIndex();

    if ( 3 != index )
        pStackedLayout->setCurrentIndex(++index);

}

void MainDlg::onExitButtonClicked() {
    qDebug() << "Exit Button clicked ...";
    QDialog::close();
}

MainDlg::~MainDlg() {}
