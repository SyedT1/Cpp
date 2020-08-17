#include<bits/stdc++.h>
using namespace std;
bool isPrime(int q){
	for(int i = 2,upto = sqrt(q);i<=upto;i++){
		if(q%i==0) return false;
	}
	return q<2?false:true;
}
int main(){
	int N;cin>>N;
	int *p = new int[N];
	int *q = p;
	while(p!=q+N){
		cin>> *(p++);
	}
	p = q;
	while(p!=q+N){
		if(isPrime(*p)){p++;continue;}
		(*p)++;
	}
	p = q;
	while(p!=q+N){
		cout<<*(p++)<<' ';
	}
}
