#include<iostream>
#include<algorithm>
using namespace std;
class Node {
public:
	int value;
	Node *next = nullptr;
	void ins(Node *&k, int v) {
		Node *tmp = new Node{v, k};
		k = tmp;
		return;
	}
};
int main() {
	Node *l = nullptr;
	int ar[] = {12, 12, 11, 10, 11};
	reverse(ar, ar + (sizeof(ar) / sizeof(int)));
	for (int i : ar) {
		l->ins(l, i);
	}
	while (true) {
		if (l->next == nullptr || l == nullptr) {
			break;
		}
		bool skip = true;
		for (Node *t = l; t != nullptr; t = t->next) {
			for (Node *lo = t; lo->next != nullptr; lo = lo->next) {
				if (t->value == lo->next->value) {
					Node *tmp = lo->next;
					lo->next = lo->next->next;
					delete tmp;
					skip = false;
					break;
				}
			}
			if (skip == false) {
				break;
			}
		}
		if (skip == true) {
			break;
		}
	}
	while (l) {
		cout << l->value << ' ';
		l = l->next;
	}
}
