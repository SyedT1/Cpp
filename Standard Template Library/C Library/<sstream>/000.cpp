#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	stringstream l{"a 1 b 2 b 3"};
	string line;
	int sm = 0;
	while (l >> line)
	{
		int n = 0;
		stringstream temp;
		temp << line;
		if (temp >> n)
			sm += n;
	}
	cout << sm << '\n';
}
