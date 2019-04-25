#include <iostream>
#include <vector>
using namespace std;
int main (){
	vector <int> cadena;
	int ingreso;
	int i=0; 
	int y=1;
	int error=0;
	while (cin>>ingreso){
		cadena.push_back(ingreso);
	}
	int limite=cadena.size()-1;
	while (limite>0){
		if(cadena[i]!=cadena[y]){
			error=error+1;
		}
		--limite;
		++y;
		++i;
	}
	cout<<error<<"error";
	
	
	return 0;
}
