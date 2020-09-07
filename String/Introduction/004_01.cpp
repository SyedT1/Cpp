#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char c[6] = "45678";
	c[3] = '\0';
	cout << c << '\n';
	// Prints 456 as c[3] contains terminating character '\0'
}
