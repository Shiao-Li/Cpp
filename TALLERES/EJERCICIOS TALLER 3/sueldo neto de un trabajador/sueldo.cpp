#include<iostream>
using namespace std;

int main()
{
    string nombre;
    double horas = 160, tarifa = 5, tasa_impuesto = 11;
    double bruto = (horas*tarifa);
    double impuesto = (bruto*tasa_impuesto)/100;
    double neto = (bruto-impuesto);

    cout <<"Ingrese su nombre: ";
    cin >> nombre;
    cout << "Sus horas de trabajo fueron de: " << horas << endl;
    cout <<"Su tarifa de trabajo es de: " << tarifa << endl;
    cout <<"La tasa de impuesto es de: " << tasa_impuesto << endl;
    cout <<"------------------------------------------" << endl;
    cout <<"El sueldo bruto es de: " << bruto << endl;
    cout <<"El impuesto que se le restara es de: " << impuesto << endl;
    cout <<"Usted recibira un sueldo de: " << neto << endl;

    system("pause");
    return 0; 
}