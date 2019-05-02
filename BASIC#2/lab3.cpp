#include<iostream>
using namespace std;
int area(int length, int width);
int main(){
	int x4=area(10;-7);//no puede tener un rectangulo un ancho -7
	int x5=area(10.7;9.3);//no permite decimales
	int x6=area(100, 9999);//trunca el resultado
	return area(4,4);
}
int area(int length, int width){
	return length*width
}
