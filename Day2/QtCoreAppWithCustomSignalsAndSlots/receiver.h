#ifndef __RECEIVER_H
#define __RECEIVER_H

#include <QObject>
#include <QString>
#include <QDebug>

class Receiver : public QObject {
Q_OBJECT
public:
	Receiver();
	~Receiver();
private slots:
	void onMessage(QString);
};

#endif /* __RECEIVER_H */
