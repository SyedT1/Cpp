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
int depthfinder(bst *q, int i) {
	if (!q) {
		return -111111;
	} else if (q->x == i) {
		return 0;
	} else if (i > q->x) {
		return depthfinder(q->rgt, i) + 1;
	} else {
		return depthfinder(q->lft, i) + 1;
	}
}
int depth(bst *q, int v) {
	if (depthfinder(q, v) < 0) {
		return -1;
	} else {
		return depthfinder(q, v);
	}
}
void nodes(bst *q, int &h, bst *pq) {
	if (!q) {
		return;
	} else {
		h = max(h, depth(pq, q->x));
	}
	nodes(q->rgt, h, pq);
	nodes(q->lft, h, pq);
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
	bst *kp = k;
	int h  = 0;
	nodes(k, h, kp);
	cout << "Height of the tree = " << h << '\n';
	return 0;
}
