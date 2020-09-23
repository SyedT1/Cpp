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
int minval(bst *k) {
	if (!k) {
		return -11111;
	} else if (!k->lft) {
		return k->x;
	}
	return minval(k->lft);
}

int maxval(bst *k) {
	if (!k) {
		return 11111;
	} else if (!k->rgt) {
		return k->x;
	}
	return maxval(k->rgt);
}
int main() {
	freopen("output.txt", "w", stdout);
	bst *k = nullptr;
	insert(k, 23);
	insert(k, -1);
	insert(k, 0);
	insert(k, 25);
	cout << "Maximum value in the tree = \n" << maxval(k) << '\n';
	cout << "Minimum value in the tree = \n" << minval(k) << '\n';
	return 0;
}
