#include <iostream>
#include <locale>
<<<<<<< HEAD

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
=======
/*
Hacer un programa que solicite al usuario 10 números y luego muestre primero
los números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada
caso: uno para almacenar los números positivos y otro para los números
negativos.
*/
void definirVector(int* &vec,int tam);
void cargarVector(int v[], int tam);
void mostarVector(int v[], int tam);
int cantNegativos(int v[], int tam);
void cargarNegativos(int vecCompleto[], int tamV, int vecNegativo[]);
int cantPositivos(int v[], int tam);
void cargarPositivos(int vecCompleto[], int tamV, int vecPositivo[]);
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    int *vCompleto=nullptr,*vPositivos=nullptr,*vNegativos=nullptr;
    int tamCompleto=0,tamPositivos=0,tamNegativos=0;

    cout<<"Ingrese la cantidad de valores para tu vector de enteros: "<<endl;
    cin>>tamCompleto;

    definirVector(vCompleto,tamCompleto);

    cargarVector(vCompleto,tamCompleto);

    //definimos el tam de los vectores de pos++ y neg--//

    tamPositivos=cantPositivos(vCompleto,tamCompleto);
    tamNegativos=cantNegativos(vCompleto,tamCompleto);

    //pasamos a crear ambos vectores//


    definirVector(vPositivos,tamPositivos);
    definirVector(vNegativos,tamNegativos);

    //cargamos cada vector
    cargarPositivos(vCompleto,tamCompleto,vPositivos);
    cargarNegativos(vCompleto,tamCompleto,vNegativos);

    //mostramos cada unos de los vectores


    system("cls");
    cout<<"Vector completo: "<<endl;
    mostarVector(vCompleto,tamCompleto);
    cout<<"Vector de negativos. "<<endl;
    mostarVector(vNegativos,tamNegativos);
    cout<<"Vector de positivo. "<<endl;
    mostarVector(vPositivos,tamPositivos);
    system("pause");




    delete []vCompleto;
    delete []vPositivos;
    delete []vNegativos;
    vCompleto=nullptr;
    vPositivos=nullptr;
    vNegativos=nullptr;
    return 0;
    }
void definirVector(int* &vec, int tam) {
    vec=new int [tam];
    if(vec==nullptr) {
        cout<<"Vector el vector no ha podido definir."<<endl;
        //return -1;
        }
    else {
        cout<<"El vector ha sido definido correctamente."<<endl;
        system("pause");
        }
    }
void cargarVector(int v[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese un valor :";
        cin>>v[i];
        }
    }
void mostarVector(int v[], int tam) {
>>>>>>> 861240061502e9ded7cc861d7030f098b3ccea6e
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }
<<<<<<< HEAD
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
=======

int cantNegativos(int v[], int tam) {
    int i, cantidad=0;

    for(i=0; i<tam; i++) {
        if (v[i]<0) {
            cantidad++;
            }
        }
    return cantidad;
    }
void cargarNegativos(int vecCompleto[], int tamV, int vecNegativo[]) {
    int i,j=0;
    for (i=0; i<tamV; i++) {
        if(vecCompleto[i]<0) {
            vecNegativo[j]=vecCompleto[i];
>>>>>>> 861240061502e9ded7cc861d7030f098b3ccea6e
            j++;
            }
        }
    }
<<<<<<< HEAD

void cargarNegativos(int *vE, int tam, int *vN) {
    int i,j=0;
    for (i=0; i<tam; i++) {
        if(vE[i]<0) {
            vN[j]=vE[i];
=======
int cantPositivos(int v[], int tam) {
    int i, cantidad=0;

    for(i=0; i<tam; i++) {
        if (v[i]>0) {
            cantidad++;
            }
        }
    return cantidad;
    }

void cargarPositivos(int vecCompleto[], int tamV, int vecPositivo[]) {
    int i,j=0;
    for (i=0; i<tamV; i++) {
        if(vecCompleto[i]>0) {
            vecPositivo[j]=vecCompleto[i];
>>>>>>> 861240061502e9ded7cc861d7030f098b3ccea6e
            j++;
            }
        }
    }
<<<<<<< HEAD

=======
>>>>>>> 861240061502e9ded7cc861d7030f098b3ccea6e
