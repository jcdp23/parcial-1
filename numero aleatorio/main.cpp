#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{ srand(time(0));
int numero;

numero =50 + rand() % (100-50);
 // % mpd
 // rango inicial + numero generado
 cout <<"valor de numero"<<numero<<"\n";
 system("PAUSE");
 return 0;

}
