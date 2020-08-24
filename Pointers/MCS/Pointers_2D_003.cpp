#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("pol.txt", "w", stdout);
	int ro[2][3] = {{1, 4, 9}, {1002, 8, 18}};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << *(ro[i] + j) << ' ';
		}
		cout << '\n';
	}
}
