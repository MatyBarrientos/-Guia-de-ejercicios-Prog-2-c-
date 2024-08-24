#include <iostream>
#include <locale>

using namespace std;
/*
Crear un programa que contenga un men� con las siguientes opciones:
1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos
que va a cargar, posteriormente se solicitara cuales son dichos n�meros para
almacenarlos en un vector utilizando asignaci�n din�mica de memoria.
2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por
pantalla.
3- Salir: Sale del programa (no olvidar liberar la memoria)
Pista: Recordar que se puede inicializar un puntero con el valor nullptr
*/
void menu(int* &v, int &tam, int &opcion);
void mostrarMenu();
int definirVector(int* &v, int &tam);
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);

int main() {
    setlocale(LC_ALL,"");
    int *valores=nullptr;
    int tam=0, opcion=1;

    menu(valores,tam,opcion);

    if(valores!=nullptr){
        delete []valores;
    }
///compruebo que se ejecute el []delete
    return 0;
    }

void menu(int* &v, int &tam, int &opcion) {
    while(opcion!=0) {
        mostrarMenu();
        cin>>opcion;
        switch (opcion) {
            case 1:
                system("cls");
                definirVector(v,tam);
                cout<<"Vector din�mico creado con �xito."<<endl;
                system("pause");

                system("cls");
                cargarVector(v,tam);
                system("pause");
                break;
            case 2:
                system("cls");
                if (v == nullptr) {//voy a comprobar que se ejecute la asignaci�n de memoria
                    cout << "El vector no ha sido creado a�n." << endl;
                    }
                else {
                    cout << "Vector creado previamente: ";
                    mostarVector(v, tam);
                    }
                system("pause");
                break;
            case 0:
                cout<<"Saliendo del programa. "<<endl;
                delete []v;
                v=nullptr;
                break;
            }
        }
    }

void mostrarMenu() {
    system("cls");
    cout<<" ---- Memoria din�mica ---- "<<endl;
    cout<<" 1 - Definir tama�o y cargar vector din�mico "<<endl;
    cout<<" 2 - Mostrar vector din�mico"<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
    }

int definirVector(int* &v, int &tam) {
    cout<<"Ingrese el tama�o del vector: ";
    cin>>tam;
    v=new int [tam];
    if (v==nullptr) {
        cout<<"Error de asignaci�n de Memoria"<<endl;
        return -1;
        }
    return 0;
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
