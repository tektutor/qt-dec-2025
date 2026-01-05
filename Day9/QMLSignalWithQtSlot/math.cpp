#include "math.h"

Math::Math() {
	qDebug() << "C++ Custom Math constructor ...";
}

Math::~Math() {
	qDebug() << "C++ Custom Math destructor ...";
}

void Math::onAddButtonClicked(double operand1, double operand2) {
	result = operand1 + operand2;
	emit resultReady(result);
	qDebug() << "Result is " << result;
}

void Math::onSubtractButtonClicked(double operand1, double operand2) {
	result = operand1 - operand2;
	emit resultReady(result);
	qDebug() << "Result is " << result;
}

void Math::onMultiplyButtonClicked(double operand1, double operand2) {
	result = operand1 * operand2;
	emit resultReady(result);
	qDebug() << "Result is " << result;
}

void Math::onDivideButtonClicked(double operand1, double operand2) {
	result = operand1 * operand2;
	emit resultReady(result);
	qDebug() << "Result is " << result;
}
