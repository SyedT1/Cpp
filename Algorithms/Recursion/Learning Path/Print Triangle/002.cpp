#include<iostream>
using namespace std;
string lo(int x) {
	if (x == 0) {
		return "";
	}
	string l = lo(x - 1);
	l += '*';
	cout << l << '\n';
	return l;
}
int main() {
	lo(5);
}
