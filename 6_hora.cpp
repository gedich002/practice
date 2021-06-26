#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n1, n2, promedio;

	cout << "Ingrese su primera nota: ";
	cin >> n1;

	cout << "ingrese su segunda nota: ";
	cin >> n2;

	promedio = (n1 + n2) / 2;

	cout << "Su promedio es: "<< promedio;

	getch();
}
