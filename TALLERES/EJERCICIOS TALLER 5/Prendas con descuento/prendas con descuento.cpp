#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int vestidos, zapatos, carteras;
    const double mas10 = 0.10, mas20 = 0.20, mas30 = 0.30;
    cout << setw(55) << "[  BIENVENIDO A BOUTIQUE RS  ]" << endl;
    cout << endl;
    cout << "Ingrese la cantidad de vestidos que adquirio: ";
    cin >> vestidos;
    cout << "Ingrese la cantidad de zapatos que adquirio: ";
    cin >> zapatos;
    cout << "Ingrese la cantidad de carteras que adquirio: ";
    cin >> carteras;
    cout << endl;
    cout << "============== RESUMEN DE COMPRA ==============" << endl;
    cout << endl;
    int total_prendas = (vestidos + zapatos + carteras);
    cout << "Numero de vestidos: "<< right << setw(35) << vestidos << endl;
    cout << "Numero de zapatos: "<< right << setw(35) << zapatos << endl;
    cout << "Numero de carteras: "<< right << setw(35) << carteras << endl;
    cout << "Total de prendas: "<< right << setw(35) << total_prendas << endl;
    cout << endl;
    cout << "==================== FACTURA ====================" << endl;
    cout << endl;

    double subtotal = (vestidos * 80.0) + (zapatos * 50.0) + (carteras * 40.0);
    cout << "Subtotal: "<< right << setw(35) << subtotal << endl;

    if (total_prendas >= 10 && total_prendas <= 20)
    {
        double porc_1 = (subtotal * mas10);
        cout << "Descuento del 10%: "<< right << setw(35) << porc_1 << endl;
        double des_1 = subtotal - porc_1;
        cout << "Total a pagar: "<< right << setw(35) << des_1 << endl;
        cout << endl;
        cout << "================ GRACIAS POR SU VISITA ===============" << endl;
    }
    else if (total_prendas > 20 && total_prendas < 30)
    {
        double porc_2 = (subtotal * mas20);
        cout << "Descuento del 20%: " << right << setw(35) << porc_2 << endl;
        double des_2 = subtotal - porc_2;
        cout << "Total a pagar: "<< right << setw(35) << des_2 << endl;
        cout << endl;
        cout << "================ GRACIAS POR SU VISITA ===============" << endl;
    }
    if (total_prendas >= 30)
    {
        double porc_3 = (subtotal * mas30);
        cout << "Descuento del 30%: "<< right << setw(35) << porc_3 << endl;
        double des_3 = subtotal - porc_3;
        cout << "Total a pagar: "<< right << setw(35) << des_3 << endl;
        cout << endl;
        cout << "================ GRACIAS POR SU VISITA ===============" << endl;
    }

    system("pause");
    return 0;
}