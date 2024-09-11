#include <iostream>
#include "Fecha.h"
#include "PersonaClass.h"
#include "Alumno.h"

using namespace std;

int main() {
    /*Fecha p;

    PersonaClass personita;

    p.Cargar();

    personita.Cargar();

    cout<<"Solo son pruebitas..."<<endl;
    p.Mostrar();
    cout<<"----------------------------"<<endl;
    personita.Mostrar();*/

    Alumno aObj;
    aObj.Cargar();
    aObj.Mostrar();
    return 0;
}
