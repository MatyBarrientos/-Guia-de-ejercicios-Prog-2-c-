#include <iostream>

//Crea una clase llamada CuentaBancaria que represente una cuenta bancaria. La clase debe tener los siguientes atributos:
//N�mero de cuenta (entero)
//Saldo actual (float)
//Implementa los siguientes m�todos:
//Un constructor que me permita establecer el n�mero de cuenta y el saldo.
//Un m�todo depositar(float monto) que incremente el saldo.
//Un m�todo retirar(float monto) que disminuya el saldo si hay fondos suficientes, caso contrario no hace nada.
//Un m�todo obtenerSaldo() que devuelva el saldo actual.

using namespace std;

/// DECLARACION DE LA CLASE
class CuentaBancaria
{
    private:/// PROPIEDADES

        int numCuenta;
        float saldoActual;

    public:/// METODOS

        ///CONSTRUCTOR
        CuentaBancaria (int nCuenta = 0, float sActual = 0)
        {
            numCuenta = nCuenta;
            saldoActual = sActual;
        }

        void depositar(float monto)
        {
            saldoActual += monto;
        }

        void retirar(float monto)
        {
            if (monto<saldoActual)
            {
                saldoActual -= monto;
                cout << "RETIRASTE PLATA" << endl;
            }
            else
            {
                cout << "NO HAY PLATA" << endl;
            }
        }

        ///GETTER
        float obtenerSaldo()
        {
            return saldoActual;
        }

        ~CuentaBancaria()
        {
            cout << "DESTRUYENDO EL BANCO CENTRAL" << endl;
        }
};

using namespace std;

int main()
{
	CuentaBancaria prueba(1, 100.7516);

	cout << prueba.obtenerSaldo() << endl;

	prueba.retirar(50.8);

	cout << prueba.obtenerSaldo() << endl;

	prueba.retirar(70);

	prueba.depositar((float)100000);

	cout << prueba.obtenerSaldo() << endl;



	return 0;
}
