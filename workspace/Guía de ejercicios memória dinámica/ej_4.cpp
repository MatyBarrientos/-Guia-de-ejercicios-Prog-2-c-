#include <iostream>
#include <locale>

using namespace std;

/**
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la
cantidad de números distintos que se repiten en el vector.
*/

void definirVector(int* &v, int &tam); //para crear un vector dinamico en una funcion hay que pasar un puntero por referencia
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
int cantRepetidos(int *v, int tam);


int main() {
    setlocale(LC_ALL,"");

    int *vEntero=nullptr;
    int tam=0, repetidos=0;

    definirVector(vEntero,tam);
    cargarVector(vEntero,tam);
    mostarVector(vEntero,tam);

    repetidos=cantRepetidos(vEntero,tam);

    cout<<"Cantidad de repetidos: "<<repetidos<<endl;




    return 0;
    }
int cantRepetidos(int *v, int tam) {
    int i,j,cantidad=0;
    for(i=0; i<tam-1; i++) {
        for(j=i+1;j<tam;j++){
            if(v[i]==v[j]){
                cantidad++;
            }
        }
        }
        return cantidad;
    }


void definirVector(int* &v, int &tam) {
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tam;
    v=new int [tam];
    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        }
    else {
        cout<<"Vector creado correctamente."<<endl;
        }
    }

void cargarVector(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese el valor "<<i+1 <<":";
        cin>>v[i];
        }
    }


void mostarVector(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }
