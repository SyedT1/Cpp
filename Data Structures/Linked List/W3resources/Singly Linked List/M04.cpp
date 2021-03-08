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
	void dis(Node *k) {
		if (k == nullptr) {
			return;
		}
		cout << k->value << ' ';
		dis(k->next);
	}
};
int main() {
	int I1[] = {1, 2, 3, 4, 6}, I2[] = {2, 4, 6, 8};
	Node *l1 = nullptr, *l2 = nullptr, *l3 = nullptr;
	for (int i : I1) {
		l1->ins(l1, i);
	}
	for (int i : I2) {
		l2->ins(l2, i);
	}
	l1->dis(l1);
	cout << '\n';
	l2->dis(l2);
	for (Node *L = l1; L; L = L->next) {
		for (Node *R = l2; R; R = R->next) {
			if (L->value == R->value) {
				l3->ins(l3, L->value);
			}
		}
	}
	cout << '\n';
	l3->dis(l3);
}
