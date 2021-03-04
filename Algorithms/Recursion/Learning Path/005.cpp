#include<iostream>
using namespace std;
int pow(int m, int n, int mod) {
	int prod = 1;
	while (n > 0) {
		if (n & 1) {
			prod = (prod * m) % mod;
		}
		m = (m * m) % mod;
		n = n >> 1;
	}
	return prod % mod;
}
int main() {
	int num = 2, pw = 10, mod = 10000; //cin>>num>>pw>>mod;
	cout << pow(num, pw, mod) << '\n';
}
