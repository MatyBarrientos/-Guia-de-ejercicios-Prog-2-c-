#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    Fecha fObj(28,2,2024);
    fObj.mostrarFecha();
    cout<<"----------------------------"<<endl;
    /*Fecha fecha2;
    fecha2.mostrarFecha();*/
    cout<<"----------------------------"<<endl;
    /*fObj.RestarDia();
    fObj.mostrarFecha();
    fObj.RestarDia();
    fObj.mostrarFecha();*/
    fObj.AgregarDia();
    fObj.mostrarFecha();
    fObj.AgregarDia();
    fObj.mostrarFecha();
    fObj.RestarDia();
    fObj.mostrarFecha();

    /*fObj.setAnio(2012);
    fObj.setDia(33);
    fObj.setMes(13);*/
    //fObj.mostrarFecha();
    return 0;
}
