#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
void insert_at_beginning(node *&f, int t, node *&cl) {
	node *no = new node;
	no->x = t;
	no->next = f;
	f = no;
	cl = f;
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
		insert_at_beginning(beads, in(), cl);
	}
	another = beads, cl = beads;
	while (another != nullptr) {
		cout << another->x << ' ';
		another = another->next;
	}
	cout << '\n';
	cin >> nth >> kth;
	nth -= 2;
	if (nth < 0) {
		insert_at_beginning(beads, kth, cl);
	} else {
		while (nth--) {
			beads = beads->next;
		}
		insert_at_nth_position(beads, kth);
	}
	while (cl != nullptr) {
		cout << cl->x << ' ';
		cl = cl->next;
	}
}
