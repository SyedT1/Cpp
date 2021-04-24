#include <iostream>
#include <stack>
using namespace std;
void binary(int x)
{
    if (!x)
        return;
    int v = x % 2;
    binary(x / 2);
    cout << v;
}
int main()
{
    binary(4);
}
