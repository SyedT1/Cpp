#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	node *next = nullptr;
};
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
	//Sort the list now
	for(node *s = start;s->next!=nullptr;){
		node *sort = s,*pal = s;
		int min = sort->x;
		while(pal!=nullptr){
			if(min>pal->x){
				min = pal->x;
				sort = pal;
			}
			pal = pal->next;
		}
		swap(sort->x,s->x);
		s = s->next;
	}
	for(node *s = start;s!=nullptr;){
		cout<<s->x<<'\n';
		s = s->next;
	}
	return 0;
}
