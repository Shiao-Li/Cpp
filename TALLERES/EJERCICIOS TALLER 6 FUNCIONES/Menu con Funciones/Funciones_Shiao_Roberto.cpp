#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

//prototipo del menu 
int menu(); 
//pototipo ejercicio 1
long double factorial(int n);
double exponencial(int n, int x);
//pototipo ejercicio 2
void segundo_despues(int x, int y, int z);
int hora, minuto, segundo;
//pototipo ejercicio 3
double hipotenusa(double a, double b);
double lado1 = 0, lado2 = 0, hip;
//pototipo ejercicio 4
void numerocubos(int x);
int dig3, igual;
//pototipo ejercicio 5
int invers(int in);
void impresion();
int numero = 0, inverso=0, resto, num2;
//pototipo ejercicio 6
int segundostranscurridos(int hora, int minutos, int segundos);
int horaa, minutoss, segundoss;

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
       cout << "===========[ Programa 4 ]===========" << endl;
       cout << endl;
       cout << "Ingrese el digito de 3 cifras: ";
       cin >> dig3;
       numerocubos(dig3);
    }
    break;
    case 5:
    {
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
   double h = 0;

   h = sqrt(pow(a, 2) + pow(b, 2));

   return h;
}
//funcion ejercicio 4
void numerocubos(int x)
{
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

