#include <iostream>
using namespace std;
int incr_v(int x){return x+1;}
//calcula el nuevo valor y re
int incr_p(int* p){++*p;}//pasa un puntero lo dereferencia e incrementa el resultado
int incr_r(int& r){++r;}//pasa una referencia
inline void error(const string& s)
{throw runtime_error(s);}
void incr_p(char* p){
	if(p==0)error("puntero nulo");
	++*p; //de referencia e incrementa al objeto apuntado
}
int main()
try
{
	{int x=2;
		x=incr_v(x);//copia x a incr_v(); luego copia el resultado y lo asigna
	}
	{int x=7;
		incr_p(&x);//el & es necesario
		incr_r(x);
		//si alguien llama con un puntero nulo 
	}
	{//incr_p(0); crash!
		char* p=0;
		incr_p(p);//crash incr_p() trata de der
		catch (exception& e){
			cerr>>"error: "<<e,what()<<'\n';
			return 1;
		}
		
	}
}

