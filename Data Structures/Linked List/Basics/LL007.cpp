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
void insert_at_nth_position(node *&beads, int kth) {
	node *notun = new node, *right = beads->next;
	notun->x = kth;
	notun->next = right;
	beads->next = notun;
}
int in() {int s; cin >> s; return s;}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, nth, kth; cin >> n;
	node *beads = new node, *another, *cl;
	beads = nullptr;
	for (int i = 1; i <= n; i++) {
		insert_at_beginning(beads, in());
	}
	another = beads, cl = beads;
	while (another != nullptr) {
		cout << another->x << ' ';
		another = another->next;
	}
	cout << '\n';
	cin >> nth >> kth;
	if (nth == 1) {
		node *temp = new node;
		temp->x = kth;
		temp->next = beads;
		cl = temp;
	} else if (nth > 1 && nth <= n) {
		nth -= 2;
		while (nth--) {
			beads = beads->next;
		}
		insert_at_nth_position(beads, kth);
	} else {
		cout << "invalid!\n";
	}
	while (cl != nullptr) {
		cout << cl->x << ' ';
		cl = cl->next;
	}
}
