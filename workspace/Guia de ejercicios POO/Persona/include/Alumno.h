#include <iostream>
#include "PersonaClass.h"
#pragma once
using namespace std;

class Alumno:PersonaClass
{

    private:
        int legajo;
        Fecha fechaInscripcion;
    protected:
    public:
        Alumno();
        void Cargar();
        void Mostrar();
        ~Alumno();



};

