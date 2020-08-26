#include<bits/stdc++.h>
using namespace std;
struct P {
	string ID;
	int n;
};
bool perfect(int x) {
	int div = 0;
	for (int i = 1; i < x; i++) {
		if (x % i == 0) {
			div += i;
		}
	}
	return div == x ? true : false;
}
void check(int &n) {
	while (!perfect(n)) {
		n++;
	}
}
bool primo(int t) {
	int sum = 0;
	for (int i = 2; i < t; i++) {
		if (t % i == 0) {
			return false;
		}
	}
	return t != 1 ? true : false;
}
void convert(char &c) {
	if (c < '2') {
		c = '2';
	} else if (c > '7') {
		c = '7';
	} else {
		while (!primo(int(c - '0'))) {
			c = char(c + 1);
		}
	}
}
void evaluate(string &x) {
	for (int i = 0; i < x.length(); i++) {
		convert(x[i]);
	}
}
void write(P &k) {
	cin >> k.ID >> k.n;
	evaluate(k.ID);
	check(k.n);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	P Nm[4];
	for (int i = 0; i < 4; i++) {
		write(Nm[i]);
	}
	for (int i = 0; i < 4; i++) {
		cout << Nm[i].ID << ' ' << Nm[i].n << '\n';
	}
}
