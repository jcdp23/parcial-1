#include <iostream>
#include <stdlib.h>
using namespace std;
int numero;
int main()
{

    cout << "Ingresar numero";
    cin>>numero;

    if(numero>0)
    {
        cout<<"Es positivo";

    }
   else if (numero<0)
   {
       cout<<"El numero es negativo";
   }

else
{
    cout<<"es cero";
}
    cout<<"\n";
    system ("PAUSE");
}
