#include<iostream>
using namespace std;

int main(){
	int col=0;
	int espacios;
	int paleta;
	int respuestas=0;
  int respuestas1=0;
	cout<<"Ingrese el numero de milimetros por pintar"<<endl;
	cin>>espacios;
	int P[espacios];
	
	cout<<"Ingrese el codigo de color"<<endl;
	while(col<espacios){
		cin>>paleta;
		P[col]=paleta;
		col++;
	}

	for(int i=0;i<espacios-2;i++){
		if (P[i]==P[i+1]&&P[i]==P[i+2]){
			respuestas=1;
		}
		else
			respuestas1=0;
		
		
	}
	if(respuestas==1)
		cout<<"Si se puede";
	else
		cout<<"No se puede";
	
}