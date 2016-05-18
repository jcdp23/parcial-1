#include <iostream>


using namespace std;
int numero, suma, prom, contador, conta;
int main(){
contador=0;
suma=0;
prom=0;
while(numero<5)
{
  cout<<"Ingrese numero...:";
  cin>>numero;

  if(numero>70){
    contador++;
  suma= suma + numero;


}
conta++;
}

prom= suma/contador;
cout<<"Promedio..:"<<prom<<"\n";

}
