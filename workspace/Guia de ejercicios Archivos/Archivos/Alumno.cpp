#include "Alumno.h"


///Métodos de alumno
void Alumno::Cargar()
{
    cout<<"LEGAJO ";
    cin>>legajo;
    cout<<"NOMBRE ";
    cin>>nombre;
    cout<<"APELLIDO ";
    cin>>apellido;
    cout<<"FECHA DE NACIMIENTO ";
    fechaNacimiento.Cargar();
    cout<<"EMAIL ";
    cin>>email;
    cout<<"CARRERA ";
    cin>>codigoCarrera;
}

void Alumno::Mostrar()
{
    cout<<"LEGAJO ";
    cout<<legajo<<endl;
    cout<<"NOMBRE ";
    cout<<nombre<<endl;
    cout<<"APELLIDO ";
    cout<<apellido<<endl;
    cout<<"FECHA DE NACIMIENTO "<<endl;
    fechaNacimiento.Mostrar();
    cout<<"EMAIL ";
    cout<<email<<endl;
    cout<<"CARRERA ";
    cout<<codigoCarrera<<endl;
}
int Alumno::getLegajo()
{
    return legajo;
}
void Alumno::setLegajo(int l)
{
    legajo=l;
}
