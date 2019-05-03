#include<iostream>
#include <stdexcept>//se tuvo que agregar este argumento por que no reconocia el runtime_error

using namespace std;
int factorial(int x){
	int z=x;
	int a=x-1;
	for(int l=1; l<x; ++l){
		z=z*a;
		a--;
	}
	return z;
}
int main()
try
{	

	cout<<"ingresar p para una permutacion \n igresar c para una combinacion"<<endl;
	char eleccion; cin>>eleccion;
	int n, k;
	cin>>n>>k;
	if(n<k) throw runtime_error("no puede ser menor que n");
	if(n<0) throw runtime_error("no es un numero entero");
	
	int f=factorial(n);
	int f2=n-k;
	int r=factorial(f2);
	int permutacion=f/r;
	if(eleccion=='c'){
		int c=factorial(k);
		int combinacion=permutacion/c;
		cout<<"combinacion es: "<<combinacion;
	}
	if(eleccion=='p'){
		cout<<"permutacion es:"<<permutacion;
	}
	return 0;	
}
catch (exception& e){
  cerr<<"error: "<<e.what()<<'\n';
  return 1;
}


