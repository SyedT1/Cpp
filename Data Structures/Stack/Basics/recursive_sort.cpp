#include <iostream>
#include <stack>
using namespace std;
void sort(int up, stack<int> &p)
{
    if (p.empty() || up > p.top())
    {
        p.push(up);
        return;
    }
    int temp = p.top();
    p.pop();
    sort(up, p);
    p.push(temp);
}
void sort(stack<int> &k)
{
    if (k.size())
    {
        int temp = k.top();
        k.pop();
        sort(k);
        sort(temp, k);
    }
}
ostream &operator<<(ostream &out, stack<int> p)
{
    while (!p.empty())
    {
        out << p.top() << ' ';
        p.pop();
    }
    return out;
}
int main()
{
    int _[] = {1, 2, 33333, 444, 55, -5555, 0, 4333, 4};
    stack<int> yue;
    for (int i : _)
        yue.push(i);
    sort(yue);
    cout << yue << '\n';
}
