#include<iostream>
using namespace std;
int binary(int x) {
	if (x <= 1) {
		return x;
	}
	return binary(x / 2) * 10 + (x % 2);
}
int main() {
	cout << binary(8) << '\n';
}
