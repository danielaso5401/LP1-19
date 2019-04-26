#include <iostream>
#include <vector>
using namespace std;
int main(){
	int contador=0;
	int km;
	cin>>km;
	int saltos=0;
	while(km>0){
		km=km-contador;
		++saltos;
		contador=contador+9;
	}
	cout<<saltos;
	return 0;
}
