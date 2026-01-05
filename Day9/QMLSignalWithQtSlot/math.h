#ifndef MATH_H
#define MATH_H

#include <QObject>
#include <QDebug>

class Math : public QObject {
Q_OBJECT
private:
	double result;
public:
	Math();
	~Math();
public slots:
	Q_INVOKABLE void onAddButtonClicked(double,double);
	Q_INVOKABLE void onSubtractButtonClicked(double,double);
	Q_INVOKABLE void onMultiplyButtonClicked(double,double);
	Q_INVOKABLE void onDivideButtonClicked(double,double);
signals:
	void resultReady(double);
};

#endif /* MATH_H */
