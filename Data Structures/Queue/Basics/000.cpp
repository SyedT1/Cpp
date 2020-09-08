#include<bits/stdc++.h>
using namespace std;
struct myqueue {
	int h = 0, tail = 0, *n = new int[6];
};
void enqueue(myqueue *&p, int k) {
	p->n[p->tail] = k;
	p->tail = p->tail + 1;
}
int dequeue(myqueue *&p) {
	p->h = p->h + 1;
	return p->n[p->h - 1];
}
int main() {
	freopen("output.txt", "w", stdout);
	myqueue *p = new myqueue;
	/*
	  enqueue(value taken into queue) :-
	  process             head 0        tail val
	  increment          no(fixed)      yes(val++) and value is taken
	  (tail approach towards right as new value is taken into queue)


	  dequeue(value extracted and popped front) :-
	  process             head 0 (++)   tail val(fixed)
	  increment             yes            no
	  (head approach towards tail until head is equal to tail)

	*/
	enqueue(p, 2);
	enqueue(p, 333);
	enqueue(p, 4444);
	cout << dequeue(p) << '\n';
	cout << dequeue(p) << '\n';
	/*
	  enqueue function(used thrice inputting val at tail)-
	
	   | 4444 |
	   | 333  |
	   |  2   |
	   ++++++++

	  dequeue function (used once to pop the value at the front)- 

	  |  4444 |
	  |  333  |
	  |       |
	  +++++++++
	  That's why queues are FIFO
	  First In First Out
	*/
	return 0;
}
