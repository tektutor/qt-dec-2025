#include <QWidget>
#include <QPainter>
#include <QPolygon>

class PolygonWidget : public QWidget {
protected:
    void paintEvent(QPaintEvent *);
};
