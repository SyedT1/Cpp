#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;cin>>N;
	int *p = new int[N];
	int *q = p;
	while(p!=q+N){
		cin>> *(p++);
	}
	p = q;
	while(p!=q+N){
		cout<< *(p++) <<'\n';
	}
}
