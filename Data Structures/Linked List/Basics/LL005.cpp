#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("kala.txt", "w", stdout);
	node *list = new node;
	node *start = list;
	int num; cin >> num;
	for (int i = 1, p; i <= num; i++) {
		cin >> p;
		if (i == 1) {
			list->x = p;
			continue;
		}
		node *tmp = new node;
		tmp->x = p;
		list->next = tmp;
		list = list->next;
	}
	while (start != nullptr) {
		cout << start->x << '\n';
		start = start->next;
	}
	return 0;
}
