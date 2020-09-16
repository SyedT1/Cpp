#include<bits/stdc++.h>
using namespace std;
struct mystack {
	int x;
	mystack *next = nullptr;
};
void push(mystack *&k, int val) {
	if (!k) {
		k = new mystack;
		k->x = val;
		return;
	}
	mystack *temp = new mystack;
	temp->x = val;
	temp->next = k;
	k = temp;
}
int pop(mystack *&k) {
	mystack *temp = k;
	int v = k->x;
	k = k->next;
	delete temp;
	return v;
}
int main() {
	freopen("output.txt", "w", stdout);
	mystack *first = nullptr;
	for (int i = 0; i < 4; i++) {
		push(first, i);
	}
	mystack *ulta = nullptr;
	for (int i = 0; i < 4; i++) {
		push(ulta, pop(first));
	}
	for (; ulta; ulta = ulta->next) {
		cout << ulta->x << '\n';
	}
	return 0;
}
