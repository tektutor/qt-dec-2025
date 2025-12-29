#include <QCoreApplication>
#include "employee.h"


int main(int argc, char **argv ) {

	QCoreApplication theApp(argc, argv);
	QString strName;
	QString strNum;

	for (int i=1; i<101; ++i) {
		strName = "Employee ";
		strNum.setNum(i);
		strName.append( strNum );
		(new Employee(strName))->start();
	}

	return theApp.exec();

}
