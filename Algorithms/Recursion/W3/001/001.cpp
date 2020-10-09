#include<bits/stdc++.h>
using namespace std;
int printsum(int x) {
	if (x >= 1) {
		return x + printsum(x - 1);
	}
	cout << "sum of the numbers from 1 to 50  = ";
	return 0;
}
int main() {
	cout << printsum(50) << '\n';
}
