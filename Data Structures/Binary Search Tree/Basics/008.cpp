#include<bits/stdc++.h>
using namespace std;
struct ll {
	int data;
	ll *left = nullptr, *right = nullptr;
};
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void path(int *arr, int index) {
	for (int i = 0; i < index; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
void traverse(ll *k, int *arr, int index) {
	if (!k) {
		return;
	}
	if (index) {
		arr = (int *)realloc(arr, (index + 1) * sizeof(int));
	} else {
		arr = (int *)malloc(sizeof(int));
	}
	arr[index++] = k->data;
	if (k->right == nullptr && k->left == nullptr) {
		path(arr, index);
	}
	traverse(k->left, arr, index);
	traverse(k->right, arr, index);
}
void insert(ll *&k, int val) {
	if (!k) {
		k = new ll;
		k->data = val;
		return;
	}
	insert(val > k->data ? k->right : k->left, val);
}
int main() {
	IO();
	ll *tot = nullptr;
	int ar[] = {2, 1, -1, -3, 0, 4, 3, 6, 5, 10}, h = 0, *use = nullptr;
	for (int i = 0; i < 10; i++) {
		insert(tot, ar[i]);
	}
	traverse(tot, use, h);
}
