#ifndef __THREAD_H
#define __THREAD_H

#include <QThread>
#include <QString>
#include <QDebug>

class Thread : public QThread {
Q_OBJECT
private:
	QString name;
public:
	Thread(QString);
	~Thread();
	void run();
signals:
	void message(QString);
};

#endif /* __THREAD_H */


