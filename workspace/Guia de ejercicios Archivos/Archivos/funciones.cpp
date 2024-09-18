#include "funciones.h"
#include "Alumno.h"


bool grabarRegistroAlumno(Alumno reg)
{
    FILE *pAlumno;
    pAlumno=fopen("alumnos.dat","ab" );//si no puede hacer la apertura fopen devuelve NULL
    ///modo de apertura	wb (write)-> Escritura. siempre crea un archivo nuevo
    ///rb (read) -> solo lectura. El archivo tiene que existir
    ///ab (append)-> Para agregar registros. Si no existe el archivo lo crea
    if(pAlumno==NULL) return false;
    int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);
    fclose(pAlumno);
    return escribio;

}

bool leerRegistroAlumno(Alumno &reg)
{
    FILE *pAlumno;
    pAlumno=fopen("alumnos.dat","rb" );//si no puede hacer la apertura fopen devuelve NULL
    if(pAlumno==NULL) return false;
    int leyo=fread(&reg,sizeof(Alumno),1,pAlumno);
    fclose(pAlumno);

    cout<<"ADENTRO DE LA FUNCION "<<endl;
    reg.Mostrar();
    cout<<endl;
    return leyo;


}

bool leerRegistroAlumno2()
{
    Alumno reg;
    int registro=1;
    FILE *pAlumno;
    pAlumno=fopen("alumnos.dat","rb" );//si no puede hacer la apertura fopen devuelve NULL
    if(pAlumno==NULL) return false;

    while(fread(&reg,sizeof(Alumno),1,pAlumno)==1)
    {
        cout<<"Registro nro "<<registro<<endl;
        reg.Mostrar();
        system("pause");
        system("cls");
        registro++;
    }
    fclose(pAlumno);
    return true;
}
/*void menu()
{
    system("cls");
    cout<<" ---- Clase de Archivos ---- "<<endl;
    cout<<" 1 - Cargar un registro. "<<endl;
    cout<<" 2 - Mostrar todos los registros. "<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
}*/
void mostrarMenu()
{
    system("cls");
    cout<<" ---- Clase de Archivos ---- "<<endl;
    cout<<" 1 - Cargar un registro. "<<endl;
    cout<<" 2 - Mostrar todos los registros. "<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
}

void menu(Alumno obj)
{
    int opcion=-1;
    while(opcion!=0)
    {
        mostrarMenu();
        cin>>opcion;
        switch(opcion)
        {
        case 1:
            system("cls");
            obj.Cargar();
            grabarRegistroAlumno(obj);
            break;
        case 2:
            system("cls");
            leerRegistroAlumno2();
            break;
        case 0:
            cout<<"Saliendo del programa."<<endl;
            break;
        default:
            cout<<"Opción incorrecta..."<<endl;
            break;
        }
    }
}
