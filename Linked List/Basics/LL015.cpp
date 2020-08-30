#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
void rec(node *i) {
	if (i == nullptr) {
		return;
	}
	else {
		printf("Shoja = %d\n", i->x);
		rec(i->next);
		printf("Ulta = %d\n", i->x);
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("kala.txt", "w", stdout);
	int n; cin >> n;
	node *p = new node, *si;
	si = p;
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			cin >> p->x;
			continue;
		}
		node *temp = new node;
		cin >> temp->x;
		p->next = temp;
		p = p->next;
	}
	rec(si);
}
