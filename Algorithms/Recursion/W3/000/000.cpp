#include<iostream>
using namespace std;
void printupto50(int x) {
	if (x == 51) {
		return;
	}
	cout << x << ' ';
	printupto50(x + 1);
}
int main() {
	//starts here
	printupto50(1);
}
