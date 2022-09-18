#include<iostream>
using namespace std;

int main()
{
    const double huevos = 0.15, aceite = 1.10, leche = 0.90, arroz = 0.60, cerveza = (1.80*0.05), cerveza2 = 1.80+cerveza;
    int cant_huevos, cant_aceite, cant_leche, cant_arroz, cant_cerveza; 

    cout << "/////// Bienvenido al supermercado RS ///////"<< endl;
    cout << "Ingrese la cantidad de huevos comprados: ";
    cin >> cant_huevos;
    cout << "Ingrese la cantidad de aceites comprados: ";
    cin >> cant_aceite;
    cout << "Ingrese la cantidad de leches comprados: ";
    cin >> cant_leche;
    cout << "Ingrese cuantas libras compro de arroz: ";
    cin >> cant_arroz;
    cout << "Ingrese la cantidad de cervezas compradas: ";
    cin >> cant_cerveza;

    cout << "/////// SU FACTURA ///////"<< endl;
    cout <<"1.Ustes compro un total de "<< (cant_huevos+cant_aceite+cant_leche+cant_arroz+cant_cerveza) << " articulos" << endl;
    cout <<"2.El precio de los huevos comprados es: "<< (cant_huevos*huevos) << endl;
    cout <<"3.El precio de los aceites comprados son: "<< (cant_aceite*aceite) << endl;
    cout <<"4.El precio de las leches compradas es: "<< (cant_leche*leche) << endl;
    cout <<"5.El precio de las libras de arroz compradas son: "<< (cant_arroz*arroz)<< endl;
    cout <<"6.El precio de las cervezas compradas es (CONTIENE EL IMPUESTO DEL 5%): "<< (cant_cerveza*cerveza2)<< endl;
    cout <<" "<< endl;
    double Subtotal=(cant_huevos*huevos)+(cant_aceite*aceite)+(cant_leche*leche)+(cant_arroz*arroz)+(cant_cerveza*cerveza2);
    cout <<"**SUBTOTAL: " << Subtotal << endl;

    double iva = Subtotal*0.12, sub_iva = Subtotal + iva;
    cout << "****IVA DEL 12%: " << sub_iva << endl;

    double descuento=sub_iva*0.01, sub_des = sub_iva - descuento;
    cout <<"*******DESCUENTO DEL 1%: " << descuento << endl;
    cout <<"************ TOTAL: " << sub_des << endl;
    cout <<" " << endl;
    cout << "/////// GRACIAS POR SU VISITA, VUELVA PRONTO ///////"<< endl;

    system("pause");
    return 0;
}