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
void call_helper(int times, int val, ListNode *&l)
{
    if (times <= 0)
        return;
    l = new ListNode{val / times, l};
    call_helper(times - 1, (val / times) * (times - 1), l);
}
void expand(int v, ListNode *&a, ListNode *&l)
{
    if (!a)
    {
        return;
    }
    expand(v, a->next, l);
    call_helper(v, a->value, l);
    delete a;
}
void expand(ListNode *&k, int v)
{
    ListNode *div = nullptr;
    expand(v, k, div);
    k = div;
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {12, 34, -8, 3, 46})
    {
        ins(list, i);
    }
    expand(list, 3);
    cout << list << endl;
}
