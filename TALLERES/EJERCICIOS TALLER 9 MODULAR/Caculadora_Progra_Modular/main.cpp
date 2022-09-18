#include <iostream>
#include <iomanip>
#include "calculos.h"

using namespace std;

int menu, op;
int main()
{
    do
    {
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            cout << setw(20) << "Ingresaste a SUMA " << endl;
            sumar();
            break;
        case 2:
            cout << setw(20) << "Ingresaste a RESTA " << endl;
            restar();
            break;
        case 3:
            cout << setw(20) << "Ingresaste a MULTIPLICACION" << endl;
            multiplicar();
            break;
        case 4:
            cout << setw(20) << "Ingresaste a DIVISION" << endl;
            dividir();
            break;
        case 5:
            cout << setw(20) << "Ingresaste a POTENCIACION" << endl;
            potenciacion();
            break;
        case 6:
            cout << setw(20) << "Ingresaste a RAIZ CUADRADA" << endl;
            raiz_cuadrada();
            break;
        case 7:
            cout << setw(20) << "Ingresaste a FACTORIAL" << endl;
            factorial();
            break;
        case 8:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << setw(20) << "Opcion no valida!!!!!" << endl;
            break;
        }
        cout << "Desea continuar en el programa?? (1.SI / 0.NO)" << endl;
        cin >> op;
    } while (op == 1);

    system("pause");
    return 0;
}
