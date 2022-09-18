#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>
#include "operaciones1.h"
#include "operaciones2.h"


using namespace std;

//funcion ejercicio 4
void numerocubos(int x)
{
    int dig3, igual;
   int i = 0, cifras[10];
   i = 0;
   while (x > 0)
   {
      cifras[i] = x % 10;
      x = x / 10;
      i++;
   }
   for (int s = i - 1; s >= 0; s--)
   {
      igual = igual + pow(cifras[s], 3);
   }
   cout << dig3 << "=" << igual << endl;
}
//funcion ejercicio 5
int invers(int x)
{
    int numero = 0, inverso=0, resto, num2;
   while (numero > 0)
   {
      resto = numero % 10;
      numero = numero / 10;
      inverso = inverso * 10 + resto;
   }
   return inverso;
}
void impresion()
{
    int numero = 0, inverso=0, resto, num2;
   if (inverso == num2)
   {
      cout << "El numero es capicua ya que " << num2 << " es igual al su invertido " << inverso << endl;
   }
   else
   {
      cout << "El inverso es: " << inverso << endl;
   }
}
//funcion ejercicio 6
int segundostranscurridos(int hora, int minutos, int segundos)
{
    int horaa, minutoss, segundoss;
    int horsegundos = 0;
    int minsegundos = 0;
    int segundos_totales = 0;

    if ((horaa >= 12) && (horaa <= 23))
    {
        horsegundos = (horaa - 12) * 3600;
    }
    else
    {
        horsegundos = horaa * 3600;
    }

    minsegundos = minutoss * 60;
    segundos_totales = horsegundos + minsegundos + segundoss;

    return segundos_totales;
}