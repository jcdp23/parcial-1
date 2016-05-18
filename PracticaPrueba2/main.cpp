#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int numero, contador, suma, prom, ma70;
int main()
{ contador=0;
  suma=0;
  prom=0;
  ma70=0;
  while(numero<5)
  {
      cout<<"Ingresar numero...:";
      cin>>numero;
      contador++;

      if (numero>70)
      {
          ma70++;
          suma= suma + numero;
      }

  }
  prom= suma / ma70;
  cout<<"El promedio es...:"<<prom<<"\n";


}
