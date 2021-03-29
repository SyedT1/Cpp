#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
class Node
{
public:
    int value;
    Node *next = nullptr;
    void dis()
    {
        if (!next)
        {
            cout << value;
            return;
        }
        cout << value << ' ';
        next->dis();
    }
};
void ins(Node *&k, int v)
{
    if (k == nullptr)
    {
        k = new Node{v, nullptr};
        return;
    }
    ins(k->next, v);
}
int main()
{
    Node *list = nullptr;
    int __[] = {-122, 33, 4, -44, -555, 0, 2};
    for (int i : __)
    {
        ins(list, i);
    }
    int ss = sizeof(__) / sizeof(int);
    pair<int, Node *> *connect = new pair<int, Node *>[ss];
    for (int i = 0, tot = ss; i < tot; i++)
    {
        connect[i].first = list->value;
        connect[i].second = list;
        list = list->next;
    }
    for (int i = 0; i < ss; i++)
    {
        cout << connect[i].first << ' ';
    }
    cout << '\n';
    sort(connect, connect + ss);
    for (int i = 0; i < ss - 1; i++)
    {
        (connect[i].second)->next = connect[i + 1].second;
    }
    connect[ss - 1].second->next = nullptr;
    connect[0].second->dis();
    delete[] connect;
}
