#include <iostream>
#include <vector>
using namespace std;
int main(){
	int km;
	cin>>km;
	int saltos=0;
	while(km>0){
		km=km-9;
		++saltos;
	}
	cout<<saltos;
	return 0;
}
