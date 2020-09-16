#include<bits/stdc++.h>
using namespace std;
struct mystack {
	int x;
	mystack *next = nullptr;
};
void push(int val, mystack *&k) {
	if (k == nullptr) {
		k = new mystack;
		k->x = val;
		return;
	}
	mystack *temp = new mystack;
	temp->x = val;
	temp->next = k;
	k = temp;
}
void pop(mystack *&p) {
	if (p == nullptr) {
		cout << "Stack is empty";
		return;
	} else {
		cout << p->x << '\n';
		mystack *x = p;
		p = p->next;
		delete x;
	}
}
int main() {
	freopen("output.txt", "w", stdout);
	mystack *jhuli = nullptr;
	push(2, jhuli);
	push(3, jhuli);
	push(4, jhuli);
	push(5, jhuli);
	pop(jhuli);
	pop(jhuli);
	pop(jhuli);
	pop(jhuli);
	pop(jhuli);
	return 0;
}
