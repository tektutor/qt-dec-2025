#ifndef __SENDER_H
#define __SENDER_H

#include <QObject>
#include <QString>
#include <QDebug>

class Sender : public QObject {
Q_OBJECT
public:
	Sender();
	~Sender();
	void sendMessage();
signals:
	void message(QString);

};

#endif /* __SENDER_H */

