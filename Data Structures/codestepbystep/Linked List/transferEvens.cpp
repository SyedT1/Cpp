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
    while (k)
    {
        out << k->value << ' ';
        k = k->next;
    }
    return out;
}
void adjoin(ListNode *&k, ListNode *&q)
{
    if (!k)
    {
        k = q;
        return;
    }
    else if (!k->next)
    {
        k->next = q;
        return;
    }
    adjoin(k->next, q);
}
void transferEvens(ListNode *&p, ListNode *&even, ListNode *&odd, int x)
{
    if (!p)
    {
        return;
    }
    ListNode *nxt = p->next;
    p->next = nullptr;
    if (x % 2)
    {
        adjoin(odd, p);
    }
    else
        adjoin(even, p);
    transferEvens(nxt, even, odd, x + 1);
}
ListNode *transferEvens(ListNode *&p)
{
    if (!p || !p->next)
    {
        if (!p->next)
        {
            ListNode *temp = p;
            p = nullptr;
            return temp;
        }
        return nullptr;
    }
    ListNode *even_list = nullptr, *odd_list = nullptr;
    transferEvens(p, even_list, odd_list,1);
    p = odd_list;
    return even_list;
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {1, 2, 3, 4, 5})
    {
        ins(list, i);
    }
    ListNode *even_list = transferEvens(list);
    cout << even_list << endl;
    cout << list << endl;
}
