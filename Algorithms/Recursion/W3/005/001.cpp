#include<bits/stdc++.h>
using namespace std;
int sumofdig(int x) {
	if (x == 0) {
		return 0;
	}
	return x % 10 + sumofdig(x / 10);
}
int main() {
	cout << sumofdig(124) << '\n';
}
