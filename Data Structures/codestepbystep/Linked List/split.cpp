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
void add_back(ListNode *&head, ListNode *&k)
{
    if (!head->next)
    {
        head->next = k;
        return;
    }
    add_back(head->next, k);
}
void split(ListNode *&k, ListNode *&head)
{
    if (!k)
    {
        return;
    }
    ListNode *nxt = k->next;
    k->next = nullptr;
    if (!head)
    {
        head = k;
    }
    else
    {

        if (k->value < 0)
        {
            k->next = head;
            head = k;
        }
        else
        {
            add_back(head, k);
        }
    }
    split(nxt, head);
}
void split(ListNode *&k)
{
    ListNode *r = nullptr;
    split(k, r);
    k = r;
}

int main()
{
    ListNode *list = nullptr;
    for (int i : {8, 7, -4, 19, 0, 43, -8, -7, 2})
    {
        ins(list, i);
    }
    split(list);
    cout << list << '\n';
}
