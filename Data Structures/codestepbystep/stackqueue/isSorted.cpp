#include <iostream>
#include <stack>
using namespace std;
bool isSorted(stack<int> p)
{
    if (p.empty())
    {
        return true;
    }
    int temp = p.top();
    p.pop();
    bool eval = isSorted(p);
    if (!p.empty())
    {
        if (!eval)
            return eval;
        else
        {
            return p.top() >= temp;
        }
    }
    else
        return true;
}
int main()
{
    stack<int> sack;
    for (int i : {20, 20, 17, 11, 8, 8, 3, 2})
    {
        sack.push(i);
    }
    cout << isSorted(sack) << '\n';
}
