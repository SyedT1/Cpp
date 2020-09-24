#include<bits/stdc++.h>
using namespace std;
struct bst {
	int x;
	bst *lft = nullptr, *rgt = nullptr;
};
void insert(bst *&q, int val) {
	if (!q) {
		q = new bst;
		q->x = val;
		return;
	}
	else if (val > q->x) {
		insert(q->rgt, val);
	} else {
		insert(q->lft, val);
	}
}
int numnodes(bst *q) {
	if (!q) {
		return 0;
	}
	else {
		return numnodes(q->lft) + numnodes(q->rgt) + 1;
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	bst *k = nullptr;
	for (int i = 0, po; i < n; i++) {
		cin >> po;
		insert(k, po);
	}
	cout << numnodes(k) << '\n';
	return 0;
}
