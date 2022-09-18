#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    char iniciar, terminar;
    time_t i, f;

    cout << "Iniciar llamada: ";
    cin >> iniciar;
    if (iniciar == 's')
    {
        i = time(0);
    }

    cout << "Terminar llamada: ";
    cin >> terminar;
    if (terminar == 's')
    {
        f = time(0);
    }

    double costo = (f - i) * 1 / 100.0;
    cout << "El costo de la llamada es: " << costo << " centavos" << endl;

    system("pause");
    return 0;
}
