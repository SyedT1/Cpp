#include<bits/stdc++.h>
using namespace std;
struct myStack {
	int *n = new int[5];
	int counter = 0;
};
void push(myStack *&q, int x) {
	q->n[q->counter] = x;
	q->counter = q->counter + 1;
}
int pop(myStack *&q) {
	q->counter = q->counter - 1;
	return q->n[q->counter];
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	myStack *l = new myStack;
	push(l, 1);
	push(l, 2);
	push(l, 3);
	/*
	  push(l,num) =
      (Push Three elements one by one in consecutive order)

	  |  3  |
	  |  2  |
	  |  1  |
  	  +++++++

  	  pop(l) = 
  	  
  	  |      |
  	  |  2   |
   	  |  1   |
  	  ++++++++

  	  pop(l) =

  	  |      |
  	  |      |
  	  |  1   |
  	  ++++++++

  	  Until no elements are left .......
  	  */
	for (int i = 0; i < (l->counter); i++) {
		cout << l->n[i] << '\n';
	}
	cout<<'\n';
	cout << pop(l) << '\n';
	cout << pop(l) << '\n';
	cout << pop(l) << '\n';
	/* 
	  As we can see using the pop function the last element 
	  existing is returned. Hence it is know as LIFO
	  or Last In First Out
	  */
	return 0;
}
