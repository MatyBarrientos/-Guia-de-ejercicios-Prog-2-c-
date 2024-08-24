#include <iostream>
#include <locale>

using namespace std;
/**
1) Generar un vector dinámico de enteros con un tamaño que definido por un valor que se
ingresa por teclado. Hacer un menú con funciones para cargarlo y mostrarlo por pantalla.
2) Dado un vector (estático) de enteros ya cargado, generar un nuevo vector (dinámico) con los
valores pares contenidos en el vector original. Si el vector original no contiene valores pares
informarlo mediante un cartel.
3) Dado un vector (estático) de enteros ya cargado, generar un nuevo vector (dinámico) con los
valores positivos contenidos en el vector original. Si el vector original no contiene valores
positivos informarlo mediante un cartel.
*/

void mostrarMenu();
void cargarVector(int v[], int tam);
void mostarVector(int v[], int tam);
int cantPares(int v[], int tam);
void cargarPares(int vecUno[], int tamVecUno, int vecPares[]);
int cantPositivos(int v[], int tam);
void cargarPositivos(int vecUno[], int tamVecUno, int vecPares[]);

int main() {
    setlocale(LC_ALL,"");

    ///Variable
    int opcion=1;
    ////declaración de las variables (tamaño de arreglo)
    int *vComp=nullptr; //puntero declarado
    int *vPares=nullptr; //puntero declarado de Vectores Pares
    int *vPositivos=nullptr; //puntero declarado de Vectores Positivos
    int cantComponentes=0,tamVpares=0,tamVpos=0;

    while(opcion!=0) {
        mostrarMenu();
        cin>>opcion;
        switch(opcion) {
            case 1:
                cout<<"Ingrese la cantidad componentes del arreglo: ";
                cin>>cantComponentes; //tamaño del arreglo
                vComp=new int [cantComponentes];
                if (vComp==nullptr) {
                    cout<<"Error de asignación de Memoria"<<endl;
                    return -1;
                    }
                break;
            case 2:
                cargarVector(vComp, cantComponentes);
                cout<<"Vector cargado correctamente"<<endl;
                system("pause");
                break;
            case 3:
                mostarVector(vComp, cantComponentes);
                system("pause");
                break;
            case 4:
                tamVpares=cantPares(vComp, cantComponentes);
                cout<<"El vector de pares está compuesto por "<<tamVpares<<" valor/es"<<endl;
                system("pause");
                vPares=new int [tamVpares];
                if (vPares==nullptr) {
                    cout<<"Error de asignación de Memoria"<<endl;
                    return -1;
                    }
                break;
            case 5:
                if(tamVpares==0) {
                    cout<<"No hay nada que mostrar por aquí."<<endl;
                    system("pause");
                    }
                else {
                    cargarPares(vComp,cantComponentes,vPares);
                    cout<<"Vector cargado correctamente"<<endl;
                    mostarVector(vPares,tamVpares);
                    system("pause");
                    }
                break;
            case 6:
                tamVpos=cantPositivos(vComp, cantComponentes);
                cout<<"El vector de positivos está compuesto por "<<tamVpos<<" valor/es"<<endl;
                system("pause");

                vPositivos=new int [tamVpos];
                if (vPositivos==nullptr) {
                    cout<<"Error de asignación de Memoria"<<endl;
                    return -1;
                    }
                break;
            case 7:
                if(tamVpos==0) {
                    cout<<"No hay nada que mostrar por aquí."<<endl;
                    system("pause");

                    }
                else {
                    cargarPositivos(vComp,cantComponentes,vPositivos);
                    cout<<"Vector cargado correctamente"<<endl;
                    mostarVector(vPositivos,tamVpos);
                    system("pause");
                    }
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Ingrese una opcion correcta." << endl;
                system("pause");
                break;
            }
        }
    delete []vComp;///devuelve la memoria pedida
    delete []vPares;///devuelve la memoria pedida
    delete []vPositivos;///devuelve la memoria pedida

    return 0;
    }



void mostrarMenu() {
    system("cls");
    cout<<" ---- Memoria dinámica ---- "<<endl;
    cout<<" 1 - Ingresar la cantidad de componentes "<<endl;
    cout<<" 2 - Cargar datos del vector "<<endl;
    cout<<" 3 - Mostrar vector Nro 1"<<endl;
    cout<<" 4 - Definir el tamaño del vector de pares"<<endl;
    cout<<" 5 - Mostrar Vector de pares"<<endl;
    cout<<" 6 - Definir el tamaño del vector de positivos"<<endl;
    cout<<" 7 - Mostrar Vector de positivos"<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
    }

void cargarVector(int v[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese un valor :";
        cin>>v[i];
        }
    }
void mostarVector(int v[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }

int cantPares(int v[], int tam) {
    int i, cantidad=0;

    for(i=0; i<tam; i++) {
        if (v[i]%2==0) {
            cantidad++;
            }
        }
    return cantidad;
    }
void cargarPares(int vecUno[], int tamVecUno, int vecPares[]) {
    int i,j=0;
    for (i=0; i<tamVecUno; i++) {
        if(vecUno[i]%2==0) {
            vecPares[j]=vecUno[i];
            j++;
            }
        }
    }
int cantPositivos(int v[], int tam) {
    int i, cantidad=0;

    for(i=0; i<tam; i++) {
        if (v[i]>0) {
            cantidad++;
            }
        }
    return cantidad;
    }

void cargarPositivos(int vecUno[], int tamVecUno, int vecPares[]) {
    int i,j=0;
    for (i=0; i<tamVecUno; i++) {
        if(vecUno[i]>0) {
            vecPares[j]=vecUno[i];
            j++;
            }
        }
    }

