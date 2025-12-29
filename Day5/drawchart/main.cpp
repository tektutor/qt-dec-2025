#include <QApplication>
#include "chart.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    ChartWidget chart;
    chart.resize(400, 300);
    chart.setWindowTitle("Simple Bar Chart");
    chart.show();

    return app.exec();
}

