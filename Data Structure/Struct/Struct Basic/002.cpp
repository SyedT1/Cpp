#include<bits/stdc++.h>
using namespace std;
struct P {
	string roll;
	int x;
};
int IsPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return x < 2 ? false : true;
}
void evaluate(int &x) {
	while (!IsPrime(x)) {
		x++;
	}
}
void write(P &l) {
	cin >> l.roll >> l.x;
	evaluate(l.x);
}
void read(P &l) {
	cout << l.roll << ' ' << l.x << '\n';
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	P students[4];
	for (int i = 0; i < 4; i++) {
		write(students[i]);
	}
	for (int i = 0; i < 4; i++) {
		read(students[i]);
	}
}
