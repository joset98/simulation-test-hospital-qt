#include "paciente.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QList>

Paciente::Paciente()//:QObject(), QGraphicsPixmapItem()
{
    srand(time(NULL));
    //int rand_num =rand()%700;
   // setPos(rand_num,0);

    this->apellido="";
    this->cedula=0;
    this->nombre="";
    this->estatura=0;
    this->ciudad="";
    this->Motivo_consulta="";
    this->fecha_nacimiento.setDate(0,0,0);
    this->peso=0;
    this->tipo_sangre="";
    this->sexo="";
    this->sgte=NULL;

    //setPixmap(QPixmap(":/Users/Greyzor/Documents/pruebahospital/img_hospitales/caminar3d.jpeg"));
    //QTimer *timer= new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    //timer->start(50);
}

Paciente* Paciente::getsgte()
{
    return this->sgte;
}

void Paciente::setsgte(Paciente *p)
{
    this->sgte=p;
}

int Paciente::getedad()
{
    return ((QDate::currentDate().toJulianDay()-this->fecha_nacimiento.toJulianDay())/365);

}
