#include<iostream>
using namespace std;
int gcd(int x, int y) {
	if (x < y) {
		return gcd(y, x);
	}
	return x % y == 0 ? y : gcd(y, x % y);
}
int main() {
	freopen("output.txt", "w", stdout);
	cout << gcd(1000, 4) << '\n';
}
