#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

void cargarVector(char v[], int tam);
void mostarVector(char v[], int tam);

int main() {
    setlocale(LC_ALL,"");

    int tamanio;
    char *vCharD=nullptr;
    //primera cadena estática
    char cadena1[20];
    cout<<"Ingrese la 1era frase (menos de 20 caracteres): ";
    //fflush(stdin);
    cin.getline(cadena1,20);

    //segunda cadena estática
    char cadena2[20];
    cout<<"Ingrese la 2era frase (menos de 20 caracteres): ";
    //fflush(stdin);
    cin.getline(cadena2,20);

    //Dimension de mi vector dinámico
    tamanio=strlen(cadena2)+strlen(cadena1);
    //Un poco de feedback
    cout<<"El tamaño de mi vector nro1 de caracteres es de: "<<strlen(cadena1)<<endl;
    cout<<"El tamaño de mi vector nro2 de caracteres es de: "<<strlen(cadena2)<<endl;

    vCharD=new char[tamanio+2]; //el tam es +2 ya que estoy considerando el caracter vacio o nulo '\o' y el espacio vacio para concatenar;
    if (vCharD==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        return -1;
        }
    //comienzo a concatenar los vectores;
    strcat(vCharD,cadena1);
    strcat(vCharD," ");
    strcat(vCharD,cadena2);
    //muestro mis vectores concatenados en uno final y dinámico
    cout<<"Frase concatenada: "<<endl;
    cout<<vCharD<<endl;
    cout<<"El tamaño de mi vector concatenado es de: "<<strlen(vCharD)<<endl;

    delete[]vCharD;
    vCharD=nullptr;

    return 0;
    }


void cargarVector(char v[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"Ingrese un valor :";
        cin>>v[i];
        }
        cin.ignore();
    }

void mostarVector(char v[], int tam) {
    int i;
    for (i=0; i<tam; i++) {
        cout<<"["<<v[i]<<"] ";
        }
    cout<<endl;
    }
