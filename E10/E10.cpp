#include <iostream>

using namespace std;
char caracter;
int main()
{
    cout <<"Ingrese un caracter...:";
    cin>> caracter;

    switch (caracter)
    {
    case'a':
    cout<<"El caracter ingresado es una vocal";
    break;

     case'e':
    cout<<"El caracter ingresado es una vocal";
    break;

     case'i':
    cout<<"El caracter ingresado es una vocal";
    break;

     case'o':
    cout<<"El caracter ingresado es una vocal";
    break;

     case'u':
    cout<<"El caracter ingresado es una vocal";
    break;

     default:
        cout<<"El caracter ingresado no es una vocal";
    }
}
