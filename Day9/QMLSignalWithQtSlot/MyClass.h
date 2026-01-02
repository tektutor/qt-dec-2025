#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>

class MyClass : public QObject {
Q_OBJECT
public:
	explicit MyClass(QObject *parent = nullptr);
	~MyClass();
	Q_INVOKABLE void emitSignal();
signals:
	void cppSignal();

};

#endif /* MYCLASS_H */
