#include <iostream>
using namespace std;
class dl
{
public:
    int value;
    dl *prev = nullptr, *next = nullptr;
};
void ins(dl *&k, int m)
{
    if (k == nullptr)
    {
        k = new dl{m, nullptr};
        return;
    }
    else if (k->next == nullptr)
    {
        k->next = new dl{m, k, nullptr};
        return;
    }
    ins(k->next, m);
}
void print_next(dl *k)
{
    if (k == nullptr)
    {
        return;
    }
    cout << k->value << ' ';
    print_next(k->next);
}
void print_prev(dl *k)
{
    if (k == nullptr)
    {
        return;
    }
    cout << k->value << ' ';
    print_prev(k->prev);
}
int main()
{
    dl *boil = nullptr;
    int a[] = {1, 2, 3, 4, 55, 66, 77};
    for (int i : a)
    {
        ins(boil, i);
    }
    //
    cout << "Traversing next  = ";
    while (boil)
    {
        cout << boil->value << ' ';
        if (boil->next == nullptr)
        {
            break;
        }
        boil = boil->next;
    }
    cout << endl
         << "Traversing back = ";
    while (boil)
    {
        cout << boil->value << ' ';
        if (boil->prev == nullptr)
        {
            break;
        }
        boil = boil->prev;
    }
}
