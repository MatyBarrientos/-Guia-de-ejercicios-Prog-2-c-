#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void menu();
///Vector enteros
void definirVectorEntero(int* &v, int tam);
void cargarVectorMin(int *vI,string* vS, int tam);
void mostarVector(int *v, int tam);
void ordenarVector(string* vS,int *vI, int tam);
void vectorCero(int *v,int tam);
///Vector string
void definirVectorString(string* &v, int tam);
void cargarVectorString(string* v, int tam);
void mostarVectorString(string* v, int tam);
int coincidencia(string* v,int tam);
void ranking(string* copia,int* vI, int tam);
/////////
int main() {

    int *vEntero=nullptr, *vMin=nullptr;
    string *vChar=nullptr,*copia=nullptr;
    int tam, opcion=-1,prueba;

    cout<<"Ingrese la cantidad de libros a ingresar: ";
    cin>>tam;
    cin.ignore();

    definirVectorEntero(vMin,tam);
    definirVectorString(vChar,tam);
    definirVectorString(copia,tam);
    cargarVectorString(vChar,tam);

    for (int i=0; i<tam; i++) {
        copia[i]=vChar[i];
        }


    while(opcion!=4) {
        menu();
        cin>>opcion;
        switch(opcion) {
            case 1:
                mostarVectorString(vChar,tam);
                system("pause");
                system("cls");
                break;
            case 2:
                cin.ignore();
                cargarVectorMin(vMin,vChar,tam);
                system("pause");
                system("cls");
                break;
            case 3:
                ranking(copia,vMin,tam);
                system("pause");
                system("cls");
                break;
            case 4:
                cout<<"saliendo......."<<endl;
                break;
            default:
                cout<<"Error"<<endl;
                system("pause");
                system("cls");
                break;
            }
        }

    delete []copia;
    delete []vEntero;
    delete []vChar;
    delete []vMin;
    return 0;
    }

void menu() {

    cout<<"Gestion de Biblioteca. "<<endl;
    cout<<" 1 - Mostrar listado de libros"<<endl;
    cout<<" 2 - Ingresar el tiempo de lectura de un libro. "<<endl;
    cout<<" 3 - Mostrar ranking de los más leídos"<<endl;
    cout<<" 4 - Salir del programa."<<endl;
    cout<<" Ingrese su opción: ";
    }

void definirVectorEntero(int* &v, int tam) {
    v=new int [tam]();
    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        exit(-1);
        }
    else {
        cout<<"Vector creado correctamente."<<endl;
        }
    }

void vectorCero(int *v,int tam) {
    int i;
    for(i=0; i<tam; i++) {
        v[i]=0;
        }
    }

void cargarVectorMin(int *vI,string* vS,int tam) {
    int match;
    match=coincidencia(vS,tam);
    if(match!=-1) {
        cout<<"Ingrese la cantidad de minutos dedicado al libro: ";
        cin>>vI[match];
        }
    else {
        cout<<"No hay coincidencia"<<endl;
        }
    }

void mostarVector(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }

void ordenarVector(string* vS,int *vI, int tam) {
    int i, j;
    int aux, posMax;
    string auxS;
    for (i = 0; i < tam - 1; i++) {
        posMax = i;
        for (j = i + 1; j < tam; j++) {
            if (vI[j] > vI[posMax]) {
                posMax = j;
                }
            }
        aux = vI[i];
        auxS=vS[i];
        vI[i] = vI[posMax];
        vS[i]=vS[posMax];
        vI[posMax] = aux;
        vS[posMax]=auxS;
        }
    }
void definirVectorString(string* &v, int tam) {
    v=new string [tam];
    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        exit(-1);
        }
    else {
        cout<<"Vector creado correctamente."<<endl;
        }
    }
void cargarVectorString(string* v, int tam) {
    int i;
//cin.ignore();
    for (i=0; i<tam; i++) {
        cout<<"Ingrese el nombre del libro "<<i+1<<": ";
        getline(cin,v[i]);
        }
    }
void mostarVectorString(string* v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Libro nro "<<i+1<<": "<<v[i]<<endl;
        }
    }

int coincidencia(string* v,int tam) {
    int i;
    string nombre;
    cout<<"Buscar coincidencia: ";
    getline(cin,nombre);

    for(i=0; i<tam; i++) {
        //al usar strings puedo simplemente comparar los dos objetos
        if(v[i]==nombre) {
            return i;
            }
        }
    return -1;
    }
void ranking(string* copia,int* vI, int tam) {

    ordenarVector(copia,vI,tam);
    mostarVectorString(copia,tam);

    }
