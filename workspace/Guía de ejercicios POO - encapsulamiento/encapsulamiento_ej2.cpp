#include <iostream>
#include <time.h>
using namespace std;

//Crea una clase llamada Dado que simule el comportamiento de un dado de seis caras. La clase debe contener los siguientes atributos:
//valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
//Implementa los siguientes métodos públicos:
//Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6.
//lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
//getValor(): Devuelve el valor actual del dado.
//esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
//esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario


///DECLARACION DE LA CLASE
class Dado
{
    private: ///PROPIEDADES
        int valor;

    public: ///METODOS

        ///CONSTRUCTOR
        Dado (int v = rand()%6+1)
        {
            valor = v;
        }

        ///GETTER
        int getValor()
        {
            return valor;
        }

        void lanzar()
        {
            valor = rand()%6+1;
        }

        bool esMaximo()
        {
            if (this-> valor == 6)
            {
                return true;
            }
            return false;
        }
        bool esMinimo()
        {
            if (this-> valor == 1)
            {
                return true;
            }
            return false;
        }

        ~Dado()
        {
            cout << "DESTRUYENDO EL DADO" << endl;
        }
};

int main()
{
	srand(time(NULL)); ///LA SEMILLA VA DESDE EL MAIN

	///DECLARACION DE LA VARIABLE DE LA CLASE
	Dado cara;

    ///EGRESO DE DATO
	cout << "valor de la cara construida: " << cara.getValor() << endl;

	cara.lanzar();

	cout << "valor de la nueva cara: " << cara.getValor() << endl;

    if ( cara.esMaximo() )
    {
        cout<< "es Maximo"<<endl;
    }
    else if (cara.esMinimo())
    {
        cout << "es Minimo"<<endl;
    }
    else
    {
        cout << "No fue nada"<<endl;
    }
	return 0;
}
