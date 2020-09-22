#include<bits/stdc++.h>
using namespace std;
struct node {
    int x;
    node *lft = nullptr, *rgt = nullptr;
};
void insert(node *&k, int val) {
    if (!k) {
    /*
     If it's nullptr then allocated memory from heap and assign value
     */
        k = new node;
        k->x = val;
    }
    else if (val > k->x) {
    /*
     If value is larger than x then put it on the right node i.e
     Take x = 25
     
           6
       4       10
     1  5    9    11
     
     i.First the value will check if the root(6) is nullptr(false) then it will move towards the right subtree(10) because 25>6
    ii.the value will check if the root of the curr subtree(10) is nullptr(false) then it will move towards the right subtree of 10(11) because 25>10
    iii.the value will check if the root of the curr subtree(11) is nullptr(false) then it will move towards the right subtree of 11(nullptr) because 25>11
    iv. the value will check if the root of the curr subtree(nullptr) is nullptr(true), then it will create new node and assign value to it making its left-right
    nodes nullptr for future values to be assigned
    
    After Assignment of value(s)
        6
    4      10
  1  5   9    11
                25
     
    */
        insert(k->rgt, val);
    } else {
        insert(k->lft, val);
    }
}
void printdata(node *p) {
    if (p == nullptr) {
        return;
    }
    printdata(p->lft);
    cout << p->x << ' ';
    printdata(p->rgt);
}
int main() {
    freopen("out.txt", "w", stdout);
    node *k = nullptr;
    int arr[] = { -1, 2, 3, -5, 6, 7};
    for (int i = 0; i < 6; i++) {
        insert(k, arr[i]);
    }
    printdata(k);
    return 0;
}
