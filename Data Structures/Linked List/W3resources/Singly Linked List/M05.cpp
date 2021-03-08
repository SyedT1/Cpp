#include<iostream>
using namespace std;
class Node {
public:
	int value;
	Node *next = nullptr;
	void ins(Node *&k, int v) {
		if (k == nullptr) {
			k = new Node{v, nullptr};
			return;
		}
		ins(k->next, v);
	}
};
int main() {
	Node *l = nullptr, *r = nullptr;
	int A[] = {3, 6, 9, 12, 13}, B[] = {14, 17, 20, 23, 24};
	for (int i : A) {
		l->ins(l, i);
	}
	for (int i : B) {
		r->ins(r, i);
	}
	Node *to_join = nullptr;
	for (Node *L = l; L; L = L->next) {
		to_join = L;
	}
	to_join->next = r->next;
	for (Node *L = l; L; L = L->next) {
		for (Node *R = r; R; R = R->next) {
			if (L->next == R->next) {
				cout << L->next->value << '\n';
				return 0;
			}
		}
	}
}
