#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int cont, numero, suma = 100;
    cout <<"Numeros enteros del 100 al 200 divisbles para 9" << endl;
    cout << " " << endl;
    cout <<"------------------------------------------------" << endl;
    for (int i = 100; i <= 200 ; i++)
    {
        if ((i%9) == 0)
        {
            suma = suma + i;
            cout << setw (18) << i << endl;

        }
        
    }
    
    cout << setw (5) << "la sumatoria de los numeros es: " << suma << endl;  
    system ("pause");
    return 0;
}