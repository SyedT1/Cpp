#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *left = nullptr, *right = nullptr;
};
void insert(node *&k, int val) {
	if (!k) {
		k = new node;
		k->data = val;
		return;
	}
	insert(val > k->data ? k->right : k->left, val);
}
int sumCousin(node *s, int val) {
	queue<node*>Q;
	queue<int>qo;
	Q.push(s);
	qo.push(s->data);
	bool found = false;
	int numofnodes = 1, del_rgt = 0, del_lft = 0;
	while (!Q.empty()) {
		node *k = Q.front();
		Q.pop(); qo.pop();
		numofnodes--;
		if (k->left) {
			Q.push(k->left);
			qo.push((k->left)->data);
		}
		if (k->right) {
			Q.push(k->right);
			qo.push((k->right)->data);
		}
		if (k->left || k->right) {
			if (k->left) {
				if ((k->left)->data == val) {
					found = true;
					del_lft = (k->left)->data;
					if (k->right) {
						del_rgt = (k->right)->data;
					}
				}
			}
			if (k->right) {
				if ((k->right)->data == val) {
					found = true;
					del_rgt = (k->right)->data;
					if (k->left) {
						del_lft = (k->left)->data;
					}
				}
			}
		}
		if (numofnodes == 0) {
			if (found) {
				break;
			}
			numofnodes = Q.size();
		}
	}
	int sum = 0;
	while (!qo.empty()) {
		sum += qo.front();
		qo.pop();
	}
	return sum - del_lft - del_rgt;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	node *listed = nullptr;
	int array[] = {10, 4, 3, 9, 7, 5, 8, 16, 20, 25, 22, 26};
	for (int i = 0; i < 12; i++) {
		insert(listed, array[i]);
	}
	cout << sumCousin(listed, 20) << '\n';
}
