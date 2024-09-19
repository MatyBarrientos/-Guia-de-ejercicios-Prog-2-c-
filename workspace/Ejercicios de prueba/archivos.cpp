///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstring>


using namespace std;


class Fecha{
    private:
        int dia, mes, anio;
    public:
         Fecha(int d=0, int m=0, int a=0);

         void Cargar();
         void Mostrar(void);
        ///setter
         void setDia(int dia){
             if(dia>=1 &&dia<=31)this->dia=dia;
             else this->dia=0;
             }
        void setMes(const int m){mes=m;}
        void setAnio(int a){anio=a;}
        ///getter
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}
};
 ///fin de la definici�n de la clase
///desarrollo de los m�todos
void Fecha::Cargar(){
            int d;
            cout<<"DIA ";
            cin>>d;
            setDia(d);
            cout<<"MES ";
            cin>>mes;
            cout<<"ANIO ";
            cin>>anio;
         }

void Fecha::Mostrar(){
             cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
         }

Fecha::Fecha(const int d,const int m,const int a){
            dia=d;
            mes=m;
            anio=a;
}
///fin de clase Fecha
///desarrollo de clase Alumno
class Alumno{
private:
    int legajo;
    char nombre[30];
    char apellido[30];
    Fecha fechaNacimiento;
    char email[50];
    int codigoCarrera;
public:
    void Cargar();
    void Mostrar();

    int getLegajo(){return legajo;}
    void setLegajo(int l){legajo=l;}

};
///M�todos de alumno
void Alumno::Cargar(){
    cout<<"LEGAJO ";
    cin>>legajo;
    cout<<"NOMBRE ";
    cin>>nombre;
    cout<<"APELLIDO ";
    cin>>apellido;
    cout<<"FECHA DE NACIMIENTO ";
    fechaNacimiento.Cargar();
    cout<<"EMAIL ";
    cin>>email;
    cout<<"CARRERA ";
    cin>>codigoCarrera;
}

void Alumno::Mostrar(){
    cout<<"LEGAJO ";
    cout<<legajo<<endl;
    cout<<"NOMBRE ";
    cout<<nombre<<endl;
    cout<<"APELLIDO ";
    cout<<apellido<<endl;
    cout<<"FECHA DE NACIMIENTO "<<endl;
    fechaNacimiento.Mostrar();
    cout<<"EMAIL ";
    cout<<email<<endl;
    cout<<"CARRERA ";
    cout<<codigoCarrera<<endl;
}

class ArchivoAlumnos{
private:
    char nombre[50];
public:
    ArchivoAlumnos(const char *n="alumnos.dat"){
        strcpy(nombre,n);
    }

    bool grabarRegistro(Alumno reg){
        FILE *pAlumno;
        pAlumno=fopen(nombre,"ab" );
        if(pAlumno==NULL) return false;
        int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);
        fclose(pAlumno);
        return escribio;

    }

    /*bool leerRegistro(Alumno &reg){///como est� sirve para leer s�lo el primer registro
        FILE *pAlumno;
        pAlumno=fopen(nombre,"rb" );
        if(pAlumno==NULL) return false;
        int leyo=fread(&reg,sizeof(Alumno),1,pAlumno);
        fclose(pAlumno);
        return leyo;
    } */

    bool listarRegistros(){
        Alumno reg;
        FILE *pAlumno;
        pAlumno=fopen("alumnos.dat","rb" );
        int tam=ftell(pAlumno);
        cout<<"CANTIDAD DE bytes ENTRE EL INICIO DEL ARCHIVO Y LA POSICION ACTUAL "<<tam<<endl<<endl;
        system("pause");
        if(pAlumno==NULL) return false;
        while(fread(&reg,sizeof(Alumno),1,pAlumno)==1){
            tam=ftell(pAlumno);
            cout<<"CANTIDAD DE bytes ENTRE EL INICIO DEL ARCHIVO Y LA POSICION ACTUAL "<<tam<<endl<<endl;
            system("pause");
            reg.Mostrar();
            cout<<endl;
        }
        system("pause");
        fclose(pAlumno);
        return true;
    }
    int buscarLegajo(int leg){
        Alumno reg;
        FILE *pAlumno;
        int pos=0;
        pAlumno=fopen("alumnos.dat","rb" );
        if(pAlumno==nullptr) return -2;
        while(fread(&reg,sizeof(Alumno),1,pAlumno)==1){
            if(reg.getLegajo()==leg){
                fclose(pAlumno);
                return pos;
            }
            pos++;
        }
        fclose(pAlumno);
        return -1;
    }

    Alumno leerRegistro(int posReg){
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
    int cantidadRegistros(){
        FILE *pAlumno;
        pAlumno=fopen("alumnos.dat","rb" );
        if(pAlumno==NULL) return -1;
        fseek(pAlumno,0,2);
        int cantBytes=ftell(pAlumno);
        fclose(pAlumno);
        return cantBytes/sizeof(Alumno);
    }
};

int main(){
    Alumno reg;
    ArchivoAlumnos archiA("alumnos.dat");
    ///Asigno valores al objeto Alumno
    /*reg.Cargar();
    if(grabarRegistroAlumno(reg)==true){///GRABO EL REGISTRO EN EL ARCHIVO
       cout<<"REGISTRO AGREGADO"<<endl;
       }
    else{
        cout<<"NO SE PUDO AGREGAR EL REGISTRO";
    } */
	/*cout<<"INGRESE EL LEGAJO DEL ALUMNO A BUSCAR ";
	int legajo, pos;
	cin>>legajo;
	pos=archiA.buscarLegajo(legajo);
	if(pos==-1){
        cout<<"NO EXISTE EL LEGAJO INGRESADO"<<endl;
	}
	else{
        reg=archiA.leerRegistro(pos);
        reg.Mostrar();
	} */
	//archiA.listarRegistros();
	cout<<archiA.cantidadRegistros();
	cout<<endl;
	system("pause");
	return 0;
}
