#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, expo = 0, signo = -1;
    float x;
    double result = 0, factorial = 1;

    cout << "Introduzca el angulo (x) en radianes: ";
    cin >> x;

    cout << "introduzca el numero de terminos: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        factorial = 1;
        for (int j = 1; j <= expo; j++)
        {
            factorial = factorial * j;
        }
        signo = signo * (-1);
        result = result + signo * pow(x, expo) / factorial;
        cout << result << endl;
        expo = expo + 2;
    }

    cout << "El coseno del angulo en radianes es: " << result << endl;
    cout << "El coseno del angulo en grados es: " << (result * 180/3.14) << endl;
    system("pause");
    return 0;
}