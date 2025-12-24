#include "thread.h"

Thread::Thread(QString name) {
	qDebug() << "Thread constructor ...";
	this->name = name;
}

Thread::~Thread() {
	qDebug() << "Thread destructor ...";
}

void Thread::run() {
	QString msg;
	QString temp;
	for ( int i=0; i<100; ++i ) {
		msg = name;
		msg.append( " Count ==> " );
		temp.setNum( i );
		msg.append( temp );
		qDebug() << msg ;
		emit message( msg );
		sleep(1);
	}
}
