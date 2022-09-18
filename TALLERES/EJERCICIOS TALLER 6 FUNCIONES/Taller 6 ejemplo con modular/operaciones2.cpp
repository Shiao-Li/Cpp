#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>



using namespace std;



// funcion del menu
int menu() {
   int op = -1;
   while ((op < 0) || (op > 6)) {
      cout << endl;
      cout << "===========[ Menu estructurado con funciones ]===========" << endl;
      cout << "| 1 - Funcion exponencial (serie de Taylor)             |" << endl;
      cout << "| 2 - Lector de horas                                   |" << endl;
      cout << "| 3 - Calculadora de hipotenusa de triangulo recto      |" << endl;
      cout << "| 4 - Numero de 3 cifras con sus cubos igual al numero  |" << endl;
      cout << "| 5 - Invertir numeros                                  |" << endl;
      cout << "| 6 - Horas, minutos y segundos a segundos transcurridos|" << endl;
      cout << "| 0 - Salir                                             |" << endl;
      cout << "=========================================================" << endl;
      cout << "Opcion: ";
      cin >> op;
      if ((op < 0) || (op > 6)) {
         cout << "Opcion no valida!" << endl;
      }
   }
   return op;
}
//funciones ejercicio 1
long double factorial(int n)
{
    int i;
    long int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
double exponencial(int n, int x)
{
    double a;
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        a = pow(x, i) / factorial(i);
        s = s + a;
    }
    return s;
}
//funcion ejercicio 2
void segundo_despues(int x, int y, int z)
{
   int hora, minuto, segundo;
    if (x >= 0 && x <= 23 && y >= 0 && y <= 59 && z >= 0 && z <= 59)
    {
        z++;
        if (z == 60)
        {
            z = 00;
            y++;
            if (y == 60)
            {
                y = 00;
                x++;
                if (x == 24)
                    x = 0;
            }
        }
        cout << "La hora un segundo despues de la ingresada es: "<< x << ":" << y << ":" << z << endl;
    }
    else
        cout << "La hora ingresada no esta en el formato establecido" << endl;
}
// funcion ejercicio 3
double hipotenusa(double a, double b)
{
   double lado1 = 0, lado2 = 0, hip;
   double h = 0;

   h = sqrt(pow(a, 2) + pow(b, 2));

   return h;
}
