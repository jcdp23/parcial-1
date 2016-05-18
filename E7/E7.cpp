#include <iostream>

using namespace std;
int n1, n2, n3;
int main()
{
    cout <<"Ingresar primer numero...:";
    cin>> n1;

    cout <<"Ingresar segundo numero...:";
    cin>> n2;

    cout <<"Ingresar tercer numero...:";
    cin>> n3;

    if ((n1>n2) and (n1>n3))
    {
        cout<<"Numero mayor es  "<<n1;
    }
   else if (n2>n3)
   {
      cout<<"Numero mayor es  "<<n2;
   }
   else
   {
       cout<<"Numero mayor es  "<<n3;

   }
  cout<<"\n";
}
