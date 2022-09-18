#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
int horaenseg(int h, int m, int s);
int hora, minutos, segundos;

int main(){
    cout <<"Ingrese la hora en formato de 24 horas" << endl;
    cout <<"hora: ";
    cin >> hora;
    cout <<"Segundos: ";
    cin >> minutos;
    cout <<"segundos: ";
    cin >> segundos;
    cout <<"La hora en segundos es: " << horaenseg(hora, minutos, segundos) << endl;



    system("pause");
    return 0;

}
int horaenseg(int h, int m, int s){
    int horaseg = 0, minseg = 0, seg_totales = 0;

    horaseg = h * 3600;
    minseg = m * 60;

    seg_totales = horaseg + minseg + s;

    return seg_totales;
}
