#include<iostream>
#include<iomanip>
#include<fstream>
#include<ctime>
#include<string>

using namespace std;
// prototipo_menu principal
int mostrarMenu();
int menu, op;
// estructura_variables_prototipos Equipos
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
// estructura_variables_prototipos animales
const int TAM = 100;
int n, aux, opcion1,busqueda;

struct animales
{
    string caracteristicas;
    double peso;
    string tipo;
    int identificacion;
} animales1[TAM];

int mostrarenuAnimales();
void ingresarDatos();
void leerArchivo();
int identificacionAnimal();
int buscarAnimal();
// estructura_variables_prototipos becarios
void mostrarDatos();
void ingresoEmpleados();
void mostrarEmpleados();
const int MAX = 50;
int num_e;

struct empleados{
	string nombre;
	int edad;
	string gradoEstudios;
	string contratacion;
}empleados1[MAX];
// estructura_variables_prototipos fechas
typedef struct
{
    int dia;
    int mes;
    int ano;
} tFecha;
tFecha fechas[2];
void IngresarFecha();
void MostrarMoM();

//INICIO DE LA FUNCION PRINCIPAL
int main(){
     do
    {
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            cout << setw(20) << "Ingresaste a --> 1. Equipos" << endl;
            cout << endl;
            imprimirEje1();
            cout << endl;
            break;
        case 2:
            cout << setw(20) << "Ingresaste a --> 2. Animales" << endl;
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
            break;
        case 3:
            cout << setw(20) << "Ingresaste a --> 3. Becarios" << endl;
            mostrarDatos();
            ingresoEmpleados();
            mostrarEmpleados();

            break;
        case 4:
            cout << setw(20) << "Ingresaste a --> 4. Fechas" << endl;
            IngresarFecha();
            MostrarMoM();
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
//funciones menu principal
int mostrarMenu()
{
    int opcion;
    cout << endl;
    cout << "|======== MENU ========|" << endl;
    cout << "|______________________|" << endl;
    cout << "| 1. Equipos           |" << endl;
    cout << "| 2. Animales          |" << endl;
    cout << "| 3. Becarios          |" << endl;
    cout << "| 4. Fechas            |" << endl;
    cout << "|______________________|" << endl;
    cout << endl;
    cout << "Selecione una opcion: ";
    cin >> opcion;
    return opcion;
}
//funciones ejercicio equipo
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
//funciones ejercicio animales
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
//funciones ejercicio becarios
void mostrarDatos(){
    cout << setw(35) << "TOMA EN CUENTA LO SIGUIENTE" << endl;
    cout << endl;
    cout << setw(10) << "GRADO DE ESTUDIO" << setw(40) << "TIPO DE CONTRATACION" << endl;
    cout << setw(10) << "Escuela" << setw(38) << "Fijo" << endl;
    cout << setw(10) << "Bachillerato" << setw(40) << "En practicas" << endl;
    cout << setw(10) << "Titulo tecnico" << setw(36) << "Eventual" << endl;
    cout << setw(10) << "Tercer nivel" << setw(38) << "Becario" << endl;
    cout << setw(10) << "Master" << setw(35) << endl;
    cout << setw(10) << "Doctorado" << endl;
    cout << endl;
}
void ingresoEmpleados()
{
    cout << "Numero de Empleados a contratar: ";
    cin >> num_e;
    for (int i = 0; i < num_e; i++)
    {
        cout<<endl;
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin.ignore();
        getline(cin, empleados1[i].nombre);
        cout << "Ingrese la edad del empleado " << i + 1 << ": ";
        cin >> empleados1[i].edad;
        cout << "Ingrese el grado de Estudios del empleado " << i + 1 << ": ";
        cin.ignore();
        getline(cin, empleados1[i].gradoEstudios);
        cout << "Ingrese el tipo de contratacion: ";
        cin.ignore();
        getline(cin, empleados1[i].contratacion);
    }
}
void mostrarEmpleados(){
    cout << endl;
    cout << setw(15) << "================= LISTADO DE EMPLEADOS ================="<< endl; 
    cout << endl;
	cout << setw(15) << "NOMBRE DEL EMPLEADO " << setw(40) << "GRADO DE TITULACION" << endl;
    cout << endl;
 	for(int i=0; i<num_e; i++){
        cout << setw(10) << empleados1[i].nombre << setw(35) <<right<< empleados1[i].gradoEstudios<< endl;
        }
 }
 //funciones ejercicio fechas
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