#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

#include "operaciones1.h"
#include "operaciones2.h"


using namespace std;


//funcion principal
int main() {
  int opcion = menu();
  while (opcion != 0) {
    switch (opcion) {
    case 1:
    {

       cout << "===========[ Programa 1 ]===========" << endl;
       cout << endl;
       int n = 10;
       int x = 0;
       cout << "Ingrese el valor de x: ";
       cin >> x;
       cout << "El valor de los 10 primeros elementos es: " << exponencial(n, x);
       cout << endl;
    }
    break;
    case 2:
    {
        int hora, minuto, segundo;
       cout << "===========[ Programa 2 ]===========" << endl;
       cout << endl;
       cout << "Ingrese la hora (hasta 24h): ";
       cin >> hora;
       cout << "Ingrese los minutos (hasta 60 min): ";
       cin >> minuto;
       cout << "Ingrese los segundos (hasta 60 seg): ";
       cin >> segundo;

       cout << "La hora ingresada fue: " << hora << ":" << minuto << ":" << segundo << endl;
       segundo_despues(hora, minuto, segundo);
    }
    break;
    case 3:
    {
        double lado1 = 0, lado2 = 0, hip;
       cout << "===========[ Programa 3 ]===========" << endl;
       cout << endl;
       cout << "Ingrese el valor del primer lado: ";
       cin >> lado1;
       cout << "Ingrese el valor del segundo lado: ";
       cin >> lado2;
       cout << endl;
       if (lado1 > 0 && lado2 > 0)
       {
          hip = hipotenusa(lado1, lado2);
          cout << "La hipotenusa del triangulo es: " << hip << endl;
       }
       else
       {
          cout << "Los datos ingresados son incorrectos" << endl;
       }
    }
    break;
    case 4:
    {
        int dig3, igual;
       cout << "===========[ Programa 4 ]===========" << endl;
       cout << endl;
       cout << "Ingrese el digito de 3 cifras: ";
       cin >> dig3;
       numerocubos(dig3);
    }
    break;
    case 5:
    {
        int numero = 0, inverso=0, resto, num2;
       cout << "===========[ Programa 5 ]===========" << endl;
       cout << endl;
       do
       {
          cout << "Ingrese un numero: ";
          cin >> numero;
          num2 = numero;
          invers(numero);
          impresion();
       } while (numero >= 0);
    }
    break;
    case 6:
    {
        int horaa, minutoss, segundoss;
       cout << "===========[ Programa 6 ]===========" << endl;
       cout << endl;
       cout << "Ingrese la hora en formato de 24 horas" << endl;
       cout << "Hora:";
       cin >> horaa;
       cout << "Minutos:";
       cin >> minutoss;
       cout << "Segundos:";
       cin >> segundoss;
       if (((horaa <= 23) && (horaa >= 0)) && ((minutoss <= 59) && (minutoss >= 0)) && (segundoss <= 59) && (segundoss >= 0))
       {
          cout << "La cantidad de segundos trascurridos desde la ultima vez\nque el reloj marco las 12 es: " << endl;
          cout << segundostranscurridos(horaa, minutoss, segundoss);
          cout << endl;
       }
       else
       {
          cout << endl;
          cout << "La hora ingresada es incorrecta!!!" << endl;
       }
    }
    break;
    } // switch
    opcion = menu();
  } // while (opcion != 0)
  system("pause");
  return 0;
} // cierre funcion principal
