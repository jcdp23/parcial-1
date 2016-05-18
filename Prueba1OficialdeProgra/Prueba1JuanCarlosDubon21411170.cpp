#include <iostream>

using namespace std;
int numero, digito, cont, suma;
float promedio;

int main()
{
    suma=0;
    promedio=0;
    cout<<"Ingresar numero...:";
    cin>>numero;

      while(numero>0)
     { cont++;
      digito= numero%10;
      numero=numero/10;
      suma= suma + digito;}

    {promedio= float(suma) / float(cont);}

     cout<<" La suma de los numeros es...:"<<suma<<"\n";
     cout<<" El promedio de los numeros es..:"<<promedio<<"\n";
     cout<<" Fin del programa"<<"\n";

}
