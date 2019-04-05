#include <iostream>
using namespace std;
int main() {
  int m, n;
  cout<<"ingresa las filas y colubnas\n";
  cin>>m>>n;
  if(m==0 or n==0){
    cout<<"lo lamento usted no puede ingresar un  valor 0\n";
  }
  else if(m%2==1 and n%2==1){
    cout<<m<<" * "<<n<<" no funcioanara\n";
  }
  else{
    cout<<m<<" * "<<n<<" sí funcionara\n";
  }
  return 0;
}