///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

using namespace std;

 struct fecha{
    int dia, mes, anio;
};

struct alumno{
    int legajo;
    char nombre[30];
    char apellido[30];
    fecha fechaNacimiento;
};

void cargarFechas(fecha *v, int tam){
     int i;
     for(i=0;i<tam;i++){
        cout<<"DIA ";
        cin>>v[i].dia;
        cout<<"MES ";
        cin>>v[i].mes;
        cout<<"ANIO ";
        cin>>v[i].anio;
     }
}

void mostrarFechas(fecha *v, int tam){
     int i;
     for(i=0;i<tam;i++){

        cout<<v[i].dia<<"/"<<v[i].mes<<"/"<<v[i].anio<<endl;

     }
}

int main(){
   /* int x, v[20];
    fecha dias[3], hoy;
    /*cout<<"DIA ";
    cin>>hoy.dia;
    cout<<"MES ";
    cin>>hoy.mes;
    cout<<"ANIO ";
    cin>>hoy.anio;
    cout<<hoy.dia<<"/"<<hoy.mes<<"/"<<hoy.anio<<endl;
    cargarFechas(dias,3);
    mostrarFechas(dias,3);*/
    alumno reg;
    cin>>reg.legajo;
    cin>>reg.nombre;
    cin>>reg.apellido;

    cout<<reg.legajo<<endl;
    cout<<reg.nombre<<endl;
    cout<<reg.apellido;
	cout<<endl;
	system("pause");
	return 0;
}

///DISTINTAS "COSAS" SOBRE LAS QUE QUEREMOS REGISTRAR INFORMACIÓN
///Fecha: dia, mes, año
///Materias(20): número de materia, nombre, cantidad de docentes,
/// cantidad de alumnos

///Alumno: legajo, DNI, nombre, apellido, fecha de nacimiento,
///carrera,

