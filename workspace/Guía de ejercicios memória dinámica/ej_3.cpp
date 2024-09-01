#include <iostream>
#include <locale>

using namespace std;

/*
Hacer un programa que solicite al usuario 10 números y luego muestre primero
los números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada
caso: uno para almacenar los números positivos y otro para los números
negativos.
*/
void definirVector(int* &vec,int tam);
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
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

