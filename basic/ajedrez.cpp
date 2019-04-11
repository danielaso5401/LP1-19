#include <iostream>
using namespace std;
int list(int x){
  if(x>8){
    x=8;
  }
  if(x<1){
    x=1;
  }
  return x;
}
int main() {
  int f,c,r;
  cout<<"ingresa fila colubna y rango\n";
  cin>>f>>c>>r;
  int b1=f+r;
  list(b1);
  int b2=f-r;
  list(b2);
  int a1=c+r;
  list(a1);
  int a2=c-r;
  list(a2);
  int base= (b1-b2+1);
  int alto=(a1-a2+1);
  int total=base*alto;
  cout<<total;


}