#include<iostream>
using namespace std;
int arr[4] = {1, 23, 233, 2333};
bool binary_search(int left, int right, int val) {
	int mid = (left + right) >> 1;
	if (left < right) {
		if (arr[mid] == val) {
			return true;
		}
		else if (arr[mid] < val) {
			return binary_search(mid + 1, right, val);
		} else if (arr[mid] > val) {
			return binary_search(left, mid - 1, val);
		}
	}
	return false;
}
int main() {
	cout << binary_search(0, 3, 23) << '\n';
}
