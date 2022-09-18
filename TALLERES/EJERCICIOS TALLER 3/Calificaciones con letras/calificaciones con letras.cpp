#include<iostream>
using namespace std;

int main()
{
    double calif1, calif2, calif3;

    cout << "Ingrese su primera calificacion: ";
    cin >> calif1;
    cout << "Ingrese su segunda calificacion: ";
    cin >> calif2;
    cout << "Ingrese su tercera calificacion: ";
    cin >> calif3;

    double promedio = (calif1+calif2+calif3)/3;
    cout <<"Su promedio es de: " << promedio << endl;
    
    if (promedio==10)
    cout << "Tu promedio es A" << endl;
    if (promedio>=9.1 && promedio <=9.9)
    cout << "Tu promedio es B" << endl;
    if (promedio>=8.1 && promedio <=8.9)
    cout << "Tu promedio es c" << endl;
    if (promedio<8)
    cout << "Estas reprobado" << endl;
 
    system("pause");
    return 0;

}