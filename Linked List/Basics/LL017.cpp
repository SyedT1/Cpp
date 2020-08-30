#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	node *p = new node, *start_p;
	start_p = p;
	for (int i = 0; i < n; i++) {
		if (i) {p->next = new node; p = p->next;}
		cin >> p->x;
	}
	node *del = start_p;
	int delete_nth_node; cin >> delete_nth_node;
	if (delete_nth_node < 1 || delete_nth_node > n) {
		cout << "Invalid deletion request\n";
		return 0;
	}
	if (delete_nth_node == 1) {
		node *temp = del->next;
		delete del;
		for (del = temp; del != nullptr; del = del->next) {
			cout << del->x << ' ';
		}
	}
	else if (delete_nth_node == n) {
		node *temp = del, *ly;
		for (int i = 1; i < delete_nth_node - 1; i++) {
			del = del->next;
		}
		ly = del->next;
		delete ly;
		del->next = nullptr;
		while (temp != nullptr) {
			cout << temp->x << '\n';
			temp = temp->next;
		}
	}
	else {
		node *temp = del, *ly;
		for (int i = 1; i <= delete_nth_node - 2; i++) {
			del = del->next;
		}
		node *deleted = del->next;
		del->next = del->next->next;
		delete deleted;
		while (temp != nullptr) {
			cout << temp->x << '\n';
			temp = temp->next;
		}
	}
}
