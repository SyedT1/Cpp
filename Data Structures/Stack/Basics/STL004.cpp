#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	stack<char>p;
	string s; cin >> s;
	for (char c : s) {
		if (c == '(' || c == '{' || c == '[') {
			p.push(c);
		} else {
			if (int(p.size())) {
				if ((p.top() == '(' && c == ')') || (p.top() == '{' && c == '}') || (p.top() == '[' && c == ']')) {
					p.pop();
				} else {
					cout << "No\n";
					return 0;
				}
			} else {
				cout << "No\n";
				return 0;
			}
		}
	}
	if (p.empty()) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	return 0;
}
