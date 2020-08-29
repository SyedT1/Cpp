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
	node *beads = new node;
	node *start = beads;
	for (int i = 1, p; i <= n; i++) {
		cin >> p;
		if (i == 1) {
			beads->x = p;
			continue;
		}
		node *temp = new node;
		temp->x = p;
		beads->next = temp;
		beads = beads->next;
	}
	//Reversing the list
	node *rev = new node;
	rev = nullptr;
	while (start != nullptr) {
		node *tem = new node;
		tem->x = start->x;
		tem->next = rev;
		rev = tem;
		start = start->next;
	}
	while (rev != nullptr) {
		cout << rev->x << ' ';
		rev = rev->next;
	}
}
