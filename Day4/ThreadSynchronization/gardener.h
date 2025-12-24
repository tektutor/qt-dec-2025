#ifndef GARDENER_H
#define GARDENER_H

#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QDebug>

enum GardenerType {
	DIGGER,
	PLANTER,
	FILLER
};

class Gardener : public QThread {
Q_OBJECT
private:
	static int saplingCount;
	static QMutex pit;
	static QWaitCondition waitForStartNotification;
	static QWaitCondition waitForDigger;
	static QWaitCondition waitForPlanter;
	
public:
	GardenerType typeOfGardener;
	Gardener(GardenerType);
	~Gardener();
	void run();
	static void proceedToNextPit();
};

#endif /* GARDENER_H */
