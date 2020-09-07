#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char c[6] = "45678";
	int p = (sizeof(c) / sizeof(c[0])) - 2;
	for (int i = 0; c[i] != '\0'; i++) {
		cout << &c[i] << '\n';
		c[p--] = '\0';
		/*
		 Reducing the string character by character from both sides
		 */
	}
}
