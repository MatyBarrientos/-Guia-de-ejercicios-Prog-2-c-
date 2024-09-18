#pragma once
#include "Fecha.h"
class Alumno
{
private:
    int legajo;
    char nombre[30];
    char apellido[30];
    Fecha fechaNacimiento;
    char email[50];
    int codigoCarrera;
public:
    void Cargar();
    void Mostrar();
};
