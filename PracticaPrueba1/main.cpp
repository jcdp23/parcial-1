#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int numero, contador, par, impar;
int main ()
{ srand(time(0));
 contador=0;
 par=0;
 impar=0;

   while(contador<10)
   {
    numero = 1 + rand() % (100-1);
    contador++;
    cout<<contador<<"Numero...:"<<numero<<"\n";
    if((numero%2)==0)
    {
        par++;
    }
    else
    {
        impar++;
    }
   }
   cout<<"Numeros pares...:"<<par<<"\n";
   cout<<"Numeros Impares...:"<<impar<<"\n";
   cout<<"Fin del programa...:"<<"\n";
}
