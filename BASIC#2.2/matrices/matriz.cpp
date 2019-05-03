#include<iostream>
#include <stdlib.h>
#include <time.h>  
#include<stdexcept>
using namespace std;
int main()
try
{
	srand (time(NULL));
	int x, y; cin>>x>>y; //tamaño de la matriz
	int matriz1[x][y];
	for (int r=0; r<x; r++){
		for(int l=0; l<y; ++l){//asigna valores ramdom a la matriz 
			matriz1[r][l]=(rand() % 9) + 1;
 
			cout<<matriz1[r][l]<<" ";

		}
		cout<<endl;
	}
	int z, w; cin>>z>>w; //tamaño de la matriz
	int matriz2[z][w];
	for (int t=0; t<z; ++t){//asigna valores ramdom a la matriz 
		for(int l=0; l<w; ++l){
			matriz2[t][l]=(rand() % 9) + 1;
 
			cout<<matriz2[t][l]<<" ";

		}
		cout<<endl;
	}
	if(y!=z) throw runtime_error("No es posible multiplicar las matrices"); 
	else if(x!=w) throw runtime_error("No es posible multiplicar las matrices"); 
	else{
		int matriz3[z][w];//se crea la nueva matriz para ingresar la multipicacion de la matriz 1 y 2
		for(int i=0; i<z; i++){
 			for(int j=0; j<w; j++){
 				matriz3[i][j]=0;// se inicializa los valores de la matriz        
				for(int k=0; k<w; k++){
					 matriz3[i][j]= matriz3[i][j]+matriz2[i][k]*matriz1[k][j];				
                }	
				cout<<matriz3[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
catch (exception&e){
	cerr<<"error: "<<e.what()<<endl;
	return 1;
}
