#include <iostream>
#include<vector>
using namespace std;
int main(){
	//tadas las clases usan .(punto) para acceder a los miembros
	{
		vector v(4);
		int x=v.size();
		double d=v.get(3);
	}
	//todas las clases soportan -> (flecha)
	//para acceder a los miembros
	{
		vector* p=new vector(4);
		int x=p->size();
		double d=p->get_allocator(3);
	}
}
