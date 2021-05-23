#include <iostream>
using namespace std;
struct ListNode
{
    int value;
    ListNode *next = nullptr;
};
void ins(ListNode *&k, int v)
{
    if (!k)
    {
        k = new ListNode{v, nullptr};
        return;
    }
    ins(k->next, v);
}
ostream &operator<<(ostream &out, ListNode *k)
{
    while (k != nullptr)
    {
        out << k->value << ' ';
        k = k->next;
    }
    return out;
}
void braid(ListNode *curr, ListNode *&k)
{
    if (!curr)
        return;
    braid(curr->next, k);
    ListNode *nxt = k->next;
    k->next = new ListNode{curr->value, nullptr};
    k->next->next = nxt;
    k = nxt;
}
void braid(ListNode *&k)
{
    if (!k)
    {
        return;
    }
    ListNode *temp = k;
    braid(k, k);
    k = temp;
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {10, 20, 30, 40})
    {
        ins(list, i);
    }
    braid(list);
    cout << list << '\n';
}
