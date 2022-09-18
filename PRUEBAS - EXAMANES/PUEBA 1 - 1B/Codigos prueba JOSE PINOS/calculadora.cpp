#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

const double PI = 3.14159265;
int main() {
  short int opcion = 0;

  while( (opcion < 1)||(opcion > 8) ){
    //mientras la opción sea mayor que 8 o sea menor que 1 ingresar datos de nuevo
  cout <<'\t'<<"MEN"<<char(233)<<endl;
  cout <<"1) Sumar dos n"<<char(163)<<"meros."<<endl;
  cout <<"2) Restar dos n"<<char(163)<<"meros."<<endl;
  cout <<"3) Multiplicar dos n"<<char(163)<<"meros."<<endl;
  cout <<"4) Dividir dos n"<<char(163)<<"meros."<<endl;
  cout <<"5) Obtener el seno de un "<<char(160)<<"ngulo."<<endl;
  cout <<"6) Obtener el coseno de un "<<char(160)<<"ngulo."<<endl;
  cout <<"7) Obtener la tangente de un "<<char(160)<<"ngulo."<<endl;
  cout <<"8) Salir."<<endl;
  cout <<"Opcion: ";
  cin >> opcion;

    if( (opcion < 1)||(opcion > 8) )
        cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;

  system("pause");
  system("cls");
  }

  if(opcion == 8){
    cout <<"Gracias por su preferencia"<<endl;
  }

  while(opcion != 8){

      switch(opcion){
          case 1:{
              cout <<"\tSUMA"<<endl;
              double valor_1 = 0, valor_2 = 0;
              cout <<"Ingrese el primer valor: ";
              cin >> valor_1;
              cout <<"Ingrese el segundo valor: ";
              cin >> valor_2;

              cout << valor_1 <<" + "<< valor_2 <<" = "<< valor_1 + valor_2<<endl<<endl;
          }
          break;


          case 2:{
              cout <<"\tRESTA"<<endl;
              double valor_1 = 0, valor_2 = 0;
              cout <<"Ingrese el primer valor: ";
              cin >> valor_1;
              cout <<"Ingrese el segundo valor: ";
              cin >> valor_2;

              cout << valor_1 <<" - "<< valor_2 <<" = "<< valor_1 - valor_2<<endl<<endl;
          }
          break;


          case 3:{
              cout <<"\tMULTIPLICACI"<<char(224)<<"N"<<endl;
              double valor_1 = 0, valor_2 = 0;
              cout <<"Ingrese el primer valor: ";
              cin >> valor_1;
              cout <<"Ingrese el segundo valor: ";
              cin >> valor_2;

              cout << valor_1 <<" x "<< valor_2 <<" = "<< valor_1 * valor_2<<endl<<endl;
          }
          break;


          case 4:{
              cout <<"\tDIVISI"<<char(224)<<"N"<<endl;
              double valor_1 = 0, valor_2 = 0;
              cout <<"Ingrese el numerador: ";
              cin >> valor_1;
              cout <<"Ingrese el denominador: ";
              cin >> valor_2;
              while(valor_2 == 0){
                cout <<"Ingrese el denominador: ";
                cin >> valor_2;
              }

              cout << valor_1 <<" / "<< valor_2 <<" = "<< valor_1 / valor_2<<endl;
              cout << (int)valor_1 <<" % "<< (int)valor_2 << " = "<< (int)valor_1 % (int)valor_2<<endl<<endl;
          }
          break;


          case 5:{
              cout <<"\tSENO"<<endl;
              double valor_1 = 0;
              cout <<"Ingrese el valor del "<<char(160)<<"ngulo: ";
              cin >> valor_1;


              cout << "Sin("<< valor_1 <<") = "<< sin(valor_1 * PI/180.0)<<endl;
          }
          break;


          case 6:{
              cout <<"\tCOSENO"<<endl;
              double valor_1 = 0;
              cout <<"Ingrese el valor del "<<char(160)<<"ngulo: ";
              cin >> valor_1;


              cout << "Cos("<< valor_1 <<") = "<< cos(valor_1 * PI/180.0)<<endl;
          }
          break;


          case 7:{
              cout <<"\tTANGENTE"<<endl;
              double valor_1 = 0;
              cout <<"Ingrese el valor del "<<char(160)<<"ngulo: ";
              cin >> valor_1;


              cout << "Tan("<< valor_1 <<") = "<< tan(valor_1 * PI/180.0)<<endl;
          }
          break;


          default:{
            cout <<"Error"<<endl;
          }
          break;

      }//fin del switch

      system("pause");
      system("cls");

      opcion = 0;
      while( (opcion < 1)||(opcion > 8) ){
        //mientras la opción sea mayor que 8 o sea menor que 1 ingresar datos de nuevo
      cout <<'\t'<<"MEN"<<char(233)<<endl;
      cout <<"1) Sumar dos n"<<char(163)<<"meros."<<endl;
      cout <<"2) Restar dos n"<<char(163)<<"meros."<<endl;
      cout <<"3) Multiplicar dos n"<<char(163)<<"meros."<<endl;
      cout <<"4) Dividir dos n"<<char(163)<<"meros."<<endl;
      cout <<"5) Obtener el seno de un "<<char(160)<<"ngulo."<<endl;
      cout <<"6) Obtener el coseno de un "<<char(160)<<"ngulo."<<endl;
      cout <<"7) Obtener la tangente de un "<<char(160)<<"ngulo."<<endl;
      cout <<"8) Salir."<<endl;
      cout <<"Opcion: ";
      cin >> opcion;

        if( (opcion < 1)||(opcion > 8) )
            cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;
      system("pause");
      system("cls");
      }

      if(opcion == 8){
        cout <<"Gracias por su preferencia"<<endl;
      }

  }//FIN DEL WHILE PRINCIPAL



  return 0;
}
