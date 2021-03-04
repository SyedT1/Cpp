#include<iostream>
using namespace std;
int norm_gcd(int x, int y) {
	if (x < y) {
		norm_gcd(y, x);
	}
	else if (x == 0 || y == 0) {
		return 0;
	}
	return x % y == 0 ? y : norm_gcd(x % y, y);
}
int main() {
	cout << norm_gcd(10, 5) << char(0x0A);
}
