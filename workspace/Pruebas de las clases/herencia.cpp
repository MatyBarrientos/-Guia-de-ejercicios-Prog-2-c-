
#include<iostream>

using namespace std;

class Fecha {
    private:///sólo es accesible dentro de la clase
        int dia, mes, anio;///propiedades->variables de la clase
    public:///puede ser accedido tanto dentro como fuera de la clase
        Fecha(int d=0, int m=0, int a=0) {
            dia=d;
            mes=m;
            anio=a;
            }

        void Cargar() { ///métodos o funciones de la clase
            int d;
            cout<<"DIA ";
            cin>>d;
            setDia(d);
            cout<<"MES ";
            cin>>mes;
            cout<<"ANIO ";
            cin>>anio;
            }
        void Mostrar();
        ///setter
        void setDia(int dia) {
            if(dia>=1 &&dia<=31)this->dia=dia;
            else this->dia=0;
            }
        void setMes(int m) {
            mes=m;
            }
        void setAnio(int a) {
            anio=a;
            }
        ///getter
        int getDia() {
            return dia;
            }
        int getMes() {
            return mes;
            }
        int getAnio() {
            return anio;
            }

        void MostrarDireccion() {
            cout<<"QUE ES this? "<<this<<endl;
            cout<<"PUNTERO OCULTO QUE CONTIENE LA DIRECCION DEL OBJETO QUE LLAMA AL METODO"<<endl;

            }
        ///DESTRUCTOR
        ~Fecha() {}
    };

void Fecha::Mostrar() {
    cout<<this->dia<<"/"<<mes<<"/"<<anio<<endl;
    }

  class Persona{
  private:
  	int DNI;
  	char nombre[30];
  	char apellido[30];
  	Fecha fechaNacimiento;
  	int telefono;
  	char mail[30];
  public:
  	void Cargar();
  	void Mostrar();

  	char* getNombre(){ return nombre;}
  	char* getApellido(){return apellido;}
  	int getTelefono(){return telefono;}
  	char* getMail(){return mail;}
  };

  void Persona::Cargar(){
  	cout<<"DNI: ";
  	cin>>DNI;
  	cout<<"Nombre: ";
  	cin>>nombre;
  	cout<<"Apellido: ";
  	cin>>apellido;
  	cout<<"Ingrese teléfono ";
  	cin>>telefono;
  	cout<<"Ingrese el mail: ";
  	cin>>mail;
  	cout<<"Fecha de nacimiento"<<endl;
  	fechaNacimiento.Cargar();
  }
   void Persona::Mostrar(){
  	cout<<"DNI: "<<DNI<<endl;
  	cout<<"Nombre: "<<nombre<<endl;
  	cout<<"Apellido "<<apellido<<endl;
  	cout<<"Fecha de nacimiento"<<endl;
  	fechaNacimiento.Mostrar();
  }

class Alumno:Persona{
private:
	int legajo;
	Fecha fechaInscripcion;
public:
	void Cargar(){
		Persona::Cargar();
		cout<<"Nro de Legajo: ";
		cin>>legajo;
		cout<<"Fecha de Inscripcion: ";
		fechaInscripcion.Cargar();
	}
	void Mostrar(){
		Persona::Mostrar();
		cout<<"Nro de legajo: "<<legajo<<endl;
		cout<<"Fecha de Inscripcion: ";
		fechaInscripcion.Mostrar();
	}
};
class AlumnoGrado:Alumno{
private:
public:
},
class AlumnoTecnicatura:Alumno{
private:
public:
},
class AlumnoExtra:Alumno{
private:
public:
},
class Docente:Persona{
	private:
	int legajoDocente;
	char cargo[30];
	Fecha fechaIngreso;
    public:
	void Cargar(){
		Persona::Cargar();
		cout<<"Nro de Legajo docente: ";
		cin>>legajoDocente;
		cout<<"Ingrese cargo: ";
		cin.ignore();
		cin.getline(cargo,30);
		cout<<"Fecha de Ingreso. "<<endl;
		fechaIngreso.Cargar();
	}
	void Mostrar(){
		Persona::Mostrar();
		cout<<"Nro de legajo docente: "<<legajoDocente<<endl;
		cout<<"Cargo: "<<cargo<<endl;
		cout<<"Fecha de Ingreso: ";
		fechaIngreso.Mostrar();
    cout<<getMail()<<endl;
	}
};

class Administrativo:Persona{
private:
    int legajoNoDocente;
    char cargo[30];
    char areaDeTrabajo[30];
public:
    ///getters

    ///setters

};
class AdministrativoPlanta:Administrativo{
private:
public:
};
class AdministrativoContratado:Administrativo{
private:
public:
};

class Graduado:Persona{

};

 int main(){
//setlocale(LC_ALL,"");
 	/*Persona obj;

 	obj.Cargar();
 	obj.Mostrar();*/

 	/*Alumno aObj;
 	aObj.Cargar();
 	aObj.Mostrar();*/

 	Docente profe;
 	profe.Cargar();
 	profe.Mostrar();
 	return 0;
 }
