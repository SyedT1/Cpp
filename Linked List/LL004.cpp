#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
void insert_at_beginning(node *&f, int t) {
	node *no = new node;
	no->x = t;
	no->next = f;
	f = no;
}
int in() {int s; cin >> s; return s;}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	node *beads = new node;
	beads = nullptr;
	for (int i = 1; i <= n; i++) {
		insert_at_beginning(beads, in());
	}
	while (beads != nullptr) {
		cout << beads->x << ' ';
		beads = beads->next;
	}
}
