#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p=NULL,*q=NULL, div = 0, n;cin>>n;
	for (int i = 1; i <=n; i++) {
		if (n % i == 0) {
			div++;
			q=(int *)realloc(p,div*(sizeof(int)));
			if(q!=NULL){
                p=q;
                p[div-1]=i;
			}
			else{
			    free(p);
			}
		}

	}
	for (int i = 0; i < div; i++) {
		cout << p[i] << ' ';
	}
}
