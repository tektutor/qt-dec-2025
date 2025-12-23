#ifndef __MATHDLG_H
#define __MATHDLG_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QDebug>

class MathDlg : public QDialog {
Q_OBJECT
private:
	double firstNumber, secondNumber, result;

	QLineEdit *pFirstNumberEdit, *pSecondNumberEdit, *pResultEdit;
	QLabel *pFirstNumberLbl, *pSecondNumberLbl, *pResultLbl;
	QBoxLayout *pBttnLayout;
	QFormLayout *pFormLayout;
	QVBoxLayout *pMainLayout;

	QPushButton *pAddBttn, *pSubtractBttn, *pMultiplyBttn, *pDivideBttn, *pExitBttn;
public:
	MathDlg();
	~MathDlg();
private slots:
	void onAddButtonClicked();
	void onSubtractButtonClicked();
	void onMultiplyButtonClicked();
	void onDivideButtonClicked();
	void onExitButtonClicked();
};

#endif /* __MATHDLG_H */
