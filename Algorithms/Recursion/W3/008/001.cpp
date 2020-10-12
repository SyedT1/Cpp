#include<bits/stdc++.h>
using namespace std;
string rev(string s) {
	if (s.length() == 1) {
		return string(1, s[0]);
	} else {
		return rev(&s[1]) + s[0];
	}
}

int main() {
	cout << rev("sick") << '\n';
}
