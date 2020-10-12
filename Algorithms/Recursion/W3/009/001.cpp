#include<iostream>
using namespace std;
int fac(int x) {
	if (x <= 1) {
		return 1;
	}
	int final_pr =  x * fac(x - 1);
	return final_pr;
}
int main() {
	cout << fac(10) << '\n';
}
