#include<iostream>
using namespace std;
int countdigits(int x) {
	if (x == 0) {
		return 0;
	} else if (x < 0) {
		return countdigits(x * (-1));
	}
	return 1 + countdigits(x / 10);
}
int main() {
	cout << countdigits(12304) << '\n';
	return 0;
}
