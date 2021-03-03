#include<iostream>
using namespace std;
class Node{
public:
	int value;
	Node *next = nullptr;
	void ins(Node *&k,int v){
		Node *tmp = new Node{v,k};
		k = tmp;
		return;
	}
	void cir(Node *&k){
		if(!next){
			next=k;
			return;
		}
		next->cir(k);
	}
};
int main(){ 
  Node *t = nullptr;
  for(int i = 1;i<=5;i++){
       t->ins(t,i);
  }
  for(Node *cou = t;cou;cou=cou->next){
	  cout<<cou->value<<' ';
  }	
  cout<<'\n';
  t->cir(t);
  Node *slow = t, *fast = t->next,*trace = nullptr;
  //int n = 0;
  while(true){
     if(slow->next==nullptr || slow->next->next==nullptr ||fast->next==nullptr|| fast->next->next==nullptr){
		 cout<<"Loop doesn't exist\n";
		 return 0;
	 }else{
		 slow = slow->next;
		 fast = fast->next->next;
	 }
	 if(slow==fast){
		 trace = slow;
		 fast = fast->next;
		 break;
	 }
  }
  int length_ = 0;
  while(fast!=slow){
      length_ += 1;
	  fast = fast->next;
  }
  printf("Loop exists and it's length is %d",length_+1);
  return 0;
}
