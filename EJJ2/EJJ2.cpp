#include <iostream>c
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int numero, i,k;
char resp;

int main()
{
    do
    {
        srand(time(0));
        do

        {
            numero=1 + rand() % (1500-1);
            k=0;
            for(i=1;i<=1500;i++)

            {
                if(numero%i==0)
                    k++;
            } }while(k!=2);
            cout<<"El numero primo es...:"<<numero<<"\n";

            do
            {
                cout<<"Desea continuar..:";
                cin>>resp;
                resp=toupper(resp);

            } while(resp!= 'S' && resp!='N');
        } while(resp=='S');


}
