#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/*
	  A string is an array of characters. Hence
	  we can store multiple characters by declaring
	  a variable as character array without defining it's
	  size. And then we can directly print the array without iterating
	  character by character
	*/
	char c[] = {'r', 'e', 'a', 'd', 'e'};
	/*
	  Iterate until c[index]!=null char
	  because a character array/string always end with null character
	*/
	for (int i = 0; c[i] != '\0'; i++) {
		cout << c[i];
	}
	/*
	  Or we can directly print the character array without iteration
	  */
	cout << '\n' << c << '\n';
	/* Finding size of the character array without iterating
	*/
	cout << sizeof(c) / sizeof(c[0]) << '\n';
	return 0;
}
