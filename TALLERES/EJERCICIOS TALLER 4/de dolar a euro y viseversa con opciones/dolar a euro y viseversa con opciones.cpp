#include<iostream>
using namespace std;

int main()
{
    int eleccion;
    double valor;
    double euro = 0.95;
    double dolar = 1.07;
    
    cout <<"///// CONVERSOR DE DIVISAS /////" << endl;
    cout << " " << endl;
    cout <<"1. Dolares a euros" << endl;
    cout <<"2. Euros a dolares" << endl;
    cout <<"3. Salir" << endl;

    cout << " " << endl;

    cout <<"Seleccione la conversion a realizar: ";
    cin >> eleccion;

    switch (eleccion)
    {
    case 1:
    {
        cout << "Ingrese la cantidad a convertir: ";
        cin >> valor;
        double euros = valor * euro;
        cout << valor << " dolares son " << euros << " euros" << endl; 
    }
        
        break;
    case 2:
    {
        cout << "Ingrese la cantidad a convertir: ";
        cin >> valor;
        double dolares = valor * dolar;
        cout << valor << " euros son " << dolares << " dolares" << endl;
    }
        break;
    case 3:
    {
        exit(0);
    }
        break;
    default :
    {
        cout << "Eleccion incorrecta!!" << endl;
    }
        break;
    }

    system("pause");
    return 0;

}