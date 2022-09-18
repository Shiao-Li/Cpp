#include<iostream>
using namespace std;

int main()
{
  int numero;
    for (int i=1; i <= 100; i++)  
      {
        cout << i << ". Introduzca un numero: ";
        cin >> numero;
        cout << endl;
        
        for (int i=1; i<= numero; i++)
        {
            cout <<"*";
        }
        cout << endl;
      }

  system("pause");
  return 0;

}