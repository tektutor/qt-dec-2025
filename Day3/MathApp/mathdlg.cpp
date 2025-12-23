#include "mathdlg.h"

MathDlg::MathDlg() {
	firstNumber = secondNumber = result = 0.0;

	setWindowTitle("Simple Math Application");

	pAddBttn = new QPushButton("Add");
	pSubtractBttn = new QPushButton("Subtract");
	pMultiplyBttn = new QPushButton("Multiply");
	pDivideBttn = new QPushButton("Divide");
	pExitBttn = new QPushButton("Exit");

	pBttnLayout = new QBoxLayout(QBoxLayout::LeftToRight);

	pBttnLayout->addStretch(); //Ensures the buttons are right aligned
	pBttnLayout->addWidget ( pAddBttn );
	pBttnLayout->addWidget ( pSubtractBttn );
	pBttnLayout->addWidget ( pMultiplyBttn );
	pBttnLayout->addWidget ( pDivideBttn );
	pBttnLayout->addWidget ( pExitBttn );

	pFormLayout = new QFormLayout;

	pFirstNumberLbl = new QLabel("First Number");
	pSecondNumberLbl = new QLabel("Second Number");
	pResultLbl = new QLabel("Result");

	pFirstNumberEdit = new QLineEdit();
	pSecondNumberEdit = new QLineEdit();
	pResultEdit = new QLineEdit();

	pFormLayout->addRow(pFirstNumberLbl, pFirstNumberEdit); 
	pFormLayout->addRow(pSecondNumberLbl, pSecondNumberEdit); 
	pFormLayout->addRow(pResultLbl, pResultEdit); 

	pMainLayout = new QVBoxLayout();
	pMainLayout->addLayout( pFormLayout );
	pMainLayout->addLayout( pBttnLayout );

	setLayout(pMainLayout);

	connect( pAddBttn, SIGNAL(clicked()), this, SLOT( onAddButtonClicked() ) );
	connect( pSubtractBttn, SIGNAL(clicked()), this, SLOT( onSubtractButtonClicked() ) );
	connect( pMultiplyBttn, SIGNAL(clicked()), this, SLOT( onMultiplyButtonClicked() ) );
	connect( pDivideBttn, SIGNAL(clicked()), this, SLOT( onDivideButtonClicked() ) );
	connect( pExitBttn, SIGNAL(clicked()), this, SLOT( onExitButtonClicked() ) );
}

void MathDlg::onAddButtonClicked() {
	qDebug() << "Add Button clicked ...";

	firstNumber = pFirstNumberEdit->text().toDouble();
	secondNumber = pSecondNumberEdit->text().toDouble();
	result = firstNumber + secondNumber;

	QString strResult;
	strResult.setNum(result);
	pResultEdit->setText(strResult);
}

void MathDlg::onSubtractButtonClicked() {
	qDebug() << "Subtract Button clicked ...";

	firstNumber = pFirstNumberEdit->text().toDouble();
	secondNumber = pSecondNumberEdit->text().toDouble();
	result = firstNumber - secondNumber;

	QString strResult;
	strResult.setNum(result);
	pResultEdit->setText(strResult);
}

void MathDlg::onMultiplyButtonClicked() {
	qDebug() << "Multiply Button clicked ...";

	firstNumber = pFirstNumberEdit->text().toDouble();
	secondNumber = pSecondNumberEdit->text().toDouble();
	result = firstNumber * secondNumber;

	QString strResult;
	strResult.setNum(result);
	pResultEdit->setText(strResult);
}

void MathDlg::onDivideButtonClicked() {
	qDebug() << "Divide Button clicked ...";

	firstNumber = pFirstNumberEdit->text().toDouble();
	secondNumber = pSecondNumberEdit->text().toDouble();
	result = firstNumber / secondNumber;

	QString strResult;
	strResult.setNum(result);
	pResultEdit->setText(strResult);
}

void MathDlg::onExitButtonClicked() {
	qDebug() << "Exit Button clicked ...";
	QDialog::close();
}

MathDlg::~MathDlg() {

}

