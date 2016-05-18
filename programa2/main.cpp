#include <iostream>

using namespace std;
int horas, pagohoras;
float pagot;

int main()
{
    cout <<" Ingresar las horas";
    cin>>horas;
    cout << "Ingresar pago por las horas";
    cin>>pagohoras;
    pagot= horas * pagohoras;
    cout<<"Pago total...>"<<pagot<<"\n";

}
