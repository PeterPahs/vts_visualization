#include "window.h"
#include "layoutitem.h"

#include <QGraphicsLinearLayout>
#include <QGraphicsGridLayout>

Window::Window(QGraphicsWidget *parent) : QGraphicsWidget(parent, Qt::Window)
{
    QGraphicsLinearLayout *windowLayout = new QGraphicsLinearLayout(Qt::Vertical);
    QGraphicsLinearLayout *linear = new QGraphicsLinearLayout(windowLayout);
    LayoutItem *item = new LayoutItem;
    linear->addItem(item);
    linear->setStretchFactor(item, 1);

    item = new LayoutItem;
    linear->addItem(item);
    linear->setStretchFactor(item, 3);
    windowLayout->addItem(linear);

    QGraphicsGridLayout *grid = new QGraphicsGridLayout(windowLayout);
    item = new LayoutItem;
    grid->addItem(item, 0, 0, 4, 1);

    windowLayout->addItem(grid);

    setLayout(windowLayout);
    setWindowTitle(tr("Basic Graphics Layouts Example"));

}
