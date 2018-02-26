#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QMainWindow>

namespace Ui {
class rectangle;
}

class rectangle : public QMainWindow
{
    Q_OBJECT

public:
    explicit rectangle(QWidget *parent = 0);
    ~rectangle();

private:
    Ui::rectangle *ui;
};

#endif // RECTANGLE_H
