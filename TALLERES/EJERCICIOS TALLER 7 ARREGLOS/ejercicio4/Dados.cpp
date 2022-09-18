#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;


void tirarDados();
const int veces = 36000;
int numDado=0;
int numLanzamiento[13] = {0}; 


int main(){
    cout << endl;
    cout<< setw(20) << " > 36000 FORMAS DE LANZAMIENTO con 2 DOS DADOS <" << endl;
    cout << endl;
    tirarDados();

    system("pause");
    return 0;
}
void tirarDados(){

  srand( time( 0 ) );
  
  for ( int i = 1; i <= veces; i++ )
  {                                                 
    numDado = ( 1 + rand() % 6 ) + (1 + rand() % 6 );   
    numLanzamiento[numDado]++;  
  }
  for ( int j = 2; 12 >= j; j++ )
  {
   cout <<"No." << j << " es: " << numLanzamiento[j];
   cout << endl;
  }  
}