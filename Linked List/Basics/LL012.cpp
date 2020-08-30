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
	for (node *s = start; s != nullptr; s = s->next) {
		cout << s->x << ' ';
	}
}
