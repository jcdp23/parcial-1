#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int numero, pares, impares, contador;
int main()
{srand(time(0));
contador=0;
pares= 0;
impares=0;

 while(contador<10)
 { numero= 1 + rand() % (100-1);
  contador++;
  cout<<contador<<"Numero...:"<<numero<<"\n";
   if ((numero%2)==0) {
    pares++;
 }
    else {
    impares++;
    }

}

cout<<"Numeros Pares...:"<<pares<<"\n";
cout<<"Numeros Impares...:"<<impares<<"\n";
cout<<"Final del Programa...:"<<"\n";

}
