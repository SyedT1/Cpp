#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	stack<char>p;
	string s; cin >> s;
	for (char c : s) {
		p.push(c);
	}
	for (stack<char>k = p; int(k.size()); k.pop()) {
		cout << k.top() << '\n';
	}
	return 0;
}
