#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char **argv) {

	QGuiApplication theApp(argc,argv);

	QQmlApplicationEngine engine;
	engine.load(QUrl(QStringLiteral("Calculator.qml")));

	return theApp.exec();

}
