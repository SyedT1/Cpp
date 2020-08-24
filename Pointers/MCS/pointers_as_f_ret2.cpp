#include<bits/stdc++.h>
using namespace std;
int* factorial(int *x, int *y) {
	int *store = new int(1);
	/*
	 Step#2
	 int *store = (int *)malloc(sizeof(int));
	 //Memory allocated from heap wont get allocated unless we deallocate it ourselves
	  if store was a local variable to the function
	  it would deallocate automatically
	*/
	while ((*x) >= 1) {
		(*store) *= ((*x)--);
	}
	return store;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("pol.txt", "w", stdout);
	int a, b; cin >> a;
	int *u = factorial(&a, &b);
	cout << (*u) << '\n';
}
