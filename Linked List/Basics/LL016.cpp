#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	int n; cin >> n;
	node *p = new node, *q;
	q = p;
	for (int i = 0; i < n; i++) {
		if (i) {
			p->next = new node;
			p = p->next;
		}
		cin >> p->x;
	}
	for (node *k = q; k != nullptr; k = k->next) {
		cout << k->x << ' ';
	}
}
