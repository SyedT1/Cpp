#include<bits/stdc++.h>
using namespace std;
struct node {
    int x;
    node *next = nullptr;
};
int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    node *p = new node;
    p->x = 3;
    node *q = new node;
    q->x = 4;
    node *r = new node;
    r->x = 5;
    p->next = q;
    q->next = r;
    while (p != nullptr) {
        cout << p->x << '\n';
        p = p->next;
    }
}
