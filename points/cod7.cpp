#include<iostream>
using namespace std;
double* calc(int res_size, int max){
	//el que llama se hara responsable por la memoria res
	double* p=new double [max];
	double* res=new double [res_size];
	//usamos p para calcular los resultados de res
	return res;
}
int main(){
	double* r=calc(100,100);
	//usar r
	delete []r;//ya no necesitamos r; liberala!
	//delete[]r; //error no lo puedes liberar 2 veces
	//ahora pertenece al administrador de memoria libre
}
