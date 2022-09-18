#include <iostream>

using namespace std;
int num, m;
int MostrarConcentricos(int n);

int main()
{
	
	cout << "Ingrese el tamanio del cuadrado: ";
	cin >> num;
	cout << endl;
	MostrarConcentricos(num);

	system("pause");
	return 0;
}
int MostrarConcentricos(int n){
	if (n % 2 == 0)
	{
		n++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i <= (n + 1) / 2)
		{
			m = i;
		}
		else
		{
			m--;
		}
		for (int j = 1; j <= n; j++)
		{
			if (i % 2 != 0)
			{
				if (j >= m && j <= (n - (m - 1)))
				{
					cout << " *";
				}
				else if (j % 2 != 0)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			else
			{
				if ((j < m || j > (n - (m - 1))) && j % 2 != 0)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
		}

		cout << "\n";
	}
	return n;
}

