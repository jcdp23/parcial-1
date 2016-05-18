#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int dia;

int main()
{
    cout<<"Ingresar numero del dia de la semana 1-7...:";
    cin>> dia;

if (dia==1)
    {
        cout<<"Lunes";
    }

    if (dia==2)
    {
        cout<<"Martes";
    }

    if (dia==3)
    {
        cout<<"Miercoles";

    }
    if (dia==4)
    {
        cout<<"Jueves";

    }
    if (dia==5)
    {
        cout<<"Viernes";

    }
    if (dia==6)
    {
        cout<<"Sabado";
    }
    if (dia==7)
    {
        cout<<"Domingo";
    }
     cout<<"\n";
   system("PAUSE");
    return 0;
}

