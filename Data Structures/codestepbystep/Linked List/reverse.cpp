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
void reverse(ListNode *&curr, ListNode *&linker)
{
    if (!curr)
    {
        return;
    }
    ListNode *nxt = curr->next;
    curr->next = linker;
    linker = curr;
    reverse(nxt, linker);
}
void reverse(ListNode *&k)
{
    ListNode *head = nullptr;
    reverse(k, head);
    k = head;
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {1, 2, 3, 4, 5})
    {
        ins(list, i);
    }
    reverse(list);
    cout << list << '\n';
}
