#include <iostream>
#include <queue>
using namespace std;
bool check_palin(queue<int> q, queue<int> &y)
{
    if (q.empty())
    {
        return true;
    }
    int f_val = q.front();
    q.pop();
    bool verify = check_palin(q, y);
    if (!verify)
        return verify;
    else
    {
        if (f_val == y.front())
        {
            y.pop();
            return true;
        }
        else
            return false;
    }
}
bool check_palin(queue<int> q)
{
    return check_palin(q, q);
}
int main()
{
    queue<int> ver;
    for (int i : {1, 2, 2, 2, 1})
    {
        ver.push(i);
    }
    cout << check_palin(ver) << '\n';
}
