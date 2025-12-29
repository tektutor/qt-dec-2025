# Day 5

## Lab - Using Semaphrore thread synchronization mechanism
```
cd ~/qt-dec-2025
git pull
cd Day5/ThreadSynchronization/semaphore
qmake
make
./semaphore
```

## Lab - Using Timer
```
cd ~/qt-dec-2025
git pull
cd Day5/timer
qmake
make
./timer

```

## Lab - QPointer
```
#include <QCoreApplication>
#include <QPointer>
#include <QObject>
#include <QDebug>

class Worker : public QObject {
    Q_OBJECT
public:
    Worker() { qDebug() << "Worker created"; }
    ~Worker() { qDebug() << "Worker destroyed"; }

    void doWork() {
        qDebug() << "Worker is doing some work...";
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create a QObject dynamically
    Worker *rawWorker = new Worker();

    // Wrap it in a QPointer
    QPointer<Worker> safeWorker(rawWorker);

    // Use the object
    if (safeWorker) {
        safeWorker->doWork();
    }

    // Delete the raw pointer manually
    delete rawWorker;

    // Now QPointer automatically becomes nullptr
    if (safeWorker) {
        safeWorker->doWork();
    } else {
        qDebug() << "safeWorker is null, object already deleted!";
    }

    return 0;
}
```
