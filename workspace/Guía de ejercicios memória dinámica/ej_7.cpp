#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void menu();
void definirVectorEntero(int* &v, int tam);
void definirVectorChar(char** &v, int tam);
void cargarVectorMin(int *v, int tam);
void cargarVectorChar(char** v, int tam);
void mostarVector(int *v, int tam);
void mostarVectorChar(char** v, int tam);
int coincidencia(char** v,int tam);

void ordenarVector(int *v, int tam);
void vectorCero(int *v,int tam);

int main() {

    int *vEntero=nullptr, *vMin=nullptr;
    char **vChar=nullptr;
    int tam, opcion,prueba;
    cout<<"Ingrese la cantidad de libros a ingresar: "<<endl;
    cin>>tam;

    definirVectorEntero(vMin,tam);
    vectorCero(vMin,tam);
    definirVectorChar(vChar,tam);

    cargarVectorChar(vChar,tam);

    mostarVectorChar(vChar,tam);
    prueba=coincidencia(vChar,tam);
    if(prueba==0) {
        cout<<"El libro no existe"<<endl;
        }
    else {
        cout<<"Ingrese la cantidad de minutos que se fueron destinados a la lectura: ";
        cin>>vMin[prueba];
        }
    ordenarVector(vMin,tam);
    mostarVector(vMin,tam);









    delete []vEntero;
    delete []vChar;
    delete []vMin;
    return 0;
    }

void menu() {

    cout<<"Gestion de Biblioteca. "<<endl;
    cout<<" 1 - Mostrar listado de libros"<<endl;
    cout<<" 2 - Mostrar tiempo de lectura de un libro. "<<endl;
    cout<<" 3 - Mostrar ranking de los más leídos"<<endl;
    cout<<" 4 - Salir del programa."<<endl;
    cout<<" Ingrese su opción: "<<endl;
    }

void definirVectorEntero(int* &v, int tam) {
    v=new int [tam];
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

void definirVectorChar(char** &v, int tam) {
    v=new char*[tam];
    for(int i=0; i<tam; i++) {
        v[i]=new char[25];
        }

    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        exit(-1);
        }
    else {
        cout<<"Vector creado correctamente."<<endl;
        }
    }

void cargarVectorMin(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese el valor "<<i+1 <<": ";
        cin>>v[i];
        }
    }
void cargarVectorChar(char** v, int tam) {
    int i;
    cin.ignore();
    for (i=0; i<tam; i++) {
        cout<<"Ingrese el nombre del libro número "<<i+1 <<": ";
        cin.getline(v[i],25);

        }
    }

void mostarVector(int *v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }
void mostarVectorChar(char** v, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Libro Nro "<<i+1<<": "<<v[i]<<endl;
        }
    }
int coincidencia(char** v,int tam) {
    int i;
    char nombre[25];
    cout<<"Buscar coincidencia: ";
    cin.getline(nombre,25);


    for(i=0; i<tam; i++) {
        if(strcmp(v[i],nombre)==0) {
            return i;
            }
        }
    return 0;
    }

void ordenarVector(int *v, int tam) {
    int i, j;
    int aux, posMax;
    for (i = 0; i < tam - 1; i++) {
        posMax = i;
        for (j = i + 1; j < tam; j++) {
            if (v[j] > v[posMax]) {
                posMax = j;
                }
            }
        aux = v[i];
        v[i] = v[posMax];
        v[posMax] = aux;
        }
    }
