#include<iostream>
#include<iomanip>

using namespace std;
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

int main(){

    mostrarDatos();
    ingresoEmpleados();
    mostrarEmpleados();

    system("pause");
    return 0;
}
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
