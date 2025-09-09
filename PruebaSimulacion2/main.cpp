#include "mainwindow.h"
#include <QApplication>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <simulacion.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    //w.show();

    QGraphicsScene *scene= new QGraphicsScene();
    QGraphicsView *view= new QGraphicsView(scene);
    QGraphicsPixmapItem *pixie=new QGraphicsPixmapItem();
    pixie->setPixmap(QPixmap("C:/Users/Greyzor/Documents/pruebahospital/img_hospitales/center-girl.jpg"));
    pixie->setPos(700,200);
    Simulacion *sim = new Simulacion();
    scene->addItem(pixie);
    //Paciente->


    //show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    QTimer *timer= new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),sim,SLOT(spawn()));
    timer->start(1000);//tiempo que tardan en aparecer los pacientes
    scene->addItem(sim);
    return a.exec();
}
