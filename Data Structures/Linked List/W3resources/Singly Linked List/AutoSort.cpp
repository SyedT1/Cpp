#include<iostream>
using namespace std;
class Node{ 
 public:
   int value;
   Node *next = nullptr;
   void ins(Node *&k,int v){
	   if(k==nullptr || v < k->value){
		   Node *temp = new Node{v,k};
		   k = temp;
           return;
	   }
       Node *temp = new Node{v,nullptr},*lo = k;
	   while(lo->next!=nullptr && temp->value > lo->next->value){
          lo = lo->next;
	   }
	   Node *lead = lo, *to = lo->next;
	   temp->next = to;
	   lead->next = temp;
	   return;
   }
};
int main(){
	Node *link = nullptr;
	int ar[]={1,-1,-2,-3,-4,3,2,1,-333,44,5555,20};
	int nar = sizeof(ar)/sizeof(int);
	for(int i = 0;i<nar;i++){
      link->ins(link,ar[i]);
	}
	while(link){
		cout<<link->value<<' ';
		link = link->next;
	}
}
