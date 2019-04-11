#include <iostream>
using namespace std;
int main() {
  int cont=124;
  int a=97;
  char listo;
  while(cont!=98){
    
    listo=a;
    cout<<listo<<'\t'<<a<<'\n';
    ++a;
    --cont;
  }
}