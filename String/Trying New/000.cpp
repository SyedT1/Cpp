#include<iostream>
using namespace std;
int main() {
	//Removing chars from a string (pop_front)
	string s = "Hello";
	while (s.length()) {
		cout << s << ' ';
		if (s.length() == 1)s[0] = '\0';
		s = &s[(s.length() > 1)];
	}
}
