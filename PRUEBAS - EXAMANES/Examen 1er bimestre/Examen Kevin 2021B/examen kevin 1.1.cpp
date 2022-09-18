#include <iostream>
#include <string>
using namespace std;
void imprimir(string lista[],int n);
int main(){
  int n;
  string a[50],palabra;
  cout<<"CUANTAS PALABRAS VAS A INGRESAR: ";
  cin>>n;
  cout<<"INGRESA LA CADENA: "<<endl;
  for(int i=0;i<n;i++){
    cin>>palabra;
    a[i]=palabra;
  }
  imprimir(a,n);
}
void imprimir(string lista[],int n){
  char ultimo;
  for(int i=0;i<n;i++){
    ultimo = lista[i].at( lista[i]. length() - 1 );
    if(ultimo=='a' || ultimo=='e' || ultimo=='i' || ultimo=='o' || ultimo=='u'){
      cout<<lista[i]<<"s ";
    }else{
      cout<<lista[i]<<"es ";
    }
  }
  cout<<endl;
}
/*OPCION 2
#include <iostream>
#include <string>
using namespace std;

string Plural(string nombre);

int main() {
	string frase, palabra;
	string separacion = " ";
	cout << endl << " P L U R A L E S" << endl << endl;
	cout << endl << "Ingrese por favor la cadena: " << endl;
	getline(cin, frase);
	int start = 0;
	int end = frase.find(separacion);
	while (end != -1) {
		palabra = frase.substr(start, end - start);
		cout << Plural(palabra) << " ";
		start = end + separacion.size();
		end = frase.find(separacion, start);
	}
	palabra = frase.substr(start, end - start);
	cout << Plural(palabra);

	return 0;
}

string Plural(string nombre) {
	string palabra_plural = nombre;
	int tam = nombre.length() - 1;
	char final_c = nombre[tam];
	if ((final_c == 'a') || (final_c == 'e') || (final_c == 'i') || (final_c == 'o') || (final_c == 'u')) {
		palabra_plural += "s";
	}
	else {
		palabra_plural += "es";
	}
	return palabra_plural;
}*/