#include <iostream>
#include <locale>

/*Hacer una función que reciba un vector de enteros y su tamaño y luego muestre
el vector ordenado de forma ascendente, tener en cuenta que el vector enviado
como argumento no debe ser modificado.*/

void definirVector(int* &v, int tam);
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
void copiarVector(int *v, int tam,int *vC);
void ordenarVectorAsc(int *v, int tam);

using namespace std;
int main()
{
    setlocale(LC_ALL,"");
int *vecEntero=nullptr, *vecOrdenado=nullptr;

int tamVecEntero=0;

cout<<"Ingrese el tamaño del vector de enteros: ";
cin>>tamVecEntero;

definirVector(vecEntero, tamVecEntero);
definirVector(vecOrdenado, tamVecEntero);

cargarVector(vecEntero, tamVecEntero);
cout<<"Vector original."<<endl;
mostarVector(vecEntero, tamVecEntero);
cout<<"comienzo a definir mi vector Ordenado."<<endl;
copiarVector(vecEntero,tamVecEntero,vecOrdenado);
mostarVector(vecOrdenado, tamVecEntero);
cout<<"vector copia ordenado ascendentemente..."<<endl;
ordenarVectorAsc(vecOrdenado,tamVecEntero);
mostarVector(vecOrdenado, tamVecEntero);
cout<<"un poco de feedback y muestro por las dudas mi vector original."<<endl;
mostarVector(vecEntero,tamVecEntero);



delete[] vecEntero;
delete[] vecOrdenado;


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
void copiarVector(int *v, int tam,int *vC){
    int i;
    for(i=0;i<tam;i++){
        vC[i]=v[i];
    }
}
void ordenarVectorAsc(int *v, int tam) {
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
