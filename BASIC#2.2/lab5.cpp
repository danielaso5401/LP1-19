#include <stdexcept>//se tuvo que agregar este argumento por que no reconocia el runtime_error
#include<iostream>
using namespace std;
int area(int length, int width){
	return length*width;
}
const int frame_width=2;
//calcula el area dentro de un marco
int framed_area(int x, int y)
{
  return area(x-frame_width, y-frame_width);
}
int main()
try
{
  int x=1;
  int y=2;
  int z=2;// no se declaro la varibale z y se agrego con un valor 2
  {
    if(x<=0)throw runtime_error("x es negativo");
    if(y<=0)throw runtime_error("y es negativo");
    int area1=area(x,y);
  }
  {//si no separemos especificamente el error seria
    if(x<=0 || y<=0)throw
      runtime_error("argumento no postivo");
    int area1=area(x,y);
    if(z<=0)throw
      runtime_error("argumento no positivo");
    int area2=framed_area(1,z);
    if(y<=2 || z<=2) throw
      runtime_error("argumento no postivo");
    int area3=framed_area(y,z);
    double ratio=double(area1)/area3;
    //covertir a double
  }
  {
    if(1-frame_width<=0 || z-frame_width<=0)throw
      runtime_error("argumento negativo");
    int area2=framed_area(1,z);
    if(y-frame_width<=0 || z-frame_width<=0)throw
      runtime_error("argumento negativo");
    int area3=framed_area(y,z);
  }

}
catch (exception & e){
  cerr<<"error: "<<e.what()<<'\n';
  return 1;
}
