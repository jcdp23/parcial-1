#include <iostream>

using namespace std;
int numero;
int main()
{
    cout <<"Ingresar Numero...:";
    cin>> numero;

    if (numero<0)
    {
      numero*=(-1);
    }

     if (numero<9)
    {
      cout<<"Numero tiene una cifra";
    }
    else if (numero<99)
      {
      cout<<"Numero tiene dos cifras";
      }
    else if (numero<999)
       {
         cout<<"Numero tiene tres cifras";
       }
    else if (numero<9999)
    {
      cout<<"Numero tiene cuatro cifras";
    }
     else
     {
        cout<<"Numero tiene mas de cuatro cifras";
     }

}
