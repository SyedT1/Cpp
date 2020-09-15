#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	stack<char>bo;
	string s; cin >> s;
	for (char c : s) {
		if (c == '(') {
			bo.push(c);
		} else {
			if (bo.empty()) {
				cout << "Not balanced \n";
				return 0;
			} else {
				bo.pop();
			}
		}
	}
	cout << ((int)bo.size() ? "Not balanced" : "Balanced") << '\n';
	return 0;
}
