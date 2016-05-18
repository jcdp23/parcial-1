#include <iostream>

using namespace std;
int numero, digito, cont, contadorpar, contadorimpar, mayor;
float promedio;

int main()
{
    mayor=0;
    promedio=0;
    cout<<"Ingresar numero...:";
    cin>>numero;

      while(numero>0)
     { cont++;
      digito= numero%10;
      numero=numero/10;
      if(digito%2==0)
         contadorpar++;
      else
      contadorimpar++;

      if(digito>mayor)
       mayor=digito;}


     cout<<" Mayor:"<<mayor<<"\n";
     cout<<" Par..:"<<contadorpar<<"\n";
     cout<<" Impar..:"<<contadorimpar<<"\n";
     cout<<" Fin del programa"<<"\n";

}

