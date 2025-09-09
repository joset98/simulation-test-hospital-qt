#ifndef SIMULACION_H
#define SIMULACION_H
#include "cola.h"


#include <QString>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>


class Simulacion: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT

private:
    Cola q;
public:

    Simulacion();
public slots:
    void spawn();
    void move();
};

#endif // SIMULACION_H
