#include <iostream>

using namespace std;
int numero,contador5,contador;
int main()

{
contador=0;
contador5=0;
while(contador<10)
 { contador++;
   cout<<contador<<"Ingrese Numero..:";
    cin>>numero;

    {if(numero%5==0)
    contador5++;}
    }

 cout<<"Numeros divisibles entre cinco..:"<<contador5<<"\n";
 cout<<"Fin del programa"<<"\n";
}
