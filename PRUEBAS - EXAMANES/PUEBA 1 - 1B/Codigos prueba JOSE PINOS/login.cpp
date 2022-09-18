#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

string nombre = " ", clave = " ";
int contador = 1;
bool accede = false;

while( ( nombre != "root"||clave != "1234" )&&(contador <= 3) ){

    cout <<"Intento: "<<contador<<endl;

    cout <<"Ingrese su usuario: ";
    cin >> nombre;
    cin.ignore();
    cout <<"Ingrese su clave: ";
    cin >> clave;
    cin.ignore();

    if(nombre == "root" && clave == "1234"){
        accede = true;
    }else{
      if(contador == 1 || contador == 2){
        cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;
      }

      contador++;
    }

    system("pause");
    system("cls");
}//fin del while principal

if(accede){
  cout <<"Bienvenido al sistema"<<endl<<endl;
}else{
  cout <<"Ha superado el n"<<char(163)<<"mero de intentos permitido"<<endl<<endl;
}

  system("pause");
  return 0;
}
