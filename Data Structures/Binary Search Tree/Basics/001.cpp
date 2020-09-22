#include<bits/stdc++.h>
using namespace std;
struct node {
    int x;
    node *lft = nullptr, *rgt = nullptr;
};
void insert(node *&k, int val) {
    if (!k) {
        k = new node;
        k->x = val;
    }
    else if (val > k->x) {
        insert(k->rgt, val);
    } else {
        insert(k->lft, val);
    }
}
void findval(int val, node *k) {
    if (!k) {
        cout << "Not found\n";
        return;
    }
    else if (k->x == val) {
        cout << "Found \n";
        return;
    }
    else if (val > k->x) {
        findval(val, k->rgt);
    } else {
        findval(val, k->lft);
    }
}
int main() {
    freopen("out.txt", "w", stdout);
    node *k = nullptr;
    int arr[] = { -1, 2, 13, -5, 6, 7};
    for (int i = 0; i < 6; i++) {
        insert(k, arr[i]);
    }
    findval(13, k);
    return 0;
}
