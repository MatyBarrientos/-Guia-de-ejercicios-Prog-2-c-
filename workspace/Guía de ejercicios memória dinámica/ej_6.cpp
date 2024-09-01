#include <iostream>
#include <locale>

/*Escribe un programa que solicite al usuario ingresar una lista de 10 números
enteros. Luego, el programa debe mostrar los números pares distintos que se
ingresaron. Para resolver este ejercicio, deberás implementar una función que
reciba un vector de enteros y su tamaño, y que devuelva un puntero a un vector
dinámico que contenga solo los números pares distintos del vector recibido.*/

void definirVector(int* &v, int tam);
void cargarVector(int *v, int tam);
void mostarVector(int *v, int tam);
void ordenarVectorAsc(int *v, int tam);
int* copiarPares(int *v, int tam);
int cantParesNoreps(int *v,int tam);

using namespace std;
int main()
{
    setlocale(LC_ALL,"");

    int *vPares=nullptr;
    int tamPares=0;

    const int TAM=10;
    int vecEnteros[TAM];

    cargarVector(vecEnteros,TAM);
    cout<<"Muestro mi vector original"<<endl;
    mostarVector(vecEnteros,TAM);
    ordenarVectorAsc(vecEnteros,TAM);
    cout<<"Muestro el vector ordenado"<<endl;
    mostarVector(vecEnteros,TAM);

    cout<<"----------------------------------"<<endl;

    cout<<"Comienzo a definir y construir mi vector de pares."<<endl;

    vPares=copiarPares(vecEnteros,TAM);
    tamPares=cantParesNoreps(vecEnteros,TAM);
    cout<<"Muestro mi vector de pares"<<endl;
    mostarVector(vPares,tamPares);



    delete []vPares;
    vPares=nullptr;
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

int* copiarPares(int *v, int tam){

    int *vP=nullptr;
    definirVector(vP,cantParesNoreps(v,tam));

    int i,j=0;
    for(i=0;i<tam;i++){
        if(v[i]%2==0 && (i==0 || v[i-1]!=v[i])){
            vP[j]=v[i];
            j++;
        }
    }
    return vP;
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

int cantParesNoreps(int *v,int tam){
    int i, cantidad=0;
//solo funciona con vectores ordenados.
    for(i=0;i<tam;i++){
        if(v[i]%2==0 && (i==0 || v[i-1]!=v[i])){
            cantidad++;
        }
    }
    return cantidad;
}