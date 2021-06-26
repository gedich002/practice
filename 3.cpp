#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float base,altura,volumen;

    cout << "Ingrese base: ";
    cin >> base;

    cout << "Ingrese altura: ";
    cin >> altura;

    volumen =base*altura/3;

    cout << "Su volumen es: "<<volumen;

	getch();
}