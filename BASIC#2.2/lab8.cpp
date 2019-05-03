#include <iostream>
#include <vector>
using namespace std;
int main()
try
{
  vector<int> v;
  for (int x; cin>>x; )//recomendable un while seria mas entendible
    v.push_back(x);
  for (int i=0; i<=v.size(); ++i)
    cout<<"v["<<i<<"] =="<<v[i]<<'\n';
}
catch (out_of_range){//no reconoce out_of_rangue
  cerr<<"oops! error de rango\n";
  return 1;
}
catch(...)
{
  cerr<<"error algo salio mal";
  return 2;
}
