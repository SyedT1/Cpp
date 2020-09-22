#include<bits/stdc++.h>
using namespace std;
struct dll {
	int x;
	dll *prev = nullptr, *next = nullptr;
};
void insert(dll *&k, int val) {
	if (!k) {
		k = new dll;
		k->x = val;
		return;
	}
	else if (!k->next) {
		k->next = new dll;
		k->next->x = val;
		k->next->prev = k;
		return;
	}
	insert(k->next, val);
}
void printData(dll *k) {
	if (k == nullptr) {
		return;
	}
	cout << k->x << ' ';
	printData(k->next);
}
void reverseData(dll *q) {
	while (q->next) {
		q = q->next;
	}
	cout << '\n';
	while (q) {
		cout << q->x << ' ';
		q = q->prev;
	}
}
int main() {
	freopen("output.txt", "w", stdout);
	dll *y = nullptr;
	for (int i = 0; i < 4; i++) {
		insert(y, i * i);
	}
	printData(y);
	reverseData(y);
	return 0;
}
