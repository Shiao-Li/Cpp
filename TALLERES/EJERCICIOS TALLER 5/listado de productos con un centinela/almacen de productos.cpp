#include <iostream>
using namespace std;

main()
{

    int num_producto, num_deseados;
    double total = 0, precio1 = 0, precio2 = 0, precio3 = 0, precio4 = 0, precio5 = 0;
    int num1_deseados = 0, num2_deseados = 0, num3_deseados = 0, num4_deseados = 0, num5_deseados = 0;
    const double produc_1 = 2.98, produc_2 = 4.50, produc_3 = 9.98, produc_4 = 4.49, produc_5 = 6.87;

    cout << "Productos disponibles" << endl;
    cout << endl;
    cout << "Producto 1 --> $2.98" << endl;
    cout << "Producto 2 --> $4.50" << endl;
    cout << "Producto 3 --> $9.98" << endl;
    cout << "Producto 4 --> $4.49" << endl;
    cout << "Producto 5 --> $6.87" << endl;
    cout << endl;

    cout << "Ingrese el numero del producto (0 para terminar): ";
    cin >> num_producto;
    cout << endl;

    while (num_producto != 0)
    {

        switch (num_producto)
        {
        case 1:
        {
            cout << "Elegio el producto 1" << endl;
            cout << "Cuantos desea? ";
            cin >> num1_deseados;
            precio1 = num1_deseados * produc_1;
            cout << "Debe pagar por este producto: " << precio1 << "$" << endl;
        }
        break;
        case 2:
        {
            cout << "Elegio el producto 2" << endl;
            cout << "Cuantos desea? ";
            cin >> num2_deseados;
            precio2 = num2_deseados * produc_2;
            cout << "Debe pagar por este producto: " << precio2 << "$" << endl;
        }
        break;
        case 3:
        {
            cout << "Elegio el producto 3" << endl;
            cout << "Cuantos desea? ";
            cin >> num3_deseados;
            precio3 = num3_deseados * produc_3;
            cout << "Debe pagar por este producto: " << precio3 << "$" << endl;
        }
        break;
        case 4:
        {
            cout << "Elegio el producto 4" << endl;
            cout << "Cuantos desea? ";
            cin >> num4_deseados;
            precio4 = num4_deseados * produc_4;
            cout << "Debe pagar por este producto: " << precio4 << "$" << endl;
        }
        break;
        case 5:
        {
            cout << "Elegio el producto 5" << endl;
            cout << "Cuantos desea? ";
            cin >> num5_deseados;
            precio5 = num5_deseados * produc_5;
            cout << "Debe pagar por este producto: " << precio5 << "$" << endl;
        }
        break;
        }

        cout << "Ingrese el numero del producto (0 para terminar): ";
        cin >> num_producto;
    }
    cout << endl;

    total = (precio1 + precio2 + precio3 + precio4 + precio5);
    cout << "El pago total es de: " << total <<"$"<< endl;
    

    system("pause");
    return 0;
}