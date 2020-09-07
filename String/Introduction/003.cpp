#include<bits/stdc++.h>
using namespace std;
void printchar(char a[]) {
	cout << a << '\n';
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char c[10] = "lessons";
	for (int i = 0; c[i] != '\0'; i++) {
		printchar(&c[i]);
	}
	return 0;
}
