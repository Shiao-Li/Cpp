#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
int segundostranscurridos(int hora, int minutos, int segundos);
int hora, minutos, segundos;

int main(){

    cout<<"Ingrese la hora en formato de 24 horas"<< endl;
    cout<<"Hora:";
    cin>>hora;
    cout<<"Minutos:";
    cin>>minutos;
    cout<<"Segundos:";
    cin>>segundos;
    if (((hora <= 23) && (hora >= 0)) &&
        ((minutos <= 59) && (minutos >= 0)) && (segundos <= 59) &&
        (segundos >= 0))
    {
        cout << "La cantidad de segundos trascurridos desde la ultima vez\nque el reloj marco las 12 es: "<< endl;
        cout << segundostranscurridos(hora, minutos, segundos);
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Ingrese bien la hora, los minutos y los segundos" << endl;
    }

    system("pause");
    return 0;
}
int segundostranscurridos(int hora, int minutos, int segundos)
{
    int horsegundos = 0;
    int minsegundos = 0;
    int segundos_totales = 0;

    if ((hora >= 12) && (hora <= 23))
    {
        horsegundos = (hora - 12) * 3600;
    }
    else
    {
        horsegundos = hora * 3600;
    }

    minsegundos = minutos * 60;
    segundos_totales = horsegundos + minsegundos + segundos;

    return segundos_totales;
}