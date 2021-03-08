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
		if (!k) {
			return;
		}
		cout << k->value << ' ';
		dis(k->next);
	}
};
void MoveFront(Node *&k) {
	if (k == nullptr || k->next == nullptr) {
		cout << "Can't move \n";
		return;
	}
	Node *left_to_be_moved = nullptr, *to_be_moved = nullptr;
	for (Node *L = k; L->next; L = L->next) {
		left_to_be_moved = L;
		to_be_moved = L->next;
	}
	to_be_moved->next = k;
	k = to_be_moved;
	left_to_be_moved->next = nullptr;
	return;
}
int main() {
	Node *l = nullptr;
	int A[] = {1, 2, 3, 4, 5};
	for (int i : A) {
		l->ins(l, i);
	}
	l->dis(l);
	cout << '\n';
	MoveFront(l);
	l->dis(l);
	cout << '\n';
	return 0;
}
