#include <iostream>
#include "Fecha.h"

using namespace std;



Fecha::Fecha(int d, int m, int a) {
        dia=d;
        mes=m;
        anio=a;

    }
void Fecha::Cargar(){ ///métodos o funciones de la clase
            int d;
            cout<<"DIA ";
            cin>>d;
            setDia(d);
            cout<<"MES ";
            cin>>mes;
            cout<<"ANIO ";
            cin>>anio;
            }
void Fecha::Mostrar() {
    cout<<this->dia<<"/"<<mes<<"/"<<anio<<endl;
    }
void Fecha::setDia(int dia) {
            if(dia>=1 &&dia<=31)this->dia=dia;
            else this->dia=0;
            }
void Fecha::setMes(int m) {
            mes=m;
            }
void Fecha::setAnio(int a) {
            anio=a;
            }
int Fecha::getDia() {
            return dia;
            }
int Fecha::getMes() {
            return mes;
            }
int Fecha::getAnio() {
            return anio;
            }
void Fecha::MostrarDireccion() {
            cout<<"QUE ES this? "<<this<<endl;
            cout<<"PUNTERO OCULTO QUE CONTIENE LA DIRECCION DEL OBJETO QUE LLAMA AL METODO"<<endl;

            }

Fecha::~Fecha() {
    //dtor
    }
