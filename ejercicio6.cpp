#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int numeros;
  vector <int> lista;
  for(int i=0;i<3;i++){
   cout << "ingrese 3 numeros"; 
   cin>>numeros;
   lista.push_back(num);
  }
  sort(lista.begin(), lista.end());
  cout<<"el numero mayor de su lista es: "<< lista[2];
 
 return 0;
}
