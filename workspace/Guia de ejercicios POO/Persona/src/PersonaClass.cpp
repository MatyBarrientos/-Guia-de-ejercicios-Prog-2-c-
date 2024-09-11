#include "PersonaClass.h"

PersonaClass::PersonaClass(){}

void PersonaClass::Cargar(){
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
   void PersonaClass::Mostrar(){
  	cout<<"DNI: "<<DNI<<endl;
  	cout<<"Nombre: "<<nombre<<endl;
  	cout<<"Apellido "<<apellido<<endl;
  	cout<<"Fecha de nacimiento"<<endl;
  	fechaNacimiento.Mostrar();
  }
    char* PersonaClass::getNombre(){ return nombre;}
  	char* PersonaClass::getApellido(){return apellido;}
  	int PersonaClass::getTelefono(){return telefono;}
  	char* PersonaClass::getMail(){return mail;}

PersonaClass::~PersonaClass()
{
    //dtor
}
