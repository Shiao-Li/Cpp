#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

int i = 10, j = 1;
int tope = 1;
while(i >= tope){

    j = 1;
    while(j <= i ){
      cout <<j;
      j++;
    }

    cout <<endl;
    i--;
}




  return 0;
}
