#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 0, n = 2, mult;
    int i1 = 0, n1 = 3, mult1;

    cout << "Cuadrados del 0 al 10" << endl;

    while (i <= 10)
    {
        mult = pow(i, n);
        cout << "\t" << mult << endl;
        i++;
    }

    cout << "Cubos del 0 al 10" << endl;
    while (i1 <= 10)
    {
        mult1 = pow(i1, n1);
        cout << "\t\t" << mult1 << endl;
        i1++;
    }

    system("pause");
    return 0;
}