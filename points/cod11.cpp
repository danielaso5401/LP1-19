#include <iostream>
using namespace std;
vector* f(int s){
	vector* p=new vector(s); //sasigna memoria
	return p;
}
void ff(){
	vector* q=f(4);
	delete q; //libera memoria
}
int main
{
	vector<vector<double>>* p=new vector<vector<double>>(10);
	delete p;
	vector<vector<double>>* q=new vector<vector<double>>(20);
	delete q;
}
