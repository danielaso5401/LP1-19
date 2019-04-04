#include<iostream>
using namespace std;
int main() {
  char tipo;
  char tipo2;
  double moneda;
  double dolar=0;
  const double euro =0.89;
  const double yenes =111.33;
  const double libras =0.77;
  const double yuanes=0.15;
  const double shekels=0.28; 
  cout<<"ingresa la cantidad\n";
  cin>>dolar;
  cout<<"ingresa el tipo de moneda\n euros=e \n yenes=y \n linras=l \n shekels=s \n yuanes=u \n dolares=d \n";
  cin>>tipo;
  switch(tipo){
  case'e':
    dolar=dolar*euro;
    cout<<"su cambio es de "<<dolar<<" euro\n";
    break;
  case'y':
    dolar=dolar*yenes;
    cout<<"su cambio es de "<<dolar<<" yenes\n";
    break;
  case'l':
    dolar=dolar*libras;
    cout<<"su cambio es de "<<dolar<<" libras\n";
    break;
  case'u':
    dolar=dolar*yuanes;
    cout<<"su cambio es de "<<dolar<<" yaunes\n";
    break;
  case's':
    dolar=dolar*shekels;
    cout<<"su cambio es de "<<dolar<<" shekels\n";
    break;
  case'd':
    cout<<"ingrese a que tipo de moneda desea cambiar\n";
    cin>>tipo2;
    //break
    switch(tipo2){
      case 'e':
        dolar=dolar*1.12 ;
        cout<<"su cambio es de euros a "<<dolar<<" dolares\n";
        break;
      case 'y':
        dolar=dolar*0.0090;
        cout<<"su cambio es de yenes a "<<dolar<<" dolares\n";
        break;
      case 'l':
        dolar=dolar*1.31;
        cout<<"su cambio es de libras a "<<dolar<<" dolares\n";
        break;
      case 'u':
        dolar=dolar*6.71 ;
        cout<<"su cambio es de yuanes a "<<dolar<<" dolares\n";
        break;
      case 's':
        dolar=dolar*3.60;
        cout<<"su cambio es de shekels a "<<dolar<<" dolares\n";
        break;
      default:
        cout<<"lo lamento no existe ese cambio";
      break;
    }
    break;
    default:
      cout<<"no existe este tipo de cambio";
    break;
  }

}