#ifndef PACIENTE_H
#define PACIENTE_H

#include <QDate>
#include <QString>

class Paciente
{
private:

    QString nombre;
    QString apellido;
    int cedula;
    int codigo;
    QDate fecha_nacimiento;
    QString Motivo_consulta;
    QString tipo_sangre;
    QString sexo;
    QString direccion;
    QString ciudad;
    double estatura;
    double peso;
    Paciente *sgte;

public:
    Paciente();
    Paciente(QString, QString, int, int, QDate, QString, QString, QString, QString, QString, double, double, Paciente);
    Paciente* getsgte();
    void setsgte(Paciente *p);
    int getedad();
};

#endif // PACIENTE_H
