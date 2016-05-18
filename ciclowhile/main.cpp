#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
//presentar numeros del 1-10

int numero, contador, suma, mayor, menor, cont50, suma50, prom50;
using namespace std;
int main()
{ srand(time(0));
contador=0;
suma=0;
mayor=0;
menor=100;
cont50=0;
prom50=0;
while(contador<100)
{numero = 1 + rand() % (100-1);
 suma=suma + numero;
 if (mayor<numero)
 {
     mayor= numero;
 }
  if (menor>numero)
 {
     menor= numero;
 }
 if (numero>50)
 {
     cont50++;
     suma50+= numero;
 }



contador++; //contador= contador + 1
 cout <<contador<< "Numero..:" <<numero<<"\n";
}
prom50= suma50/cont50;
cout<<"los numeros mayores a 50 son...:"<<cont50<<"\n";
cout<<"El numero menor es...:"<<menor<<"\n";
cout<<"El numero mayor es...:"<<mayor<<"\n";
cout<<"Suma de los numeros es...:"<<suma<<"\n";
cout<<"Final del programa"<<"\n";
cout<<"El promedio de los numeros mayores a 50 es...:"<<prom50<<"\n";

}
