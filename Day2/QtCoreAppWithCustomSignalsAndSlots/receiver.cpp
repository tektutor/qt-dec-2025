#include "receiver.h"

Receiver::Receiver() {
	qDebug() << "Receiver constructor ...";	
}

Receiver::~Receiver() {
	qDebug() << "Receiver destructor ...";	
}

void Receiver::onMessage(QString msg) {
	qDebug() << msg << " received from sender ...";
}
