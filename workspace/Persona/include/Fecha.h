#pragma once

//using namespace std;

class Fecha
{
    private:
        int dia,mes,anio;
    protected:

    public:
        Fecha(int d=0, int m=0, int a=0);
        void Cargar();
        void Mostrar();
        void setDia(int dia);
        void setMes(int m);
        void setAnio(int a);
        int getDia();
        int getMes();
        int getAnio();
        void MostrarDireccion();



        virtual ~Fecha();




};


