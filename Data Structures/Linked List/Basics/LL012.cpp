#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("kala.txt", "w", stdout);
	int n; cin >> n;
	node *binary = new node;
	binary = nullptr;
	for (; n; n /= 2) {
		node *temp = new node;
		temp->x = (n % 2 ? 1 : 0);
		temp->next = binary;
		binary = temp;
	}
	while (binary != nullptr) {
		cout << binary->x;
		binary = binary->next;
	}
}
