class X
{
public:
	X(){}// constructor por defecto
};
class Y
{
public:
	Y(int){}//constructor recibe 1 arg no tiene constructor por defecto
};
int main(){
	double* p0; // sin inicalizar problemas
	double* p1=new double //obtiene un double no inicializado
	double* p2=new double(5.5)//obtiene un double incializado
	double* p3=new double[5]; //obtiene 5 doubles inicializados
	// obiamente si declaramos p0 sin incializarlo estamos en problemas
	*p0=7.0;
	//no sabemos que parte de la memoria estamos apuntando prodria hacer crash
	double* p4=new double[5];
	//double* p4 =new double [5]{0,1,2,3,4,};
	for(int i=0; i<5; ++i) p4[i]=i;
	x* px1= new X; //px1 apunta al objeto X
	x* px2= new X[17];//17 objetos incializados por defecto
	//y* py1=new Y; //error no hay
	//Y* py2=new Y[17];
	Y* py3=new Y(13);//ok inicializado a Y(13)
	}
