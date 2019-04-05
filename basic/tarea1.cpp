#include <iostream>
using namespace std;

int main() {
  char tipo;
  double moneda;
  int modo;
  double dolar=0;
  const double euro =0.89;
  const double yenes =111.33;
  const double libras =0.77;
  cout<<"ingrese 1 para que convierta de dolar a una moneda\ningrese 2 para convertir de una moneda a dolar\n";
  
  while(cin>>modo){
    if (modo==1){
      cout<<"ingrese la cantidad\n"; cin>>dolar;
      cout<<"ingrese a que moeneda desea cambiar\n"; cin>>tipo;
      if(tipo=='e'){
        dolar=dolar*euro;
        cout<<"su cambio es de "<<dolar<<" euro\n";
      }
      else if(tipo=='y'){
        dolar=dolar*yenes;
        cout<<"su cambio es de "<<dolar<<" yenes\n";
      }
      else if(tipo=='l'){
        dolar=dolar*libras;
        cout<<"su cambio es de "<<dolar<<" libras\n";
      }
      else{
        cout<<"lo lamento ese tipo de moneda no existe\n";
      }
    }
    else if(modo==2){
      cout<<"ingrese la cantidad\n"; cin>>dolar;
      cout<<"ingrese que tipo de moeneda ingreso en cantidad\n"; cin>>tipo;
      if(tipo=='e'){
        dolar=dolar*1.12 ;
        cout<<"su cambio es de euros a "<<dolar<<" dolares\n";
      }
      else if(tipo=='y'){
        dolar=dolar*0.0090;
        cout<<"su cambio es de yenes a "<<dolar<<" dolares\n";
      }
      else if(tipo=='l'){
        dolar=dolar*1.31;
        cout<<"su cambio es de libras a "<<dolar<<" dolares\n";
      }
      else{
        cout<<"lo lamento ese tipo de moneda no existe";
      }
    }
    else{
      cout<<"no existe este modo de cambio\n";
    }
    dolar=0;
  }
  return 0;

}