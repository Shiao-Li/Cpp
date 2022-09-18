#include <iostream>
#include <iomanip>

using namespace std;

const int Max = 50;
void agregar(double lista[]);
void buscar(double lista[], double dato);
void eliminar(double calif[]);
void insertar(double calif[]);
void ordenar(double calif[]);

int cont = 0, menu2, op2, dato, x, elimina, j, aux;
bool c = false;
double lista5[Max];

int mostrarMenuEje1();

int main()
{
    do
    {
        cout << ">> TOMA EN CUENTA LAS SIGUIENTES INDICACIONES << " << endl;
        cout << "> 1. Ingresa notas en un rango del 0 al 10 " << endl;
        cout << "> 2. Si deseas dejar de ingresar notas digita -1 " << endl;
        cout << endl;
        menu2 = mostrarMenuEje1();
        switch (menu2)
        {
        case 1:
            cout << setw(15) << "Ingresaste a --> 1. Agregar calificacion" << endl;
            if (cont < 50)
            {
                agregar(lista5);
            }
            else
            {
                cout << "MAXIMO ALCANZADO." << endl;
            }
            break;
        case 2:
            cout << setw(15) << "Ingresaste a --> 2. Buscar calificacion" << endl;
            
            buscar(lista5, dato);
            break;
        case 3:
            cout << setw(15) << "Ingresaste a --> 3. Eliminar calificacion" << endl;
            eliminar(lista5);
            break;
        case 4:
            cout << setw(15) << "Ingresaste a --> 4. Insertar calificacion" << endl;
            insertar(lista5);
            break;
        case 5:
            cout << setw(15) << "Ingresaste a --> 5. Ordenar calificacion " << endl;
            ordenar(lista5);
            break;
        case 6:
            cout << "Saliendo...." << endl;
            break;

        default:
            cout << "Numero mal ingresado. Intentalo de nuevo" << endl;
            break;
        }

        cout << "Desea continuar en esta seccion?? (1.SI / 0.NO)" << endl;
        cin >> op2;
    } while (op2 == 1);

    system("pause");
    return 0;
}
int mostrarMenuEje1()
{
    int opcion2;
    cout << "|====  MENU EJERCICIO 1 ====|" << endl;
    cout << "|___________________________|" << endl;
    cout << "| 1. Agregar calificacion   |" << endl;
    cout << "| 2. Buscar calificacion    |" << endl;
    cout << "| 3. Eliminar calificacion  |" << endl;
    cout << "| 4. Insertar calificacion  |" << endl;
    cout << "| 5. Ordenar calificacion   |" << endl;
    cout << "| 6. Salir                  |" << endl;
    cout << "|___________________________|" << endl;
    cout << endl;
    cout << "Selecione una opcion: ";
    cin >> opcion2;
    return opcion2;
}
void agregar(double lista[])
{
    do
    {
        do
        {
            cout << "Ingresa la calificacion " << cont + 1 << " : ";
            cin >> lista[cont];
            if (lista[cont] > 10 || lista[cont] < -1)
            {
                cout << "El rango de calificaciones es del 0 al 10." << endl;
                cout << "Ingresa nuevamente: " << endl;
            }
        } while (lista[cont] > 10 || lista[cont] < -1);
        if (lista[cont] == -1)
        {
            lista[cont] = lista[cont];
            x = lista[cont];
        }
        else
        {
            x = lista[cont];
            cont++;
        }
    } while (x != -1 && cont < Max);
}
void buscar(double lista[], double dato)
{
    cout << "Ingresa la calificacion a buscar: ";
    cin >> dato;
    for (int i = 0; i < cont; i++)
    {
        if (lista[i] == dato && lista[i] < 11)
        {
            cout << "la calificacion fue encontrada en la pocicion: " << i + 1 << endl;
            c = true;
        }
    }
    if (c == false)
    {
        cout << "La calificacion digita no existe" << endl;
    }
    else
    {
        cout << "Posiciones de las calificaciones:" << endl;
        for (int i = 0; i < cont; i++)
        {
            cout << "Calificacion " << i + 1 << ":";
            if (lista[i] < 11 && lista[i] > -1)
            {
                cout << "[" << lista[i] << "]" << endl;
            }
            else
            {
                cout << "---" << endl;
            }
        }
    }
}
void eliminar(double calif[])
{
    cout << "Las calificaciones son: " << endl;
    for (int i = 0; i < cont; i++)
    {
        cout << "Calificacion " << i + 1 << ":";
        if (calif[i] < 11 && calif[i] > -1)
        {
            cout << "[" << calif[i] << "]" << endl;
        }
        else
        {
            cout << "---" << endl;
        }
    }
    cout << "Digite la posicion de la calificacion a eliminar: ";
    cin >> elimina;
    cout << "DATOS ACTUALIZADOS:" << endl;
    calif[elimina - 1] = 12;
    for (int i = 0; i < cont; i++)
    {
        cout << "Calificacion " << i + 1 << ":";
        if (calif[i] < 11 && calif[i] > -1)
        {
            cout << "[" << calif[i] << "]" << endl;
        }
        else
        {
            cout << "---" << endl;
        }
    }
}
void insertar(double calif[])
{
    cout << "Las calificaciones son:" << endl;
    for (int i = 0; i < cont; i++)
    {
        cout << "Calificacion " << i + 1 << ":";
        if (calif[i] < 11 && calif[i] > -1)
        {
            cout << "[" << calif[i] << "]" << endl;
        }
        else
        {
            cout << "---" << endl;
        }
    }
    cout << "Inserta la posicion de la calificacion a modificar: ";
    cin >> dato;
    if (dato > cont)
    {
        cout << "La posicion no existe." << endl;
    }
    else
    {
        x = calif[dato - 1];
        cout << "Ingresa la nueva calificacion: ";
        cin >> calif[dato - 1];
        if (calif[dato - 1] > 10 || calif[dato - 1] < 0)
        {
            cout << "Ingresa la calificacion en el rango solicitado" << endl;
            calif[dato - 1] = x;
        }
        cout << "DATOS ACTUALIZADOS:" << endl;
        for (int i = 0; i < cont; i++)
        {
            cout << "Calificacion " << i + 1 << ":";
            if (calif[i] < 11 && calif[i] > -1)
            {
                cout << "[" << calif[i] << "]" << endl;
            }
            else
            {
                cout << "---" << endl;
            }
        }
    }
}
void ordenar(double calif[])
{
    
    for (int i = 0; i < cont; i++)
    {
        for (j = i + 1; j < cont; j++)
        {
            if (calif[j] <= calif[i])
            {
                aux = calif[i];
                calif[i] = calif[j];
                calif[j] = aux;
            }
        }
    }
    cout << "Las calificaciones en orden son:" << endl;
    for (int i = 0; i < cont; i++)
    {

        if (calif[i] < 11 && calif[i] > -1)
        {
            cout << "Calificacion " << i + 1 << ": [" << calif[i] << "]" << endl;
        }
    }
}
