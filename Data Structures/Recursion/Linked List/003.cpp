#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
void insert(node *&k, int val) {
	if (!k) {
		k = new node;
		k->x = val;
		return;
	}
	insert(k->next, val);
}
void remove(node *&k, int val) {
	if (k == nullptr) {
		return;
	}
	else if (k->x == val) {
		node *temp = k;
		k = k->next;
		delete temp;
		return;
	}
	remove(k->next, val);
}
void printval(node *k) {
	if (!k) {
		return;
	}
	cout << k->x << ' ';
	printval(k->next);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	node *puthi = nullptr;
	for (int i = 0, take; i < 5; i++) {
		cin >> take;
		insert(puthi, take);
	}
	remove(puthi, 3);
	printval(puthi);
	return 0;
}
