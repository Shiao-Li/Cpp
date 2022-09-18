#include <iostream>
using namespace std;
int main()
{
    int numero;

    cout << "Ingresa el tamanio del Marco: ";
    cin >> numero;

    cout << endl;

    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j <= numero; j++)
        {
            if (i == 1 || i == numero || j == 1 || j == numero)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    system ("pause");
    return 0;
}