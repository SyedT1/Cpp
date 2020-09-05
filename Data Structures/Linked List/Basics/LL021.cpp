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
	node *t = new node;
	int n; cin >> n;
	for (int i = 0; n; n /= 2, i++) {
		if (i) {
			t->prev = new node;
			t->prev->next = t;
			t = t->prev;
		}
		t->x = n % 2;
	}
	for (; t != nullptr; t = t->next) {
		cout << t->x;
	}
	return 0;
}
