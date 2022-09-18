#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

// prototipo
// menu principal
int mostrarMenu();
int menu, op;
// ejercicio 1
int mostrarMenuEje1();
const int Max = 50;
void agregar(double lista[]);
void buscar(double lista[], double dato);
void eliminar(double calif[]);
void insertar(double calif[]);
int cont = 0, menu2, op2, dato, x, elimina, j, aux;
bool c = false;
double lista5[Max];

// ejercicio 2
int contador = 0, resto;
void inicializar(int n);
void inventir(int arreglo[]);
int lista[Max], lista2[Max], lista3[Max], n;

// ejercicio 3
const int tamanio = 20;
int num = 0, i = 0;
int numeros[tamanio];
void inicializar3();
void enlistar();

// ejercicio 4
void tirarDados();
const int veces = 36000;
int numDado = 0;
int numLanzamiento[13] = {0};

int main()
{
    do
    {
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            cout << setw(20) << "Ingresaste a --> 1. Calificaciones" << endl;
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
                    cout << "Saliendo...." << endl;
                    break;
        
                default:
                    cout << "Numero mal ingresado. Intentalo de nuevo" << endl;
                    break;
                }

                cout << "Desea continuar en esta seccion del ejercicio 1?? (1.SI / 0.NO)" << endl;
                cin >> op2;
            } while (op2 == 1);

            break;
        case 2:
            cout << setw(20) << "Ingresaste a --> 2. Palindromo" << endl;
            cout << endl;
            cout << "Cantidad de numero a determinar: ";
            cin >> n;
            inicializar(n);
            inventir(lista);
            for (int i = 0; i < n; i++)
            {
                if (lista2[i] == lista3[i])
                {
                    cout << lista2[i] << " - "
                         << "Palindromo." << endl;
                }
                else
                {
                    cout << lista2[i] << " - "
                         << "No es un Palindromo." << endl;
                }
            }
            break;
        case 3:
            cout << setw(20) << "Ingresaste a --> 3. Duplicados" << endl;
            cout << "Ingrese 20 numeros en un rango del 10 al 100" << endl;
            cout << endl;
            inicializar3();
            enlistar();
            break;
        case 4:
            cout << setw(20) << "Ingresaste a --> 4. Dados" << endl;
            cout << endl;
            cout << setw(20) << " > 36000 FORMAS DE LANZAMIENTO con 2 DOS DADOS <" << endl;
            cout << endl;
            tirarDados();
            break;
        default:
            cout << setw(20) << "Opcion no valida!!!!!" << endl;
            break;
        }
        cout << "Desea continuar en el programa?? (1.SI / 0.NO)" << endl;
        cin >> op;
    } while (op == 1);

    system("pause");
    return 0;
}
//menu principal
int mostrarMenu()
{
    int opcion;
    cout << endl;
    cout << "|======== MENU ========|" << endl;
    cout << "|______________________|" << endl;
    cout << "| 1. Calificaciones    |" << endl;
    cout << "| 2. Palindromo        |" << endl;
    cout << "| 3. Duplicados        |" << endl;
    cout << "| 4. Dados             |" << endl;
    cout << "|______________________|" << endl;
    cout << endl;
    cout << "Selecione una opcion: ";
    cin >> opcion;
    return opcion;
}
// ejercicio 1
int mostrarMenuEje1()
{
    int opcion2;
    cout << endl;
    cout << "|====  MENU EJERCICIO 1 ====|" << endl;
    cout << "|___________________________|" << endl;
    cout << "| 1. Agregar calificacion   |" << endl;
    cout << "| 2. Buscar calificacion    |" << endl;
    cout << "| 3. Eliminar calificacion  |" << endl;
    cout << "| 4. Insertar calificacion  |" << endl;
    cout << "| 5. Salir                  |" << endl;
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
                cout << "X" << endl;
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
            cout << "X" << endl;
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
            cout << "X" << endl;
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
// ejercicio 2
void inicializar(int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> lista[i];
        lista2[i] = lista[i];
    }
    cout << endl;
}
void inventir(int arreglo[])
{
    for (int i = 0; i < n; i++)
    {
        while (lista[i] > 0)
        {
            resto = lista[i] % 10;
            lista[i] = lista[i] / 10;
            lista3[i] = lista3[i] * 10 + resto;
        }
    }
}
// ejercicio 3
void inicializar3()
{
    while (i < tamanio)
    {
        cout << "Ingrese el numero " << i + 1 << " : ";
        cin >> num;
        while (num < 10 || num > 100)
        {
            cout << endl;
            cout << "ATENCION: El numero no esta en el rango" << endl;
            cout << endl;
            cout << "Ingrese el numero " << i + 1 << " : ";
            cin >> num;
        }
        numeros[i] = num;
        if (i > 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (numeros[j] == num)
                {
                    numeros[j] = 0;
                }
            }
        }
        i++;
    }
}
void enlistar()
{
    cout << endl;
    cout << "Lista sin duplicar" << endl;
    for (int k = 0; k < i; k++)
    {
        if (numeros[k] != 0)
        {
            cout << "--> " << numeros[k] << endl;
        }
    }
}
// ejercicio 4
void tirarDados()
{

    srand(time(0));

    for (int i = 1; i <= veces; i++)
    {
        numDado = (1 + rand() % 6) + (1 + rand() % 6);
        numLanzamiento[numDado]++;
    }
    for (int j = 2; 12 >= j; j++)
    {
        cout << "No." << j << " es: " << numLanzamiento[j];
        cout << endl;
    }
}