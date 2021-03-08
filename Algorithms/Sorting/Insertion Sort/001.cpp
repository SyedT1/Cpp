#include<iostream>
using namespace std;
int main() {
	int a[] = {11, 2, 3, -1, 5, 6, -22, -13}, n = 0;
	n = sizeof(a) / sizeof(int);
	for (int i = 1; i < n; i++) {
		int _to_hold_ = i, tmp = a[i];
		while (tmp < a[_to_hold_ - 1]) {
			a[_to_hold_] = a[_to_hold_ - 1];
			_to_hold_ --;
			if (_to_hold_ == 0) {
				a[_to_hold_] = tmp;
				break;
			}
		}
		if (_to_hold_ != 0) {
			a[_to_hold_] = tmp;
		}
	}
	for (int i : a) {
		cout << i << ' ';
	}
}
