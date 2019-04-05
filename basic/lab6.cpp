#include <iostream>
using namespace std;
//conversion de pulgadas
int main() {
  //(*)
  if(unit=='i')
    cout<<length<<"in == "<<cm_per_inch*length<<"cm\n";
  else if(unit=='c')
    cout<<length<<"cm == "<<length/cm_per_inch<<"in\n":
  else
    cout<<"lo siento no conozco una unidad llamada"<<unit<<<'\n';
}