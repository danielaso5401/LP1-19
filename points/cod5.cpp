int main(){
	double* pd=new double [3];
	pd[2]=2.2;
	pd[4]=4.4;
	pd[-3]=-3.3;
	double* p=new double;//asigna un double
	double* q=new double[1000];//asigna 1000 doubles
	q[700]=7.7; //ok
	q=p; //q apunta a lo mismo que q
	double d=q[700]; //salio del rango
}
