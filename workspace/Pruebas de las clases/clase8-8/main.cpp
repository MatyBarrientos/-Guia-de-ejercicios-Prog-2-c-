#include <iostream>
#include "funciones.h"
#include <cstdlib>

using namespace std;
void cargarVector(float v[], int TAM);

int main()
{
    ///DECLARACION DEL ITERADOR
    int i, j, x, y;

    ///DECLARACION DE LA MATRIZ PUNTO C
    int matrizCantMarzo[10][31]= {0};

    ///DECLARACION DE LAS VARIABLES DE CONTROL
    int legajo, materia, dia, mes;
    float horas;

    ///declaracion de contador 'a'
    int contadorAcceso=0;

    ///PUNTO A
    float vCantHoras[10]= {0};


    ///PUNTO B
    float cantHoras = 0;
    int materiaMaxHora=0;

    ///INGRESO DE LEGAJO
    cout << "Ingrese el numero de Legajo: " << endl;
    cin >> legajo;

    ///PRIMER CICLO INEXACTO
    while (legajo != 0)
    {
        ///INGRESO DE DATOS FUNCIONALES
        cout << "Ingrese el dia: " << endl;
        cin >> dia;

        cout << "Ingrese el mes: " << endl;
        cin >> mes;

        cout << "Ingrese el numero de materia: " << endl;
        cin >> materia;

        cout << "Ingrese la cantidad de horas: " << endl;
        cin >> horas;

        ///ACUMULADOR DE HORAS
        vCantHoras[materia-1]+=horas;
        cout << "valor acumulador: " << vCantHoras[materia-1] << endl;

        ///VARIABLE DE CORTE
        cout << "Ingrese nuevamente el numero de legajo: " << endl;
        cin >> legajo;
    }

    ///PUNTO A RESPUESTA
    cargarVector(vCantHoras, 10);

    for (i = 0 ; i < 10 ; i++)
    {
        if (vCantHoras[i] == 0)
        {
            cout << "LA MATERIA: " << i+1 << " NO TUVO ACCESOS DE ALUMNOS" << endl;
        }

        if (vCantHoras[i]!=0)
        {
            contadorAcceso++;
            //cout << "LA MATERIA: " << i+1 << " TUVO ACCESOS DE ALUMNOS" << endl;

        }
        if (vCantHoras[i] > cantHoras)
        {
            materiaMaxHora = i;
        }
    }
    ///EGRESO DE DATOS PUNTO B
    cout << "La materia con mas cantidad de horas registradas es: " << materiaMaxHora << endl;

    ///PUNTO C

    if (mes == 3)
    {
        matrizCantMarzo[materia-1][dia-1]++;
    }

    for ( y = 0 ; y < 10 ; y++)
    {
        for ( x = 0 ; x < 31 ; x++ )
        {
            cout << "estas en la materia: ["<<y+1<<"]"<< endl;
            cout << "estas en el dia: ["<<x+1<<"]"<< endl;
            cout << "cantidad de alumnos: " << matrizCantMarzo[y][x] << endl;

        }
    }

    /// Punto D

    cout<<"La cantidad de materias con acceso fueron en total "<<contadorAcceso<<endl;

    return 0;
}

void cargarVector(float v[], int TAM)
{
    int i;
    for (i=0; i<TAM; i++)
    {
        cout<<"Ingrese un valor: ";
        cin>>v[i];
    }
}
