#include <iostream>

using namespace std;
int numero, dig1, dig2, dig3;
int main()
{
   cout<<"Ingresar numero de 3 cifras...:";
   cin>>numero;
   if(numero<0)
   {
    numero*=(-1);
   }

   if((numero>99) and (numero<=999))
   {
    dig1=numero/100;
    dig2=(numero%100)/10;
    dig3=numero %10;
    cout<<"El numero escrito al reves es...:"<<dig3<<dig2<<dig1;
   }

   else
   {
       cout<<"Su numero no tiene 3 cifras"<<"\n";
   }

}
