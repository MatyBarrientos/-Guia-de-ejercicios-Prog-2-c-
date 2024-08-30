#include <iostream>
#include <locale>

using namespace std;
void cargarMatriz(int m[3][5], int fila, int columna) {

    int i,j;
    for(i=0; i<fila; i++) {
        for(j=0; j<columna; j++) {
            cout<<"Ingresa un número: ";
            cin>>m[i][j];
            }
        }
    }

void mostrarMatriz(int m[3][5], int fila, int columna) {
    int i,j;
    for(i=0; i<fila; i++) {
        for(j=0; j<columna; j++) {
            cout<<m[i][j]<<"\t";
            }
        cout<<endl;
        }
    }

int main() {
    setlocale(LC_ALL,"");
    int mat[3][5];
    cargarMatriz(mat,3,5);
    mostrarMatriz(mat,3,5);

    return 0;
    }
