#include<iostream>
using namespace std;
string binary(int x) {
	if (x <= 1) {
		return to_string(x);
	}
	return binary(x / 2) + to_string(x % 2);
}
int main() {
	cout << binary(8) << '\n';
}
