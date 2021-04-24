#include <iostream>
#include <stack>
using namespace std;
ostream &operator<<(ostream &out, stack<int> p)
{
    while (!p.empty())
    {
        out << p.top() << ' ';
        p.pop();
    }
    return out;
}
void sort(stack<int> &k, int v)
{
    if (k.empty())
    {
        k.push(v);
        return;
    }
    int in = k.top();
    k.pop();
    sort(k, v);
    k.push(in);
}
void sort(stack<int> &k)
{
    stack<int> sorted;
    while (true)
    {
        if (k.size() > 1)
        {
            int mx = k.top();
            k.pop();
            stack<int> fort;
            while (!k.empty())
            {
                if (mx < k.top())
                {
                    fort.push(mx);
                    mx = k.top();
                }
                else
                {
                    fort.push(k.top());
                }
                k.pop();
            }
            k = fort;
            sort(sorted, mx);
        }
        else
        {
            sort(sorted, k.top());
            k.pop();
            break;
        }
    }
    k = sorted;
}
int main()
{
    stack<int> R;
    int a[] = {-1, 4, -111, 5};
    for (int i : a)
        R.push(i);
    sort(R);
    cout << R << '\n';
}
