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
int leaf(BST *n) {
	if (n == nullptr) {
		return 0;
	} else if (!n->rgt && !n->lft) {
		return 1;
	} else {
		return leaf(n->lft) + leaf(n->rgt);
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
	int leaves = 0;
	cout << leaf(k)<<'\n';
	return 0;
}
