ude<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("kala.txt", "w", stdout);
	int n, e = 0; cin >> n;
	node *p = new node, *start, *forward;
	start = p, forward = p;
	for (int i = 1, input; i <= n; i++) {
		cin >> input;
		if (input % 2) {
			node *temp = new node;
			temp->x = input;
			temp->next = p;
			p = temp;
		} else {
			if (e) {
				node *temp = new node;
				temp->x = input;
				forward->next = temp;
				forward = forward->next;
			} else {
				forward->x = input;
			}
			e++;
		}
	}
	while (p != nullptr) {
		cout << p->x << ' ';
		p = p->next;
	}
}
