#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int numero,c1, c2, c3, c4;
	cout << "Ingrese numero: ";
	cin >> numero;

	c1 = numero / 1000;
	c2 = (numero - c1 * 1000) / 100;
	c3 = (numero - (numero/100)*100) / 10;
	c4 = (numero - (numero / 10) * 10);

	cout << "La suma de cifras es: " << c1+c2+c3+c4;

	getch();
}