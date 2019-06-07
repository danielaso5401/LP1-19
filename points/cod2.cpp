#include<iostream>
using namespace std;
int main(){
	int var=17;
	int* ptr=&var;//ptr guarda la direccion de var
	
	char ch='c';
	char* pc=&ch;//punto de char
	
	int ii=17;	
	int* pi=&ii;//punto a entero
	cout<<"pc=="<<pc<<"; contenido de pc=="<<*pc<<"\n";
	cout<<"pi=="<<pi<<"; contenido de pi=="<<*pi<<"\n";
	*pc='x';// ok si se puede asiganr x / al char apuntando por pc
	*pi=27;//ok un int* apunta a un entero / entonces *pi es un int
	*pi=*pc;//ok puedes asiganar un char (pc) / a un int(pi)
	//int i=pi; //error no puedes asiganar un int* a un int 
	//pi=7; //error no puedes asignar un  // int a un int*
	//pc=pi; // 
	
}
