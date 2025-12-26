#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include <QThread>
#include <QDebug>
#include <QString>
#include <QSemaphore>

class Employee : public QThread {
private:
	QString name;
	//Only 2 employees can enter the office at a time 
	//as there are only 2 gate(entrances)
	static QSemaphore gate;
public:
	Employee(QString name);
protected:
	void run();

};

#endif /* __EMPLOYEE_H */
