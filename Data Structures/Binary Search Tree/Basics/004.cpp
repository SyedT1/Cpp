#include<bits/stdc++.h>
using namespace std;
struct BST {
	int x;
	BST *lft = nullptr, *rgt = nullptr;
};
void insert(BST *&n, int val) {
	if (!n) {
		n = new BST;
		n->x = val;
		return;
	}
	else if (val > n->x) {
		insert(n->rgt, val);
	} else if (val < n->x) {
		insert(n->lft, val);
	}
}
void leaf(BST *n) {
	if (!n) {
		return;
	} else if (!n->rgt && !n->lft) {
		cout << "Leaf found  = " << n->x << '\n';
	} else {
		leaf(n->lft);
		leaf(n->rgt);
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	BST *k = nullptr;
	for (int i = 1, input; i <= n; i++) {
		cin >> input;
		insert(k, input);
	}
	leaf(k);
	return 0;
}
