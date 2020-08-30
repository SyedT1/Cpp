#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("kala.txt", "w", stdout);
	node *p = new node, *start;
	start = p;
	int n; cin >> n;
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
	node *prev = nullptr;
	for (node *curr = start, *next_node; curr != nullptr;) {
		next_node = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next_node;
	}
	for (node *s = prev; s != nullptr; s = s->next) {
		cout << s->x << ' ';
	}
}
