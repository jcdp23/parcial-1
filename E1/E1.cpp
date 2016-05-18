#include <iostream>

using namespace std;
int numero;
int main()
{
   cout<<"Ingresar Numero...:";
   cin>>numero;
   if (numero>0)
   {
       cout<<"Numero es positivo";
   }

    else if (numero<0)
   {
    cout<<"Numero es negativo";
    }
     else
    {
        cout<<"Es cero";
    }
}
