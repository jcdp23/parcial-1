#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;
int main()
{ srand(time(0));
int numero,i;

 for(i=1;i<11;i++)
{ do
{
  numero= 1 + rand() % (100-1);
}
while (numero%2 !=0);
cout<<i<<"Numero generado..:"<<numero<<"\n";

}
}
