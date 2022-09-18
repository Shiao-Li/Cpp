#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    
    int i = 11;
    cout << endl;
    while (i > 0)
    {
        i--;
        int j = 1;
        while (j <= i)
        {
            cout <<setw(2)<< j;
            j++;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}