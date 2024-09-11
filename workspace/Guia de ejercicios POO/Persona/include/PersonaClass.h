#pragma once
#include <iostream>
#include "Fecha.h"

using namespace std;

class PersonaClass
{
    private:
    int DNI;
    char nombre[30];
    char apellido[30];
    Fecha fechaNacimiento;
    int telefono;
    char mail[30];
    public:
        PersonaClass();
          	void Cargar();
  	void Mostrar();
  	char* getNombre();
  	char* getApellido();
  	int getTelefono();
  	char* getMail();
        virtual ~PersonaClass();

    protected:


};


