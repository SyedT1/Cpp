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
bool isSorted(ListNode *l)
{
    if (!l || !l->next)
    {
        return true;
    }
    bool compare = isSorted(l->next);
    if (compare == false)
    {
        return compare;
    }
    else
        return l->value < l->next->value;
}
int main()
{
    string out[] = {"No","Yes"};
    ListNode *list = nullptr;
    for (int i : {1, 2, 3, 4, 5})
    {
        ins(list, i);
    }
    //display(list);
    cout << out[isSorted(list)] << '\n';
}
