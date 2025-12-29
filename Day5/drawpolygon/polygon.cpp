#include "polygon.h" 

void PolygonWidget::paintEvent(QPaintEvent *) {
        QPainter painter(this);

        // Set pen and brush
        painter.setPen(Qt::black);
        painter.setBrush(Qt::cyan);

        // Define polygon points
        QPolygon polygon;
        polygon << QPoint(50, 50)
                << QPoint(150, 50)
                << QPoint(200, 150)
                << QPoint(100, 200)
                << QPoint(50, 150);

        // Draw polygon
        painter.drawPolygon(polygon);
}
