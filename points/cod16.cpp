#include <iostream>
using namespace std;
struct link{
	string value;
	link* prev;
	link* succ;
	link(const string& v, link* p=0, link* s=0)
		:value(v), prev(p), succ(s){}
};
//insertar n antes de p (incompleto)
link* insert (link*p, lin*n)
{
	n->succ=p;//p viene despues de n
	p->prev->succ=n;//n viene depues de lo que solia ser el anterior p
	n->prev=p->prev;//el anterior p se convierte en el anterior n
	p->prev=n;//n se convierte en el anterior de p
	return n;
}
int main()
{
	link* nord_gods=new link("thor", 0,0);
	nord_gods=new link("odin", nord_gods,0);
	nord_gods->succ->prev=nord_gods;
	nord_gods=new link("freia", nord_gods,0);
	nord_gods->succ->prev=nord_gods;
}
