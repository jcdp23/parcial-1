#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int numero1, numero2, numero3;

int main()
{
  cout<<"Ingresar Numero 1...:";
  cin>>numero1;

  cout<<"Ingresar Numero 2...:";
  cin>>numero2;

  cout<<"Ingresar Numero 3...:";
  cin>>numero3;

  if ((numero1>numero2) and (numero1>numero3))
  {
      cout<<"Numero mayor es  "<<numero1;
  }
   else if (numero2>numero3)
   {
      cout<<"Numero mayor es  "<<numero2;
   }
   else
   {
       cout<<"Numero mayor es  "<<numero3;

   }
  cout<<"\n";

 {
  if ((numero1<numero2) and(numero2<numero3))
   {
       cout<<"Numeros ingresado en forma ascendente";
   }
   else
   {
       cout<<"No son Ascendentes";
   }

 }

    cout<<"\n";
   system("PAUSE");
    return 0;
}
