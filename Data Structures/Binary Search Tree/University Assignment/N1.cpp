#include<bits/stdc++.h>
using namespace std;
struct BinaryTreeNode {
	int data;
	BinaryTreeNode *left = nullptr, *right = nullptr;
};
void insert(BinaryTreeNode *&r, int val) {
	if (!r) {
		r = new BinaryTreeNode;
		r->data = val;
		return;
	} else if (val > r->data) {
		insert(r->right, val);
	} else {
		insert(r->left, val);
	}
}
void findleftnode(BinaryTreeNode *q, int &l) {
	if (!q) {
		return;
	}
	if (q->left) {
		l++;
	}
	findleftnode(q->left, l);
	findleftnode(q->right, l);
}
int main() {
	freopen("output.txt", "w", stdout);
	BinaryTreeNode *k = nullptr;
	int arr[] = {11, 2, 20, 15, 28, 14};
	for (int i = 0; i < 6; i++) {
		insert(k, arr[i]);
	}
	int numofnodes = 0;
	//printVal(k);
	findleftnode(k, numofnodes);
	cout << numofnodes << '\n';
	return 0;
}
