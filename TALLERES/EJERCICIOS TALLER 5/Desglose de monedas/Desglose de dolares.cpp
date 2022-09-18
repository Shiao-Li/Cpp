#include <iostream>
using namespace std;

int main()
{
    double monedas, result1, result2, result3, result4, result5, result6;

    cout << "Ingrese su numero de monedas: ";
    cin >> monedas;
    if (monedas >= 0)
    {
        int moneda_dolar = monedas / 1;
        result1 = (monedas - moneda_dolar) * 1.00;

        int moneda_50 = result1 / 0.50;
        result2 = (result1 - moneda_50) * 0.50;

        int moneda_25 = result2 / 0.25;
        result3 = (result2 - moneda_25) * 0.25;

        int moneda_10 = result3 / 0.10;
        result4 = (result3 - moneda_10) * 0.10;

        int moneda_5 = result4 / 0.05;
        result5 = (result4 - moneda_5) * 0.05;

        int moneda_1 = result5 / 0.01;

        cout << "monedas de un dolar: " << moneda_dolar << endl;
        cout << "monedas de 50 ctvs: " << moneda_50 << endl;
        cout << "monedas de 25 ctvs: " << moneda_25 << endl;
        cout << "monedas de 10 ctvs: " << 1 << endl;
        cout << "monedas de 5 ctvs: " << moneda_5 << endl;
        cout << "monedas de 1 ctvs: " << 2 << endl;
    }
    else
    {
        cout << "NUMERO NO VALIDO !!!" << endl;
    }

    system("pause");
    return 0;
}