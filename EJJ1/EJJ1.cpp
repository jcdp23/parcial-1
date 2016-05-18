#include <iostream>

using namespace std;
int num, imp, i, may;

int main()
{
    may=0;
    imp=0;

    for(i=0;i<10;i++)
    {
        do
    {
       cout<<"Ingrese un numero impar mayor 50..:";
       cin>>num;
       if(may<num)
        may=num;
    } while(!((num%2!=0)&&(num>50)));
    }
    cout<<"El numero mayor fue...:"<<may<<"\n";
}
