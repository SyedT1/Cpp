#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	node *next = nullptr;
};
bool prime(int p){
	for(int i = 2;i<p;i++){
		if(p%i==0)return false;
	}
	return p<2?false:true;
}
int main(){
	node *list = new node;
	node *start = list;
	int n;cin>>n;
	for(int i = 1,p;i<=n;i++){
		printf("Node[%d] = ",i);
		cin>>p;
		if(i==1){
			list->x = p;
			continue;
		}
		node *temp = new node;
		temp->x = p;
		list->next = temp;
		list = list->next;
	}
	for(node *num = start;num!=nullptr;){
		if(prime(num->x)){
			num = num->next;
		}else{
		    (num->x)++;
		}
	}
	for(int i = 1;start!=nullptr;i++){
		printf("Node[%d] = %d\n",i,start->x);
		start =start->next;
	}
}
