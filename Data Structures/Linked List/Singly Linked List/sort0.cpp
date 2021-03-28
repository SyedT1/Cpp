#include <iostream>
using namespace std;
struct list
{
    int value;
    list *next = nullptr;
};
void ins(list *&k, int v)
{
    //Deals with numbers lesser than number in the first number of list or nullptr
    list *temp = new list{v, nullptr};
    if (k == nullptr || k->value > v)
    {
        temp->next = k;
        k = temp;
        return;
    }
    list *n = k, *d__ = nullptr;
    while (n->next != nullptr && v >= n->next->value)
    {
        if (v == n->next->value)
        {
            d__ = n->next;
        }
        n = n->next;
    }
    //Deals with duplicate characters
    if (d__)
    {
        list *alt = d__->next;
        d__->next = temp;
        temp->next = alt;
        return;
    }
    //Deals until list reaches null or numbers less than and greater than v
    n->next = temp;
    return;
}
void display_destroy(list *&k)
{
    if (k == nullptr)
    {
        cout << "Values in descending order = \n";
        return;
    }
    display_destroy(k->next);
    cout << k->value << " will be destroyed\n";
    delete k;
}
int main()
{
    int _[] = {-1, -333, 4, 5, 234, 4};
    list *node = nullptr;
    for (int i : _)
    {
        ins(node, i);
    }
    display_destroy(node);
    return 0;
}
