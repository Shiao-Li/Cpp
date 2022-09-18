#include <iostream>
using namespace std;
#include <iomanip>

int menu(); // 1: Tablas de multiplicación; 2: Sumatorio

int main() {
  int opcion = menu();
  while (opcion != 0) {
    switch (opcion) {
      case 1:
         {
            cout << endl;
            cout << "BIENVENIDO A LA SUMA" << endl;
            int num, result = 0, opc = 0;
            do
            {
               cout <<"Ingrese el numero a sumar: ";
               cin >> num;
               result = result + num;
               cout <<"Quiere sumar otro numero? (si = 1 / no = 0) ";
               cin >> opc;
               
            }
            while(opc == 1);
            cout << "La suma total es: " << result << endl;
            cout << endl;
         }
            break;
        case 2:
         {
            
            cout << endl;
            cout << "BIENVENIDO A LA RESTA" << endl;
            int num, result = 0, opc = 0;
            do
            {
               cout <<"Ingrese el numero a restar: ";
               cin >> num;
               result = num - result;
               cout <<"Quiere sumar otro numero? (si = 1 / no = 0) ";
               cin >> opc;
               
            }
            while(opc == 1);
            cout << "La resta total es: " << result << endl;
            cout << endl;
         }
            break;
        case 3:
        {
            
            cout << endl;
            cout << "BIENVENIDO A LA MULTIPLICACION" << endl;
            int num, result = 0, opc = 0;
            do
            {
               cout <<"Ingrese el numero a multiplicar: ";
               cin >> num;
               result = num * result;
               cout <<"Quiere sumar otro numero? (si = 1 / no = 0) ";
               cin >> opc;
               
            }
            while(opc == 1);
            cout << "La multipliacion total es: " << result << endl;
            cout << endl;

        }
            break;
        case 4:
        {
            cout << endl;
            cout << "BIENVENIDO A LA DIVISON" << endl;
            cout << endl;
            double numerador, denominador, resultado;
            cout << "Numerador: ";
            cin >> numerador;
            cout << "Denominador: ";
            cin >> denominador;
            if (denominador == 0) {
            cout << "Imposible dividir entre 0!" << endl;
            }
            else {
            resultado = numerador / denominador;
            cout << "Resultado: " << resultado << endl;
            }

        }
            break;
      } // switch
      opcion = menu();
   } // while (opcion != 0)
   return 0;
}

int menu() {
   int op = -1;
   while ((op < 0) || (op > 4)) {
    cout << "***Opciones para la calcladora***" << endl;
    cout <<"1 - Suma" << endl;
    cout <<"2 - Resta" << endl;
    cout <<"3 - Multipicacion" << endl;
    cout <<"4 - Division" << endl;
    cout <<"0 - Salir" << endl;
    cout <<"Introduzca la opcion: ";
    cin >> op;
      if ((op < 0) || (op > 4)) {
         cout << "¡Opcion no valida!" << endl;
      }
   }
   return op;
}
