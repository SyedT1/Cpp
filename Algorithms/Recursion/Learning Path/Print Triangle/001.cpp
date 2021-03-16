#include<iostream>
using namespace std;
void ll__(int x) {
	char static c = '0'; // character c will determine when to put newline
	if (x == 0) {
		if (c == '1') {
			cout << '\n';
		}
		return;
	}
	if (c == '0')ll__(x - 1); //  rows to be called in the stack and differentiated by character '0'
	if (x == 1 && c == '0') {
		cout << '*';
	} else {                   // columns to be printed in every row as per the row number in the stack
		c = '1';
		ll__(x - 1);
		cout << '*';

	}
}
int main() {
	ll__(5);
}
