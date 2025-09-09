#include "cola.h"



Cola::Cola(){
    pfin = NULL;
    pinicio = NULL;
}

void Cola::Encolar()
{
    Ppaciente nuevo= new Paciente();
    if(ColaVacia())
       pinicio=nuevo;
    else
        pfin->setsgte(nuevo);
    pfin = nuevo;


}

Paciente* Cola::Desencolar()
{

    if(!ColaVacia()){
        Ppaciente tmp=NULL;
        tmp=pinicio;
        if(pinicio == pfin)
            pinicio=pfin=NULL;
        else
            pinicio->setsgte(pinicio->getsgte());
        return tmp;

    }
    return NULL;
}

bool Cola::ColaVacia()
{
    return pinicio == NULL;
}

void Cola::imprimirCola()
{


}

int Cola::contar_nodos()
{
return 1;
}
