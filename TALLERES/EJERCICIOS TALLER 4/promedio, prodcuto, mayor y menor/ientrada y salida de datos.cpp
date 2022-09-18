#include<iostream> 
using namespace std;

int main()
{
    int num1, num2, num3;

    cout <<"Escriba tres enteros diferentes: ";
    cin >> num1 >> num2 >> num3;

    int suma = num1+num2+num3;
    cout <<"La suma es: " << suma << endl;

    int promedio = (num1+num2+num3)/3;
    cout <<"El promedio es: " << promedio << endl;

    int producto = (num1*num2*num3);
    cout <<"El producto es: "<< producto << endl;


    if (num1 < num2 && num1 < num3)
    {
        cout <<"El numero mas pequeno es: " << num1 << endl;
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout <<"El numero mas pequeno es: " << num2 << endl;
    }
    if (num3 < num1 && num3 < num2)
    {
        cout <<"El numero mas pequeno es: " << num3 << endl;
    }


    if (num1 > num2 && num1 > num3)
    {
        cout <<"El numero mas grande es: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout <<"El numero mas grande es: " << num2 << endl;
    }
    if (num3 > num1 && num3 > num2)
    {
        cout <<"El numero mas grande es: " << num3 << endl;
    }

    system("pause");
    return 0;    
    
}