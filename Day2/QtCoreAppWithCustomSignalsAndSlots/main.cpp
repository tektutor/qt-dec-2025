#include <QCoreApplication>
#include "sender.h"
#include "receiver.h"

int main( int argc, char **argv ) {
	QCoreApplication theApp(argc, argv);

	Receiver receiver;
	Sender sender;

	QObject::connect(
		&sender,
		SIGNAL ( message(QString) ),
		&receiver,
		SLOT ( onMessage(QString) )
	);

	sender.sendMessage();


	return theApp.exec();

}
