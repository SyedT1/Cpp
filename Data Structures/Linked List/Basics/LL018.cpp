#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
bool palindromic_or_not(node *s, node *q) {
	for (; s != nullptr && q != nullptr; s = s->next, q = q->next) {
		if (s->x != q->x) {
			return false;
		}
	}
	return true;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	node *p  = new node, *q;//, *xk;
	q = p;
	for (int i = 0; i < n; i++) {
		if (i) {p->next = new node; p = p->next;}
		cin >> p->x;
	}
	node *prev = nullptr, *curr = q, *next_one;
	for (; curr != nullptr;) {
		next_one = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next_one;
	}
	//Check if it's palindromic
	cout << (palindromic_or_not(prev, q) ? "Yes" : "No") << '\n';
}
