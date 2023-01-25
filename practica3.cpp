#include <iostream>
using namespace std;
int main()
{
	/*
	//programa1
	int vector[10];
	int i;
	for ( i = 0; i < 10; i++)
	{
		cout << "introdice el " << i << " valor\n";
		cin >> vector[i];
	}
	for (i <= 10; i >= 0; i--)
	{
		cout << vector[i]<<endl;//NO SE PORQUE SIEMPRE SE IMPRIME EL SIGUIENTE NUMERO -858993460
	}
	*/
	/*
	//programa2
	int vector[10];
	int sum = 0;
	int i,suma;
	for (i = 0; i < 10; i++)
	{
		cout << "introdice el " << i << " valor\n";
		cin >> vector[i];
	}

	for (i = 0; i < 10; i++)
	{
		sum = sum + vector[i];
		suma = sum / 10;
		cout << suma << endl;//unicamente se imprime la media pero solo en enteros porque me daba error si definia los valores como float
	}*/
	//programa3
	int vector[10];
	int mayor = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << "introdice el " << i << " valor\n";
		cin >> vector[i];
		if (vector[i]>mayor)
		{
			mayor = vector[i];
		}
	}
	cout << " el numero mayor es" <<mayor;
}
