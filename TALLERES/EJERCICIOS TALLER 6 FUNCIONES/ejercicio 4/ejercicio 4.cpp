#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;


int dig3, igual;
void numerocubos(int x);
int main(){

    cout <<"Ingrese el digito de 3 cifras: ";
    cin >> dig3;
    numerocubos(dig3);

    system("pause");
    return 0;
}
void numerocubos(int x) {
    int i=0, cifras[10];
    i = 0;
    while (x > 0) {
        cifras[i] = x % 10;
        x = x / 10;
        i++;
    }
    for (int s = i - 1; s >= 0; s--) {
        igual = igual + pow(cifras[s], 3);
    }
    cout << dig3 << "=" << igual << endl;
}