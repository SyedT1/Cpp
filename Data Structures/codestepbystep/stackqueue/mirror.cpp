#include <iostream>
#include <queue>
using namespace std;
void push_end(queue<string> &r, queue<string> f)
{
    if (f.empty())
    {
        return;
    }
    string y = f.front();
    f.pop();
    push_end(r, f);
    r.push(y);
}
int main()
{
    string a[] = {"1", "2", "3"};
    queue<string> row;
    for (string i : a)
        row.push(i);
    push_end(row, row);
    for (queue<string> i = row; !i.empty(); i.pop())
    {
        cout << i.front() << ' ';
    }
}
