include<bits/stdc++.h>
using namespace std;
struct ll {
	int data;
	ll *left = nullptr, *right = nullptr;
};
void insert(ll *&k, int v) {
	if (!k) {
		k = new ll;
		k->data = v;
		return;
	}
	insert(v > k->data ? k->right : k->left, v);
}
void pp(ll *k) {
	if (!k) {
		return;
	}
	pp(k->left);
	cout << k->data << ' ';
	pp(k->right);
}
int findmin(ll *&k) {
	if (!k->left) {
		int fetch = k->data;
		k = (k->right ? k->right : k->left);
		return fetch;
	}
	return findmin(k->left);
}
void del(ll *&k, int from, int to) {
	if (k->right == nullptr && k->left == nullptr) {
		k = nullptr;
		return;
	} else if (k->right == nullptr && k->left != nullptr) {
		k = k->left;
	} else if (k->right != nullptr && k->left == nullptr) {
		k = k->right;
	} else if (k->right != nullptr && k->left != nullptr) {
		k->data = findmin(k->right);
	}
	if (k->data >= from && k->data <= to) {
		del(k, from, to);
	}
}
void range(ll *&k, int from, int to) {
	if (!k) {
		return;
	}
	else if (k->data >= from && k->data <= to) {
		del(k, from, to);
		if (k == nullptr) {
			return;
		}
	}
	range(k->left, from, to);
	range(k->right, from, to);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll *tree = nullptr;
	int arr[] = {2, 1, -1, -3, 0, 4, 3, 6, 5, 10};
	for (int i = 0; i < 10; i++) {
		insert(tree, arr[i]);
	}
	pp(tree);
	cout << '\n';
	range(tree, 1, 10);
	pp(tree);
}
