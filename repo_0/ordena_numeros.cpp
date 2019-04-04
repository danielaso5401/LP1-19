#include<iostream>

using namespace std;
int main(){
  cout<<"Ingrese los numeros seguidos de espacio"<<endl;
  int x,y,z;
  cin>>z>>y>>x;
  
  int mayor, medio, menor;
  mayor=z;
  medio=y;
  menor=x;
  int tmp;
  
    if(menor>medio){
      tmp = menor;
      menor=medio;
      medio= tmp;
    }
    if(menor>mayor){
      tmp = mayor;
      mayor=menor;
      menor=tmp;
    }
    if(medio>mayor){
      tmp = mayor;
      mayor=medio;
      medio=tmp;
    }
  
    cout<<"mayor es "<<mayor<<endl;
    cout<<"medio es "<<medio<<endl;
    cout<<"menor es "<<menor<<endl;
  
}