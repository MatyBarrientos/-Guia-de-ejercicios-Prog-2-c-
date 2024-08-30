///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include <iostream>
# include <cstring>
# include <locale>
# include <ctype.h>

using namespace std;


class Cadena {
    private:
        char *p;
        int tam;
    public:
        Cadena(const char *cad) { ///pedimos memoria en el constructor
            tam=strlen(cad)+1;
            p=new char[tam];
            if(p==nullptr)exit(1);
            strcpy(p,cad);
            p[tam-1]='\0';
            }
        ///set?
            setTam(dimesion) {
                tam=dimesion;
            }

        ///gets
        char *getP() {
            return p;
            }
        int getTam() {
            return tam;
            }
        void Mostrar() {
            cout<<p<<endl;
            }
        ////metodo

        void aMayusculas() {
            strupr(p);
            }
        void aMinusculas() {
            strlwr(p);
            }

        void letraCapital() {
            int i;
            char ejemplo;
            for(i=0; i<tam; i++) {
                if(p[i]=='.') {

                    ejemplo=toupper(p[i+1]);
                    p[i+1]=ejemplo;

                    }
                }
            }

        ~Cadena() { ///devolvemos la memoria en el destructor
            delete []p;
            }
    };

///hacer un método aMayusculas() que ponga a todos los caracteres de tipo letra en mayúsculas
///hacer un método aMinusculas() que ponga a todos los caracteres de tipo letra en minúsculas
///hacer un método primeraMayuscula() que ponga al primer caracter de tipo letra en mayúsculas
///Hacer un método para poner mayúscula luego de un punto.

int main() {
    setlocale(LC_ALL,"");
    Cadena palabra("Prueba CON .brUno.chau bruno");
    palabra.Mostrar();
    cout<<"Mayusculas"<<endl;
    palabra.aMayusculas();
    palabra.Mostrar();

    cout<<"Minusculas"<<endl;
    palabra.aMinusculas();
    palabra.Mostrar();

    cout<<"Letra cap"<<endl;
    palabra.letraCapital();
    palabra.Mostrar();

    /*cout<<palabra.getP()<<endl;
    cout<<endl;

    cout<<"TAMANIO "<<palabra.getTam();*/
    /*cout<<"ASCII de a "<<(int)'a'<<endl;
    cout<<"ASCII de z "<<(int)'z'<<endl;

    cout<<"ASCII de A "<<(int)'A'<<endl;
    cout<<"ASCII de . "<<(int)'.'<<endl;*/
    cout<<endl;
    system("pause");
    return 0;
    }

