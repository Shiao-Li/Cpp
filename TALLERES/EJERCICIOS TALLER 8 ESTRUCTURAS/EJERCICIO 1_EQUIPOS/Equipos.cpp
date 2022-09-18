#include <iostream>
#include <iomanip>

using namespace std;

typedef struct {
    string nombre;
    int p_ganados;
    int p_empatados;
} tEquipos;

void imprimirEje1();
void ordenar_p(int puntos[], int n);
void imprimir_p(int puntos[], int n);
void enlistar(tEquipos puntos[], int n);

int indice = 0, cantidad = 0;
const int MaxEquipos = 10;
int puntos[MaxEquipos];
char conf = ' ';
tEquipos equipos[MaxEquipos];

int main()
{
    cout << endl;
    imprimirEje1();
    cout << endl;

    system("pause");
    return 0;
}
void imprimirEje1()
{  
    cout << endl;
    cout << "Cuantos numeros va a registrar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre del equipo " << i + 1 << ": ";
        cin >> equipos[i].nombre;
        cout << "Ingrese el numero de partidos ganados del equipo [" << equipos[i].nombre << "]: ";
        cin >> equipos[i].p_ganados;
        cout << "Ingrese el numero de partidos empatados del equipo [" << equipos[i].nombre << "]: ";
        cin >> equipos[i].p_empatados;
        cout << endl;
    }
    cout << endl;
    enlistar(equipos, cantidad);
    cout << endl;
    for (int i = 0; i < cantidad; i++)
    {
        puntos[i] = (equipos[i].p_ganados * 3) + (equipos[i].p_empatados * 2);
        cout << "Puntaje del equipo " << equipos[i].nombre << " es " << puntos[i] << endl;
    }
    cout << endl;
    cout << "Los puntajes ordenados son: ";
    ordenar_p(puntos, cantidad);
    imprimir_p(puntos, cantidad);
    cout << endl;
}

void ordenar_p(int puntos[], int n)
{
    int max{0}, min{0}, aux{0}, i{0}, j{0};
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (puntos[j] < puntos[min])
            {
                min = j;
            }
        }
        aux = puntos[i];
        puntos[i] = puntos[min];
        puntos[min] = aux;
    }
}

void imprimir_p(int puntos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << puntos[i] <<", ";
    }
}

void enlistar(tEquipos puntos[], int n)
{
    cout << setw(20) << "NOMBRES" << setw(15) << "P. EMPATADOS" << setw(15) << "P. GANADOS" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(15) << puntos[i].nombre << setw(15) << puntos[i].p_empatados << setw(15) << puntos[i].p_ganados << endl;
    }
}