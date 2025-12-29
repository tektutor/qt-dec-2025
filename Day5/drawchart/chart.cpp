#include "chart.h"

void ChartWidget::paintEvent(QPaintEvent *) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        // Example data
        QVector<int> values = {40, 70, 90, 30, 60};
        int barWidth = 40;
        int spacing = 20;
        int x = 50;

        painter.setPen(Qt::black);
        painter.setBrush(Qt::blue);

        for (int v : values) {
            QRect bar(x, height() - v - 20, barWidth, v);
            painter.drawRect(bar);
            x += barWidth + spacing;
        }
}
