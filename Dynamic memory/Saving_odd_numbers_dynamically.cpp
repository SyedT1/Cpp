#include<bits/stdc++.h>
using namespace std;
void read(int *&p,int *u,int upto){
	int nl = 0;
	for(int i = 1;i <=upto;i++){
		if(i&1){ nl++;}
	}
	p = new int[nl];
	for(int i = 1,pl = 0;i<upto;i++){
		if(i&1) {p[pl++] = i;}
	}
	*u = nl;
}
int main(){
	int *arr = nullptr,len = 0,n;cin>>n;
	read(arr,&len,n);
	for(int i = 0;i<len;i++) cout << arr[i] << '\n';
}
