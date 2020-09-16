#include<bits/stdc++.h>
using namespace std;
struct mystack {
	char x;
	mystack *next = nullptr;
};
void push(mystack *&k, char val) {
	if (!k) {
		k = new mystack;
		k->x = val;
		return;
	}
	mystack *temp = new mystack;
	temp->x = val;
	temp->next = k;
	k = temp;
}

char pop(mystack *&s) {
	char tmp = s->x;
	mystack *temp = s;
	s = s->next;
	delete temp;
	return tmp;
}
void checkPalindrome(mystack *q, string s) {
	for (char c : s) {
		if (c != pop(q)) {
			cout << "Not Palindrome \n";
			return;
		}
	}
	cout << "Palindrome \n";
}
int main() {
	freopen("output.txt", "w", stdout);
	string line = "madam";
	mystack *first = nullptr;
	for (char c : line) {
		push(first, c);
	}
	checkPalindrome(first, line);
	return 0;
}
