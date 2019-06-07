#include<iostream>
using namespace std;
int main(){
	cout<<"el tam de char es"<<sizeof(char)<<" "<<sizeof('a')<<'\n';
	cout<<"el tam de int es"<<sizeof(int)<<" "<<sizeof(2+2)<<'\n';
	int* p=0;
	cout<<"el tam de int* es"<<sizeof(int*)<<" "<<sizeof(p)<<'\n';
	vetctor<int> v(1000);
	cout<<"el tam de vector <int> (1000) is"<<sizeof(v)<<'\n';
}
