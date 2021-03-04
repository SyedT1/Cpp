#include<iostream>
using namespace std;
int pow(int m, int n) {
	return n == 0 ? 1 : (n & 1 ? m : 1) * pow(m * m, n >> 1);
}
int main() {
	int num = 2, pw = 5; //cin>>num>>pw;
	cout << pow(num, pw) << '\n';
}
