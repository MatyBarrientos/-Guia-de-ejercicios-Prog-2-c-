#include "funciones.h"
#include "Alumno.h"


int buscarLegajo(int leg)
{
    Alumno reg;
    FILE *pAlumno;
    int pos=0;
    pAlumno=fopen("alumnos.dat","rb" );
    if(pAlumno==nullptr) return -2;
    while(fread(&reg,sizeof(Alumno),1,pAlumno)==1)
    {
        if(reg.getLegajo()==leg)
        {
            fclose(pAlumno);
            return pos;
        }
        pos++;
    }
    fclose(pAlumno);
    return -1;
}
Alumno devolverRegistro(int posReg)
{
    Alumno reg;
    reg.setLegajo(-14);
    FILE *pAlumno;
    int pos=0;
    pAlumno=fopen("alumnos.dat","rb" );
    if(pAlumno==nullptr) return reg;
    fseek(pAlumno, posReg*sizeof(Alumno),0);
    fread(&reg,sizeof(Alumno),1,pAlumno);
    fclose(pAlumno);
    return reg;
}

///modo de apertura	wb (write)-> Escritura. siempre crea un archivo nuevo
///rb (read) -> solo lectura. El archivo tiene que existir
///ab (append)-> Para agregar registros. Si no existe el archivo lo crea
bool grabarRegistroAlumno(Alumno reg)
{
    FILE *pAlumno=nullptr;
    int aux,escribio=0;
    pAlumno=fopen("alumnos.dat","ab" );//si no puede hacer la apertura fopen devuelve NULL
    if(pAlumno==nullptr) return false;

    aux=buscarLegajo(reg.getLegajo());
    if(aux==-1)
    {
        escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);
        fclose(pAlumno);
        cout<<"Alumno ingresado"<<endl;
        system("pause");
    }
    else
    {
        cout<<"Legajo ya ingresado"<<endl;
        system("pause");
    }

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

void mostrarMenu()
{
    system("cls");
    cout<<" ---- Clase de Archivos ---- "<<endl;
    cout<<" 1 - Cargar un registro. "<<endl;
    cout<<" 2 - Mostrar todos los registros. "<<endl;
    cout<<" 3 - Mostrar legajo por registros. "<<endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: ";
}

void menu(Alumno obj)
{
    int opcion=-1;
    int legajo,aux;
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
        case 3:
            system("cls");
            cout<<"Ingrese el legajo: ";
            cin>>legajo;
            aux=buscarLegajo(legajo);
            if(aux!=-1 and aux!=-2)
            {
                devolverRegistro(aux).Mostrar(); //acá está la magia.
                system("pause");
                system("cls");
            }
            else
            {
                cout<<"No hay coincidencia"<<endl;
                system("pause");
                system("cls");
            }


        case 0:
            cout<<"Saliendo del programa."<<endl;
            break;
        default:
            cout<<"Opción incorrecta..."<<endl;
            break;
        }
    }
}
