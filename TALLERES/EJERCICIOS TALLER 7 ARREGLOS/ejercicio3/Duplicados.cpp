#include <iostream>
#include <iomanip>
using namespace std;
int num = 0, i = 0;
int const tamanio = 20;
int numeros[tamanio];
void inicializar3();
void enlistar();
int main()
{
    cout << "Ingrese 20 numeros en un rango del 10 al 100" << endl;
    cout << endl;
    inicializar3();
    enlistar();

    system("pause");
    return 0;
}
void inicializar3()
{
    while (i < tamanio)
    {
        cout << "Ingrese el numero " << i + 1 << " : ";
        cin >> num;
        while (num < 10 || num > 100)
        {
            cout << endl;
            cout << "ATENCION: El numero no esta en el rango" << endl;
            cout << endl;
            cout << "Ingrese el numero " << i + 1 << " : ";
            cin >> num;
        }
        numeros[i] = num;
        if (i > 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (numeros[j] == num)
                {
                    numeros[j] = 0;
                }
            }
        }
        i++;
    }
}
void enlistar()
{
    cout << endl;
    cout << "Lista sin duplicar" << endl;
    for (int k = 0; k < i; k++)
    {
        if (numeros[k] != 0)
        {
            cout << "--> " << numeros[k] << endl;
        }
    }
}