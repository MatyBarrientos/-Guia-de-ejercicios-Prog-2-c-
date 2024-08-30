#include <iostream>
#include <locale>

/*1
Escribe un programa que solicite al usuario el tamaño de un array de enteros, lo
cree dinámicamente utilizando new, el usuario debe poder cargar el array y
mostrarlo, y luego libere la memoria con delete
*/

using namespace std;
int definirVector(int* &v, int &tam); //para crear un vector dinamico en una funcion hay que pasar un puntero por referencia
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
int main() {
    setlocale(LC_ALL,"");
    int *vEnteros=nullptr;
    int tam;

    if(definirVector(vEnteros,tam)!=0) {
        return -1;
        };
    cargarVector(vEnteros,tam);
    mostarVector(vEnteros,tam);

    delete []vEnteros;
    return 0;
    }

int definirVector(int* &v, int &tam) {
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tam;
    v=new int [tam];
    if (v==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        return -1;
        }
    return 0;
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
