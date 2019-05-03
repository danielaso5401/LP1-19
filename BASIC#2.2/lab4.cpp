#include<iostream>
using namespace std;
int area(int length, int width);
int main(){
  int x=area(2,3);
}
//int area(int x, int y){return x*y;} esta es
//funciones con mismo nombre pero diferentes tipos
//no coinciden y son ignorados
double area(double x, double y ) {return x*y;}//pide valore doble y no int
int area(double x, double y, char unit) {return x*y;}//pide 3 datos  2 de int y un char
