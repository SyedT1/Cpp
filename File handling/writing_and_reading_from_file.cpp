#include<bits/stdc++.h>
#include<fstream>
using namespace std;
using ll = long long int;
int main(){
   //take number of inputs and range
    ll po,range;cin>>po>>range;
    ll mxcol = 0,mxrow = 0;
    vector<vector<ll>>pip(10);
    for(ll ip = 0,i;ip<po;ip++){
        cin>>i;pip[i/range].push_back(i);
        mxrow = max(mxrow,ll(pip[i/range].size()));
        mxcol = max(mxcol,i/range);
    }
    /*
       Print Histogram
    */
    cout<<'\n'<<'\n';
    ofstream file("mew.txt");
    if(!file.is_open()){
     cout<<"File cannot be opened \n";
    }
    else{
 
            for(ll i = mxrow-1;i>=0;i--){
                for(ll j = 0;j<=mxcol;j++){
                    if(i<pip[j].size()){
                       file<<to_string(pip[j][i])<<" ";
                    }else{
                       file<<string(2,' ');
                    }
                }
                file<<endl;
            }
            ifstream file;
            file.open("mew.txt");
 
            string line;
            while(file.good()){
              getline(file,line);
              cout<<line<<'\n';
            }
    }
}
 
