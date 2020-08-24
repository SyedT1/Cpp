#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("pol.txt", "w", stdout);
	int ro[2][3] = {{1, 4, 9}, {1002, 8, 18}};
	/*
	     (400 404 408)    (412 416 420) 
	     ro by default stores the address of ro[0]
	     ro+1 = &ro[1] or &ro[1][0] at position 412 
	     Here it accesses them as an array of two integers
	     But,
	     when you put an asterisk before ro (*ro) then
	     it accesses the address of the first element
	     of the block of three integers in each row
	     *ro = &ro[0][0]
	     When you put another asterisk before *ro (**ro)
	     then we deference to obtain the value at address of ro[0][0]
	     */
	cout << ro << '\n';
	cout << *ro << '\n';
	cout << **ro << '\n';
}
