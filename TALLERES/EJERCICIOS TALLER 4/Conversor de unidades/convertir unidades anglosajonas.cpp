#include<iostream> // convertir unidades anglosajonas a medidad internacionales 
using namespace std;

int main()
{
    double numero;
    char letra;
    const double centimetros = 2.54;
    const double metros = 1609.34;
    const double celsius = 0.0;
    const double litros = 3.78541;
    const double gramos = 28.3495;
    const double kilogramos = 2.205;
    
    cout <<"///////// Calculadora de medidas anglosajonas a internacionales //////" << endl;
    cout << "p -> De pulgadas a centimetros"<< endl;
    cout << "m -> De millas a metros (m)"<< endl;
    cout << "f -> De fahrenheit a celsius (c)"<< endl;
    cout << "g -> De galones liquidos a litros (l)"<< endl;
    cout << "o -> De onzas a gramos (gr)"<< endl;
    cout << "l -> De libras a kilogramos (kg)"<< endl;

    cout << "Ingrese el valor a covertir seguido una inicial: ";
    cin >>numero>>letra;

    switch (letra)
    {
    case 'p':
    {
        double R1 = numero*centimetros;
        cout << "En "<< numero <<" pulgadas, existen "<< R1 <<" centimetros"<< endl;    
    }  
    break;
    case 'm':
    {
        double R1 = numero*metros;
        cout << "En "<< numero <<" millas, existen "<< R1 <<" metros"<< endl;    
    }
    break;
    case 'f':
    {
        double R1 = (numero - 32)/1.8;
        cout << "En "<< numero <<" fahrenheit, existen "<< R1 <<" celsius"<< endl;    
    }
    break;
    case 'g':
    {
        double R1 = numero*litros;
        cout << "En "<< numero <<" galones, existen "<< R1 <<" litros"<< endl;    
    }
    break;
    case 'o':
    {
        double R1 = numero*gramos;
        cout << "En "<< numero <<" onzas, existen "<< R1 <<" gramos"<< endl;    
    }
    break;
    case 'l':
    {
        double R1 = numero/kilogramos;
        cout << "En "<< numero <<" libras, existen "<< R1 <<" kilogramos"<< endl;    
    }
    default:
    {
        cout <<"EL VALOR O LETRA NO SON CORRECTOS"<< endl;
    }

    }
    system("pause");
    return 0;
}