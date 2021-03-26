#include<iostream>
using namespace std;
int main() {
	//Removing chars from a string (pop_front)
	string s = "Hello";
	while (s.length() > 1) {
		cout << s << ' ';
		s = &s[1];
		if (s.length() == 1) {
			cout << s;
		}
	}
}
