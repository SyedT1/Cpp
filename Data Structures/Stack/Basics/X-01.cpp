#include<iostream>
#include<cstring>
#include<stack>
#include<stdio.h>
using namespace std;
bool is1or0(string s) {
	stack<char>akb;
	for (int i = 0, halt = 0; i < int(s.length()); i += 2) {
		if (!(s[i] - '0')) {
			if (!halt) {
				akb.push(s[i]);
			} else {
				return false;
			}
		} else {
			if (akb.empty()) {
				return false;
			} else {
				halt++;
				akb.pop();
				if (akb.empty()) {
					halt = 0;
				}
			}
		}
	}
	return akb.empty() ? true : false;
}
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	//IO();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a; cin >> a;
	cout << is1or0(a) << '\n';
}
