#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double precio, porcentaje_des = 0.15, porcentaje_iva = 0.12;
    int unidades, cedula;
    char letra;
    string nombre, direccion, producto;

    cout << "Precio del producto: ";
    cin >> precio;
    cout << "Unidades: ";
    cin >> unidades;
    cout << "Descuento (s/n)?: ";
    cin >> letra;
    cin.sync();
    cout << "Nombre del cliente: ";
    getline(cin, nombre);
    cout << "CI del cliente: ";
    cin >> cedula;
    cin.sync();
    cout << "Direccion del cliente: ";
    getline(cin, direccion);
    cout << "Nombre del prodcto: ";
    getline(cin, producto);

    cout << " " << endl;

    cout << "Factura:" << endl;
    cout << right << setw(50) << nombre << endl;
    cout << right << setw(50) << direccion << endl;
    cout << right << setw(50) << cedula << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario" << endl;
    cout << right << setw(50) << precio << endl;
    cout << "Unidades" << endl;
    cout << right << setw(50) << unidades << endl;

    cout << "Total" << endl;
    double total = precio * unidades;
    cout << right << setw(50) << total << endl;

    cout << "Descuento" << endl;
    switch (letra)
    {
    case 's':
    {
        double descuento = total * porcentaje_des; // descuento del 15%
        cout << right << setw(50) << descuento << endl;

        cout << "Total tras descuento" << endl;
        double tras_des = total - descuento;
        cout << right << setw(50) << tras_des << endl;

        cout << "I.V.A" << endl;
        double iva = tras_des * porcentaje_iva;
        cout << right << setw(50) << iva << endl;

        cout << "Precio final" << endl;
        double final = iva + tras_des;
        cout << right << setw(50) << final << endl;
    }
    break;
    default:
    {
        double descuento1 = 0; // descuento del 0%
        cout << right << setw(50) << descuento1 << endl;

        cout << "Total tras descuento" << endl;
        double tras_des = total - descuento1;
        cout << right << setw(50) << tras_des << endl;

        cout << "I.V.A" << endl;
        double iva = tras_des * porcentaje_iva;
        cout << right << setw(50) << iva << endl;

        cout << "Precio final" << endl;
        double final = iva + tras_des;
        cout << right << setw(50) << final << endl;
    }
    }

    system("pause");
    return 0;
}