#include<iostream> 
using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout <<"Escriba tres numeros separados por coma: ";
    cin >> num1;
    cin.ignore(1);
    cin >> num2;
    cin.ignore(1);
    cin >> num3;
    cout << endl;
    
    if(num3>num2 && num2>num1)
    {
    cout <<"los numeros ordenados son: "<< num1<< ","<< num2<< ","<< num3 << endl;
    }
    else if(num1>num2 && num2>num3)
    {
    cout <<"los numeros ordenados son: "<< num3<< ","<< num2<< ","<< num1 << endl;
    }
    else if(num1>num2 && num3>num1)
    {
    cout <<"los numeros ordenados son: "<< num2<< ","<< num1<< ","<< num3 << endl;
    }
    else if(num1>num3 && num3>num2)
    {
    cout <<"los numeros ordenados son: "<< num2<< ","<< num3<< ","<< num1 << endl;
    }
    else if(num2>num3 && num2>num1 && num1>num3)
    {
    cout <<"los numeros ordenados son: "<< num3<< ","<< num1<< ","<< num2 << endl;
    }
    else 
    {
    cout <<"los numeros ordenados son: "<< num1<< ","<< num3<< ","<< num2 << endl;
    }

    
    system("pause");
    return 0;

}