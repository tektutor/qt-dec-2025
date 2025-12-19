#include <QApplication>
#include "mydlg.h"

int main( int argc, char **argv ) {
	//There can be only one QApplication instance used - in short singleton object
	QApplication theApp( argc, argv );

	MyDlg dlg;
	dlg.show();

	//the event loop required to support windows events are implemented
	//you can image it has a while loop within which it keeps monitoring for events
	theApp.exec();
}
