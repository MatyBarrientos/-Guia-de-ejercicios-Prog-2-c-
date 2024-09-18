#pragma once
#include <iostream>

using namespace std;
class Fecha
{
private:
    int dia, mes, anio;
public:
    Fecha(int d=0, int m=0, int a=0);

    void Cargar();
    void Mostrar(void);
    ///setter
    void setDia(int dia)
    {
        if(dia>=1 &&dia<=31)this->dia=dia;
        else this->dia=0;
    }
    void setMes(const int m)
    {
        mes=m;
    }
    void setAnio(int a)
    {
        anio=a;
    }
    ///getter
    int getDia()
    {
        return dia;
    }
    int getMes()
    {
        return mes;
    }
    int getAnio()
    {
        return anio;
    }
    virtual ~Fecha();
};
