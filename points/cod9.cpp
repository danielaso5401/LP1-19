#include <iostream>
using namespace std;
class vector{
	int sz; // el tamaño
	double* elem; //puntero a los elementos
public:
	vector(int s)//constructor
		:sz(s), elem(new double [s])//asigna memoria
	{
		//inicailiza elementos
		for(int i=0; i<s; ++i) elem[i]=0;
	}
	vector()//destructor
	{ delet[] elem;} //libera tu memoria
};
void f3(int n)
{
	int* p=new int [n]; //asigna n ints
	vector v(n); //define vector
	//tambien asigna otros n ints usa p y v
	delet [] p; //des-asigna los ints
}//vector limpia su memoria al morir
int main()
{
	f3(42);
}
