#include <iostream>
using namespace std;
//conversion de tipos no seguros
int main() {
  int a=0;
  int b=0;
  cout<<"por favor ingrese dos enteros \n";
  cin>>a>>b;
  if(a<b)//condicion
    //s� la condicion es verdadera:
    cout<<"max("<<a<<","<<b<<") is "<<b<<"\n";
  else
    //S� la condici�n es falsa
    cout<<"max("<<a<<","<<b<<") is "<<a<<"\n";
}