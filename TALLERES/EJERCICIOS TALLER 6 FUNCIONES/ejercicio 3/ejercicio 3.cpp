#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
double hipotenusa(double a, double b);
double lado1 = 0, lado2 = 0, hip;

int main(){

    cout <<"Ingrese el valor del primer lado: ";
    cin >> lado1;
    cout <<"Ingrese el valor del segundo lado: ";
    cin >> lado2;
    cout << endl;
    if (lado1 > 0 && lado2 > 0)
    {
        hip = hipotenusa(lado1, lado2);
        cout << "La hipotenusa del triangulo es: " << hip << endl;
    }
    else
    {
        cout <<"Los datos ingresados son incorrectos" << endl;
    }
    
    system("pause");
    return 0;
}
double hipotenusa(double a, double b){
    double h = 0;

    h = sqrt(pow(a, 2)+pow(b, 2));

    return h;
}