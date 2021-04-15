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
void removeNode(dl *&k, int v)
{
    if (k == nullptr)
    {
        return;
    }
    while (k != nullptr && k->value % v == 0)
    {
        dl *rev = k;
        k = k->next;
        if (k != nullptr)
        {
            k->prev = nullptr;
        }
        delete rev;
    }
    dl *curr = k;
    if (curr == nullptr)
    {
        return;
    }
    while (k->next != nullptr)
    {
        if (k->next->value % v == 0)
        {
            dl *rev = k->next;
            k->next = k->next->next;
            if (k->next != nullptr)
            {
                k->next->prev = k;
            }
            delete rev;
        }
        else
        {
            k = k->next;
        }
    }
    k = curr;
}
void print(dl *fill)
{
    if (fill == nullptr)
    {
        cout << "Its empty\n";
        return;
    }
    while (fill)
    {
        cout << fill->value << ' ';
        if (fill->next == nullptr)
            break;
        fill = fill->next;
    }
    cout << endl;
    while (fill)
    {
        cout << fill->value << ' ';
        if (fill->prev == nullptr)
            break;
        fill = fill->prev;
    }
}
int main()
{
    dl *boil = nullptr;
    int a[] = {10, 10, 10, 10};
    for (int i : a)
    {
        ins(boil, i);
    }
    print(boil);
    cout << '\n';
    removeNode(boil, 10);
    print(boil);
}
