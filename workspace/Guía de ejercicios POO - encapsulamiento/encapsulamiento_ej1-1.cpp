#include <iostream>

using namespace std;

//Crea una clase llamada Rectangulo que represente un rectángulo.
//La clase debe tener dos atributos correspondientes a la base y altura. Implementa las siguientes metodos:

//Getters y Setter de cada atributo.
//calcularArea(): Devuelve el área del rectángulo.
//calcularPerimetro(): Devuelve el perímetro del rectángulo.

///DECLARACION DE CLASE
class Rectangulo
{
    private: /// PROPIEDADES

    int base, altura; /// VARIABLES DE LA CLASE

    public: /// METODOS

        ///CONSTRUCTOR
        Rectangulo (int b = 0, int a = 0)
        {
            base = b;
            altura = a;
        }

        /// SETTER
        void setBase (int base)
        {
            if (base >= 1 && base <= 100) this-> base = base;
            else this-> base = 0;
        }

        void setAltura (int altura)
        {
            if (altura >= 1 && altura <= 100) this-> altura = altura;
            else this-> altura = 0;
        }

        /// GETTER
        int getBase()
        {
            return base;
        }

        int getAltura()
        {
            return altura;
        }

        ///CALCULAR AREA
        int Area()
        {
            int area = (base * altura);
            return area;
        }

        ///CALCULAR PERIMETRO
        int Perimetro()
        {
            int perimetro = ((base*2) + (altura*2));
            return perimetro;
        }

        ~Rectangulo() ///DESTRUCTOR
        {

            cout << "Destruyendo la clase Rectangulo." << endl;
        }
};



int main()
{
    Rectangulo rectangulito(15,10);

    cout << "Primera altura: " << rectangulito.getAltura() << endl;
    cout << "Primera base: " << rectangulito.getBase() << endl;

    rectangulito.setBase(11);
    cout << "Nueva base: " << rectangulito.getBase() << endl;

    cout << "area: " << rectangulito.Area() << endl;
    cout << "perimetro: " << rectangulito.Perimetro() << endl;

	return 0;
}

