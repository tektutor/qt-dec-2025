#include "employee.h"

//Only 2 gates are there in the office
//hence max only 2 employee can enter the work place at a time
QSemaphore Employee::gate(2);

Employee::Employee(QString name) {
	qDebug() << "Employee constructor ...";
	this->name = name;
}

void Employee::run() {
	qDebug() << name << " waiting in the queue to enter the office ...";
	gate.acquire();

	qDebug() << name << " Swiped entry and entered office.";

	sleep(1);

	qDebug() << name << " left office";

	gate.release();
}
