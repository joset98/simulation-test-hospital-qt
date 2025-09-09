#ifndef COLA_H
#define COLA_H
#include <paciente.h>

typedef Paciente *Ppaciente;

class Cola
{
public:
    Cola();
    void Encolar( );
    Paciente* Desencolar( );
    bool ColaVacia();
    void MostrarCola();
    void VaciarCola();
    void imprimirCola();
    int contar_nodos();
private:
    Ppaciente pinicio,pfin;

};

#endif // COLA_H
