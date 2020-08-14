#include<bits/stdc++.h>
#include <fstream>
using namespace std;
using ll = long long int;
bool is_prime(ll d){
  for(ll fi = 2;fi<d;fi++){
    if(d%fi==0) return false;
  }
  return true;
}
string put(){string x;cout<<"Name of the file for output - ";cin>>x;return x+".txt";}
int main(){
  string filename = put();
  ofstream file(filename);
  if(!file.is_open()){
    cout<<"File cannot be opened \n";
  }else{
    cout<<"Enter the input = ";
    ll n;cin>>n;
    for(ll i = 2;i<=n;i++){
      if(is_prime(i)){
        file<<to_string(i)<<endl;
      }
    }
    file.close();
    cout<<"Stored in "<<filename<<" successfully \n";
  }
}
