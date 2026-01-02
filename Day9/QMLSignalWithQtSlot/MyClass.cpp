#include "MyClass.h"

MyClass::MyClass(QObject *parent): QObject(parent) {
	qDebug() << "MyClass constructor ....";
}

MyClass::~MyClass() {
	qDebug() << "MyClass destructor ....";
}

void MyClass::emitSignal() {
	qDebug() << "MyClass emitSignal method invoked ...";
	emit cppSignal();
}

