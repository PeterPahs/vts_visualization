#ifndef WINDOW_H
#define WINDOW_H

#include <QGraphicsWidget>

class window : public QGraphicsWidget
{
    Q_OBJECT
public:
    Window(QGraphicsWidget *parent = 0);
};

#endif // WINDOW_H
