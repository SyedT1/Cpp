#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
void val(node *&f, int s) {
	node *k = new node;
	k->x = s;
	k->next = f;
	f = k;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x;
	node *beads = new node;
	beads->next = nullptr;
	for (int i = 1; i <= 4; i++) {
		cin >> x;
		val(beads, x);
	}
	while (beads->next != nullptr) {
		cout << beads->x << ' ';
		beads = beads->next;
	}
}
