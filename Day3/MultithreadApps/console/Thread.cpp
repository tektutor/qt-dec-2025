#include "Thread.h"

Thread::Thread(QString name) {
	qDebug() << "Thread constructor ...";
	this->name = name;
}

Thread::~Thread() {
	qDebug() << "Thread destructor ...";
}

void Thread::run() {
	for ( int i=0; i<100; ++i ) {
		qDebug() << name << " count ==> " << i ;
		sleep(1);
	}
}
