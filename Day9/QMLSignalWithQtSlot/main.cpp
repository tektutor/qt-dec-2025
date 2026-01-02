#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "MyClass.h"

int main(int argc, char **argv) {

	QGuiApplication theApp(argc,argv);

	qmlRegisterType<MyClass>("TekTutor",1,3, "TekTutorMyClass");

	QQmlApplicationEngine engine;
	engine.load ( QUrl ( QStringLiteral("main.qml") ) );

	return theApp.exec();
}
