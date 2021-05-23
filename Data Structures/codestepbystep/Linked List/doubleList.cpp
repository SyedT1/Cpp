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
void doubleList(ListNode *k, ListNode *&o)
{
    if (!k)
    {
        return;
    }
    doubleList(k->next, o);
    o = new ListNode{k->value, o};
}
void doubleList(ListNode *&k)
{
    doubleList(k, k);
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {1, 8, 19, 4, 5, 17})
    {
        ins(list, i);
    }
    doubleList(list);
    cout << list << '\n';
}
