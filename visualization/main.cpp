#include "rectangle.h"
#include <QApplication>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QGraphicsScene>
#include <QVector>

class myMainWindow : public QMainWindow{
public:
    myMainWindow():
    QMainWindow(){};
    ~myMainWindow(){};


    void paintEvent(QPaintEvent *){
        QPainter painter(this);
        painter.setPen(QPen(Qt::gray, 1));
        for(int x=0; x<=600; x+=50){
            painter.drawLine(QPointF(x,0),QPointF(x,500));
        }
        for(int y=0; y<=500; y+=50){
            painter.drawLine(QPointF(0,y), QPointF(600,y));
        }
        painter.translate(width() / 2, height() / 2);

        painter.setPen(QPen(Qt::black, 1));

        painter.drawLine(0,-250,0,250);
        painter.drawLine(-300,0,300,0);

        //add the points -y axis inverted! dont know why
		//hard coded points for testing
        QVector<QPoint> m_points;
        m_points.append(QPoint(-60,60));
        m_points.append(QPoint(-50,60));
        m_points.append(QPoint(-40,60));
        m_points.append(QPoint(-30,60));
        m_points.append(QPoint(-20,60));
        m_points.append(QPoint(-10,60));
        m_points.append(QPoint(0,60));
        m_points.append(QPoint(10,60));
        m_points.append(QPoint(20,60));
        m_points.append(QPoint(30,60));
        m_points.append(QPoint(40,60));
        m_points.append(QPoint(50,60));
        m_points.append(QPoint(60,60));
        m_points.append(QPoint(-60,50));
        m_points.append(QPoint(60,50));
        m_points.append(QPoint(-60,40));
        m_points.append(QPoint(60,40));
        m_points.append(QPoint(-60,30));
        m_points.append(QPoint(60,30));
        m_points.append(QPoint(-60,20));
        m_points.append(QPoint(60,20));
        m_points.append(QPoint(-60,10));
        m_points.append(QPoint(60,10));
        m_points.append(QPoint(-250,0));
        m_points.append(QPoint(-240,0));
        m_points.append(QPoint(-230,0));
        m_points.append(QPoint(-220,0));
        m_points.append(QPoint(-210,0));
        m_points.append(QPoint(-200,0));
        m_points.append(QPoint(-190,0));
        m_points.append(QPoint(-180,0));
        m_points.append(QPoint(-170,0));
        m_points.append(QPoint(-160,0));
        m_points.append(QPoint(-150,0));
        m_points.append(QPoint(-140,0));
        m_points.append(QPoint(-130,0));
        m_points.append(QPoint(-120,0));
        m_points.append(QPoint(-110,0));
        m_points.append(QPoint(-100,0));
        m_points.append(QPoint(-90,0));
        m_points.append(QPoint(-80,0));
        m_points.append(QPoint(-70,0));
        m_points.append(QPoint(250,0));
        m_points.append(QPoint(240,0));
        m_points.append(QPoint(230,0));
        m_points.append(QPoint(220,0));
        m_points.append(QPoint(210,0));
        m_points.append(QPoint(200,0));
        m_points.append(QPoint(190,0));
        m_points.append(QPoint(180,0));
        m_points.append(QPoint(170,0));
        m_points.append(QPoint(160,0));
        m_points.append(QPoint(150,0));
        m_points.append(QPoint(140,0));
        m_points.append(QPoint(130,0));
        m_points.append(QPoint(120,0));
        m_points.append(QPoint(110,0));
        m_points.append(QPoint(100,0));
        m_points.append(QPoint(90,0));
        m_points.append(QPoint(80,0));
        m_points.append(QPoint(70,0));

        painter.setBrush(Qt::red);
        QPoint p;
        foreach (p, m_points) {
            painter.drawEllipse(p,5,5);
        }

    };
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    myMainWindow *window = new myMainWindow();

    window->setWindowTitle(QString::fromUtf8("Simple Plot Test"));
    window->resize(600,500);
    window->show();
    return app.exec();
}
