#include<bits/stdc++.h>
using namespace std;
void pal(string p) {
	int n = p.length();
	if (n <= 1) {
		cout << "Yes\n";
		return;
	}
	else {
		if (n == 2) {
			cout << ( p[0] == p[1] ? "Yes" : "No") << '\n';
			return;
		} else {
			if (p[0] != p[n - 1]) {
				cout << "No\n";
				return;
			}
		}
	}
	p[n - 1] = '\0';
	pal(&p[1]);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string c; cin >> c; pal(c);
	return 0;
	//
}
