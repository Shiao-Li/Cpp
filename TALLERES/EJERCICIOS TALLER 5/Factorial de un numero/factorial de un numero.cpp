#include <iostream>
using namespace std;

int main()
{
    int numero;
    long double factorial = 1.0;

    cout << "Intorduce un numero: ";
    cin >> numero;
    if (numero < 0)
    {
        cout << "No ingrese un numero negativo !!!!" << endl;
    }
    else
    {
        for (int i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        cout << endl;
        cout << "Factorial de " << numero << " es: " << factorial << endl;
    }

    system("pause");
    return 0;
}