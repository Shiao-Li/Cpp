#include <iostream>
#include <fstream>
#include<string>
using namespace std;

const int MAX = 100;
// estructura de animales
typedef struct
{
    string animal;
    double peso;
    string tipo;
} tAnimales;
typedef struct
{
    tAnimales elementos[MAX];
    int contador;
} tLista;
//fin estructuras 
//prototipo 
int mostrarenuAnimales();
void cargar(tLista &lista, bool &ok);
void leerAnimal(tAnimales &animales);
void insertarAnimal(tLista &lista, tAnimales animales, bool &ok);


void guardar(const tLista lista);
int main()
{
    tLista lista;
    tAnimales animales;
    bool exito;
    int op, pos;
    cargar(lista, exito);
    if (!exito)
    {
        cout << "No se ha podido cargar la lista" << endl;
    }
    else
    {
        do
        {
            op = mostrarenuAnimales();
            switch (op)
            {
            case 1:
                leerAnimal(animales);
                insertarAnimal(lista, animales, exito);
                if (exito)
                {
                    cout << "Lista llena: Imposible añadir mas ANIMALES AL ZOOLOGICO" << endl;
                }
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                cout << "Saliendo...." << endl;

                break;
            }
        } while (op != 4);
        guardar(lista);
       //aqui deberia guardar
    }

    system("pause");
    return 0;
}
int mostrarenuAnimales()
{
    int op;
    cout << endl;
    cout << "|================ MENU ANIMALES ============|" << endl;
    cout << "|___________________________________________|" << endl;
    cout << "|1. Registrar animal                        |" << endl;
    cout << "|2. Base de datos de animales del zoologico |" << endl;
    cout << "|3. Buscar animal                           |" << endl;
    cout << "|4. Salir                                   |" << endl;
    cout << "|___________________________________________|" << endl;
    cout << "Opcion: ";
    cin >> op;
    return op;
}
void cargar(tLista &lista, bool &ok)
{
    tAnimales animales;
    ifstream archivo;
    lista.contador = 0;
    char aux;
    archivo.open("archivo.txt");
    if (!archivo.is_open())
    {
        ok = false;
    }
    else
    {
        ok = true;
        getline(archivo, animales.animal);
        while ((animales.animal != "XXX") && lista.contador < MAX)
        {
            archivo >> animales.peso;
            getline(archivo, animales.tipo);
            archivo.get(aux);
            lista.elementos[lista.contador] = animales;
            lista.contador++;
            getline(archivo, animales.animal);
        }
        archivo.close();
    }
}
void leerAnimal(tAnimales &animales)
{
    cin.ignore();
    cout << "Animal: ";
    getline(cin, animales.animal);
    cout << "Peso en (KG): ";
    cin >> animales.peso;
    cout << "Tipo de animal: ";
    cin.ignore();
    getline(cin, animales.tipo);

}
void insertarAnimal(tLista &lista, tAnimales animal, bool &ok)
{
    ok = true;
    if (lista.contador == MAX)
    {
        ok = false;
    }
    else
    {
        lista.elementos[lista.contador] = animal;
        lista.contador++;
    }
}
void baseDeDatosAnimales(){

}

//esto va alfinal para guardar la base de datos 
void guardar(const tLista lista)
{
    ofstream archivo;
    archivo.open("archivo.txt");
    for (int i = 0; i < lista.contador; i++)
    {
        archivo << lista.elementos[i].animal << endl;
        archivo << lista.elementos[i].peso << endl;
        archivo << lista.elementos[i].tipo << endl;
    }
    archivo << "XXX" << endl; // centinela
    archivo.close();
}