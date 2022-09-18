#include <iostream>
#include <cmath>
#include "calculos.h"
using namespace std;

int mostrarMenu()
{
    int opcion;
    cout << endl;
    cout << "|== MENU CALCULADORA ==|" << endl;
    cout << "|______________________|" << endl;
    cout << "| 1. SUMA              |" << endl;
    cout << "| 2. RESTA             |" << endl;
    cout << "| 3. MULTIPLICACION    |" << endl;
    cout << "| 4. DIVISION          |" << endl;
    cout << "| 5. POTENCIACION      |" << endl;
    cout << "| 6. RAIZ CUADRADA     |" << endl;
    cout << "| 7. FACTORIAL         |" << endl;
    cout << "| 8. SALIR             |" << endl;
    cout << "|______________________|" << endl;
    cout << endl;
    cout << "Selecione una opcion: ";
    cin >> opcion;
    return opcion;
}
void sumar()
{
    int num, result = 0, opc = 0;
    do
    {
        cout << "Ingrese el numero a sumar: ";
        cin >> num;
        result = result + num;
        cout << "Quiere sumar otro numero? 1.SI ";
        cin >> opc;

    } while (opc == 1);
    cout << "La suma total es: " << result << endl;
    cout << endl;
}
void restar()
{
    int num1, num2, result = 0;

    cout << "Ingrese el 1er numero a restar: ";
    cin >> num1;
    cout << "Ingrese el 2do numero a restar: ";
    cin >> num2;
    result = num1 - num2;
    cout << "La resta total es: " << result << endl;
    cout << endl;
}
void multiplicar()
{
    int num1, num2, result = 0;

    cout << "Ingrese el 1er numero a multiplicar: ";
    cin >> num1;
    cout << "Ingrese el 2do numero a multiplicar: ";
    cin >> num2;
    result = num1 * num2;

    cout << "La multipliacion total es: " << result << endl;
    cout << endl;
}
void dividir()
{
    double numerador, denominador, resultado;
    cout << "Numerador: ";
    cin >> numerador;
    cout << "Denominador: ";
    cin >> denominador;
    if (denominador == 0)
    {
        cout << "Imposible dividir entre 0!" << endl;
    }
    else
    {
        resultado = numerador / denominador;
        cout << "Resultado: " << resultado << endl;
    }
}
void potenciacion()
{
    int base, exponente, result = 0;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    result = pow(base, exponente);
    cout << "El resultado de " << base << "^" << exponente << " es: " << result << endl;
    cout << endl;
}
void raiz_cuadrada()
{
    int radicando, result = 0;
    cout << "Ingrese el radicando: ";
    cin >> radicando;
    result = sqrt(radicando);
    cout << "La raiz de " << radicando << " es: " << result << endl;
    cout << endl;
}
void factorial()
{
    int numero;
    long double factorial = 1.0;

    cout << "Intorduce un numero: ";
    cin >> numero;
    if (numero < 0)
    {
        cout << "No ingrese un numero negativo !!!!" << endl;
    }
    else
    {
        for (int i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        cout << endl;
        cout << "Factorial de " << numero << " es: " << factorial << endl;
    }
}