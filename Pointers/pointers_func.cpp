#include<bits/stdc++.h>
using namespace std;
int* factorial(int *x, int *y) {
	int store = 1;
	while ((*x) >= 1) {
		store *= ((*x)--);
	}
	*y = store;
	// returning &store would return error because store is a local variable to function factorial
	return y;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("pol.txt", "w", stdout);
	int a, b; cin >> a;
	int *u = factorial(&a, &b);
	cout << (*u) << '\n';
}
