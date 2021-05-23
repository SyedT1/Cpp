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
void display(ListNode *k)
{
    if (!k)
        return;
    cout << k->value << ' ';
    display(k->next);
}
void stutter(ListNode *&k)
{
    if (!k)
    {
        return;
    }
    ListNode *nxt = k->next;
    k->next = new ListNode{k->value, nxt};
    stutter(nxt);
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {1, 8, 19, 4, 5, 17})
    {
        ins(list, i);
    }
    stutter(list);
    while (list)
    {
        cout << list->value << ' ';
        list = list->next;
    }
}
