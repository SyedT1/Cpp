#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	node *next = nullptr;
	node *prev = nullptr;
};
int main() {
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int n, one_f = 0, one_b = 0; cin >> n;
	node *skip = new node, *in;
	in = skip;
	for (int i = 0; i < n; i++) {
		if (one_f > 0 || one_b > 0) {
			if (i & 1 && one_b > 0) {
				skip->prev = new node;
				skip->prev->next = skip;
				skip = skip->prev;
			} else if (i % 2 == 0 && one_f > 0) {
				in->next = new node;
				in->next->prev = in;
				in = in->next;
			}
		}
		if (i & 1) {
			skip->x = i;
			one_b++;
		} else {
			in->x = i;
			one_f++;
		}
	}
	cout << "Printing forward = \n";
	for (; skip != nullptr; skip = skip->next) {
		cout << skip->x << ' ';
	}
	cout << "\nPrinting backward = \n";
	for (; in != nullptr; in = in->prev) {
		cout << in->x << ' ';
	}
}
