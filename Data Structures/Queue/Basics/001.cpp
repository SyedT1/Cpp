#include<bits/stdc++.h>
using namespace std;
struct myQueue {
    int numEl = 5;
    int *num = new int[numEl];
    int head = 0;
    int tail = 0;
    int numLeft = 0;
};
void enlarge(myQueue *&r, int t) {
    r->num = (int *)realloc(r->num, t * sizeof(int));
}
void enqueue(myQueue *&r, int x)  {
    if (r->tail == r->numEl) {
        r->numEl = r->numEl * 2;
        enlarge(r, r->numEl);
    }
    r->num[r->tail] = x;
    r->tail = r->tail + 1;
    r->numLeft = r->tail - r->head;
}
int dequeue(myQueue *&p) {
    int pnum = p->num[p->head];
    p->head = p->head + 1;
    p->numLeft = p->tail - p->head;
    return pnum;
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    myQueue *pack = new myQueue;
    enqueue(pack, 1);
    enqueue(pack, 4);
    enqueue(pack, 9);
    enqueue(pack, 16);
    enqueue(pack, 25);
    enqueue(pack, 36);
    enqueue(pack, 49);
    enqueue(pack, 64);
    cout << "Dequeued = \n";
    cout << dequeue(pack) << '\n';
    cout << dequeue(pack) << '\n';
    cout << "Number of elements left =  " << pack->numLeft << '\n';
    return 0;
}
