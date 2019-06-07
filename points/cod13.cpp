#include <iostream>
#include<vector>
using namespace std;
int main()
{
	//void v; //error no hay objetos de tipo vacio
	void* pv1=new int; //ok int* se convierte a void
	void* pv1=new double; //ok double* se convierte a void
}
void f(void* pv)
{
	void* pv2=pv; //copiar esta ok
	//double* pd = pv; //eerror no se puede convertir
	//*pv=7; //error : no se puede diferenciar void* porque no sabemos al tipo de dato que apunta
	//pv[2]=9; //error no se puede acceder a un void*
	int* pi=static_cast<int*>(pv); //ok conversion explicita
}
