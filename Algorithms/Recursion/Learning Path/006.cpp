#include<iostream>
using namespace std;
int sum(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n % 2 == 1) {
		return n + sum(n - 1);
	}
	int l = sum(n - 1);
	return l + n;
}
int main() {
	int n = 10;
	cout << sum(n) << '\n';
}
