#include <iostream>

using namespace std;
int numero;
int main()
{
    cout << "Ingresar numero..:";
    cin>>numero;

    if ((numero%5)==0)
    {
        cout << "Numero es divisible entre 5"<<"\n";
    }
    else
    {
        cout<< "Numero no es divisible entre 5"<<"\n";
    }
}
