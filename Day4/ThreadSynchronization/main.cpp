#include <QCoreApplication>
#include "gardener.h"

int main(int argc, char **argv) {
	QCoreApplication theApp(argc, argv);

	Gardener digger(GardenerType::DIGGER);
	Gardener planter(GardenerType::PLANTER);
	Gardener filler(GardenerType::FILLER);

	planter.start();
	filler.start();
	digger.start();

	QThread::sleep(5);
	Gardener::proceedToNextPit();

	return theApp.exec();
}
