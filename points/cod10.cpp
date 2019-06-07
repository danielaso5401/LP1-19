#include <iostream>
using namespace std;
class vector{
	int sz; //tamaño
	double* elem; //puntero a los elem
public:
	vector(int s) :sz(s), elem (new double [s]){}
	//constructor
	vector(){delet [] elem;} //destructor
	int size()const {return sz;}//el tamaño actual
	double get(int n){return elem[n];}//acceso leer 
	void get(int n, double v){elem[n]=v;}//acceso : escribir	
};
int main(){
	vector v(5);
	for (int i=0; i<v.size(); ++i){
		v.set(i,1.1*i);
		cout<<"v["<<"]=="<<v.get(i)<<'n';
	}
}
