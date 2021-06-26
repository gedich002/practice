#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float v_dolar,c_dolares,c_soles;

    cout << "Ingresar la cantidad de soles: ";
    cin >> c_soles;
    
    v_dolar= 3.95;

    c_dolares= c_soles/v_dolar;

    cout << "La cantidad en dolares es: "<<c_dolares;

	getch();
}