#include<iostream>
using namespace std;
void fibo(int x, int y, int h) {
	if (h <= 10) {
		cout << x << ' ';
		fibo(y, x + y, h + 1);
	}
	return;
}
int main() {
	fibo(0, 1, 0);
}
