#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int opcion;
    int num1 = 0, num2 = 0;

    cout << "=========== CALCULADORA SIMPLE ===========" << endl;
    cout << "1. Suma de dos numeros" << endl;
    cout << "2. Resta de dos numeros" << endl;
    cout << "3. Multipicacion de dos numeros" << endl;
    cout << "4. Division de dos numeros" << endl;
    cout << "5. Obtener el seno del angulo" << endl;
    cout << "6. Obtener el coseno del angulo" << endl;
    cout << "7. Obtener la tangente del angulo" << endl;
    cout << "8. SALIR" << endl;
    cout << "Introduzca la opcion: ";
    cin >> opcion;
    while ((opcion < 1) || (opcion > 8))
    {
        cout << "Operacion ingresada no es valida, intente otra vez" << endl;
        cout << "Introduzca  opcion: ";
        cin >> opcion;
    }
    switch (opcion)
    {
    case 1:
    {
        cout << "ingrese 2 numeros" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "la suma es: " << num1 + num2;
    }
    break;
    case 2:
    {
        cout << "ingrese 2 numeros" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "la resta es: " << num1 - num2;
    }
    break;
    case 3:
    {
        cout << "ingrese 2 numeros" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "la multiplicacion es: " << num1 * num2;
    }
    break;
    case 4:
    {
        cout << "ingrese 2 numeros" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        if (num2 == 0)
        {
            cout << "Imposible dividir entre 0!" << endl;
        }
        else
        {
            cout << "el cociente es: " << num1 * num2;
            cout << "el resto es: " << (num1 % num2);
        }
    }
    break;
    case 5:
    {
        cout << "ingrese el angulo en grados" << endl;
        cout << "Ingrese el angulo: ";
        cin >> num1;
        cout << "El seno del angulo es: " << sin(num1);
    }
    break;
    case 6:
    {
        cout << "ingrese el angulo en grados" << endl;
        cout << "Ingrese el angulo: ";
        cin >> num1;
        cout << "El coseno del angulo es: " << cos(num1);
    }
    break;
    case 7:
    {
    cout << "ingrese el angulo en grados" << endl;
    cout << "Ingrese el angulo: ";
    cin >> num1;
    cout << "La tangente del angulo es: " << tan(num1);
    }

    }


    system("pause");
    return 0;
}