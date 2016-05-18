#include <iostream>

using namespace std;
int n1,n2;
int main()
{
    cout <<"Ingresar el primer numero...:";
    cin>>n1;

    cout<<"Ingresar el segundo numero...:";
    cin>>n2;

    if (n1>n2)
    {
        cout<<"El primer numero es...:"<<n2<<"\n";
        cout<<"El segundo numero es...:"<<n1<<"\n";
    }
     else
    {
        cout<<"El primer numero es...:"<<n1<<"\n";
        cout<<"El segundo numero es...:"<<n2<<"\n";
    }
}
