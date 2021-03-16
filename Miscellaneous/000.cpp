#include<iostream>
#include<fstream>
using namespace std;
int main() {
	// { || , && } usage
	// Double or/and operates as boolean 0 or 1 only ( i.e Logical operator)
	bool a = false , b = false;
	cout << (a || b) << '\n'; // outputs false
	a = true;
	cout << (a || b) << '\n'; // outputs true

	int x = 2, y = 1;
	cout << (x || y) << '\n'; //outputs true
	x = 0, y = 0;
	cout << (x || y) << '\n'; //outputs false
	/*
	  x == 0 hence 0 = x
	  y == 0 hence 0 = y
	  Neither of the bits is true         = x || y
	*/
	x = 2, y = 1;
	/*
	  x > 0 hence bool x = 1
	  y > 0 hence bool y = 1
	                   x && y = bool(true)
	  */
	cout << (x && y) << '\n';
	x = 2, y = 0;
	/*
	 x > 0 hence bool x = 1
	 y == 0 hence bool y = 0
	                   x && y = 0
	                   */
	cout << (x && y) << '\n';

	// Bitwise {or,and} = {|,&}
	x = 2, y = 1;
	cout << (x | y) << '\n';
	/*
	00000000 00000000 00000000 00000010 = 2
	00000000 00000000 00000000 00000001 = 1
	_______________________________________
	00000000 00000000 00000000 00000011 = 3 = (x | y)
	or operator bitwise
	*/
	x = 2, y = 8;
	/*
	00000000 000000000 00000000 00000010 = 2
	00000000 000000000 00000000 00001000 = 8
	________________________________________
	00000000 000000000 00000000 00001010 = 10
	or operator bitwise 
	*/
	cout << ( x | y) << '\n';

}
