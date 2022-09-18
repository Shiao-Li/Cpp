#include<iostream> 
using namespace std;


int main()
{
    int n = 0, i = 1, resul = 0;
     
    cout << "Ingrese un numero del 1 al 100 para ver su tabla de multiplicar: ";
    cin >> n;
    
    if (n <= 100)
    {
        cout << " " << endl;
        cout <<"Tabla del: " << n << endl;
        cout <<"------------------------------" << endl;
        while (i <= 10)
        {
            resul = i * n;
            cout <<"("<< i <<") x ("<< n <<") = ("<< resul <<")" << endl;
            i++;
        }
    }
    else
    {
        cout <<"El numero no se encuentra en el rango !!"<< endl;
    }
    

    system ("pause");
    return 0;

}