#include <iostream>

using namespace std;
int acumulado, examen;
float notatotal;

int main()
{
   cout <<" Ingresar los acumulados";
    cin>>acumulado;
    cout << "Ingresar la nota de examenes";
    cin>>examen;
    notatotal= acumulado + examen;
    cout<<"finalnote...>"<<notatotal<<"\n";

    if(notatotal>=60)
    {
      cout<<"Aprobado";
    }
    else
    {
        cout<<"Reprobado";
    }

    cout<<"\n";
}
