#include<iostream>
using namespace std;
const int Max = 50;
int contador = 0, resto;
void inicializar(int n);
void inventir(int arreglo[]);
int lista[Max], lista2[Max], lista3[Max], n;

int main(){
    cout << "Cantidad de numero a determinar: ";
    cin >> n;
    inicializar(n);
    inventir(lista);
    for (int i = 0; i < n; i++)
    {
        if (lista2[i] == lista3[i])
        {
            cout << lista2[i] << " - " << "Palindromo." << endl;
        }
        else
        {
            cout << lista2[i] << " - " << "No es un Palindromo." << endl;
        }
    }

    system("pause");
    return 0;
}
void inicializar(int n){
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> lista[i];
        lista2[i] = lista[i];
    }
    cout << endl;
}
void inventir(int arreglo[])
{
    for (int i = 0; i < n; i++)
    {
        while (lista[i] > 0)
        {
            resto = lista[i] % 10;
            lista[i] = lista[i] / 10;
            lista3[i] = lista3[i] * 10 + resto;
        }
    }
}