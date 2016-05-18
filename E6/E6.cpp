#include <iostream>

using namespace std;
int cliente, cantidad;
float precio, sub, total;

int main()
{
    cout<<"Ingrese numero del cliente 1-3...:";
    cin>> cliente;

    cout<<"Ingrese cantidad del producto...:";
    cin>>cantidad;

    cout<<"Ingrese precio del producto...:";
    cin>>precio;

    if(cliente==1)
    {
      sub= cantidad * precio;
      cout<<"Su subtotal es...:"<<sub<<"\n";
      total= sub - (sub * 0.07);
      cout<<"Su total es...:"<<total<<"\n";
    }

     if(cliente==2)
    {
      sub= cantidad * precio;
      cout<<"Su subtotal es...:"<<sub<<"\n";
      total= sub - (sub * 0.08);
      cout<<"Su total es...:"<<total<<"\n";
    }
     if(cliente==3)
    {
      sub= cantidad * precio;
      cout<<"Su subtotal es...:"<<sub<<"\n";
      total= sub - (sub * 0.1);
      cout<<"Su total es...:"<<total<<"\n";
    }

}
