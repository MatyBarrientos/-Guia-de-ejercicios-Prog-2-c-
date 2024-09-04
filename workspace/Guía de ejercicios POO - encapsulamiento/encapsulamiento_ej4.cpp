#include <iostream>
#include <locale>
/*Crea una clase llamada Triangulo que represente un triángulo. La clase debe
contener un vector de 3 elementos, donde cada elemento corresponde a la
longitud de un lado del triángulo. Implementa los siguientes métodos:

getLado(int numero): Devuelve la longitud del valor del lado
correspondiente al número proporcionado (1, 2, o 3). Si el número es
incorrecto (fuera del rango 1-3), devuelve cero.

setLado(int numero, float valor): Establece el valor del lado
correspondiente al número proporcionado (1, 2, o 3). Si el número es
incorrecto (fuera del rango 1-3), no realiza ninguna acción.

getTipo(): Devuelve el tipo de triángulo según sus lados:

1 para un triángulo equilátero (todos los lados iguales).

2 para un triángulo isósceles (dos lados iguales).

3 para un triángulo escaleno (todos los lados diferentes).

isEscaleno(): Devuelve true si el triángulo es escaleno, false en
caso contrario.

isIsosceles(): Devuelve true si el triángulo es isósceles, false en
caso contrario.

isEquilatero(): Devuelve true si el triángulo es equilátero, false
en caso contrario.*/

using namespace std;

///DECLARACION DE CLASE
class Triangulo {
    private: /// PROPIEDADES
        float ladoA, ladoB, ladoC;
        /// VARIABLES DE LA CLASE

    public: /// METODOS
        Triangulo(float lA=0,float lB=0,float lC=0) {
            ladoA=lA;
            ladoB=lB;
            ladoC=lC;
            }
        ///CONSTRUCTOR
        float getLado (int numero) {
            switch (numero) {
                case 1:
                    return ladoA;
                case 2:
                    return ladoB;
                case 3:
                    return ladoC;
                default:
                    cout<<"Opción incorrecta...."<<endl;
                    return 0;
                }
            }
        void setLado(int numero, float valor) {
            switch (numero) {
                case 1:
                    ladoA=valor;
                    break;
                case 2:
                    ladoB=valor;
                    break;
                case 3:
                    ladoC=valor;
                    break;
                default:
                    cout <<"Opción incorrecta"<<endl;

                    break;
                }
            }
        int getTipo() {
            if (ladoA==ladoB && ladoB==ladoC) {
                return 1;
                }
            else if(ladoA==ladoB || ladoA==ladoC || ladoB==ladoC) {
                return 2; }
            else {
                return 3;
                }
            }

        bool isEquilatero() {
            return getTipo()==1;
            }
        bool isIsosceles() {
            return getTipo()==2;
            }
        bool isEscaleno() {
            return getTipo()==3;
            }

    };


int main() {
    //setlocale(LC_ALL,"");
    Triangulo triangulito(3,8,3);

    cout << "Mostramos el lado 1: "<<triangulito.getLado(1)<<endl;
    cout <<"Mostramos el lado 2: "<<triangulito.getLado(2)<<endl;
    cout <<"Mostramos el lado 3: "<<triangulito.getLado(3)<<endl;

    cout<<"Cambiamos el lado del lado 2"<<endl;
    triangulito.setLado(2,9);
    cout<<"Mostramos el nuevo lado 2: "<<triangulito.getLado(2)<<endl;

    cout<<"el tipo de triángulo es: ";
    if(triangulito.getTipo()==1) {
        cout <<" equilátero"<<endl ;
        }
    else if(triangulito.getTipo()==2) {
        cout<<" isósceles"<<endl;
        }
    else {
        cout<<"escaleno"<<endl;
        }

    cout<<"Es escaleno: "<<triangulito.isEscaleno()<<endl;
    cout<<"Es isósceles: "<<triangulito.isIsosceles()<<endl;
    cout<<"Es equilátero: "<<triangulito.isEquilatero()<<endl;

    return 0;
    }


