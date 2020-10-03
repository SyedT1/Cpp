#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *left = nullptr, *right = nullptr;
};
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void insert(node *&y, int val) {
	if (!y) {
		y = new node;
		y->data = val;
		return;
	}
	insert(val > y->data ? y->right : y->left, val);
}
void pp(node *l) {
	if (!l) {
		return;
	}
	pp(l->left);
	cout << l->data << ' ';
	pp(l->right);
}
void printL(node *com) {
	queue<node *>Q;
	Q.push(com);
	int numofnodes = 1;
	while (!Q.empty()) {
		node *k = Q.front(); Q.pop();
		numofnodes--;
		cout << k->data << ' ';
		if (k->left) {
			Q.push(k->left);
		}
		if (k->right) {
			Q.push(k->right);
		}
		if (!numofnodes) {
			numofnodes = Q.size();
			cout << '\n';
		}
	}
}
int main() {
	IO();
	node *com = nullptr;
	int array[] = {9, 8, 6, 5, 7, 10, 12, 20, 14, 21};
	for (int i = 0; i < 10; i++) {
		//cout << array[i] << '\n';
		insert(com, array[i]);
	}
	printL(com);
	return 0;
}
