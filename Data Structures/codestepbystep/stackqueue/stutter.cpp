#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void stutter(int v, queue<int> &q, queue<int> &backup)
{
    if (q.empty())
    {
        q.push(v);
        q.push(v);
        return;
    }
    backup.push(q.front());
    q.pop();
    stutter(v, q, backup);
    q.push(backup.front());
    backup.pop();
}
void stutter(queue<int> &p)
{
    if (p.empty())
        return;
    int front_val = p.front();
    p.pop();
    stutter(p);
    queue<int> backup;
    stutter(front_val, p, backup);
}
int main()
{
    queue<int> p;
    for (int i : {1, 7, 2, 3})
    {
        p.push(i);
    }
    stutter(p);
    for (queue<int> i = p; !i.empty(); i.pop())
    {
        cout << i.front() << ' ';
    }
}
