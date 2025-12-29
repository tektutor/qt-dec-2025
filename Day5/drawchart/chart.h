#include <QWidget>
#include <QPainter>

class ChartWidget : public QWidget {
protected:
    void paintEvent(QPaintEvent *);
};
