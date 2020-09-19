#include<bits/stdc++.h>
using namespace std;
struct myQ {
    int x;
    myQ *next = nullptr;
};
void push(myQ *&p, myQ *&t, int val) {
    if (p == nullptr) {
        p = new myQ;
        p->x = val;
        t = p;
        return;
    }
    p->next = new myQ;
    p = p->next;
    p->x = val;
}
void peek(myQ *q) {
    if (q == nullptr) {
        cout << "Queue is empty. Can't peek\n";
        return;
    }
    cout << q->x << '\n';
}
void pop(myQ *&t, myQ *&s) {
    if (s == nullptr) {
        cout << "Queue is empty. Can't pop\n";
        return;
    }
    myQ *temp = s;
    s = s->next;
    delete temp;
    if (s == nullptr) {
        t = s;
    }
}
bool isEmpty(myQ *r) {
    return !r;
}
int main() {
    freopen("op.txt", "w", stdout);
    myQ *to = nullptr, *from;
    for (int i = 0; i < 10; i++) {
        push(to, from, i * i);
    }
    while (!isEmpty(from)) {
        peek(from);
        pop(to, from);
    }
    return 0;
}
