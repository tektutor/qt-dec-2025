#include "sender.h"

Sender::Sender() {
	qDebug() << "Sender constructor ...";
}

void Sender::sendMessage() {
	for ( int i=0; i<100; ++i )
		emit message( QString("Hello from sender") );
}

Sender::~Sender() {
	qDebug() << "Sender destructor ...";
}
