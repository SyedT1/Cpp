#include<iostream>
using namespace std;
int sum(int x) {
	return (x ? x + sum(x - 1) : 0);
}
int main() {
	int n ;cin>>n;
	cout << sum(n) << '\n';
}
