#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int definirTam(char v1[],char v2[]);
int definirVector(char* &v, int &tam);
void concatenarVector(char *vD, int tam,char *v1,char *v2,int opc);
void mostarVector(char *v);

int main() {
    setlocale(LC_ALL,"");

    int tamanio=2, opcion=1;
    char *vCharD=nullptr;
    //primera cadena estática
    char cadena1[20];
    cout<<"Ingrese la 1era frase (menos de 20 caracteres): ";
    cin.getline(cadena1,20);

    //segunda cadena estática
    char cadena2[20];
    cout<<"Ingrese la 2era frase (menos de 20 caracteres): ";
    cin.getline(cadena2,20);

    tamanio += definirTam(cadena1,cadena2);


    definirVector(vCharD,tamanio);

    cout<<"Establezca la opción de la frase (1-normal/2-invertido) ";
    cin>>opcion;

    concatenarVector(vCharD,tamanio,cadena1,cadena2,opcion);
    mostarVector(vCharD);
    system("pause");
    delete []vCharD;
    vCharD=nullptr;
    return 0;
    }
int definirTam(char v1[],char v2[]) {
    //Dimension de mi vector dinámico
    int tam;
    tam=(strlen(v1)+strlen(v2));
    //Un poco de feedback
    cout<<"El tamaño de mi vector nro1 de caracteres es de: "<<strlen(v1)<<endl;
    cout<<"El tamaño de mi vector nro2 de caracteres es de: "<<strlen(v2)<<endl;
    system("pause");
    system("cls");
    return tam;

    }


int definirVector(char* &vD, int &tam) {

    vD=new char [tam];
    if (vD==nullptr) {
        cout<<"Error de asignación de Memoria"<<endl;
        return -1;
        }
    else {
        cout<<"Vector dinámico creado con éxito."<<endl;
        system("pause");
        system("cls");
        }
    return 0;
    }
void concatenarVector(char *vD, int tam,char *v1,char *v2,int opc) {
    //comienzo a concatenar los vectores;
    if (opc==1) {
        strcat(vD,v1);
        strcat(vD," ");
        strcat(vD,v2);
        }
    else {
        strcat(vD,v2);
        strcat(vD," ");
        strcat(vD,v1);
        }
    }
void mostarVector(char *vD) {
    //muestro mis vectores concatenados en uno final y dinámico
    cout<<"Frase concatenada: "<<endl;
    cout<<vD<<endl;
    //cout<<"El tamaño de mi vector concatenado es de: "<<strlen(vD)<<endl;
    }
