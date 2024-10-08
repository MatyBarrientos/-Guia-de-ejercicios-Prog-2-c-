#include <iostream>
#include <locale>

using namespace std;

/**
Hacer una funci�n que reciba un vector de enteros y su tama�o y devuelva la
cantidad de n�meros distintos que se repiten en el vector.
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

void definirVector(int* &v, int &tam) {
    cout<<"Ingrese el tama�o del vector: ";
    cin>>tam;
    v=new int [tam];
    if (v==nullptr) {
        cout<<"Error de asignaci�n de Memoria"<<endl;
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
    int cantidad = 0;

    for(int i = 0; i < tam - 1; i++) {
        bool bandera = false;

        // a verificar si ya lo cont�
        for(int k = 0; k < i; k++) {
            if(v[i] == v[k]) {
                bandera = true; //tengo ocurrencia
                break; // hago un corte y salgo
            }
        }

        if (!bandera) {
            //si no lo cont� anteriormente, arranco con fuerza
            for(int j = i + 1; j < tam; j++) {
                if(v[i] == v[j]) {
                    cantidad++;
                    break; // si encuentro una ocurrencia, lo corto (despu�s de aumentar mi contador)
                }
            }
        }
    }

    return cantidad;
}
