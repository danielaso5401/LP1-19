#include <stdexcept>//se tuvo que agregar este argumento por que no reconocia el runtime_error
#include<iostream>
using namespaces std;
int area(int length, int width);//no lo veo necesario
int framed_area(int x, int y)
{
  const int frame_width=2;
  if(x-frame_width<=0 || y-frame_width<=0) throw
    runtime_error("argumento negativo");
  return area(x-frame_width, y-frame_width);
}
int area(int length, int width)
{
  if(length<=0 || width<=0) throw
    runtime_error("argumento negativo");
    return length*width;
}
int main()
try
{
  int x=-1;
  int y=2;
  int z=4;
  int area1=area(x,y);
  int area2=framed_area(1,z);
  int area3=framed_area(y,z);
  double ratio= double(area1)/area3;
  //convertir a double
}
catch (exception& e){
  cerr<<"error: "<<e.what()<<'\n';
  return 1;
}
