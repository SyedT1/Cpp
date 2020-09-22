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
void remove(int val, node *&k) {
    if (k == nullptr) {
        cout << "Couldn't find the value to be removed\n";
        return;
    }
    else if (k->x == val) {
        /*Condition#1
         where the searched node's left and right node is null
         To do:
         Just Nullify it
         */
        if ((!k->lft) && (!k->rgt)) {
            k = nullptr;
            //cout << "Condition 1 applied \n";
            return;
        }
        /*Condition#2
        where the searched node's left node is not nullptr but right is
        To do:
        X = X-lft;
        */
        else if (k->rgt == nullptr && k->lft != nullptr) {
            k = k->lft;
            //cout << "Condition 2 applied \n";
            return;
        }
        /*Condition#3
        where the searched node's left node is nullptr but right is not nullptr
        To do:
        X = X-rgt
        */
        else if (k->rgt != nullptr && k->lft == nullptr) {
            //cout << "Condition 3 applied\n";
            k = k->rgt;
            return;
        }
        /*Condition#4
        where the searched node's left node and right node is not null
        To do:

        */
    }
    else if (val > k->x) {
        remove(val, k->rgt);
    } else {
        remove(val, k->lft);
    }
}
void printTree(node *s) {
    if (!s) {
        return;
    }
    printTree(s->lft);
    cout << s->x << ' ';
    printTree(s->rgt);
}
int main() {
    freopen("out.txt", "w", stdout);
    node *k = nullptr;
    int arr[] = { -1, 2, 13, -5, 6, 7};
    for (int i = 0; i < 6; i++) {
        insert(k, arr[i]);
    }
    remove(7, k);
    printTree(k);
    return 0;
}
