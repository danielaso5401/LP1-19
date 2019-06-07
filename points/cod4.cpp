#include<iostream>
using namespace std;
int main(){
	double* p=  new double[4]; //da memoria de 4 enteros
	double x=*p; // lee el primer objeto apuntando por p
	double y=p[2];// lee el tercer objeto apuntado por p
	*p=7.7; //escribe el primer objeto apuntado por p
	p[2]=9.9;//escribe el tercer objeto apuntado
	{
		double x=p[3];// lee el 4to objeto apuntado por p
		p[3]=4.4; //escribe el 4to objeto apuntado por p 
		double y=p[0]; //[0] es lo mismo que *p
	}
}
