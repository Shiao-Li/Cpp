#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
const int TAM = 100;
int n, aux, opcion1,busqueda;
//estructura animales
struct animales
{

    string caracteristicas;
    double peso;
    string tipo;
    int identificacion;

} animales1[TAM];
//prototipo animales
int mostrarenuAnimales();
void ingresarDatos();
void leerArchivo();
int identificacionAnimal();
int buscarAnimal();

int main()
{

    do
    {
        opcion1 = mostrarenuAnimales();
        switch (opcion1)
        {
        case 1:
            ingresarDatos();
            break;
        case 2:
            leerArchivo();
            break;
        case 3:
            cout << "Numero de idnetifiacion del animal: ";
            cin >> busqueda;
            cout << "El animal esta en la posicion: " << buscarAnimal();
            break;
        case 4:
            cout << "Saliendo...." << endl;

            break;
        }
    } while (opcion1 != 4);

    system("puase");
    return 0;
}
int mostrarenuAnimales()
{
    int opcion1;
    cout << endl;
    cout << "|================ MENU ANIMALES ============|" << endl;
    cout << "|___________________________________________|" << endl;
    cout << "|1. Registrar animal                        |" << endl;
    cout << "|2. Base de datos de animales del zoologico |" << endl;
    cout << "|3. Buscar animal                           |" << endl;
    cout << "|4. Salir                                   |" << endl;
    cout << "|___________________________________________|" << endl;
    cout << "Opcion: ";
    cin >> opcion1;
    return opcion1;
}
void ingresarDatos()
{

    ofstream archivo;
    archivo.open("archivo.txt");
    cout << "Cuantos animales va ingresar?: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << "Animal: " << endl;
        cin.ignore();
        getline(cin, animales1[i].caracteristicas);
        cout << "Peso del animal en (KG): ";
        cin >> animales1[i].peso;
        cout << "Tipo de animal: ";
        cin.ignore();
        getline(cin, animales1[i].tipo);
        cout << "El numero de identificacion del animal es: ";
        animales1[i].identificacion = identificacionAnimal();
        cout << animales1[i].identificacion << endl;
        cout << endl;
    }
    cout << endl;
    archivo << "======== DATOS DE LOS ANIMALES =========" << endl;
    for (int i = 0; i < n; i++)
    {

        archivo << "ANIMAL: " << animales1[i].caracteristicas << endl;
        archivo << "PESO DEL ANIMAL (KG): " << animales1[i].peso << endl;
        archivo << "TIPO ANIMAL: " << animales1[i].tipo << endl;
        archivo<< "IDENTIFICACION: " << animales1[i].identificacion << endl;
    }
    archivo.close();
}
int buscarAnimal()
{

    bool c = false;

    for (int i = 0; i < n; i++)
    {
        if (animales1[i].identificacion == busqueda)
        {
            c = true;
            return i + 1;
        }
    }
    return -1;
}
int identificacionAnimal()
{
    double valor;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        valor = rand();
    }

    return valor;
}
void leerArchivo()
{

    ifstream archivo;
    string texto;

    archivo.open("archivo.txt");

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
    }
    else
    {

        while (!archivo.eof())
        {
            cout << endl;
            getline(archivo, texto);

            cout << texto;
        }
    }
    archivo.close();
}