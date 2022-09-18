#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double G = (6.674 * pow(10, -11));
    double M1, M2, d;

    cout << "Ingresa la primera masa: ";
    cin >> M1;
    cout << "Ingrese la segunda masa: ";
    cin >> M2;
    cout << "Ingrese la distancia: ";
    cin >> d;
    double kg1 = M1 * 1000, kg2 = M2 * 1000;
    double m = d / 100;
    double f = (G) * (kg1 * kg2 / pow(m, 2));

    cout << "La fuerza de atracion es: " << f << " N" << endl;

    system("pause");
    return 0;
}