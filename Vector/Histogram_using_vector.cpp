#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
   /*
           take number of inputs and range
           Numbers taken as input will be from 0 to 9 for the code below
           2D size can be modified based on constraints
   */
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
    cout<<string(2,'\n');
    for(ll i = mxrow-1;i>=0;i--){
        for(ll j = 0;j<=mxcol;j++){
            if(ll(pip[j].size())==0)continue;
            if(i<ll(pip[j].size())){
                cout<<pip[j][i]<<' ';
            }else{
                cout<<string(2,' ');
            }
        }
        cout<<'\n';
    }
}
