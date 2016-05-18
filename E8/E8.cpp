#include <iostream>

using namespace std;
float nota1, nota2, nota3;
float promedio;
int main()
{
    cout <<"Ingresar nota 1...:";
    cin>>nota1;

    cout <<"Ingresar nota 2...:";
    cin>>nota2;

    cout <<"Ingresar nota 3...:";
    cin>>nota3;

     if ((nota1<nota2) and (nota1<nota3))
     {
         promedio=(nota2 + nota3)/ 2;
         cout<<"Su promedio es...:"<<promedio<<"\n";
     }
    else if ((nota2<nota1) and (nota2<nota3))
     {
         promedio= (nota1 + nota3)/ 2;
         cout<<"Su promedio es...:"<<promedio<<"\n";
     }
      else
      {
          promedio = (nota1 + nota2) / 2;
          cout<<"Su promedio es...:"<<promedio<<"\n";
      }

   }





