#include<iostream>
using namespace std;
int main() {
	int arr[] = {111, 12, 33, 44, 55, 1000};
	for (int i = 1; i <= 5; i++) {
		for (int j = i; (arr[j] < arr[j - 1]) && j >= 1; j--) {
			swap(arr[j], arr[j - 1]);
		}
	}
	for (int i : arr) {
		cout << i << ' ';
	}
}
