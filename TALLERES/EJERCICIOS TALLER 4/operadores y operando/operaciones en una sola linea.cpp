#include<iostream> 
using namespace std;

int main()
{
    int operador1, resultado;
    int operador2;
    char operador;

    cout <<"Ingrese un operando, operador, operando: ";
    cin >> operador1 >> operador >> operador2;

    switch (operador)
    {
    case '+':
    {
        resultado = operador1+operador2;
        cout << operador1 <<"+"<< operador2 <<"="<<resultado << endl;
    }
    break;
    case '-':
    {
        resultado = operador1-operador2;
        cout << operador1 <<"-"<< operador2 <<"="<<resultado << endl;       
    }
    break;
    case '*':
    {
        resultado = operador1*operador2;
        cout << operador1 <<"*"<< operador2 <<"="<<resultado << endl;        
    }
    break;
    case '/':
    {
        if (operador2 == 0)
        {
            cout << "Imposible dividir para 0" << endl;
        }
        resultado = operador1/operador2;
        cout << operador1 <<"/"<< operador2 <<"="<<resultado << endl;
        system("pause");
    }
    break;
    default:
    {
        cout << "Operacion no valida!!" << endl;
    }
    break;
    }

    system("pause");
    return 0;

}