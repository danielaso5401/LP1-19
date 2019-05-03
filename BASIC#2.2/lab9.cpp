#include <iostream>
using namespace std;
int main(){
  double temp=0;
  double sum=0;
  double high_temp=0;//incializa
  double low_temp=0;//inicializa
  int no_of_temps=0;
  while(cin>>temp){ //lee temps
    ++no_of_temps;//cuenta temps
    sum+=temps;//calcula la suma
    //encuentra el mayor
    if(temp>high_temp) high_temp=temp;
    //encuentra el menot
    if(temp<low_temp) low_temp=temp;
  }
  cout<<"temperatura alta: "<<high_temp<<endl;
  cout<<"temperatura baja: "<<low_temp<<endl;
  cout<<"temperatura promedio: "<<sum/no_of_temps<<endl;
  return 0;

}
