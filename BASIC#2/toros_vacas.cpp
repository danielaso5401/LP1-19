#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main(){
    int toro=0;
    int vaca=0;
    int ele[4];
    int juego[4];
    int aux = 0;
 	char rendirse='n';
    srand(time(0));
  //while(rendirse!='y'){
  
    for(int i = 0; i < 4; i++){
        aux = (1 + rand() % 9);
 
        int aux2 = 0;
 
        while(aux2 < i){
 
            if(aux != juego[aux2])
                aux2++;
 
            else{
                    aux = (1 + rand() % 9);
                    aux2 = 0;
 
                }
        }
 
        juego[i] = aux;
 
        //cout << juego[i] << " ";//ramdom creado
      }
      
    //arriba se hace el for para que el ramdom no de valores repetidos
	cout<<endl;
    int salida=0;//se da una indicación de que ya termino el juego 
    while(salida!=1){
    	for(int l=0; l<4; ++l){
        	int x; cin>>x;
        	ele[l]=x;
        }
        for(int m=0; m<4; ++m){
          if (juego[m]==ele[m]){
                ++toro;
                --vaca;
            }
          for(int r=0; r<4; ++r){
            if (juego[m]==ele[r]){
                ++vaca;
            }
          
		  }
          
        }
    	cout<<"toros: "<<toro<<" / "<<"vacas: "<<vaca<<endl;
		if(toro==4){
			salida=1;
		}
		toro=0;
		vaca=0;
	//cout<<"quieres seguir jugando ingres y para otra partida o ingresa n para acabar"; cin>>rendirse;
		

    }

    return 0;

}

