#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n,t=0; cin >> n;
	node *petal = new node, *p;
	p = petal;
	while(true){
	     for (int i = 0; i < n; i++) {
	     	printf("Node[%d] = ",i);
			if (i>0 || t>0) {
				petal->next = new node;
				petal = petal->next;
			}
			cin >> petal->x;
		 }
		 cout<<"Enter for more inputs = ";
		 int fi;cin>>fi;
		 if(fi==0){
		 	break;
		 }
		 n = fi;
		 t++;
	}
	while(p!=nullptr){
		cout<<p->x<<'\n';
		p = p->next;
	}
}
