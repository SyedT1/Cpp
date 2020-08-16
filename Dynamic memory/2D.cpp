#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
  ll **arr = new ll *[4];
  for(ll i = 0;i<4;i++) arr[i] = new ll[4];
  for(ll i = 0;i<4;i++){
  	for(ll j = 0;j<4;j++){
  		cin>>arr[i][j];
  	}
  }
  
  for(ll i = 0;i<4;i++){
  	for(ll j = 0;j<4;j++){
  		cout<<arr[i][j]<<(j<3?' ':'\n');
  	}
  }
  for(ll i = 0;i<4;i++) delete arr[i];
  return 0;
}
