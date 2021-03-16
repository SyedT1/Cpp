#include<iostream>
using namespace std;
void lo(int x) {
	if (x == 0) {
		return;
	}
	lo(x - 1);
	cout << string(x, '*') << '\n';

}
int main() {
	lo(5);
}
