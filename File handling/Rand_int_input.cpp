#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
int main(){
    srand(time(0));
    int tto;cin>>tto;
    ofstream file("input.txt");
    if(!file.is_open()){
        cout<<"File couldn't be opened \n";
    }else{
      for(int i = 1;i<=tto;i++){
        file<<1+rand()%(tto+1)-1<<'\n';
      }
      file.close();
      ifstream file;
      file.open("input.txt");
      int pl,*p=new int[tto],k=0,even=0;
      while(file>>pl){
        p[k++]=pl;
        if(pl%2==0){
          even++;
        }
      }
      file.close();
      for(int i = 0;i<even;){
        for(int j = i; j< tto; j++){
          if(p[j]%2==0){
            swap(p[i],p[j]);
            i++;
            break;
          }
        }
      }
      for(int i = 0;i<even-1;i++){
        for(int j = i+1;j<even;j++){
          if(p[i]>p[j]){
            swap(p[i],p[j]);
          }
        }
      }
      if(even){
        for(int i = even;i<tto-1;i++){
          for(int j = i+1;j<tto;j++){
            if(p[i]>p[j]){
              swap(p[i],p[j]);
            }
          }
        }
      }
      ofstream fileo("output.txt");
      if(!fileo.is_open()){
        cout<<"Cannot open file";
      }
      else{
        for(int i = 0;i<tto;i++){
          fileo<<p[i]<<' ';
        }
      }
      fileo.close();
    }
    return 0;
}
