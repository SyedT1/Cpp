#include<iostream>
using namespace std;
const int n = 1e6;
void printarr(int arr[], int i) {
	if (i == 6) {
		return;
	}
	cout << *(arr + i) << ' ';
	printarr(arr, i + 1);
}
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	printarr(arr, 0);
}
