#include <iostream>
#include <stack>
using namespace std;
void splitStack(int v, stack<int> &p)
{
    if (v < 0)
    {
        if (p.empty())
        {
            p.push(v);
            return;
        }
    }
    else
    {
        if (p.empty() || p.top() < 0)
        {
            p.push(v);
            return;
        }
    }
    int temp = p.top();
    p.pop();
    splitStack(v, p);
    p.push(temp);
}
void splitStack(stack<int> &p)
{
    if (p.empty())
        return;
    int temp = p.top();
    p.pop();
    splitStack(p);
    splitStack(temp, p);
}
int main()
{
    stack<int> fog;
    for (int i : {4, 0, -1, 5, -6, -3, 2, 7})
    {
        fog.push(i);
    }
    splitStack(fog);
    while (!fog.empty())
    {
        cout << fog.top() << ' ';
        fog.pop();
    }
}
