#include <iostream>
using namespace std;
class link{
public:
	string value:
		link(const string & v, link* p=0, link* s=0)
			:value(v), prev(p), succ(s){}
		link* insert(link* n)//inserta n antes de este objeto
		link* erase(); //elimina este objeto de la lista
		link* find(const string& s); //encuentra s en la list
		const link* find (const string& s)const;
		link* next() const{return succ;}
		link* previous() const{return prev;}
private:
	link* prev;
	link* succ;
};
link* link::insert(link* n)
{
	if(n==0) return this;
	if(this==0)return n;
	n->succ=this; //el objeto this viene despues de n
	this->prev=n; //n es ahora el anterior de this
	return n;
}
//inseta n antes de p retorna n
link* link::insert (link* n)
{
	link* p=this;//puntero al objeto this
	if(n==0)return p; //nada que insertar
	if(p==0) return n; //nada donde insertar
	n->succ=p; //p viene despues de n
	p->prev=n; //n sera el ant de p
	return n
}
