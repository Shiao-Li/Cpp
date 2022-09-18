#include<iostream>
#include<iomanip>

using namespace std;

int mostrarMenu();
int menu, op;
int main(){
     do
    {
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            cout << setw(20) << "Ingresaste a " << endl;
            
            break;
        case 2:
            cout << setw(20) << "Ingresaste a " << endl;
            
            break;
        case 3:
            cout << setw(20) << "Ingresaste a " << endl;
            
            break;
        case 4:
            cout << setw(20) << "Ingresaste a " << endl;
           
            break;
        default:
            cout << setw(20) << "Opcion no valida!!!!!" << endl;
            break;
        }
        cout << "Desea continuar en el programa?? (1.SI / 0.NO)" << endl;
        cin >> op;
    } while (op == 1);


    system("pause");
    return 0;
}
int mostrarMenu()
{
    int opcion;
    cout << endl;
    cout << "|======== MENU ========|" << endl;
    cout << "|______________________|" << endl;
    cout << "| 1.          |" << endl;
    cout << "| 2.          |" << endl;
    cout << "| 3.          |" << endl;
    cout << "| 4.          |" << endl;
    cout << "|______________________|" << endl;
    cout << endl;
    cout << "Selecione una opcion: ";
    cin >> opcion;
    return opcion;
}