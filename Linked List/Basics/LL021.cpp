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
	for (node *start = s; start != nullptr; start = start->next) {
		if (start->x != pr->x) {
			cout << "Not palindromic \n";
			return 0;
		}
		pr = pr->prev;
	}
	cout << "Palindromic it is\n";
	return 0;
}
