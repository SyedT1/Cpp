#include<iostream>
using namespace std;
void printTriangular(int x) {
	static int sm = 0;
	if (x == 0) {
		return;
	}
	printTriangular(x - 1);
	sm += x;
	cout << sm << (x == 10 ? '\n' : ',');
}
int main() {
	printTriangular(10);
}
