#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float alum,apro,des,p_ap,p_des;
    cout << "Ingrese total de alumnos: ";
    cin>>alum;

    cout << "Ingrese numero de aprobados: ";
    cin>>apro;

    des = alum-apro;

    p_ap=(apro/alum)*100;
    p_des=100-p_ap;

    cout << "El "<<p_ap; cout<<"% de los alumnos aprobaron y el "<<p_des; cout<<"% de los alumnos desaprobaron";

    getch();
}
