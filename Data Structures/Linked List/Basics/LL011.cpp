#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	node *next = nullptr;
};
void printrecur(node *s){
	if(s==nullptr){
	  return;
	}else{
		cout<<s->x<<'\n';
		return printrecur(s->next);
	}
}
int main(){
	cout<<"Enter the number of inputs = ";
	int n;cin>>n;
	node *linked_list = new node, *start;
	start = linked_list;
	for(int i = 1,p;i<=n;i++){
		cin>>p;
		if(i==1){
			linked_list->x = p;
			continue;
		}
		node *temp = new node;
		temp->x = p;
		linked_list->next = temp;
		linked_list = linked_list->next;
	}
	//Print the list recursively
       printrecur(start);
       return 0;
}
