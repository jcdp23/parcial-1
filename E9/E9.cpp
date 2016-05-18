#include <iostream>

using namespace std;
int n1, n2, n3;
int main()
{
    cout <<"Ingresar numero 1...:";
    cin>> n1;

    cout <<"Ingresar numero 2...:";
    cin>> n2;

    cout <<"Ingresar numero 3...:";
    cin>> n3;

    if ((n1<n2) and (n2<n3))
    {
      cout<<"Numeros ingresados en forma ascendente";
    }

    else
    {
        cout<<"Numeros ingresados de forma no ascendente";
    }

}
