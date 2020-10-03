#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *left = nullptr, *right = nullptr;
};
int depthSum(node *k) {
	queue<node *>Q;
	Q.push(k);
	int numofnodes = 1, m = 1, s = 0, totaldep = 0;
	while (!Q.empty()) {
		node *tal = Q.front();
		Q.pop();
		numofnodes--;
		s += (tal->data);
		if (tal->left)Q.push(tal->left);
		if (tal->right)Q.push(tal->right);
		if (numofnodes == 0) {
			totaldep += (m++ * s);
			s = 0;
			numofnodes = Q.size();
		}
	}
	return totaldep;
}
void insert(node *&k, int val) {
	if (!k) {
		k = new node;
		k->data = val;
		return;
	}
	insert(val > k->data ? k->right : k->left, val);
}
int main() {
	freopen("output.txt", "w", stdout);
	node *tree = nullptr;
	int array[] = {10, 7, 3, 9, 8, 16, 24, 25};
	for (int i = 0; i < 8; i++) {
		insert(tree, array[i]);
	}
	cout << depthSum(tree) << '\n';
	return 0;
}
