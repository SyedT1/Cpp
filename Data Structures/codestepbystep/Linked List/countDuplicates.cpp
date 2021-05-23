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
int countDuplicates(ListNode *k)
{
    if (!k || !k->next)
        return 0;
    int comparator = countDuplicates(k->next);
    return comparator + (k->value == k->next->value);
}
int main()
{
    ListNode *list = nullptr;
    for (int i : {1, 1, 1, 3, 3, 6, 9, 15, 15, 23, 23, 23, 40, 40})
    {
        ins(list, i);
    }
    cout << countDuplicates(list) << '\n';
}
