#include "gardener.h"

int Gardener::saplingCount = 15; 
QMutex Gardener::pit;
QWaitCondition Gardener::waitForStartNotification;
QWaitCondition Gardener::waitForDigger;
QWaitCondition Gardener::waitForPlanter;

Gardener::Gardener(GardenerType type) {
	typeOfGardener = type;
}

Gardener::~Gardener() {}

void Gardener::proceedToNextPit() {
	waitForStartNotification.notify_one();
}

void Gardener::run() {
	switch( typeOfGardener ) {
		case DIGGER:
			for ( int i=1; i<=saplingCount; ++i) {
				pit.tryLock();
				waitForStartNotification.wait(&pit);
				qDebug() << "Digger digged pit " << i;
				waitForDigger.notify_one();
				sleep(1);
				pit.unlock();

			}
		break;


		case PLANTER:
			for ( int i=1; i<=saplingCount; ++i) {
				pit.tryLock();
				waitForDigger.wait(&pit);
				qDebug() << "Planted sapling in pit " << i;
				waitForPlanter.notify_one();
				sleep(2);
				pit.unlock();
			}
		break;

		case FILLER: 
			for ( int i=1; i<=saplingCount; ++i) {
				pit.tryLock();
				waitForPlanter.wait(&pit);
				qDebug() << "Composed sapling and watered in pit " << i;
				sleep(3);
				pit.unlock();
				proceedToNextPit();
			}
		break;
	}
}
