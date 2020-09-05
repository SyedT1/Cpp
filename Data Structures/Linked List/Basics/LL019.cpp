#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *prev = nullptr;
	node *next = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	node *t = new node, *s;
	s = t;
	for (int i = 0; i < 4; i++) {
		if (i) {
			t->next = new node;
			t->next->prev = t;
			t = t->next;
		}
		cin >> t->x;
	}
	node *pr = t;
	cout << "Printing from first to last = \n";
	for (node *start = s; start != nullptr; start = start->next) {
		cout << start->x << ' ';
	}
	cout << endl << "Printing from last to first = \n";
	for (node *start = pr; start != nullptr; start = start->prev) {
		cout << start->x << ' ';
	}
	return 0;
}
