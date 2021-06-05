#include <iostream>
using namespace std;
struct product
{
    int value;
    string name;
    product()
    {
        value = 0;
        name = "no name";
    }
    product(int num)
    {
        value = num;
    }
    product(string n)
    {
        name = n;
    }
    product(int num, string x)
    {
        value = num;
        name = x;
    }
    ~product()
    {
        cout << "Deleted\n";
    }
};
int main()
{
    product *coloq = new product(12, "product");
    cout << coloq->name << '\n'
         << coloq->value << '\n';
    delete coloq;
}
