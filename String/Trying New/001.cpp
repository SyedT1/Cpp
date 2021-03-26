#include<iostream>
using namespace std;
int main() {
	//Removing chars from a string (pop_back)
	string l = "Hello";
	while (l.length()) {
		cout << l << ' ';
		l[l.length() - 1] = '\0';
		l = &l[0];
	}
}
