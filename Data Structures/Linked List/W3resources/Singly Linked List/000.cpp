#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;
struct linked_list {
	int val;
	linked_list *next = nullptr;
};
void insert(linked_list *&p, int v) {
	if (!p) {
		p = new linked_list;
		p->val = v;
		return;
	}
	insert(p->next, v);
}
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	IO();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x; cin >> x;
	linked_list *y = nullptr;
	while (x) {
		insert(y, x--);
	}
	while (y) {
		cout << y->val << ' ';
		y = y->next;
	}
}
