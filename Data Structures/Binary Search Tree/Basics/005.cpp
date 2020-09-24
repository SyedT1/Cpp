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
void numnodes(bst *q, int &s) {
	if (!q) {
		return ;
	}
	numnodes(q->rgt, s);
	if (q) {
		s++;
	}
	numnodes(q->lft, s);
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
	int nd = 0;
	numnodes(k, nd);
	cout << nd << '\n';
}
