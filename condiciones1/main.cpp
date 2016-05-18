#include <iostream>

using namespace std;
/*ingresar un numero de hasta 4 cifras pero puede ingresar uno mayor el programa debera de escribir numero de cifras
 */
int numero;
int main()
{
    cout << "Ingresar Numero...:";
    cin>>numero;

    if(numero<0)
    numero*=(-1);

    if(numero<=9)
    cout<<"**Tiene una cifra**";

    else if (numero<=99)
        cout<<"**Tiene dos cifras**";
     else if (numero<=999)
        cout<<"**Tiene tres cifras**";
     else if (numero<=9999)
        cout<<"**Tiene cuatro cifras **";
     else
        cout<<"**Tiene mas de cuatro cifras**";

}
