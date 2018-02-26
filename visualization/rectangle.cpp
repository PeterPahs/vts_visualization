#include "rectangle.h"
#include "ui_rectangle.h"

rectangle::rectangle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rectangle)
{
    ui->setupUi(this);
}

rectangle::~rectangle()
{
    delete ui;
}
