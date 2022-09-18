#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
void segundo_despues(int x, int y, int z);
int hora, minuto, segundo;

int main(){

    cout <<"Ingrese la hora (hasta 24h): ";
    cin >> hora;
    cout <<"Ingrese los minutos (hasta 60 min): ";
    cin >> minuto;
    cout <<"Ingrese los segundos (hasta 60 seg): ";
    cin >> segundo;
    
    cout << "La hora ingresada fue: " << hora << ":" << minuto << ":" << segundo << endl;
    segundo_despues(hora, minuto, segundo);

    system("pause");
    return 0;
}
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
