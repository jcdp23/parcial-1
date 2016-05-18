#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int numero;

int main()
{
    srand(time(0));
    numero=1 + rand() % 200;
    cout << "El numero aleatorio es...:"<<numero<<"\n";

    if((numero>=1) and (numero<=60))
    {
        cout << "El numero esta entre 1-60"<<"\n";
    }
    else if((numero>=61) and (numero<=90))
    {
        cout <<"El numero esta entre 61-90"<<"\n";
    }
    else if((numero>=91) and (numero<=160))
    {
        cout <<"El numero esta entre 91-160"<<"\n";
    }
    else
    {
        cout <<"El numero esta entre 161-200"<<"\n";
    }

}

