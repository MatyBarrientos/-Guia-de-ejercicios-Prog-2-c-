#include <iostream>
#include <locale>

using namespace std;

/*Hacer un programa que solicite al usuario 10 números y luego muestre primero
los números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada
caso: uno para almacenar los números positivos y otro para los números
negativos.*/


void definirVector(int* &v, int &tam);
int cantPositivos(int *vE,int TAM);
int cantNegativos(int *vE, int TAM);
void cargarVector(int *v, int tam);
void cargarPositivos(int *vE, int tam, int *vP);
void cargarNegativos(int *vE, int tam, int *vN);
void mostarVector(int *v, int tam);

int main() {
    setlocale(LC_ALL,"");
    const int TAM=10;
    int vEnteros[TAM]= {0};

    int cPositivos=0,cNegativos=0;
    int *pP=nullptr, *pN=nullptr;

    cout<<"Cargando vector: "<<endl;
    cargarVector(vEnteros,TAM);

    cPositivos=cantPositivos(vEnteros,TAM);
    cNegativos=cantNegativos(vEnteros,TAM);

    if(cPositivos!=0) {
        definirVector(pP, cPositivos);
        }
    if(cNegativos!=0) {
        definirVector(pN, cNegativos);
        }

    cargarPositivos(vEnteros, TAM, pP);
    cargarNegativos(vEnteros, TAM, pN);

    system("pause");
    system("cls");
    cout<<"Vector de Enteros"<<endl;
    mostarVector(vEnteros,TAM);
    cout<<"Vector de Positivos"<<endl;
    mostarVector(pP, cPositivos);
    cout<<"Vector de Negativos"<<endl;
    mostarVector(pN,cNegativos);

    return 0;
    }


void definirVector(int* &v, int &tam) {

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
int cantPositivos(int *vE,int TAM) {
    int i,contador=0;
    for (i=0; i<TAM; i++) {
        if(vE[i]>0)
            contador++;
        }
    return contador;
    }
int cantNegativos(int *vE, int TAM) {
    int i,contador=0;
    for (i=0; i<TAM; i++) {
        if(vE[i]<0)
            contador++;
        }
    return contador;
    }

void cargarPositivos(int *vE, int tam, int *vP) {
    int i,j=0;
    for (i=0; i<tam; i++) {
        if(vE[i]>0) {
            vP[j]=vE[i];
            j++;
            }
        }
    }

void cargarNegativos(int *vE, int tam, int *vN) {
    int i,j=0;
    for (i=0; i<tam; i++) {
        if(vE[i]<0) {
            vN[j]=vE[i];
            j++;
            }
        }
    }

