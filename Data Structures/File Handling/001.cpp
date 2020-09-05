#include<bits/stdc++.h>
#include<fstream>
using namespace std;
using ll = long long int;
int main(){
  ifstream file;
  file.open("uri.txt");
  if(!file.is_open()) cout<<"File can't be opened \n";
  else{
    string line;
    while(file.good()){
      getline(file,line);
      cout<<line<<'\n';
    }
  }
}
