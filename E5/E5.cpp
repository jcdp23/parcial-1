#include <iostream>

using namespace std;
int acumulado,examen;
float total;

int main()
{
    cout<<"Ingresar nota de acumulado...:";
    cin>> acumulado;

    cout<<"Ingresar nota de examen...:";
    cin>> examen;

    total= acumulado + examen;
    cout<<"Subtotal es..:"<<total<<"\n";

    if (total==57)
    {
        total= acumulado + examen + 3;
        cout<<"Nota total es..:"<<total<<"\n";
    }

    else if (total==58)
    {
        total= acumulado + examen + 2;
        cout<<"Nota total es..:"<<total<<"\n";
    }

    else if (total==59)
    {
        total= acumulado + examen + 1;
        cout<<"Nota total es..:"<<total<<"\n";
    }

    else
        {
            total= acumulado + examen;
        cout<<"Nota total es..:"<<total<<"\n";
        }





}
