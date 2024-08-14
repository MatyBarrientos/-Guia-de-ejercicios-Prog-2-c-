#include <iostream>
#include <locale>

using namespace std;

void mostrarMenu();
void cargarVector(int v[], int tam);
void mostarVector(int v[], int tam);
int cantPares(int v[], int tam);
void cargarPares(int vecUno[], int tamVecUno, int vecPares[], int tamVecPares);

int main()
{
    setlocale(LC_ALL,"");
    ///Variable
    int opcion=1;
    ////declaración de las variables (tamaño de arreglo)

    int *vComp; //puntero declarado
    int *vPares; //puntero declarado de Vectores Pares
    int cantComponentes,tamVpares;

    while(opcion!=0)
    {
        mostrarMenu();
        cin>>opcion;
        switch(opcion)
        {
        case 1:
            cout<<"Ingrese la cantidad componentes del arreglo: ";
            cin>>cantComponentes; //tamaño del arreglo
            vComp=new int [cantComponentes];
            if (vComp==NULL)
            {
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
            cout<<"Vector definido correctamente. "<<endl;
            cout<<"El vector de pares está compuesto por: "<<tamVpares<<" valores"<<endl;
            system("pause");

            vPares=new int [tamVpares];
            if (vPares==NULL)
            {
                cout<<"Error de asignación de Memoria"<<endl;
                return -1;
            }
            break;
        case 5:

            cargarPares(vComp,cantComponentes,vPares,tamVpares);
            cout<<"Vector cargado correctamente"<<endl;
            system("pause");
            mostarVector(vPares,tamVpares);
            system("pause");
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


    /////////////////////////llamadas a la funcion.


    return 0;
}

void mostrarMenu()
{
    system("cls");
    cout<<" ---- Memoria dinámica ---- "<<endl;
    cout<<" 1 - Ingresar la cantidad de componentes "<<endl;
    cout<<" 2 - Cargar datos del vector "<<endl;
    cout<<" 3 - Mostrar vector Nro 1"<<endl;
    cout<<" 4 - Definir el tamaño del vector de pares"<<endl;
    cout<<" 5 - Mostrar Vector de pares"<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
}

void cargarVector(int v[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        cout<<"Ingrese un valor :";
        cin>>v[i];
    }
}
void mostarVector(int v[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        cout<<"["<<v[i]<<"] ";
    }
    cout<<endl;
}

int cantPares(int v[], int tam)
{
    int i, cantidad=0;

    for(i=0; i<tam; i++)
    {
        if (v[i]%2==0)
        {
            cantidad++;
        }
    }
    return cantidad;
}
void cargarPares(int vecUno[], int tamVecUno, int vecPares[], int tamVecPares)
{
    int i,j=0;
    for (i=0; i<tamVecUno; i++)
    {
        if(vecUno[i]%2==0)
        {
            vecPares[j]=vecUno[i];
            j++;
        }
    }
}


