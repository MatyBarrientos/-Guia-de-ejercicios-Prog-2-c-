#include <iostream>
#include <locale>

using namespace std;

struct bisiesto{
char anio[6];
};
struct fecha {
    int dia;
    char codigo;
    string mes;
    bisiesto muestra;
    };

int main() {
    setlocale(LC_ALL,"");
    fecha prueba;
    prueba.dia=10;
    prueba.codigo='b';
    prueba.mes="Julio";
    cout<<"es biciesto?: ";
    cin.getline(prueba.muestra.anio,6);

    cout<<"dia: "<<prueba.dia<<endl;
    cout<<"codigo: "<<prueba.codigo<<endl;
    cout<<"mes: "<<prueba.mes<<endl;
    cout<<"es biciesto: "<<pma<<endl;
    return 0;
    }
