// Ejercicio 2 Canciones

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip>

const int MAX = 10;
typedef struct {
  int numero;
  string titulo;
  string artista;
  string genero;
  int anio;
} tCancion;
typedef struct {
  tCancion elementos[MAX];
  int contador;
} tLista;

// Prototipos
int menu(); // Menú del programa - devuelve la opción elegida
void cargar(tLista &lista, bool &ok); // Carga el archivo en la lista
void guardar(const tLista &lista);    // Guarda la lista en el archivo
void leerCancion(tCancion &cancion);  // Lee los datos
void insertarCancion(tLista &lista, tCancion cancion,
                     bool &ok); // Inserta una nueva cancion en la lista
void mostrarCancion(tCancion cancion);
void listado(const tLista &lista); // Lista de canciones
void buscarArtista(const tLista lista, string artista, bool &ok);

int main() {
  setlocale(LC_ALL, ""); // permite imprimir caracteres con tildes
  tLista lista;
  tCancion cancion;
  bool exito;
  int op;
  string artista;

  cargar(lista, exito);

  if (!exito) {
    cout << "No se ha podido cargar la lista!" << endl;
  } else {
    do { // El bucle do evita tener que leer antes la primera opción
      op = menu();
      switch (op) {
      case 1: {
        listado(lista);

      } break;
      case 2: {
        leerCancion(cancion);
        insertarCancion(lista, cancion, exito);
        if (!exito) {
          cout << "Lista llena: imposible insertar" << endl;
        }

      } break;
      case 3: {
        cin.ignore();
        cout << "Nombre del artista a buscar: ";
        getline(cin, artista);
        buscarArtista(lista, artista, exito);
        if (!exito) {
          cout << "No hay canciones de ese artista!" << endl;
        }
      }
      }
    } while (op != 0);

    guardar(lista);
  }

  return 0;
}

int menu() {
  int op;
  do {
    cout << endl << "*****Menú de opciones del Programa*****" << endl;
    cout << "1 - Listado de canciones" << endl;
    cout << "2 - Agregar canción en la play list" << endl;
    cout << "3 - Buscar canciones por artista" << endl;
    cout << "0 - Salir" << endl;
    cout << "Opcion: ";
    cin >> op;
  } while ((op < 0) || (op > 3));

  return op;
}

void cargar(tLista &lista, bool &ok) {
  tCancion cancion;
  ifstream archivo;
  char aux;
  lista.contador = 0; // Inicializamos la lista
  archivo.open("musica.txt");
  if (!archivo.is_open()) {
    ok = false;
  } else {
    ok = true;
    archivo >> cancion.numero; // Leemos el primer nuumero
    while ((cancion.numero != -1) && (lista.contador < MAX)) {
      archivo.get(aux);
      getline(archivo, cancion.titulo);
      getline(archivo, cancion.artista);
      archivo >> cancion.genero;
      archivo >> cancion.anio;
      lista.elementos[lista.contador] = cancion; // Al final
      lista.contador++;
      archivo >> cancion.numero; // Siguiente numero
    } // Si hay más de MAX canciones, ignoramos el resto
    archivo.close();
  }
}

void guardar(const tLista &lista) {
  ofstream archivo;
  archivo.open("musica.txt");
  for (int i = 0; i < lista.contador; i++) {
    archivo << lista.elementos[i].numero << endl;
    archivo << lista.elementos[i].titulo << endl;
    archivo << lista.elementos[i].artista << endl;
    archivo << lista.elementos[i].genero << endl;
    archivo << lista.elementos[i].anio << endl;
  }
  archivo << -1 << endl; // Centinela final
  archivo.close();
}

void leerCancion(tCancion &cancion) {
  cin.ignore();
  cout << "Titulo de la canción: ";
  getline(cin, cancion.titulo);
  cout << "Artista: ";
  getline(cin, cancion.artista);
  cout << "Género: ";
  cin >> cancion.genero;
  cout << "año de publicación: ";
  cin >> cancion.anio;
  cin.ignore(); // Descartamos cualquier entrada pendiente
}

void insertarCancion(tLista &lista, tCancion cancion, bool &ok) {
  ok = true;
  if (lista.contador == MAX) {
    ok = false;
  } else {
    cancion.numero = lista.contador + 1;
    lista.elementos[lista.contador] = cancion; // Insertamos al final
    lista.contador++;
  }
}

void mostrarCancion(tCancion cancion) {
  cout << setw(2) << left << cancion.numero << ". ";
  cout << setw(20) << left << cancion.titulo;
  cout << setw(20) << left << cancion.artista;
  cout << setw(10) << left << cancion.genero << " ";
  cout << setw(6) << right << cancion.anio << endl;
}

void listado(const tLista &lista) {
  for (int i = 0; i < lista.contador; i++) {
    mostrarCancion(lista.elementos[i]);
  }
}

void buscarArtista(const tLista lista, string artista, bool &ok) {
  ok = false;
  for (int i = 0; i < lista.contador; i++) {
    if (lista.elementos[i].artista == artista) {
      ok = true;
      mostrarCancion(lista.elementos[i]);
    }
  }
}

/*
//Ejercicio 1 Matrices
#include <iostream>
using namespace std;
#include <iomanip>

void imprimir_matriz(const int matriz[3][3]);
int main()
{
    int matrizA[3][3] = { 1,1,1, 2,2,2, 3,3,3 };
    int matrizB[3][3] = { 4,4,4, 5,5,5, 6,6,6 };
    int matrizSuma[3][3];
    int matrizResta[3][3];
    cout << "Matriz A" << endl;
    imprimir_matriz(matrizA);
    cout << "Matriz B" << endl;
    imprimir_matriz(matrizB);
    //operaciones
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
            matrizResta[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    cout << "Suma Matriz A+B" << endl;
    imprimir_matriz(matrizSuma);
    cout << "Resta Matriz A-B" << endl;
    imprimir_matriz(matrizResta);
}

void imprimir_matriz(const int matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "|";
            for (int j = 0; j < 3; j++)
            {
                cout << setw(3) << matriz[i][j];
            }
        cout << "|" << endl;
    }
}
*/