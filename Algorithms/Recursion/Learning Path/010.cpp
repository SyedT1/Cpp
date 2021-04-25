#include <iostream>
using namespace std;
void triangle(int x)
{
    if (x == 0)
        return;
    else if (x < 0)
    {
        if (x == -1)
        {
            cout << "*" << endl;
            return;
        }
        else
        {
            cout << "*";
            triangle(x + 1);
        }
    }
    else
    {
        int y = x;
        triangle(x - 1);
        int k = -y;
        triangle(k);
    }
}
int main()
{
    triangle(5);
}
