#include <iostream>
using namespace std;
int main(){
	int n=7;
	int* pi= new int; //asigna un int
	int* qi=new int[4]; //asigna 4 ints
	double* pd= new double; //asigna un double
	double* qp= new double[n];//asigna n doubles
	// un array de n doubles
	// puntero a objetos de diferentes tipos
	//son diferentes tipos por ejemplo
	//pi=pd; //error: no asignar un double* a int*
	//pd=pi; // error: no puede asignar int* a double*
}
