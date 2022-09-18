#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
int invers(int in);
void impresion();
int numero = 0, inverso=0, resto, num2;

int main()
{
    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        num2 = numero;
        invers(numero);
        impresion();
    } while (numero >= 0 );

    system("pause");
    return 0;
}
int invers(int x) {

    while (numero > 0) {
        resto = numero % 10;
        numero = numero / 10;
        inverso = inverso * 10 + resto;
    }
    return inverso;
}
void impresion() {
    if (inverso == num2) {
        cout << "El numero es capicua ya que " << num2 << " es igual al su invertido " << inverso << endl;
    }
    else {
        cout << "El inverso es: " << inverso << endl;
    }
}