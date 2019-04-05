#include <iostream>
using namespace std;
int main() {
  const double cm_per_inch=2.54; //#cm por pulagada
  int length=1;//unidad de longitud;
  char unit='a';
  cout<<"por favor ingresa una longitud y su unidad (c o i):\n";
  cin>>length>>unit;
  switch (unit){
  case 'i':
    cout<<length<<"in == "<<cm_per_inch*length<<"cm\n";
    break;
  case 'c':
    cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
    break;
  default:
    cout<<"lo siento no conzco esa unidad"<<unit<<"\n";
    break;
  }

  return 0;
}