#include<iostream> 
using namespace std;

int main()
{
    double num1, num2, num3;

    cout <<"Ingrese 3 numeros: ";
    cin >> num1 >> num2 >> num3;
    double r1 = num1 + num2; // se debe coparar si  > con num3  y num si lo es si forma un triangulo 
    double r2 = num1 + num3; // se debe comparar si > con  num2 
    double r4 = num2 + num3; // se debe comparar si > con num1


    if (r1 > num3 || r2 > num2 || r4 > num1)
    {
        cout << "Los numeros si pueden representar un triangulo" << endl;        
    }

    else if (r1 < num3 || r2 < num2 || r4 < num1 )
    {
        cout << "Los numeros no pueden representar un triangulo" << endl;
    }

    system("pause");
    return 0;

}