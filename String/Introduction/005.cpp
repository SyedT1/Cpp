#include<bits/stdc++.h>
using namespace std;
int findsizeof(char z[]) {
	int i = 0;
	while (z[i] != '\0') {
		i++;
	}
	return i;
}
bool pal(char p[]) {
	int n = findsizeof(p);
	if (n <= 1) {
		return true;
	}
	else {
		if (n == 2) {
			return p[0] == p[1] ? true : false;
		} else {
			if (p[0] != p[n - 1]) {
				return false;
			}
		}
	}
	p[n - 1] = '\0';
	return pal(&p[1]);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char c[] = "445";
	bool checkpalindrome = pal(c);
	cout << (checkpalindrome ? "Yes" : "No") << '\n';
	return 0;
}
