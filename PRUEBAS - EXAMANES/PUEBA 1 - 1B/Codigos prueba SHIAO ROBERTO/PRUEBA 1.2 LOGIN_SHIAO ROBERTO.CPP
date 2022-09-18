#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int contrasena1 = 1234, contrasenaa;
    string usuario;

    cout << "=========== FACEBOOK ============" << endl;
    cout << endl;
    cout <<"Ingrese su nombre de usuario: ";
    cin >> usuario;
    cout <<"Ingrese la contrasena: ";
    cin >> contrasenaa;
    if (contrasenaa == 1234 )
    {
        cout <<"BIENVENIDO A SU SESION DE FACEBOOK" << endl;
    }
    else
    {
        cout <<"CONTRASEÑA INCORRECTA" << endl;
    }

    system("pause");
    return 0;   

}