#include <QApplication>
#include "polygon.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PolygonWidget window;
    window.resize(300, 300);
    window.setWindowTitle("Polygon Example");
    window.show();

    return app.exec();
}

