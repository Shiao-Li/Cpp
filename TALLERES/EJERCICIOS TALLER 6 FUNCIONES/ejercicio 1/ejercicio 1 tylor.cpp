#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

long double factorial(int n);
double exponencial(int n, int x);

int main()
{
    int n = 10;
    int x = 0;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "El valor de los 10 primeros elementos es: "<< exponencial(n, x);
    cout << endl;

    system("pause");
    return 0;
}
long double factorial(int n)
{
    int i;
    long int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
double exponencial(int n, int x)
{
    double a;
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        a = pow(x, i) / factorial(i);
        s = s + a;
    }
    return s;
}
