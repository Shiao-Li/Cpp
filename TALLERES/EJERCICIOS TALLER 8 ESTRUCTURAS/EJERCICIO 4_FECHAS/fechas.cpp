#include <iostream>

using namespace std;
typedef struct
{
    int dia;
    int mes;
    int ano;
} tFecha;
tFecha fechas[2];
void IngresarFecha();
void MostrarMoM();

int main()
{
    IngresarFecha();
    MostrarMoM();

    system("pause");
    return 0;
}
void IngresarFecha()
{
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        cout << "FECHA " << i + 1 << endl;

        do
        {
            cout << "Ingresa el DIA en un rango del (01 - 31): ";
            cin >> fechas[i].dia;
            cout << "Ingresa el MES en un rango del (01 - 12): ";
            cin >> fechas[i].mes;
            cout << "Ingresa el ANIO: ";
            cin >> fechas[i].ano;
            if (fechas[i].dia < 1 || fechas[i].dia > 31 || fechas[i].mes < 1 || fechas[i].mes > 12)
            {
                cout << "ADVERTENCIA: TOMA EN CUENTA LOS RANGOS PEIDIDO !!!" << endl;
            }
        } while (fechas[i].dia < 1 || fechas[i].dia > 31 || fechas[i].mes < 1 || fechas[i].mes > 12);
    }
}
void MostrarMoM()
{
    int a, b, c, d;
    if (fechas[0].dia < fechas[1].dia)
    {
        a = 0;
        b = 1;
    }
    else
    {
        if (fechas[0].dia > fechas[1].dia)
        {
            a = 1;
            b = 0;
        }
        else
        {
            a = 0;
            b = 0;
        }
    }
    if (fechas[0].mes < fechas[1].mes)
    {
        c = 0;
        d = 5;
    }
    else
    {
        if (fechas[0].mes > fechas[1].mes)
        {
            c = 5;
            d = 0;
        }
        else
        {
            c = 0;
            d = 0;
        }
    }
    int e, f;
    if (fechas[0].ano < fechas[1].ano)
    {
        e = 0;
        f = 20;
    }
    else
    {
        if (fechas[0].ano > fechas[1].ano)
        {
            e = 20;
            f = 0;
        }
        else
        {
            e = 0;
            f = 0;
        }
    }
    int total1, total2;
    total1 = a + c + d;
    total2 = b + d + e;
    if (total1 > total2)
    {
        cout << endl;
        cout << "LA MAYOR FECHA ES: " << endl;
        cout << "--> " << fechas[0].dia << " / " << fechas[0].mes << " / " << fechas[0].ano << " <--" << endl;
        cout << endl;
    }
    else
    {
        if (total1 < total2)
        {
            cout << endl;
            cout << "LA MAYOR FECHA ES: " << endl;
            cout << "--> " << fechas[1].dia << " / " << fechas[1].mes << " / " << fechas[1].ano << " <--" << endl;
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << "LAS FECHAS INGRESADAS SON IGUALES" << endl;
            cout << endl;
        }
    }
}