#include <iostream>

using namespace std;
int numero=345;
int n;

int main()
{
    n= numero % 10;
    cout<<n;
    numero= numero / 10;
    n=numero% 10;
    cout<<n;
    numero= numero/10;
    n=numero%10;
    cout<<n;
}
