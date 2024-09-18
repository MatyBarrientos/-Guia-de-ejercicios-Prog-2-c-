#include "Fecha.h"

///fin de la definición de la clase
///desarrollo de los métodos

Fecha::Fecha(const int d,const int m,const int a)
{
    dia=d;
    mes=m;
    anio=a;
}
void Fecha::Cargar()
{
    int d;
    cout<<"DIA ";
    cin>>d;
    setDia(d);
    cout<<"MES ";
    cin>>mes;
    cout<<"ANIO ";
    cin>>anio;
}

void Fecha::Mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
Fecha::~Fecha()
{
    //dtor
}
