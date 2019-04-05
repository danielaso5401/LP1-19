#include <iostream>
using namespace std;
//conversion de tipos no seguros
int main() {
  double d=0;
  while (cin>>d){//repite las declaraciones siempre y cuando ingresemos numeros
    int i=d;//intenta hacerlo ingresar un numero entero
    char c=i;//intenta hacerlo entrar en un char
    int i2=c;//obtiene el valor entero de un char
    cout<<"d="<<d//el valor double original
        <<" i=="<<i//convertido a int
        <<" i2=="<<i2// valor entero del char
        <<"  char("<<")\n";//el char
  }
  double x=2.7;
  int y=x;// y se convierte en 2
  int a=1000;
  char b=a;//b se convierte en -24
}