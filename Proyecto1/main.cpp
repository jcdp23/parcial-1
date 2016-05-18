#include <iostream>

using namespace std;
float pagototal;
int horatrabajo, pagoporhora;

int main()
{
  cout <<"Horas Trabajadas";
  cin>>horatrabajo;

  cout<<"Pago por horas trabajadas";
  cin>>pagoporhora;

  pagototal= horatrabajo * pagoporhora;
  cout<<"Pago subtotal...>"<<pagototal<<"\n";
}
