#include <iostream>
using namespace std;
struct ListNode
{
    double value;
    ListNode *next = nullptr;
};
void ins(ListNode *&k, double v)
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
void removeAllThreshold(double range, double cut, ListNode *&k)
{
    if (!k->next)
    {
        return;
    }
    removeAllThreshold(range, cut, k->next);
    if (k->next->value >= range - cut && k->next->value <= range + cut)
    {
        ListNode *temp = k->next;
        k->next = k->next->next;
        delete temp;
    }
}
void removeAllThreshold(ListNode *&k, double range, double cut)
{
    if (!k)
    {
        return;
    }
    removeAllThreshold(range, cut, k);
    if (k->value >= (range - cut) && k->value <= (range + cut))
    {
        ListNode *cuboid = k;
        k = k->next;
        delete cuboid;
    }
}
int main()
{
    ListNode *list = nullptr;
    for (double i : {3.0, 9.0, 4.2, 2.1, 3.3, 2.3, 3.4, 4.0, 2.9, 2.7, 3.1, 18.2})
    {
        ins(list, i);
    }
    removeAllThreshold(list, 3.0, 0.3);
    cout << list << '\n';
}
