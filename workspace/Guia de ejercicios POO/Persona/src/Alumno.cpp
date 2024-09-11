#include "Alumno.h"

Alumno::Alumno() {
    //ctor
    }
void Alumno::Cargar() {
    PersonaClass::Cargar();
    cout<<"Nro de Legajo: ";
    cin>>legajo;
    cout<<"Fecha de Inscripcion: ";
    fechaInscripcion.Cargar();
    }
void Alumno::Mostrar() {
    PersonaClass::Mostrar();
    cout<<"Nro de legajo: "<<legajo<<endl;
    cout<<"Fecha de Inscripcion: "<<endl;
    fechaInscripcion.Mostrar();
    }

Alumno::~Alumno() {
    //dtor
    }
