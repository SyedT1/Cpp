#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int f(int x){return x-1;}
int main(){
  ifstream file;
  file.open("fog.txt");
  int nEl = 0,n,maxcol = 0,maxbsize = 0,bin,p = 0;
  cout<<"Enter the Binsize = ";
  cin>>bin;
  while(file>>n){
    nEl++;
    maxbsize = max(maxbsize,(n?f(n):n)/bin);
  }
  file.close();
  file.open("fog.txt");
  int an[maxbsize+1] = {}, **arr = new int *[maxbsize+1], *store = new int[nEl+1];
  while(file>>n){
    store[p++] = n;
    an[(n?f(n):n)/bin]++;
    maxcol = max(maxcol,an[(n?f(n):n)/bin]);
  }
  file.close();
  for(int i = 0;i<=maxbsize;i++){
    arr[i] = new int[an[i]];
  }
  for(int i = 0;i<=maxbsize;i++){
    if(an[i]){
      for(int j = 0;j<an[i];){
        for(int k = 0;k<nEl;k++){
          if((store[k]?f(store[k]):store[k])/bin==i){
            arr[i][j] = store[k];
            if((++j)==an[i])break;
          }
        }
      }
    }
  }
  for(int i = maxcol-1;i>=0;i--){
    for(int j = 0;j<=maxbsize;j++){
       if(an[j]==0)continue;
       if(i<an[j]){
         cout<<arr[j][i]<<' ';
       }else{
        cout<<string(2,' ');
       }
    }
    cout<<'\n';
  }
  return 0;
}
