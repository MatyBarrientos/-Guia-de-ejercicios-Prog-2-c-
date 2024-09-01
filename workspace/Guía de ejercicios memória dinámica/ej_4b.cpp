#include <iostream>
#include <locale>

using namespace std;

/**
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la
cantidad de números distintos que se repiten en el vector.
*/

void definirVector(int* &v, int tam); //para crear un vector dinamico en una funcion hay que pasar un puntero por referencia
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
int cantRepetidos(int *v, int tam);
void ordenarVector(int *v, int tam);


int main() {
    setlocale(LC_ALL,"");

    int *vEntero=nullptr;
    int tam, repetidos=0;

    cout<<"Ingrese el tamaño del vector: ";
    cin>>tam;

    definirVector(vEntero,tam);
    cargarVector(vEntero,tam);
    mostarVector(vEntero,tam);
    cout<<"Vector ordenado...."<<endl;
    ordenarVector(vEntero,tam);
    mostarVector(vEntero,tam);

    repetidos=cantRepetidos(vEntero,tam);

    cout<<"Cantidad de repetidos: "<<repetidos<<endl;




    return 0;
    }

void definirVector(int* &v, int tam) {
    v=new int [tam];
    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        exit(-1);
        }
    else {
        cout<<"Vector creado correctamente."<<endl;
        }
    }

void cargarVector(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese el valor "<<i+1 <<": ";
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


int cantRepetidos(int *v, int tam) {
    int i,j=1,cantidad=0;

    for(i=0; i<tam-1; i++) {
        if((v[i]==v[i+1]) && ((i==0) || (v[i-1]!=v[i]))) {
            cantidad++;
            }
        }
    return cantidad;
    }




void ordenarVector(int *v, int tam) {
    int i, j;
    int aux, posMin;
    for(i=0; i<tam-1; i++) {
        posMin=i;
        for(j=i+1; j<tam; j++) {
            if(v[j]<v[posMin]) {
                posMin=j;
                }
            }
        aux=v[i];
        v[i]=v[posMin];
        v[posMin]=aux;
        }
    }
