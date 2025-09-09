#include "simulacion.h"
#include <QGraphicsScene>
#include <QList>
#include <QTimer>
#include <stdlib.h>
#include <QDebug>


Simulacion::Simulacion(): QObject(), QGraphicsPixmapItem()
{
    //
    int ran_num = rand()%700;
    setPos(00,200);

    setPixmap(QPixmap("C:/Users/Greyzor/Documents/pruebahospital/img_hospitales/caminar3d.jpeg"));
//    setRect(0,0,100,20);
    QTimer *timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);//tiempo que le toma en hacer cada movimiento (me puede servir para hacer la pausa del paciente jejejeje)

}

void Simulacion::move()
{
    QTimer *timer= new QTimer(this);
    QList <QGraphicsItem*> collide_item=collidingItems();
    for(int i=0,n=collide_item.size();i<n;i++){
        if(typeid(*(collide_item[i]) )==typeid(Simulacion) )
            ;
    }

  /*  for(int i=0,n=collide_item.size();i<n;i++){
        if(typeid(*(collide_item[i]) )==typeid(QGraphicsItem) )
            timer->start(5000);
    }*/
    if(pos().x()>2){
        ;
    }

    setPos(x()+5,y());

    if(pos().x()>800){
        scene()->removeItem(this);
        delete this;
    }
}

void Simulacion::spawn()
{
    Simulacion *sim = new Simulacion();

    scene()->addItem(sim);
}
