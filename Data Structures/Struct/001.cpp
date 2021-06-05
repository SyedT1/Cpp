#include <iostream>
#include <algorithm>
using namespace std;
struct car
{
    int price, speed;
    car()
    {
        price = speed = 0;
    }
    car(int m, int n)
    {
        price = m;
        speed = n;
    }
};
bool compare(car A, car B)
{
    return A.price / double(A.speed) > B.price / double(B.speed);
}
int main()
{
    car calalogue[] = {{100, 3}, {100, 100}, {1, 2}, {4, 4}, {3, 2}};
    // I want the car with the fastest speed
    // Two cars with same speed having different prices(low first then high)
    // Two cars with different speed (hight speed favored most)
    sort(calalogue, calalogue + 5, compare);
    for (auto i : calalogue)
        cout << i.price << ' ' << i.speed << '\n';
}
