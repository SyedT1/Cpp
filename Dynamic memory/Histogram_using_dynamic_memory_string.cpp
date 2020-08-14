#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
  ifstream file;
  file.open("uri.txt");
  string line;
  getline(file,line);
  int **arr = new int *[10],bsize,maxbsize = 0,an[10]={},mxcol = 0;
  cin>>bsize;
  for(char c:line){
    int ro = int(c-'0')/bsize;
    an[ro]++;
    mxcol = max(mxcol,an[ro]);
    maxbsize = max(maxbsize,ro);
  }
  for(int i = 0;i<=maxbsize;i++){
    arr[i] = new int[an[i]];
  }
  for(int i = 0;i<=maxbsize;i++){
    if(an[i]){
      for(int j = 0;j<an[i];){
        for(int k = 0;k<int(line.size());k++){
          if(int(line[k]-'0')/bsize==i){
            arr[i][j] = int(line[k]-'0');
            if((++j)==an[i])break;
          }
        }
      }
    }
  }
  //cout<<mxcol<<'\n'<<maxbsize<<'\n';
  for(int i = mxcol-1;i>=0;i--){
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
}
