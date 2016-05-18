#include <iostream>

using namespace std;
int numero, num50, num51100,nummay101, nummay, nummen, cont1, cont2, cont3, cont4;
float prom50, prom51100, prommay101;
int main()
{
    num50=0;
    num51100=0;
    nummay101=0;
    nummay=0;
    nummen=100000000;
    cont1=0;
    cont4=0;
    cont2=0;
    cont3=0;
    prom50=0;
    prom51100=0;
    prommay101=0;

    while (cont1<5)
{ cont1++;
   cout<<"Numero es"<<cont1<<"...:";
   cin>>numero;

   if((numero>=0) and (numero<=50))
   { cont2++;
      num50+=numero;
   }

   else if ((numero>50) and (numero<=100))
   { cont3++;
     num51100+=numero;
   }
   if ((numero>101))
   { cont4++;
    nummay101+=numero;
   }
  {if (numero>nummay)
   {
       nummay=numero;
   }}
   {if (numero<nummen)
   {
       nummen=numero;
   }}
    {if (cont2>0)
    {prom50= num50/cont2;}
     else
     { prom50=0;}}
    {if (cont3>0)
    {prom51100= num51100/cont3;}
     else
     { prom51100=0;}}

     {if (cont4>0)
    {prommay101= nummay101/cont4;}
     else
     { prommay101=0;}}
}

 cout<<"\n";
    cout<<"Cantidad de numeros entre 1-50..: "<<cont2<<"\n";
    cout<<"Cantidad de numeros entre 51-100..: "<<cont3<<"\n";
    cout<<"Cantidad de numeros mayores a 101..: "<<cont4<<"\n"<<"\n";
    cout<<"El numero mayor entre todos es..: "<<nummay<<"\n";
    cout<<"El numero menor entre todos es..: "<<nummen<<"\n"<<"\n";
    cout<<"Promedio en rango 1-50..: "<<prom50<<"\n";
    cout<<"Promedio en rango 51-100..: "<<prom51100<<"\n";
    cout<<"Promedio numeros mayores a 101..: "<<prommay101<<"\n";
}
